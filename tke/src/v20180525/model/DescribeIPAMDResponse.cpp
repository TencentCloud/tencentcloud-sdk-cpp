/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/tke/v20180525/model/DescribeIPAMDResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DescribeIPAMDResponse::DescribeIPAMDResponse() :
    m_enableIPAMDHasBeenSet(false),
    m_enableCustomizedPodCidrHasBeenSet(false),
    m_disableVpcCniModeHasBeenSet(false),
    m_phaseHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_claimExpiredDurationHasBeenSet(false),
    m_enableTrunkingENIHasBeenSet(false)
{
}

CoreInternalOutcome DescribeIPAMDResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("EnableIPAMD") && !rsp["EnableIPAMD"].IsNull())
    {
        if (!rsp["EnableIPAMD"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnableIPAMD` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableIPAMD = rsp["EnableIPAMD"].GetBool();
        m_enableIPAMDHasBeenSet = true;
    }

    if (rsp.HasMember("EnableCustomizedPodCidr") && !rsp["EnableCustomizedPodCidr"].IsNull())
    {
        if (!rsp["EnableCustomizedPodCidr"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnableCustomizedPodCidr` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableCustomizedPodCidr = rsp["EnableCustomizedPodCidr"].GetBool();
        m_enableCustomizedPodCidrHasBeenSet = true;
    }

    if (rsp.HasMember("DisableVpcCniMode") && !rsp["DisableVpcCniMode"].IsNull())
    {
        if (!rsp["DisableVpcCniMode"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DisableVpcCniMode` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableVpcCniMode = rsp["DisableVpcCniMode"].GetBool();
        m_disableVpcCniModeHasBeenSet = true;
    }

    if (rsp.HasMember("Phase") && !rsp["Phase"].IsNull())
    {
        if (!rsp["Phase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Phase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phase = string(rsp["Phase"].GetString());
        m_phaseHasBeenSet = true;
    }

    if (rsp.HasMember("Reason") && !rsp["Reason"].IsNull())
    {
        if (!rsp["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(rsp["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (rsp.HasMember("SubnetIds") && !rsp["SubnetIds"].IsNull())
    {
        if (!rsp["SubnetIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubnetIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SubnetIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subnetIds.push_back((*itr).GetString());
        }
        m_subnetIdsHasBeenSet = true;
    }

    if (rsp.HasMember("ClaimExpiredDuration") && !rsp["ClaimExpiredDuration"].IsNull())
    {
        if (!rsp["ClaimExpiredDuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClaimExpiredDuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_claimExpiredDuration = string(rsp["ClaimExpiredDuration"].GetString());
        m_claimExpiredDurationHasBeenSet = true;
    }

    if (rsp.HasMember("EnableTrunkingENI") && !rsp["EnableTrunkingENI"].IsNull())
    {
        if (!rsp["EnableTrunkingENI"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnableTrunkingENI` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableTrunkingENI = rsp["EnableTrunkingENI"].GetBool();
        m_enableTrunkingENIHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeIPAMDResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_enableIPAMDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableIPAMD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableIPAMD, allocator);
    }

    if (m_enableCustomizedPodCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCustomizedPodCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableCustomizedPodCidr, allocator);
    }

    if (m_disableVpcCniModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableVpcCniMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableVpcCniMode, allocator);
    }

    if (m_phaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phase.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_claimExpiredDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClaimExpiredDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_claimExpiredDuration.c_str(), allocator).Move(), allocator);
    }

    if (m_enableTrunkingENIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableTrunkingENI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableTrunkingENI, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


bool DescribeIPAMDResponse::GetEnableIPAMD() const
{
    return m_enableIPAMD;
}

bool DescribeIPAMDResponse::EnableIPAMDHasBeenSet() const
{
    return m_enableIPAMDHasBeenSet;
}

bool DescribeIPAMDResponse::GetEnableCustomizedPodCidr() const
{
    return m_enableCustomizedPodCidr;
}

bool DescribeIPAMDResponse::EnableCustomizedPodCidrHasBeenSet() const
{
    return m_enableCustomizedPodCidrHasBeenSet;
}

bool DescribeIPAMDResponse::GetDisableVpcCniMode() const
{
    return m_disableVpcCniMode;
}

bool DescribeIPAMDResponse::DisableVpcCniModeHasBeenSet() const
{
    return m_disableVpcCniModeHasBeenSet;
}

string DescribeIPAMDResponse::GetPhase() const
{
    return m_phase;
}

bool DescribeIPAMDResponse::PhaseHasBeenSet() const
{
    return m_phaseHasBeenSet;
}

string DescribeIPAMDResponse::GetReason() const
{
    return m_reason;
}

bool DescribeIPAMDResponse::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

vector<string> DescribeIPAMDResponse::GetSubnetIds() const
{
    return m_subnetIds;
}

bool DescribeIPAMDResponse::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

string DescribeIPAMDResponse::GetClaimExpiredDuration() const
{
    return m_claimExpiredDuration;
}

bool DescribeIPAMDResponse::ClaimExpiredDurationHasBeenSet() const
{
    return m_claimExpiredDurationHasBeenSet;
}

bool DescribeIPAMDResponse::GetEnableTrunkingENI() const
{
    return m_enableTrunkingENI;
}

bool DescribeIPAMDResponse::EnableTrunkingENIHasBeenSet() const
{
    return m_enableTrunkingENIHasBeenSet;
}


