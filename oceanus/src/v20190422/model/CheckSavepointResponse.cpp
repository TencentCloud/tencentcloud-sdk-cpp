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

#include <tencentcloud/oceanus/v20190422/model/CheckSavepointResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

CheckSavepointResponse::CheckSavepointResponse() :
    m_serialIdHasBeenSet(false),
    m_savepointStatusHasBeenSet(false)
{
}

CoreInternalOutcome CheckSavepointResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SerialId") && !rsp["SerialId"].IsNull())
    {
        if (!rsp["SerialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SerialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialId = string(rsp["SerialId"].GetString());
        m_serialIdHasBeenSet = true;
    }

    if (rsp.HasMember("SavepointStatus") && !rsp["SavepointStatus"].IsNull())
    {
        if (!rsp["SavepointStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SavepointStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_savepointStatus = rsp["SavepointStatus"].GetInt64();
        m_savepointStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CheckSavepointResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_serialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialId.c_str(), allocator).Move(), allocator);
    }

    if (m_savepointStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SavepointStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_savepointStatus, allocator);
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


string CheckSavepointResponse::GetSerialId() const
{
    return m_serialId;
}

bool CheckSavepointResponse::SerialIdHasBeenSet() const
{
    return m_serialIdHasBeenSet;
}

int64_t CheckSavepointResponse::GetSavepointStatus() const
{
    return m_savepointStatus;
}

bool CheckSavepointResponse::SavepointStatusHasBeenSet() const
{
    return m_savepointStatusHasBeenSet;
}


