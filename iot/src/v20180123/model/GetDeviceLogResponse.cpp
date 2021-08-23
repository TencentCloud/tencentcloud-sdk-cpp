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

#include <tencentcloud/iot/v20180123/model/GetDeviceLogResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iot::V20180123::Model;
using namespace std;

GetDeviceLogResponse::GetDeviceLogResponse() :
    m_deviceLogHasBeenSet(false),
    m_scrollIdHasBeenSet(false),
    m_scrollTimeoutHasBeenSet(false)
{
}

CoreInternalOutcome GetDeviceLogResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DeviceLog") && !rsp["DeviceLog"].IsNull())
    {
        if (!rsp["DeviceLog"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceLog` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DeviceLog"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceLogEntry item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deviceLog.push_back(item);
        }
        m_deviceLogHasBeenSet = true;
    }

    if (rsp.HasMember("ScrollId") && !rsp["ScrollId"].IsNull())
    {
        if (!rsp["ScrollId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScrollId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scrollId = string(rsp["ScrollId"].GetString());
        m_scrollIdHasBeenSet = true;
    }

    if (rsp.HasMember("ScrollTimeout") && !rsp["ScrollTimeout"].IsNull())
    {
        if (!rsp["ScrollTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScrollTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scrollTimeout = rsp["ScrollTimeout"].GetUint64();
        m_scrollTimeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetDeviceLogResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_deviceLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deviceLog.begin(); itr != m_deviceLog.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_scrollIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScrollId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scrollId.c_str(), allocator).Move(), allocator);
    }

    if (m_scrollTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScrollTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scrollTimeout, allocator);
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


vector<DeviceLogEntry> GetDeviceLogResponse::GetDeviceLog() const
{
    return m_deviceLog;
}

bool GetDeviceLogResponse::DeviceLogHasBeenSet() const
{
    return m_deviceLogHasBeenSet;
}

string GetDeviceLogResponse::GetScrollId() const
{
    return m_scrollId;
}

bool GetDeviceLogResponse::ScrollIdHasBeenSet() const
{
    return m_scrollIdHasBeenSet;
}

uint64_t GetDeviceLogResponse::GetScrollTimeout() const
{
    return m_scrollTimeout;
}

bool GetDeviceLogResponse::ScrollTimeoutHasBeenSet() const
{
    return m_scrollTimeoutHasBeenSet;
}


