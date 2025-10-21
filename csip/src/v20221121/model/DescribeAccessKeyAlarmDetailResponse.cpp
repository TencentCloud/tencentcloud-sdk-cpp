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

#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyAlarmDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeAccessKeyAlarmDetailResponse::DescribeAccessKeyAlarmDetailResponse() :
    m_alarmInfoHasBeenSet(false),
    m_camCountHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_alarmDescHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAccessKeyAlarmDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AlarmInfo") && !rsp["AlarmInfo"].IsNull())
    {
        if (!rsp["AlarmInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_alarmInfo.Deserialize(rsp["AlarmInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_alarmInfoHasBeenSet = true;
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

    if (rsp.HasMember("RiskCount") && !rsp["RiskCount"].IsNull())
    {
        if (!rsp["RiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCount = rsp["RiskCount"].GetInt64();
        m_riskCountHasBeenSet = true;
    }

    if (rsp.HasMember("AlarmDesc") && !rsp["AlarmDesc"].IsNull())
    {
        if (!rsp["AlarmDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmDesc = string(rsp["AlarmDesc"].GetString());
        m_alarmDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAccessKeyAlarmDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_alarmInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_alarmInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_camCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CamCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_camCount, allocator);
    }

    if (m_riskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCount, allocator);
    }

    if (m_alarmDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmDesc.c_str(), allocator).Move(), allocator);
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


AccessKeyAlarm DescribeAccessKeyAlarmDetailResponse::GetAlarmInfo() const
{
    return m_alarmInfo;
}

bool DescribeAccessKeyAlarmDetailResponse::AlarmInfoHasBeenSet() const
{
    return m_alarmInfoHasBeenSet;
}

int64_t DescribeAccessKeyAlarmDetailResponse::GetCamCount() const
{
    return m_camCount;
}

bool DescribeAccessKeyAlarmDetailResponse::CamCountHasBeenSet() const
{
    return m_camCountHasBeenSet;
}

int64_t DescribeAccessKeyAlarmDetailResponse::GetRiskCount() const
{
    return m_riskCount;
}

bool DescribeAccessKeyAlarmDetailResponse::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

string DescribeAccessKeyAlarmDetailResponse::GetAlarmDesc() const
{
    return m_alarmDesc;
}

bool DescribeAccessKeyAlarmDetailResponse::AlarmDescHasBeenSet() const
{
    return m_alarmDescHasBeenSet;
}


