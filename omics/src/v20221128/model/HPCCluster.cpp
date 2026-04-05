/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/omics/v20221128/model/HPCCluster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

HPCCluster::HPCCluster() :
    m_clusterIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_vPCIdHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_schedulerVersionHasBeenSet(false),
    m_vPCCIDRBlockHasBeenSet(false),
    m_confirmDeadlineHasBeenSet(false)
{
}

CoreInternalOutcome HPCCluster::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCCluster.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCCluster.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCCluster.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCCluster.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Scheduler") && !value["Scheduler"].IsNull())
    {
        if (!value["Scheduler"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCCluster.Scheduler` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduler = string(value["Scheduler"].GetString());
        m_schedulerHasBeenSet = true;
    }

    if (value.HasMember("VPCId") && !value["VPCId"].IsNull())
    {
        if (!value["VPCId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCCluster.VPCId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vPCId = string(value["VPCId"].GetString());
        m_vPCIdHasBeenSet = true;
    }

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HPCCluster.NodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetUint64();
        m_nodeCountHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HPCCluster.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCCluster.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCCluster.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCCluster.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }

    if (value.HasMember("SchedulerVersion") && !value["SchedulerVersion"].IsNull())
    {
        if (!value["SchedulerVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCCluster.SchedulerVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerVersion = string(value["SchedulerVersion"].GetString());
        m_schedulerVersionHasBeenSet = true;
    }

    if (value.HasMember("VPCCIDRBlock") && !value["VPCCIDRBlock"].IsNull())
    {
        if (!value["VPCCIDRBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCCluster.VPCCIDRBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vPCCIDRBlock = string(value["VPCCIDRBlock"].GetString());
        m_vPCCIDRBlockHasBeenSet = true;
    }

    if (value.HasMember("ConfirmDeadline") && !value["ConfirmDeadline"].IsNull())
    {
        if (!value["ConfirmDeadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HPCCluster.ConfirmDeadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_confirmDeadline = string(value["ConfirmDeadline"].GetString());
        m_confirmDeadlineHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HPCCluster::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_vPCIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPCId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vPCId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_osNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osName.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_vPCCIDRBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPCCIDRBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vPCCIDRBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_confirmDeadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfirmDeadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_confirmDeadline.c_str(), allocator).Move(), allocator);
    }

}


string HPCCluster::GetClusterId() const
{
    return m_clusterId;
}

void HPCCluster::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool HPCCluster::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string HPCCluster::GetName() const
{
    return m_name;
}

void HPCCluster::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool HPCCluster::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string HPCCluster::GetDescription() const
{
    return m_description;
}

void HPCCluster::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool HPCCluster::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string HPCCluster::GetStatus() const
{
    return m_status;
}

void HPCCluster::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool HPCCluster::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string HPCCluster::GetScheduler() const
{
    return m_scheduler;
}

void HPCCluster::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool HPCCluster::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

string HPCCluster::GetVPCId() const
{
    return m_vPCId;
}

void HPCCluster::SetVPCId(const string& _vPCId)
{
    m_vPCId = _vPCId;
    m_vPCIdHasBeenSet = true;
}

bool HPCCluster::VPCIdHasBeenSet() const
{
    return m_vPCIdHasBeenSet;
}

uint64_t HPCCluster::GetNodeCount() const
{
    return m_nodeCount;
}

void HPCCluster::SetNodeCount(const uint64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool HPCCluster::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

vector<Tag> HPCCluster::GetTags() const
{
    return m_tags;
}

void HPCCluster::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool HPCCluster::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string HPCCluster::GetCreateTime() const
{
    return m_createTime;
}

void HPCCluster::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool HPCCluster::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string HPCCluster::GetType() const
{
    return m_type;
}

void HPCCluster::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool HPCCluster::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string HPCCluster::GetOsName() const
{
    return m_osName;
}

void HPCCluster::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool HPCCluster::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

string HPCCluster::GetSchedulerVersion() const
{
    return m_schedulerVersion;
}

void HPCCluster::SetSchedulerVersion(const string& _schedulerVersion)
{
    m_schedulerVersion = _schedulerVersion;
    m_schedulerVersionHasBeenSet = true;
}

bool HPCCluster::SchedulerVersionHasBeenSet() const
{
    return m_schedulerVersionHasBeenSet;
}

string HPCCluster::GetVPCCIDRBlock() const
{
    return m_vPCCIDRBlock;
}

void HPCCluster::SetVPCCIDRBlock(const string& _vPCCIDRBlock)
{
    m_vPCCIDRBlock = _vPCCIDRBlock;
    m_vPCCIDRBlockHasBeenSet = true;
}

bool HPCCluster::VPCCIDRBlockHasBeenSet() const
{
    return m_vPCCIDRBlockHasBeenSet;
}

string HPCCluster::GetConfirmDeadline() const
{
    return m_confirmDeadline;
}

void HPCCluster::SetConfirmDeadline(const string& _confirmDeadline)
{
    m_confirmDeadline = _confirmDeadline;
    m_confirmDeadlineHasBeenSet = true;
}

bool HPCCluster::ConfirmDeadlineHasBeenSet() const
{
    return m_confirmDeadlineHasBeenSet;
}

