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

#include <tencentcloud/es/v20180416/model/CheckUpdateInstanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

CheckUpdateInstanceResponse::CheckUpdateInstanceResponse() :
    m_allowUpdateHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_needSetShardsHasBeenSet(false),
    m_enableScheduleRecoverGroupTaskHasBeenSet(false)
{
}

CoreInternalOutcome CheckUpdateInstanceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AllowUpdate") && !rsp["AllowUpdate"].IsNull())
    {
        if (!rsp["AllowUpdate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AllowUpdate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowUpdate = rsp["AllowUpdate"].GetBool();
        m_allowUpdateHasBeenSet = true;
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

    if (rsp.HasMember("NeedSetShards") && !rsp["NeedSetShards"].IsNull())
    {
        if (!rsp["NeedSetShards"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NeedSetShards` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needSetShards = rsp["NeedSetShards"].GetBool();
        m_needSetShardsHasBeenSet = true;
    }

    if (rsp.HasMember("EnableScheduleRecoverGroupTask") && !rsp["EnableScheduleRecoverGroupTask"].IsNull())
    {
        if (!rsp["EnableScheduleRecoverGroupTask"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnableScheduleRecoverGroupTask` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableScheduleRecoverGroupTask = rsp["EnableScheduleRecoverGroupTask"].GetBool();
        m_enableScheduleRecoverGroupTaskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CheckUpdateInstanceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_allowUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowUpdate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowUpdate, allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_needSetShardsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedSetShards";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needSetShards, allocator);
    }

    if (m_enableScheduleRecoverGroupTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableScheduleRecoverGroupTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableScheduleRecoverGroupTask, allocator);
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


bool CheckUpdateInstanceResponse::GetAllowUpdate() const
{
    return m_allowUpdate;
}

bool CheckUpdateInstanceResponse::AllowUpdateHasBeenSet() const
{
    return m_allowUpdateHasBeenSet;
}

string CheckUpdateInstanceResponse::GetErrMsg() const
{
    return m_errMsg;
}

bool CheckUpdateInstanceResponse::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

bool CheckUpdateInstanceResponse::GetNeedSetShards() const
{
    return m_needSetShards;
}

bool CheckUpdateInstanceResponse::NeedSetShardsHasBeenSet() const
{
    return m_needSetShardsHasBeenSet;
}

bool CheckUpdateInstanceResponse::GetEnableScheduleRecoverGroupTask() const
{
    return m_enableScheduleRecoverGroupTask;
}

bool CheckUpdateInstanceResponse::EnableScheduleRecoverGroupTaskHasBeenSet() const
{
    return m_enableScheduleRecoverGroupTaskHasBeenSet;
}


