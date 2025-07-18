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

#include <tencentcloud/iotexplorer/v20190423/model/DeleteDevicesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DeleteDevicesResponse::DeleteDevicesResponse() :
    m_resultCodeHasBeenSet(false),
    m_resultMessageHasBeenSet(false)
{
}

CoreInternalOutcome DeleteDevicesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ResultCode") && !rsp["ResultCode"].IsNull())
    {
        if (!rsp["ResultCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultCode = string(rsp["ResultCode"].GetString());
        m_resultCodeHasBeenSet = true;
    }

    if (rsp.HasMember("ResultMessage") && !rsp["ResultMessage"].IsNull())
    {
        if (!rsp["ResultMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultMessage = string(rsp["ResultMessage"].GetString());
        m_resultMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DeleteDevicesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_resultCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultCode.c_str(), allocator).Move(), allocator);
    }

    if (m_resultMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultMessage.c_str(), allocator).Move(), allocator);
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


string DeleteDevicesResponse::GetResultCode() const
{
    return m_resultCode;
}

bool DeleteDevicesResponse::ResultCodeHasBeenSet() const
{
    return m_resultCodeHasBeenSet;
}

string DeleteDevicesResponse::GetResultMessage() const
{
    return m_resultMessage;
}

bool DeleteDevicesResponse::ResultMessageHasBeenSet() const
{
    return m_resultMessageHasBeenSet;
}


