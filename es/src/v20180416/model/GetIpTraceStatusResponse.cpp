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

#include <tencentcloud/es/v20180416/model/GetIpTraceStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

GetIpTraceStatusResponse::GetIpTraceStatusResponse() :
    m_openIpTraceHasBeenSet(false),
    m_durationTimeHasBeenSet(false),
    m_ipTraceConfigHasBeenSet(false),
    m_lastStartTimeHasBeenSet(false),
    m_lastEndTimeHasBeenSet(false),
    m_filterKibanaIpHasBeenSet(false)
{
}

CoreInternalOutcome GetIpTraceStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("OpenIpTrace") && !rsp["OpenIpTrace"].IsNull())
    {
        if (!rsp["OpenIpTrace"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OpenIpTrace` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_openIpTrace = rsp["OpenIpTrace"].GetBool();
        m_openIpTraceHasBeenSet = true;
    }

    if (rsp.HasMember("DurationTime") && !rsp["DurationTime"].IsNull())
    {
        if (!rsp["DurationTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DurationTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_durationTime = rsp["DurationTime"].GetInt64();
        m_durationTimeHasBeenSet = true;
    }

    if (rsp.HasMember("IpTraceConfig") && !rsp["IpTraceConfig"].IsNull())
    {
        if (!rsp["IpTraceConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IpTraceConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ipTraceConfig.Deserialize(rsp["IpTraceConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ipTraceConfigHasBeenSet = true;
    }

    if (rsp.HasMember("LastStartTime") && !rsp["LastStartTime"].IsNull())
    {
        if (!rsp["LastStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastStartTime = string(rsp["LastStartTime"].GetString());
        m_lastStartTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LastEndTime") && !rsp["LastEndTime"].IsNull())
    {
        if (!rsp["LastEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastEndTime = string(rsp["LastEndTime"].GetString());
        m_lastEndTimeHasBeenSet = true;
    }

    if (rsp.HasMember("FilterKibanaIp") && !rsp["FilterKibanaIp"].IsNull())
    {
        if (!rsp["FilterKibanaIp"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FilterKibanaIp` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_filterKibanaIp = rsp["FilterKibanaIp"].GetBool();
        m_filterKibanaIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetIpTraceStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_openIpTraceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenIpTrace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openIpTrace, allocator);
    }

    if (m_durationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durationTime, allocator);
    }

    if (m_ipTraceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpTraceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipTraceConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lastStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_filterKibanaIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterKibanaIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filterKibanaIp, allocator);
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


bool GetIpTraceStatusResponse::GetOpenIpTrace() const
{
    return m_openIpTrace;
}

bool GetIpTraceStatusResponse::OpenIpTraceHasBeenSet() const
{
    return m_openIpTraceHasBeenSet;
}

int64_t GetIpTraceStatusResponse::GetDurationTime() const
{
    return m_durationTime;
}

bool GetIpTraceStatusResponse::DurationTimeHasBeenSet() const
{
    return m_durationTimeHasBeenSet;
}

IpTraceConfig GetIpTraceStatusResponse::GetIpTraceConfig() const
{
    return m_ipTraceConfig;
}

bool GetIpTraceStatusResponse::IpTraceConfigHasBeenSet() const
{
    return m_ipTraceConfigHasBeenSet;
}

string GetIpTraceStatusResponse::GetLastStartTime() const
{
    return m_lastStartTime;
}

bool GetIpTraceStatusResponse::LastStartTimeHasBeenSet() const
{
    return m_lastStartTimeHasBeenSet;
}

string GetIpTraceStatusResponse::GetLastEndTime() const
{
    return m_lastEndTime;
}

bool GetIpTraceStatusResponse::LastEndTimeHasBeenSet() const
{
    return m_lastEndTimeHasBeenSet;
}

bool GetIpTraceStatusResponse::GetFilterKibanaIp() const
{
    return m_filterKibanaIp;
}

bool GetIpTraceStatusResponse::FilterKibanaIpHasBeenSet() const
{
    return m_filterKibanaIpHasBeenSet;
}


