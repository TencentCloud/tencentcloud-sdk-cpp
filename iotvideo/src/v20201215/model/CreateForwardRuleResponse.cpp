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

#include <tencentcloud/iotvideo/v20201215/model/CreateForwardRuleResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace std;

CreateForwardRuleResponse::CreateForwardRuleResponse() :
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

CoreInternalOutcome CreateForwardRuleResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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


    if (rsp.HasMember("Endpoint") && !rsp["Endpoint"].IsNull())
    {
        if (!rsp["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Error("response `Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(rsp["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }

    if (rsp.HasMember("QueueName") && !rsp["QueueName"].IsNull())
    {
        if (!rsp["QueueName"].IsString())
        {
            return CoreInternalOutcome(Error("response `QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(rsp["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }

    if (rsp.HasMember("ProductID") && !rsp["ProductID"].IsNull())
    {
        if (!rsp["ProductID"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productID = string(rsp["ProductID"].GetString());
        m_productIDHasBeenSet = true;
    }

    if (rsp.HasMember("MsgType") && !rsp["MsgType"].IsNull())
    {
        if (!rsp["MsgType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `MsgType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgType = rsp["MsgType"].GetUint64();
        m_msgTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Result` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_result = rsp["Result"].GetUint64();
        m_resultHasBeenSet = true;
    }

    if (rsp.HasMember("RoleName") && !rsp["RoleName"].IsNull())
    {
        if (!rsp["RoleName"].IsString())
        {
            return CoreInternalOutcome(Error("response `RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(rsp["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (rsp.HasMember("RoleID") && !rsp["RoleID"].IsNull())
    {
        if (!rsp["RoleID"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `RoleID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roleID = rsp["RoleID"].GetUint64();
        m_roleIDHasBeenSet = true;
    }

    if (rsp.HasMember("QueueRegion") && !rsp["QueueRegion"].IsNull())
    {
        if (!rsp["QueueRegion"].IsString())
        {
            return CoreInternalOutcome(Error("response `QueueRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueRegion = string(rsp["QueueRegion"].GetString());
        m_queueRegionHasBeenSet = true;
    }

    if (rsp.HasMember("QueueType") && !rsp["QueueType"].IsNull())
    {
        if (!rsp["QueueType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `QueueType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_queueType = rsp["QueueType"].GetUint64();
        m_queueTypeHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceName") && !rsp["InstanceName"].IsNull())
    {
        if (!rsp["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(rsp["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (rsp.HasMember("ErrMsg") && !rsp["ErrMsg"].IsNull())
    {
        if (!rsp["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(rsp["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CreateForwardRuleResponse::GetEndpoint() const
{
    return m_endpoint;
}

bool CreateForwardRuleResponse::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string CreateForwardRuleResponse::GetQueueName() const
{
    return m_queueName;
}

bool CreateForwardRuleResponse::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string CreateForwardRuleResponse::GetProductID() const
{
    return m_productID;
}

bool CreateForwardRuleResponse::ProductIDHasBeenSet() const
{
    return m_productIDHasBeenSet;
}

uint64_t CreateForwardRuleResponse::GetMsgType() const
{
    return m_msgType;
}

bool CreateForwardRuleResponse::MsgTypeHasBeenSet() const
{
    return m_msgTypeHasBeenSet;
}

uint64_t CreateForwardRuleResponse::GetResult() const
{
    return m_result;
}

bool CreateForwardRuleResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string CreateForwardRuleResponse::GetRoleName() const
{
    return m_roleName;
}

bool CreateForwardRuleResponse::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

uint64_t CreateForwardRuleResponse::GetRoleID() const
{
    return m_roleID;
}

bool CreateForwardRuleResponse::RoleIDHasBeenSet() const
{
    return m_roleIDHasBeenSet;
}

string CreateForwardRuleResponse::GetQueueRegion() const
{
    return m_queueRegion;
}

bool CreateForwardRuleResponse::QueueRegionHasBeenSet() const
{
    return m_queueRegionHasBeenSet;
}

uint64_t CreateForwardRuleResponse::GetQueueType() const
{
    return m_queueType;
}

bool CreateForwardRuleResponse::QueueTypeHasBeenSet() const
{
    return m_queueTypeHasBeenSet;
}

string CreateForwardRuleResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool CreateForwardRuleResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateForwardRuleResponse::GetInstanceName() const
{
    return m_instanceName;
}

bool CreateForwardRuleResponse::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CreateForwardRuleResponse::GetErrMsg() const
{
    return m_errMsg;
}

bool CreateForwardRuleResponse::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}


