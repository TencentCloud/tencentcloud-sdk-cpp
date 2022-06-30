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

#include <tencentcloud/dlc/v20210125/model/CheckLockMetaDataResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CheckLockMetaDataResponse::CheckLockMetaDataResponse() :
    m_lockIdHasBeenSet(false),
    m_lockStateHasBeenSet(false)
{
}

CoreInternalOutcome CheckLockMetaDataResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LockId") && !rsp["LockId"].IsNull())
    {
        if (!rsp["LockId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LockId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lockId = rsp["LockId"].GetInt64();
        m_lockIdHasBeenSet = true;
    }

    if (rsp.HasMember("LockState") && !rsp["LockState"].IsNull())
    {
        if (!rsp["LockState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LockState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lockState = string(rsp["LockState"].GetString());
        m_lockStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CheckLockMetaDataResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_lockIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockId, allocator);
    }

    if (m_lockStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lockState.c_str(), allocator).Move(), allocator);
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


int64_t CheckLockMetaDataResponse::GetLockId() const
{
    return m_lockId;
}

bool CheckLockMetaDataResponse::LockIdHasBeenSet() const
{
    return m_lockIdHasBeenSet;
}

string CheckLockMetaDataResponse::GetLockState() const
{
    return m_lockState;
}

bool CheckLockMetaDataResponse::LockStateHasBeenSet() const
{
    return m_lockStateHasBeenSet;
}


