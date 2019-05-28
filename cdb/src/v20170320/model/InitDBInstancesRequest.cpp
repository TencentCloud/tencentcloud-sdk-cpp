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

#include <tencentcloud/cdb/v20170320/model/InitDBInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

InitDBInstancesRequest::InitDBInstancesRequest() :
    m_instanceIdsHasBeenSet(false),
    m_newPasswordHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_vportHasBeenSet(false)
{
}

string InitDBInstancesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_newPasswordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NewPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_newPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_parametersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Parameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_parameters.begin(); itr != m_parameters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_vportHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vport, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> InitDBInstancesRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void InitDBInstancesRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool InitDBInstancesRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

string InitDBInstancesRequest::GetNewPassword() const
{
    return m_newPassword;
}

void InitDBInstancesRequest::SetNewPassword(const string& _newPassword)
{
    m_newPassword = _newPassword;
    m_newPasswordHasBeenSet = true;
}

bool InitDBInstancesRequest::NewPasswordHasBeenSet() const
{
    return m_newPasswordHasBeenSet;
}

vector<ParamInfo> InitDBInstancesRequest::GetParameters() const
{
    return m_parameters;
}

void InitDBInstancesRequest::SetParameters(const vector<ParamInfo>& _parameters)
{
    m_parameters = _parameters;
    m_parametersHasBeenSet = true;
}

bool InitDBInstancesRequest::ParametersHasBeenSet() const
{
    return m_parametersHasBeenSet;
}

int64_t InitDBInstancesRequest::GetVport() const
{
    return m_vport;
}

void InitDBInstancesRequest::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool InitDBInstancesRequest::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}


