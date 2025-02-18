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

#include <tencentcloud/trabbit/v20230418/model/DeleteRabbitMQServerlessBindingResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

DeleteRabbitMQServerlessBindingResponse::DeleteRabbitMQServerlessBindingResponse() :
    m_instanceIdHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_bindingIdHasBeenSet(false)
{
}

CoreInternalOutcome DeleteRabbitMQServerlessBindingResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("VirtualHost") && !rsp["VirtualHost"].IsNull())
    {
        if (!rsp["VirtualHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirtualHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualHost = string(rsp["VirtualHost"].GetString());
        m_virtualHostHasBeenSet = true;
    }

    if (rsp.HasMember("BindingId") && !rsp["BindingId"].IsNull())
    {
        if (!rsp["BindingId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BindingId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindingId = rsp["BindingId"].GetInt64();
        m_bindingIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DeleteRabbitMQServerlessBindingResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virtualHost.c_str(), allocator).Move(), allocator);
    }

    if (m_bindingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindingId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindingId, allocator);
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


string DeleteRabbitMQServerlessBindingResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DeleteRabbitMQServerlessBindingResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DeleteRabbitMQServerlessBindingResponse::GetVirtualHost() const
{
    return m_virtualHost;
}

bool DeleteRabbitMQServerlessBindingResponse::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

int64_t DeleteRabbitMQServerlessBindingResponse::GetBindingId() const
{
    return m_bindingId;
}

bool DeleteRabbitMQServerlessBindingResponse::BindingIdHasBeenSet() const
{
    return m_bindingIdHasBeenSet;
}


