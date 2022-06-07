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

#include <tencentcloud/oceanus/v20190422/model/TriggerJobSavepointResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

TriggerJobSavepointResponse::TriggerJobSavepointResponse() :
    m_savepointTriggerHasBeenSet(false),
    m_errorMsgHasBeenSet(false),
    m_finalSavepointPathHasBeenSet(false),
    m_savepointIdHasBeenSet(false)
{
}

CoreInternalOutcome TriggerJobSavepointResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SavepointTrigger") && !rsp["SavepointTrigger"].IsNull())
    {
        if (!rsp["SavepointTrigger"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SavepointTrigger` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_savepointTrigger = rsp["SavepointTrigger"].GetBool();
        m_savepointTriggerHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorMsg") && !rsp["ErrorMsg"].IsNull())
    {
        if (!rsp["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(rsp["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }

    if (rsp.HasMember("FinalSavepointPath") && !rsp["FinalSavepointPath"].IsNull())
    {
        if (!rsp["FinalSavepointPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinalSavepointPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finalSavepointPath = string(rsp["FinalSavepointPath"].GetString());
        m_finalSavepointPathHasBeenSet = true;
    }

    if (rsp.HasMember("SavepointId") && !rsp["SavepointId"].IsNull())
    {
        if (!rsp["SavepointId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SavepointId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_savepointId = string(rsp["SavepointId"].GetString());
        m_savepointIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string TriggerJobSavepointResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_savepointTriggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SavepointTrigger";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_savepointTrigger, allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_finalSavepointPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinalSavepointPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finalSavepointPath.c_str(), allocator).Move(), allocator);
    }

    if (m_savepointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SavepointId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_savepointId.c_str(), allocator).Move(), allocator);
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


bool TriggerJobSavepointResponse::GetSavepointTrigger() const
{
    return m_savepointTrigger;
}

bool TriggerJobSavepointResponse::SavepointTriggerHasBeenSet() const
{
    return m_savepointTriggerHasBeenSet;
}

string TriggerJobSavepointResponse::GetErrorMsg() const
{
    return m_errorMsg;
}

bool TriggerJobSavepointResponse::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

string TriggerJobSavepointResponse::GetFinalSavepointPath() const
{
    return m_finalSavepointPath;
}

bool TriggerJobSavepointResponse::FinalSavepointPathHasBeenSet() const
{
    return m_finalSavepointPathHasBeenSet;
}

string TriggerJobSavepointResponse::GetSavepointId() const
{
    return m_savepointId;
}

bool TriggerJobSavepointResponse::SavepointIdHasBeenSet() const
{
    return m_savepointIdHasBeenSet;
}


