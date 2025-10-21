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

#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyRiskDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeAccessKeyRiskDetailResponse::DescribeAccessKeyRiskDetailResponse() :
    m_riskInfoHasBeenSet(false),
    m_camCountHasBeenSet(false),
    m_alarmCountHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_accessKeyAlarmCountHasBeenSet(false),
    m_actionFlagHasBeenSet(false),
    m_loginFlagHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAccessKeyRiskDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RiskInfo") && !rsp["RiskInfo"].IsNull())
    {
        if (!rsp["RiskInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RiskInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_riskInfo.Deserialize(rsp["RiskInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_riskInfoHasBeenSet = true;
    }

    if (rsp.HasMember("CamCount") && !rsp["CamCount"].IsNull())
    {
        if (!rsp["CamCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CamCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_camCount = rsp["CamCount"].GetInt64();
        m_camCountHasBeenSet = true;
    }

    if (rsp.HasMember("AlarmCount") && !rsp["AlarmCount"].IsNull())
    {
        if (!rsp["AlarmCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmCount = rsp["AlarmCount"].GetInt64();
        m_alarmCountHasBeenSet = true;
    }

    if (rsp.HasMember("AccessType") && !rsp["AccessType"].IsNull())
    {
        if (!rsp["AccessType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = rsp["AccessType"].GetInt64();
        m_accessTypeHasBeenSet = true;
    }

    if (rsp.HasMember("AccessKeyAlarmCount") && !rsp["AccessKeyAlarmCount"].IsNull())
    {
        if (!rsp["AccessKeyAlarmCount"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarmCount` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AccessKeyAlarmCount"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccessKeyAlarmCount item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accessKeyAlarmCount.push_back(item);
        }
        m_accessKeyAlarmCountHasBeenSet = true;
    }

    if (rsp.HasMember("ActionFlag") && !rsp["ActionFlag"].IsNull())
    {
        if (!rsp["ActionFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActionFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_actionFlag = rsp["ActionFlag"].GetInt64();
        m_actionFlagHasBeenSet = true;
    }

    if (rsp.HasMember("LoginFlag") && !rsp["LoginFlag"].IsNull())
    {
        if (!rsp["LoginFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loginFlag = rsp["LoginFlag"].GetInt64();
        m_loginFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAccessKeyRiskDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_riskInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_riskInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_camCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CamCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_camCount, allocator);
    }

    if (m_alarmCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmCount, allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessType, allocator);
    }

    if (m_accessKeyAlarmCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeyAlarmCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accessKeyAlarmCount.begin(); itr != m_accessKeyAlarmCount.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_actionFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionFlag, allocator);
    }

    if (m_loginFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loginFlag, allocator);
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


AccessKeyRisk DescribeAccessKeyRiskDetailResponse::GetRiskInfo() const
{
    return m_riskInfo;
}

bool DescribeAccessKeyRiskDetailResponse::RiskInfoHasBeenSet() const
{
    return m_riskInfoHasBeenSet;
}

int64_t DescribeAccessKeyRiskDetailResponse::GetCamCount() const
{
    return m_camCount;
}

bool DescribeAccessKeyRiskDetailResponse::CamCountHasBeenSet() const
{
    return m_camCountHasBeenSet;
}

int64_t DescribeAccessKeyRiskDetailResponse::GetAlarmCount() const
{
    return m_alarmCount;
}

bool DescribeAccessKeyRiskDetailResponse::AlarmCountHasBeenSet() const
{
    return m_alarmCountHasBeenSet;
}

int64_t DescribeAccessKeyRiskDetailResponse::GetAccessType() const
{
    return m_accessType;
}

bool DescribeAccessKeyRiskDetailResponse::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

vector<AccessKeyAlarmCount> DescribeAccessKeyRiskDetailResponse::GetAccessKeyAlarmCount() const
{
    return m_accessKeyAlarmCount;
}

bool DescribeAccessKeyRiskDetailResponse::AccessKeyAlarmCountHasBeenSet() const
{
    return m_accessKeyAlarmCountHasBeenSet;
}

int64_t DescribeAccessKeyRiskDetailResponse::GetActionFlag() const
{
    return m_actionFlag;
}

bool DescribeAccessKeyRiskDetailResponse::ActionFlagHasBeenSet() const
{
    return m_actionFlagHasBeenSet;
}

int64_t DescribeAccessKeyRiskDetailResponse::GetLoginFlag() const
{
    return m_loginFlag;
}

bool DescribeAccessKeyRiskDetailResponse::LoginFlagHasBeenSet() const
{
    return m_loginFlagHasBeenSet;
}


