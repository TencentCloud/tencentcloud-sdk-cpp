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

#include <tencentcloud/mna/v20210119/model/GetActiveDeviceCountResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

GetActiveDeviceCountResponse::GetActiveDeviceCountResponse() :
    m_activeDeviceListHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_devGroupHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_appIdHasBeenSet(false)
{
}

CoreInternalOutcome GetActiveDeviceCountResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ActiveDeviceList") && !rsp["ActiveDeviceList"].IsNull())
    {
        if (!rsp["ActiveDeviceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ActiveDeviceList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ActiveDeviceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ActiveDeviceList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_activeDeviceList.push_back(item);
        }
        m_activeDeviceListHasBeenSet = true;
    }

    if (rsp.HasMember("Period") && !rsp["Period"].IsNull())
    {
        if (!rsp["Period"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Period` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_period = rsp["Period"].GetInt64();
        m_periodHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("DevGroup") && !rsp["DevGroup"].IsNull())
    {
        if (!rsp["DevGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devGroup = string(rsp["DevGroup"].GetString());
        m_devGroupHasBeenSet = true;
    }

    if (rsp.HasMember("LicenseType") && !rsp["LicenseType"].IsNull())
    {
        if (!rsp["LicenseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseType = string(rsp["LicenseType"].GetString());
        m_licenseTypeHasBeenSet = true;
    }

    if (rsp.HasMember("AppId") && !rsp["AppId"].IsNull())
    {
        if (!rsp["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(rsp["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetActiveDeviceCountResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_activeDeviceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveDeviceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_activeDeviceList.begin(); itr != m_activeDeviceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_devGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseType.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
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


vector<ActiveDeviceList> GetActiveDeviceCountResponse::GetActiveDeviceList() const
{
    return m_activeDeviceList;
}

bool GetActiveDeviceCountResponse::ActiveDeviceListHasBeenSet() const
{
    return m_activeDeviceListHasBeenSet;
}

int64_t GetActiveDeviceCountResponse::GetPeriod() const
{
    return m_period;
}

bool GetActiveDeviceCountResponse::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string GetActiveDeviceCountResponse::GetStartTime() const
{
    return m_startTime;
}

bool GetActiveDeviceCountResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string GetActiveDeviceCountResponse::GetEndTime() const
{
    return m_endTime;
}

bool GetActiveDeviceCountResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string GetActiveDeviceCountResponse::GetDevGroup() const
{
    return m_devGroup;
}

bool GetActiveDeviceCountResponse::DevGroupHasBeenSet() const
{
    return m_devGroupHasBeenSet;
}

string GetActiveDeviceCountResponse::GetLicenseType() const
{
    return m_licenseType;
}

bool GetActiveDeviceCountResponse::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

string GetActiveDeviceCountResponse::GetAppId() const
{
    return m_appId;
}

bool GetActiveDeviceCountResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}


