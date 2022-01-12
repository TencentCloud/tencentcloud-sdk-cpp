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

#include <tencentcloud/postgres/v20170312/model/ModifyDBInstanceDeploymentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ModifyDBInstanceDeploymentRequest::ModifyDBInstanceDeploymentRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_dBNodeSetHasBeenSet(false),
    m_switchTagHasBeenSet(false),
    m_switchStartTimeHasBeenSet(false),
    m_switchEndTimeHasBeenSet(false)
{
}

string ModifyDBInstanceDeploymentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dBNodeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBNodeSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dBNodeSet.begin(); itr != m_dBNodeSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_switchTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_switchTag, allocator);
    }

    if (m_switchStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_switchStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_switchEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_switchEndTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBInstanceDeploymentRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void ModifyDBInstanceDeploymentRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool ModifyDBInstanceDeploymentRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

vector<DBNode> ModifyDBInstanceDeploymentRequest::GetDBNodeSet() const
{
    return m_dBNodeSet;
}

void ModifyDBInstanceDeploymentRequest::SetDBNodeSet(const vector<DBNode>& _dBNodeSet)
{
    m_dBNodeSet = _dBNodeSet;
    m_dBNodeSetHasBeenSet = true;
}

bool ModifyDBInstanceDeploymentRequest::DBNodeSetHasBeenSet() const
{
    return m_dBNodeSetHasBeenSet;
}

int64_t ModifyDBInstanceDeploymentRequest::GetSwitchTag() const
{
    return m_switchTag;
}

void ModifyDBInstanceDeploymentRequest::SetSwitchTag(const int64_t& _switchTag)
{
    m_switchTag = _switchTag;
    m_switchTagHasBeenSet = true;
}

bool ModifyDBInstanceDeploymentRequest::SwitchTagHasBeenSet() const
{
    return m_switchTagHasBeenSet;
}

string ModifyDBInstanceDeploymentRequest::GetSwitchStartTime() const
{
    return m_switchStartTime;
}

void ModifyDBInstanceDeploymentRequest::SetSwitchStartTime(const string& _switchStartTime)
{
    m_switchStartTime = _switchStartTime;
    m_switchStartTimeHasBeenSet = true;
}

bool ModifyDBInstanceDeploymentRequest::SwitchStartTimeHasBeenSet() const
{
    return m_switchStartTimeHasBeenSet;
}

string ModifyDBInstanceDeploymentRequest::GetSwitchEndTime() const
{
    return m_switchEndTime;
}

void ModifyDBInstanceDeploymentRequest::SetSwitchEndTime(const string& _switchEndTime)
{
    m_switchEndTime = _switchEndTime;
    m_switchEndTimeHasBeenSet = true;
}

bool ModifyDBInstanceDeploymentRequest::SwitchEndTimeHasBeenSet() const
{
    return m_switchEndTimeHasBeenSet;
}


