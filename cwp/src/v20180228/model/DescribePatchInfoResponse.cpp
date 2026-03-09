/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cwp/v20180228/model/DescribePatchInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribePatchInfoResponse::DescribePatchInfoResponse() :
    m_kbNoHasBeenSet(false),
    m_patchNameHasBeenSet(false),
    m_publishTimeHasBeenSet(false),
    m_referUrlHasBeenSet(false),
    m_vulCountHasBeenSet(false),
    m_relateVulInfoListHasBeenSet(false),
    m_kbIdHasBeenSet(false),
    m_relateVulCveIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribePatchInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("KbNo") && !rsp["KbNo"].IsNull())
    {
        if (!rsp["KbNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KbNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kbNo = string(rsp["KbNo"].GetString());
        m_kbNoHasBeenSet = true;
    }

    if (rsp.HasMember("PatchName") && !rsp["PatchName"].IsNull())
    {
        if (!rsp["PatchName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PatchName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_patchName = string(rsp["PatchName"].GetString());
        m_patchNameHasBeenSet = true;
    }

    if (rsp.HasMember("PublishTime") && !rsp["PublishTime"].IsNull())
    {
        if (!rsp["PublishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishTime = string(rsp["PublishTime"].GetString());
        m_publishTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ReferUrl") && !rsp["ReferUrl"].IsNull())
    {
        if (!rsp["ReferUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReferUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referUrl = string(rsp["ReferUrl"].GetString());
        m_referUrlHasBeenSet = true;
    }

    if (rsp.HasMember("VulCount") && !rsp["VulCount"].IsNull())
    {
        if (!rsp["VulCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulCount = rsp["VulCount"].GetUint64();
        m_vulCountHasBeenSet = true;
    }

    if (rsp.HasMember("RelateVulInfoList") && !rsp["RelateVulInfoList"].IsNull())
    {
        if (!rsp["RelateVulInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RelateVulInfoList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RelateVulInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RelateVulInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_relateVulInfoList.push_back(item);
        }
        m_relateVulInfoListHasBeenSet = true;
    }

    if (rsp.HasMember("KbId") && !rsp["KbId"].IsNull())
    {
        if (!rsp["KbId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KbId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_kbId = rsp["KbId"].GetUint64();
        m_kbIdHasBeenSet = true;
    }

    if (rsp.HasMember("RelateVulCveId") && !rsp["RelateVulCveId"].IsNull())
    {
        if (!rsp["RelateVulCveId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelateVulCveId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relateVulCveId = string(rsp["RelateVulCveId"].GetString());
        m_relateVulCveIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePatchInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_kbNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kbNo.c_str(), allocator).Move(), allocator);
    }

    if (m_patchNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PatchName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_patchName.c_str(), allocator).Move(), allocator);
    }

    if (m_publishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_referUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_vulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulCount, allocator);
    }

    if (m_relateVulInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateVulInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_relateVulInfoList.begin(); itr != m_relateVulInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_kbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kbId, allocator);
    }

    if (m_relateVulCveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateVulCveId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relateVulCveId.c_str(), allocator).Move(), allocator);
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


string DescribePatchInfoResponse::GetKbNo() const
{
    return m_kbNo;
}

bool DescribePatchInfoResponse::KbNoHasBeenSet() const
{
    return m_kbNoHasBeenSet;
}

string DescribePatchInfoResponse::GetPatchName() const
{
    return m_patchName;
}

bool DescribePatchInfoResponse::PatchNameHasBeenSet() const
{
    return m_patchNameHasBeenSet;
}

string DescribePatchInfoResponse::GetPublishTime() const
{
    return m_publishTime;
}

bool DescribePatchInfoResponse::PublishTimeHasBeenSet() const
{
    return m_publishTimeHasBeenSet;
}

string DescribePatchInfoResponse::GetReferUrl() const
{
    return m_referUrl;
}

bool DescribePatchInfoResponse::ReferUrlHasBeenSet() const
{
    return m_referUrlHasBeenSet;
}

uint64_t DescribePatchInfoResponse::GetVulCount() const
{
    return m_vulCount;
}

bool DescribePatchInfoResponse::VulCountHasBeenSet() const
{
    return m_vulCountHasBeenSet;
}

vector<RelateVulInfo> DescribePatchInfoResponse::GetRelateVulInfoList() const
{
    return m_relateVulInfoList;
}

bool DescribePatchInfoResponse::RelateVulInfoListHasBeenSet() const
{
    return m_relateVulInfoListHasBeenSet;
}

uint64_t DescribePatchInfoResponse::GetKbId() const
{
    return m_kbId;
}

bool DescribePatchInfoResponse::KbIdHasBeenSet() const
{
    return m_kbIdHasBeenSet;
}

string DescribePatchInfoResponse::GetRelateVulCveId() const
{
    return m_relateVulCveId;
}

bool DescribePatchInfoResponse::RelateVulCveIdHasBeenSet() const
{
    return m_relateVulCveIdHasBeenSet;
}


