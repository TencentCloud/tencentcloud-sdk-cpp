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

#include <tencentcloud/iotcloud/v20180614/model/DescribeTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace std;

DescribeTaskResponse::DescribeTaskResponse() :
    m_typeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_doneTimeHasBeenSet(false),
    m_scheduleTimeHasBeenSet(false),
    m_retCodeHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_allDeviceCntHasBeenSet(false),
    m_doneDeviceCntHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(rsp["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (rsp.HasMember("ProductId") && !rsp["ProductId"].IsNull())
    {
        if (!rsp["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(rsp["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = rsp["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = rsp["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("DoneTime") && !rsp["DoneTime"].IsNull())
    {
        if (!rsp["DoneTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DoneTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_doneTime = rsp["DoneTime"].GetUint64();
        m_doneTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ScheduleTime") && !rsp["ScheduleTime"].IsNull())
    {
        if (!rsp["ScheduleTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduleTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleTime = rsp["ScheduleTime"].GetUint64();
        m_scheduleTimeHasBeenSet = true;
    }

    if (rsp.HasMember("RetCode") && !rsp["RetCode"].IsNull())
    {
        if (!rsp["RetCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RetCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retCode = rsp["RetCode"].GetUint64();
        m_retCodeHasBeenSet = true;
    }

    if (rsp.HasMember("ErrMsg") && !rsp["ErrMsg"].IsNull())
    {
        if (!rsp["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(rsp["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }

    if (rsp.HasMember("Percent") && !rsp["Percent"].IsNull())
    {
        if (!rsp["Percent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Percent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_percent = rsp["Percent"].GetUint64();
        m_percentHasBeenSet = true;
    }

    if (rsp.HasMember("AllDeviceCnt") && !rsp["AllDeviceCnt"].IsNull())
    {
        if (!rsp["AllDeviceCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AllDeviceCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_allDeviceCnt = rsp["AllDeviceCnt"].GetUint64();
        m_allDeviceCntHasBeenSet = true;
    }

    if (rsp.HasMember("DoneDeviceCnt") && !rsp["DoneDeviceCnt"].IsNull())
    {
        if (!rsp["DoneDeviceCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DoneDeviceCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_doneDeviceCnt = rsp["DoneDeviceCnt"].GetUint64();
        m_doneDeviceCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_doneTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DoneTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_doneTime, allocator);
    }

    if (m_scheduleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scheduleTime, allocator);
    }

    if (m_retCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retCode, allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
    }

    if (m_allDeviceCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllDeviceCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allDeviceCnt, allocator);
    }

    if (m_doneDeviceCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DoneDeviceCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_doneDeviceCnt, allocator);
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


string DescribeTaskResponse::GetType() const
{
    return m_type;
}

bool DescribeTaskResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeTaskResponse::GetId() const
{
    return m_id;
}

bool DescribeTaskResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeTaskResponse::GetProductId() const
{
    return m_productId;
}

bool DescribeTaskResponse::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

uint64_t DescribeTaskResponse::GetStatus() const
{
    return m_status;
}

bool DescribeTaskResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DescribeTaskResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeTaskResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t DescribeTaskResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeTaskResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t DescribeTaskResponse::GetDoneTime() const
{
    return m_doneTime;
}

bool DescribeTaskResponse::DoneTimeHasBeenSet() const
{
    return m_doneTimeHasBeenSet;
}

uint64_t DescribeTaskResponse::GetScheduleTime() const
{
    return m_scheduleTime;
}

bool DescribeTaskResponse::ScheduleTimeHasBeenSet() const
{
    return m_scheduleTimeHasBeenSet;
}

uint64_t DescribeTaskResponse::GetRetCode() const
{
    return m_retCode;
}

bool DescribeTaskResponse::RetCodeHasBeenSet() const
{
    return m_retCodeHasBeenSet;
}

string DescribeTaskResponse::GetErrMsg() const
{
    return m_errMsg;
}

bool DescribeTaskResponse::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

uint64_t DescribeTaskResponse::GetPercent() const
{
    return m_percent;
}

bool DescribeTaskResponse::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

uint64_t DescribeTaskResponse::GetAllDeviceCnt() const
{
    return m_allDeviceCnt;
}

bool DescribeTaskResponse::AllDeviceCntHasBeenSet() const
{
    return m_allDeviceCntHasBeenSet;
}

uint64_t DescribeTaskResponse::GetDoneDeviceCnt() const
{
    return m_doneDeviceCnt;
}

bool DescribeTaskResponse::DoneDeviceCntHasBeenSet() const
{
    return m_doneDeviceCntHasBeenSet;
}


