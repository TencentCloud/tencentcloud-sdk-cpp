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

#include <tencentcloud/waf/v20180125/model/DescribeWafAutoDenyRulesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeWafAutoDenyRulesResponse::DescribeWafAutoDenyRulesResponse() :
    m_attackThresholdHasBeenSet(false),
    m_timeThresholdHasBeenSet(false),
    m_denyTimeThresholdHasBeenSet(false),
    m_defenseStatusHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_hWStateHasBeenSet(false)
{
}

CoreInternalOutcome DescribeWafAutoDenyRulesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AttackThreshold") && !rsp["AttackThreshold"].IsNull())
    {
        if (!rsp["AttackThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AttackThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackThreshold = rsp["AttackThreshold"].GetInt64();
        m_attackThresholdHasBeenSet = true;
    }

    if (rsp.HasMember("TimeThreshold") && !rsp["TimeThreshold"].IsNull())
    {
        if (!rsp["TimeThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeThreshold = rsp["TimeThreshold"].GetInt64();
        m_timeThresholdHasBeenSet = true;
    }

    if (rsp.HasMember("DenyTimeThreshold") && !rsp["DenyTimeThreshold"].IsNull())
    {
        if (!rsp["DenyTimeThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DenyTimeThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_denyTimeThreshold = rsp["DenyTimeThreshold"].GetInt64();
        m_denyTimeThresholdHasBeenSet = true;
    }

    if (rsp.HasMember("DefenseStatus") && !rsp["DefenseStatus"].IsNull())
    {
        if (!rsp["DefenseStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DefenseStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defenseStatus = rsp["DefenseStatus"].GetInt64();
        m_defenseStatusHasBeenSet = true;
    }

    if (rsp.HasMember("Source") && !rsp["Source"].IsNull())
    {
        if (!rsp["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(rsp["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (rsp.HasMember("HWState") && !rsp["HWState"].IsNull())
    {
        if (!rsp["HWState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HWState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hWState = rsp["HWState"].GetInt64();
        m_hWStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeWafAutoDenyRulesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_attackThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackThreshold, allocator);
    }

    if (m_timeThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeThreshold, allocator);
    }

    if (m_denyTimeThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DenyTimeThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_denyTimeThreshold, allocator);
    }

    if (m_defenseStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefenseStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defenseStatus, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_hWStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HWState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hWState, allocator);
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


int64_t DescribeWafAutoDenyRulesResponse::GetAttackThreshold() const
{
    return m_attackThreshold;
}

bool DescribeWafAutoDenyRulesResponse::AttackThresholdHasBeenSet() const
{
    return m_attackThresholdHasBeenSet;
}

int64_t DescribeWafAutoDenyRulesResponse::GetTimeThreshold() const
{
    return m_timeThreshold;
}

bool DescribeWafAutoDenyRulesResponse::TimeThresholdHasBeenSet() const
{
    return m_timeThresholdHasBeenSet;
}

int64_t DescribeWafAutoDenyRulesResponse::GetDenyTimeThreshold() const
{
    return m_denyTimeThreshold;
}

bool DescribeWafAutoDenyRulesResponse::DenyTimeThresholdHasBeenSet() const
{
    return m_denyTimeThresholdHasBeenSet;
}

int64_t DescribeWafAutoDenyRulesResponse::GetDefenseStatus() const
{
    return m_defenseStatus;
}

bool DescribeWafAutoDenyRulesResponse::DefenseStatusHasBeenSet() const
{
    return m_defenseStatusHasBeenSet;
}

string DescribeWafAutoDenyRulesResponse::GetSource() const
{
    return m_source;
}

bool DescribeWafAutoDenyRulesResponse::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

int64_t DescribeWafAutoDenyRulesResponse::GetHWState() const
{
    return m_hWState;
}

bool DescribeWafAutoDenyRulesResponse::HWStateHasBeenSet() const
{
    return m_hWStateHasBeenSet;
}


