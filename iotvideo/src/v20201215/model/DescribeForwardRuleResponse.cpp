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

#include <tencentcloud/iotvideo/v20201215/model/DescribeForwardRuleResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace std;

DescribeForwardRuleResponse::DescribeForwardRuleResponse() :
    m_endpointHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_productIDHasBeenSet(false),
    m_msgTypeHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_roleIDHasBeenSet(false),
    m_queueRegionHasBeenSet(false),
    m_queueTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_errMsgHasBeenSet(false)
{
}

CoreInternalOutcome DescribeForwardRuleResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Endpoint") && !rsp["Endpoint"].IsNull())
    {
        if (!rsp["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(rsp["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }

    if (rsp.HasMember("QueueName") && !rsp["QueueName"].IsNull())
    {
        if (!rsp["QueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(rsp["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }

    if (rsp.HasMember("ProductID") && !rsp["ProductID"].IsNull())
    {
        if (!rsp["ProductID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productID = string(rsp["ProductID"].GetString());
        m_productIDHasBeenSet = true;
    }

    if (rsp.HasMember("MsgType") && !rsp["MsgType"].IsNull())
    {
        if (!rsp["MsgType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MsgType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgType = rsp["MsgType"].GetUint64();
        m_msgTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Result` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_result = rsp["Result"].GetUint64();
        m_resultHasBeenSet = true;
    }

    if (rsp.HasMember("RoleName") && !rsp["RoleName"].IsNull())
    {
        if (!rsp["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(rsp["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (rsp.HasMember("RoleID") && !rsp["RoleID"].IsNull())
    {
        if (!rsp["RoleID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roleID = rsp["RoleID"].GetUint64();
        m_roleIDHasBeenSet = true;
    }

    if (rsp.HasMember("QueueRegion") && !rsp["QueueRegion"].IsNull())
    {
        if (!rsp["QueueRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueueRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueRegion = string(rsp["QueueRegion"].GetString());
        m_queueRegionHasBeenSet = true;
    }

    if (rsp.HasMember("QueueType") && !rsp["QueueType"].IsNull())
    {
        if (!rsp["QueueType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_queueType = rsp["QueueType"].GetUint64();
        m_queueTypeHasBeenSet = true;
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

    if (rsp.HasMember("InstanceName") && !rsp["InstanceName"].IsNull())
    {
        if (!rsp["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(rsp["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string DescribeForwardRuleResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_productIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productID.c_str(), allocator).Move(), allocator);
    }

    if (m_msgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgType, allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_roleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roleID, allocator);
    }

    if (m_queueRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_queueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queueType, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
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


string DescribeForwardRuleResponse::GetEndpoint() const
{
    return m_endpoint;
}

bool DescribeForwardRuleResponse::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string DescribeForwardRuleResponse::GetQueueName() const
{
    return m_queueName;
}

bool DescribeForwardRuleResponse::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string DescribeForwardRuleResponse::GetProductID() const
{
    return m_productID;
}

bool DescribeForwardRuleResponse::ProductIDHasBeenSet() const
{
    return m_productIDHasBeenSet;
}

uint64_t DescribeForwardRuleResponse::GetMsgType() const
{
    return m_msgType;
}

bool DescribeForwardRuleResponse::MsgTypeHasBeenSet() const
{
    return m_msgTypeHasBeenSet;
}

uint64_t DescribeForwardRuleResponse::GetResult() const
{
    return m_result;
}

bool DescribeForwardRuleResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string DescribeForwardRuleResponse::GetRoleName() const
{
    return m_roleName;
}

bool DescribeForwardRuleResponse::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

uint64_t DescribeForwardRuleResponse::GetRoleID() const
{
    return m_roleID;
}

bool DescribeForwardRuleResponse::RoleIDHasBeenSet() const
{
    return m_roleIDHasBeenSet;
}

string DescribeForwardRuleResponse::GetQueueRegion() const
{
    return m_queueRegion;
}

bool DescribeForwardRuleResponse::QueueRegionHasBeenSet() const
{
    return m_queueRegionHasBeenSet;
}

uint64_t DescribeForwardRuleResponse::GetQueueType() const
{
    return m_queueType;
}

bool DescribeForwardRuleResponse::QueueTypeHasBeenSet() const
{
    return m_queueTypeHasBeenSet;
}

string DescribeForwardRuleResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeForwardRuleResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeForwardRuleResponse::GetInstanceName() const
{
    return m_instanceName;
}

bool DescribeForwardRuleResponse::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string DescribeForwardRuleResponse::GetErrMsg() const
{
    return m_errMsg;
}

bool DescribeForwardRuleResponse::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}


