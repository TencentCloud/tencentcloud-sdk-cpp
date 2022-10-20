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

#include <tencentcloud/tcss/v20201101/model/CreateVulScanTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

CreateVulScanTaskResponse::CreateVulScanTaskResponse() :
    m_localTaskIDHasBeenSet(false),
    m_registryTaskIDHasBeenSet(false)
{
}

CoreInternalOutcome CreateVulScanTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LocalTaskID") && !rsp["LocalTaskID"].IsNull())
    {
        if (!rsp["LocalTaskID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LocalTaskID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_localTaskID = rsp["LocalTaskID"].GetInt64();
        m_localTaskIDHasBeenSet = true;
    }

    if (rsp.HasMember("RegistryTaskID") && !rsp["RegistryTaskID"].IsNull())
    {
        if (!rsp["RegistryTaskID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegistryTaskID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_registryTaskID = rsp["RegistryTaskID"].GetInt64();
        m_registryTaskIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateVulScanTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_localTaskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalTaskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localTaskID, allocator);
    }

    if (m_registryTaskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryTaskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registryTaskID, allocator);
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


int64_t CreateVulScanTaskResponse::GetLocalTaskID() const
{
    return m_localTaskID;
}

bool CreateVulScanTaskResponse::LocalTaskIDHasBeenSet() const
{
    return m_localTaskIDHasBeenSet;
}

int64_t CreateVulScanTaskResponse::GetRegistryTaskID() const
{
    return m_registryTaskID;
}

bool CreateVulScanTaskResponse::RegistryTaskIDHasBeenSet() const
{
    return m_registryTaskIDHasBeenSet;
}


