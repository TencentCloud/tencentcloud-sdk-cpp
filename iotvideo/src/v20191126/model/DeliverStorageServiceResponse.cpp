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

#include <tencentcloud/iotvideo/v20191126/model/DeliverStorageServiceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace rapidjson;
using namespace std;

DeliverStorageServiceResponse::DeliverStorageServiceResponse() :
    m_srcServiceIdHasBeenSet(false),
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

CoreInternalOutcome DeliverStorageServiceResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("SrcServiceId") && !rsp["SrcServiceId"].IsNull())
    {
        if (!rsp["SrcServiceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SrcServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcServiceId = string(rsp["SrcServiceId"].GetString());
        m_srcServiceIdHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceId") && !rsp["ServiceId"].IsNull())
    {
        if (!rsp["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(rsp["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (rsp.HasMember("StorageRegion") && !rsp["StorageRegion"].IsNull())
    {
        if (!rsp["StorageRegion"].IsString())
        {
            return CoreInternalOutcome(Error("response `StorageRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageRegion = string(rsp["StorageRegion"].GetString());
        m_storageRegionHasBeenSet = true;
    }

    if (rsp.HasMember("Tid") && !rsp["Tid"].IsNull())
    {
        if (!rsp["Tid"].IsString())
        {
            return CoreInternalOutcome(Error("response `Tid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tid = string(rsp["Tid"].GetString());
        m_tidHasBeenSet = true;
    }

    if (rsp.HasMember("ChnNum") && !rsp["ChnNum"].IsNull())
    {
        if (!rsp["ChnNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ChnNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chnNum = rsp["ChnNum"].GetInt64();
        m_chnNumHasBeenSet = true;
    }

    if (rsp.HasMember("AccessId") && !rsp["AccessId"].IsNull())
    {
        if (!rsp["AccessId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AccessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessId = string(rsp["AccessId"].GetString());
        m_accessIdHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = rsp["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = rsp["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsArray())
            return CoreInternalOutcome(Error("response `Data` is not array type"));

        const Value &tmpValue = rsp["Data"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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


string DeliverStorageServiceResponse::GetSrcServiceId() const
{
    return m_srcServiceId;
}

bool DeliverStorageServiceResponse::SrcServiceIdHasBeenSet() const
{
    return m_srcServiceIdHasBeenSet;
}

string DeliverStorageServiceResponse::GetServiceId() const
{
    return m_serviceId;
}

bool DeliverStorageServiceResponse::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string DeliverStorageServiceResponse::GetStorageRegion() const
{
    return m_storageRegion;
}

bool DeliverStorageServiceResponse::StorageRegionHasBeenSet() const
{
    return m_storageRegionHasBeenSet;
}

string DeliverStorageServiceResponse::GetTid() const
{
    return m_tid;
}

bool DeliverStorageServiceResponse::TidHasBeenSet() const
{
    return m_tidHasBeenSet;
}

int64_t DeliverStorageServiceResponse::GetChnNum() const
{
    return m_chnNum;
}

bool DeliverStorageServiceResponse::ChnNumHasBeenSet() const
{
    return m_chnNumHasBeenSet;
}

string DeliverStorageServiceResponse::GetAccessId() const
{
    return m_accessId;
}

bool DeliverStorageServiceResponse::AccessIdHasBeenSet() const
{
    return m_accessIdHasBeenSet;
}

int64_t DeliverStorageServiceResponse::GetStartTime() const
{
    return m_startTime;
}

bool DeliverStorageServiceResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DeliverStorageServiceResponse::GetEndTime() const
{
    return m_endTime;
}

bool DeliverStorageServiceResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DeliverStorageServiceResponse::GetStatus() const
{
    return m_status;
}

bool DeliverStorageServiceResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<StorageOrder> DeliverStorageServiceResponse::GetData() const
{
    return m_data;
}

bool DeliverStorageServiceResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}


