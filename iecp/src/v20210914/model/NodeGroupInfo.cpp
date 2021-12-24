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

#include <tencentcloud/iecp/v20210914/model/NodeGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

NodeGroupInfo::NodeGroupInfo() :
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_nodeGroupNameHasBeenSet(false),
    m_deploymentGridListHasBeenSet(false),
    m_statefulSetGridListHasBeenSet(false),
    m_protectHasBeenSet(false)
{
}

CoreInternalOutcome NodeGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeGroupInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeGroupInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("NodeGroupName") && !value["NodeGroupName"].IsNull())
    {
        if (!value["NodeGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeGroupInfo.NodeGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeGroupName = string(value["NodeGroupName"].GetString());
        m_nodeGroupNameHasBeenSet = true;
    }

    if (value.HasMember("DeploymentGridList") && !value["DeploymentGridList"].IsNull())
    {
        if (!value["DeploymentGridList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeGroupInfo.DeploymentGridList` is not array type"));

        const rapidjson::Value &tmpValue = value["DeploymentGridList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GridDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deploymentGridList.push_back(item);
        }
        m_deploymentGridListHasBeenSet = true;
    }

    if (value.HasMember("StatefulSetGridList") && !value["StatefulSetGridList"].IsNull())
    {
        if (!value["StatefulSetGridList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeGroupInfo.StatefulSetGridList` is not array type"));

        const rapidjson::Value &tmpValue = value["StatefulSetGridList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GridDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_statefulSetGridList.push_back(item);
        }
        m_statefulSetGridListHasBeenSet = true;
    }

    if (value.HasMember("Protect") && !value["Protect"].IsNull())
    {
        if (!value["Protect"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NodeGroupInfo.Protect` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_protect = value["Protect"].GetBool();
        m_protectHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_deploymentGridListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploymentGridList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deploymentGridList.begin(); itr != m_deploymentGridList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statefulSetGridListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatefulSetGridList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_statefulSetGridList.begin(); itr != m_statefulSetGridList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_protectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protect, allocator);
    }

}


string NodeGroupInfo::GetDescription() const
{
    return m_description;
}

void NodeGroupInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool NodeGroupInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string NodeGroupInfo::GetCreateTime() const
{
    return m_createTime;
}

void NodeGroupInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NodeGroupInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string NodeGroupInfo::GetNodeGroupName() const
{
    return m_nodeGroupName;
}

void NodeGroupInfo::SetNodeGroupName(const string& _nodeGroupName)
{
    m_nodeGroupName = _nodeGroupName;
    m_nodeGroupNameHasBeenSet = true;
}

bool NodeGroupInfo::NodeGroupNameHasBeenSet() const
{
    return m_nodeGroupNameHasBeenSet;
}

vector<GridDetail> NodeGroupInfo::GetDeploymentGridList() const
{
    return m_deploymentGridList;
}

void NodeGroupInfo::SetDeploymentGridList(const vector<GridDetail>& _deploymentGridList)
{
    m_deploymentGridList = _deploymentGridList;
    m_deploymentGridListHasBeenSet = true;
}

bool NodeGroupInfo::DeploymentGridListHasBeenSet() const
{
    return m_deploymentGridListHasBeenSet;
}

vector<GridDetail> NodeGroupInfo::GetStatefulSetGridList() const
{
    return m_statefulSetGridList;
}

void NodeGroupInfo::SetStatefulSetGridList(const vector<GridDetail>& _statefulSetGridList)
{
    m_statefulSetGridList = _statefulSetGridList;
    m_statefulSetGridListHasBeenSet = true;
}

bool NodeGroupInfo::StatefulSetGridListHasBeenSet() const
{
    return m_statefulSetGridListHasBeenSet;
}

bool NodeGroupInfo::GetProtect() const
{
    return m_protect;
}

void NodeGroupInfo::SetProtect(const bool& _protect)
{
    m_protect = _protect;
    m_protectHasBeenSet = true;
}

bool NodeGroupInfo::ProtectHasBeenSet() const
{
    return m_protectHasBeenSet;
}

