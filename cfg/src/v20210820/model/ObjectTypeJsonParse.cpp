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

#include <tencentcloud/cfg/v20210820/model/ObjectTypeJsonParse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

ObjectTypeJsonParse::ObjectTypeJsonParse() :
    m_nameSpaceHasBeenSet(false),
    m_workloadNameHasBeenSet(false),
    m_lanIPHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

CoreInternalOutcome ObjectTypeJsonParse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NameSpace") && !value["NameSpace"].IsNull())
    {
        if (!value["NameSpace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectTypeJsonParse.NameSpace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameSpace = string(value["NameSpace"].GetString());
        m_nameSpaceHasBeenSet = true;
    }

    if (value.HasMember("WorkloadName") && !value["WorkloadName"].IsNull())
    {
        if (!value["WorkloadName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectTypeJsonParse.WorkloadName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadName = string(value["WorkloadName"].GetString());
        m_workloadNameHasBeenSet = true;
    }

    if (value.HasMember("LanIP") && !value["LanIP"].IsNull())
    {
        if (!value["LanIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectTypeJsonParse.LanIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lanIP = string(value["LanIP"].GetString());
        m_lanIPHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectTypeJsonParse.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ObjectTypeJsonParse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameSpace.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadName.c_str(), allocator).Move(), allocator);
    }

    if (m_lanIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lanIP.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

}


string ObjectTypeJsonParse::GetNameSpace() const
{
    return m_nameSpace;
}

void ObjectTypeJsonParse::SetNameSpace(const string& _nameSpace)
{
    m_nameSpace = _nameSpace;
    m_nameSpaceHasBeenSet = true;
}

bool ObjectTypeJsonParse::NameSpaceHasBeenSet() const
{
    return m_nameSpaceHasBeenSet;
}

string ObjectTypeJsonParse::GetWorkloadName() const
{
    return m_workloadName;
}

void ObjectTypeJsonParse::SetWorkloadName(const string& _workloadName)
{
    m_workloadName = _workloadName;
    m_workloadNameHasBeenSet = true;
}

bool ObjectTypeJsonParse::WorkloadNameHasBeenSet() const
{
    return m_workloadNameHasBeenSet;
}

string ObjectTypeJsonParse::GetLanIP() const
{
    return m_lanIP;
}

void ObjectTypeJsonParse::SetLanIP(const string& _lanIP)
{
    m_lanIP = _lanIP;
    m_lanIPHasBeenSet = true;
}

bool ObjectTypeJsonParse::LanIPHasBeenSet() const
{
    return m_lanIPHasBeenSet;
}

string ObjectTypeJsonParse::GetInstanceId() const
{
    return m_instanceId;
}

void ObjectTypeJsonParse::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ObjectTypeJsonParse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

