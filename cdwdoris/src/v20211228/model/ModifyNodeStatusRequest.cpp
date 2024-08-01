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

#include <tencentcloud/cdwdoris/v20211228/model/ModifyNodeStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

ModifyNodeStatusRequest::ModifyNodeStatusRequest() :
    m_instanceIdHasBeenSet(false),
    m_nodeInfosHasBeenSet(false),
    m_operationCodeHasBeenSet(false),
    m_restartTimeOutHasBeenSet(false)
{
}

string ModifyNodeStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeInfos.begin(); itr != m_nodeInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_operationCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operationCode.c_str(), allocator).Move(), allocator);
    }

    if (m_restartTimeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartTimeOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_restartTimeOut.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyNodeStatusRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyNodeStatusRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyNodeStatusRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<NodeInfos> ModifyNodeStatusRequest::GetNodeInfos() const
{
    return m_nodeInfos;
}

void ModifyNodeStatusRequest::SetNodeInfos(const vector<NodeInfos>& _nodeInfos)
{
    m_nodeInfos = _nodeInfos;
    m_nodeInfosHasBeenSet = true;
}

bool ModifyNodeStatusRequest::NodeInfosHasBeenSet() const
{
    return m_nodeInfosHasBeenSet;
}

string ModifyNodeStatusRequest::GetOperationCode() const
{
    return m_operationCode;
}

void ModifyNodeStatusRequest::SetOperationCode(const string& _operationCode)
{
    m_operationCode = _operationCode;
    m_operationCodeHasBeenSet = true;
}

bool ModifyNodeStatusRequest::OperationCodeHasBeenSet() const
{
    return m_operationCodeHasBeenSet;
}

string ModifyNodeStatusRequest::GetRestartTimeOut() const
{
    return m_restartTimeOut;
}

void ModifyNodeStatusRequest::SetRestartTimeOut(const string& _restartTimeOut)
{
    m_restartTimeOut = _restartTimeOut;
    m_restartTimeOutHasBeenSet = true;
}

bool ModifyNodeStatusRequest::RestartTimeOutHasBeenSet() const
{
    return m_restartTimeOutHasBeenSet;
}


