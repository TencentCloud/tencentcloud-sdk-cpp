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

#include <tencentcloud/iotvideo/v20191126/model/CreateStorageServiceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

CreateStorageServiceResponse::CreateStorageServiceResponse() :
    m_isRenewHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_storageRegionHasBeenSet(false),
    m_tidHasBeenSet(false),
    m_chnNumHasBeenSet(false),
    m_accessIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome CreateStorageServiceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("IsRenew") && !rsp["IsRenew"].IsNull())
    {
        if (!rsp["IsRenew"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsRenew` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRenew = rsp["IsRenew"].GetBool();
        m_isRenewHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceId") && !rsp["ServiceId"].IsNull())
    {
        if (!rsp["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(rsp["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (rsp.HasMember("StorageRegion") && !rsp["StorageRegion"].IsNull())
    {
        if (!rsp["StorageRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageRegion = string(rsp["StorageRegion"].GetString());
        m_storageRegionHasBeenSet = true;
    }

    if (rsp.HasMember("Tid") && !rsp["Tid"].IsNull())
    {
        if (!rsp["Tid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Tid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tid = string(rsp["Tid"].GetString());
        m_tidHasBeenSet = true;
    }

    if (rsp.HasMember("ChnNum") && !rsp["ChnNum"].IsNull())
    {
        if (!rsp["ChnNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChnNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chnNum = rsp["ChnNum"].GetInt64();
        m_chnNumHasBeenSet = true;
    }

    if (rsp.HasMember("AccessId") && !rsp["AccessId"].IsNull())
    {
        if (!rsp["AccessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessId = string(rsp["AccessId"].GetString());
        m_accessIdHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = rsp["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = rsp["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Data` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StorageOrder item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_data.push_back(item);
        }
        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateStorageServiceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_isRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRenew, allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_storageRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_tidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tid.c_str(), allocator).Move(), allocator);
    }

    if (m_chnNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChnNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chnNum, allocator);
    }

    if (m_accessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


bool CreateStorageServiceResponse::GetIsRenew() const
{
    return m_isRenew;
}

bool CreateStorageServiceResponse::IsRenewHasBeenSet() const
{
    return m_isRenewHasBeenSet;
}

string CreateStorageServiceResponse::GetServiceId() const
{
    return m_serviceId;
}

bool CreateStorageServiceResponse::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string CreateStorageServiceResponse::GetStorageRegion() const
{
    return m_storageRegion;
}

bool CreateStorageServiceResponse::StorageRegionHasBeenSet() const
{
    return m_storageRegionHasBeenSet;
}

string CreateStorageServiceResponse::GetTid() const
{
    return m_tid;
}

bool CreateStorageServiceResponse::TidHasBeenSet() const
{
    return m_tidHasBeenSet;
}

int64_t CreateStorageServiceResponse::GetChnNum() const
{
    return m_chnNum;
}

bool CreateStorageServiceResponse::ChnNumHasBeenSet() const
{
    return m_chnNumHasBeenSet;
}

string CreateStorageServiceResponse::GetAccessId() const
{
    return m_accessId;
}

bool CreateStorageServiceResponse::AccessIdHasBeenSet() const
{
    return m_accessIdHasBeenSet;
}

int64_t CreateStorageServiceResponse::GetStartTime() const
{
    return m_startTime;
}

bool CreateStorageServiceResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t CreateStorageServiceResponse::GetEndTime() const
{
    return m_endTime;
}

bool CreateStorageServiceResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t CreateStorageServiceResponse::GetStatus() const
{
    return m_status;
}

bool CreateStorageServiceResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<StorageOrder> CreateStorageServiceResponse::GetData() const
{
    return m_data;
}

bool CreateStorageServiceResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}


