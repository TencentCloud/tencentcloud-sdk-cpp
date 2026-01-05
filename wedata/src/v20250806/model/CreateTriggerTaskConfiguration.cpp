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

#include <tencentcloud/wedata/v20250806/model/CreateTriggerTaskConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateTriggerTaskConfiguration::CreateTriggerTaskConfiguration() :
    m_resourceGroupHasBeenSet(false),
    m_codeContentHasBeenSet(false),
    m_taskExtConfigurationListHasBeenSet(false),
    m_dataClusterHasBeenSet(false),
    m_brokerIpHasBeenSet(false),
    m_yarnQueueHasBeenSet(false),
    m_sourceServiceIdHasBeenSet(false),
    m_targetServiceIdHasBeenSet(false),
    m_taskSchedulingParameterListHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_bundleInfoHasBeenSet(false)
{
}

CoreInternalOutcome CreateTriggerTaskConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceGroup") && !value["ResourceGroup"].IsNull())
    {
        if (!value["ResourceGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskConfiguration.ResourceGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroup = string(value["ResourceGroup"].GetString());
        m_resourceGroupHasBeenSet = true;
    }

    if (value.HasMember("CodeContent") && !value["CodeContent"].IsNull())
    {
        if (!value["CodeContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskConfiguration.CodeContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeContent = string(value["CodeContent"].GetString());
        m_codeContentHasBeenSet = true;
    }

    if (value.HasMember("TaskExtConfigurationList") && !value["TaskExtConfigurationList"].IsNull())
    {
        if (!value["TaskExtConfigurationList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskConfiguration.TaskExtConfigurationList` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskExtConfigurationList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskExtParameter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskExtConfigurationList.push_back(item);
        }
        m_taskExtConfigurationListHasBeenSet = true;
    }

    if (value.HasMember("DataCluster") && !value["DataCluster"].IsNull())
    {
        if (!value["DataCluster"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskConfiguration.DataCluster` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataCluster = string(value["DataCluster"].GetString());
        m_dataClusterHasBeenSet = true;
    }

    if (value.HasMember("BrokerIp") && !value["BrokerIp"].IsNull())
    {
        if (!value["BrokerIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskConfiguration.BrokerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brokerIp = string(value["BrokerIp"].GetString());
        m_brokerIpHasBeenSet = true;
    }

    if (value.HasMember("YarnQueue") && !value["YarnQueue"].IsNull())
    {
        if (!value["YarnQueue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskConfiguration.YarnQueue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yarnQueue = string(value["YarnQueue"].GetString());
        m_yarnQueueHasBeenSet = true;
    }

    if (value.HasMember("SourceServiceId") && !value["SourceServiceId"].IsNull())
    {
        if (!value["SourceServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskConfiguration.SourceServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceServiceId = string(value["SourceServiceId"].GetString());
        m_sourceServiceIdHasBeenSet = true;
    }

    if (value.HasMember("TargetServiceId") && !value["TargetServiceId"].IsNull())
    {
        if (!value["TargetServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskConfiguration.TargetServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetServiceId = string(value["TargetServiceId"].GetString());
        m_targetServiceIdHasBeenSet = true;
    }

    if (value.HasMember("TaskSchedulingParameterList") && !value["TaskSchedulingParameterList"].IsNull())
    {
        if (!value["TaskSchedulingParameterList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskConfiguration.TaskSchedulingParameterList` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskSchedulingParameterList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskSchedulingParameter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskSchedulingParameterList.push_back(item);
        }
        m_taskSchedulingParameterListHasBeenSet = true;
    }

    if (value.HasMember("BundleId") && !value["BundleId"].IsNull())
    {
        if (!value["BundleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskConfiguration.BundleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleId = string(value["BundleId"].GetString());
        m_bundleIdHasBeenSet = true;
    }

    if (value.HasMember("BundleInfo") && !value["BundleInfo"].IsNull())
    {
        if (!value["BundleInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskConfiguration.BundleInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleInfo = string(value["BundleInfo"].GetString());
        m_bundleInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateTriggerTaskConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_codeContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeContent.c_str(), allocator).Move(), allocator);
    }

    if (m_taskExtConfigurationListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskExtConfigurationList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskExtConfigurationList.begin(); itr != m_taskExtConfigurationList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dataClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataCluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataCluster.c_str(), allocator).Move(), allocator);
    }

    if (m_brokerIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrokerIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brokerIp.c_str(), allocator).Move(), allocator);
    }

    if (m_yarnQueueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YarnQueue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yarnQueue.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskSchedulingParameterListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskSchedulingParameterList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskSchedulingParameterList.begin(); itr != m_taskSchedulingParameterList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleInfo.c_str(), allocator).Move(), allocator);
    }

}


string CreateTriggerTaskConfiguration::GetResourceGroup() const
{
    return m_resourceGroup;
}

void CreateTriggerTaskConfiguration::SetResourceGroup(const string& _resourceGroup)
{
    m_resourceGroup = _resourceGroup;
    m_resourceGroupHasBeenSet = true;
}

bool CreateTriggerTaskConfiguration::ResourceGroupHasBeenSet() const
{
    return m_resourceGroupHasBeenSet;
}

string CreateTriggerTaskConfiguration::GetCodeContent() const
{
    return m_codeContent;
}

void CreateTriggerTaskConfiguration::SetCodeContent(const string& _codeContent)
{
    m_codeContent = _codeContent;
    m_codeContentHasBeenSet = true;
}

bool CreateTriggerTaskConfiguration::CodeContentHasBeenSet() const
{
    return m_codeContentHasBeenSet;
}

vector<TaskExtParameter> CreateTriggerTaskConfiguration::GetTaskExtConfigurationList() const
{
    return m_taskExtConfigurationList;
}

void CreateTriggerTaskConfiguration::SetTaskExtConfigurationList(const vector<TaskExtParameter>& _taskExtConfigurationList)
{
    m_taskExtConfigurationList = _taskExtConfigurationList;
    m_taskExtConfigurationListHasBeenSet = true;
}

bool CreateTriggerTaskConfiguration::TaskExtConfigurationListHasBeenSet() const
{
    return m_taskExtConfigurationListHasBeenSet;
}

string CreateTriggerTaskConfiguration::GetDataCluster() const
{
    return m_dataCluster;
}

void CreateTriggerTaskConfiguration::SetDataCluster(const string& _dataCluster)
{
    m_dataCluster = _dataCluster;
    m_dataClusterHasBeenSet = true;
}

bool CreateTriggerTaskConfiguration::DataClusterHasBeenSet() const
{
    return m_dataClusterHasBeenSet;
}

string CreateTriggerTaskConfiguration::GetBrokerIp() const
{
    return m_brokerIp;
}

void CreateTriggerTaskConfiguration::SetBrokerIp(const string& _brokerIp)
{
    m_brokerIp = _brokerIp;
    m_brokerIpHasBeenSet = true;
}

bool CreateTriggerTaskConfiguration::BrokerIpHasBeenSet() const
{
    return m_brokerIpHasBeenSet;
}

string CreateTriggerTaskConfiguration::GetYarnQueue() const
{
    return m_yarnQueue;
}

void CreateTriggerTaskConfiguration::SetYarnQueue(const string& _yarnQueue)
{
    m_yarnQueue = _yarnQueue;
    m_yarnQueueHasBeenSet = true;
}

bool CreateTriggerTaskConfiguration::YarnQueueHasBeenSet() const
{
    return m_yarnQueueHasBeenSet;
}

string CreateTriggerTaskConfiguration::GetSourceServiceId() const
{
    return m_sourceServiceId;
}

void CreateTriggerTaskConfiguration::SetSourceServiceId(const string& _sourceServiceId)
{
    m_sourceServiceId = _sourceServiceId;
    m_sourceServiceIdHasBeenSet = true;
}

bool CreateTriggerTaskConfiguration::SourceServiceIdHasBeenSet() const
{
    return m_sourceServiceIdHasBeenSet;
}

string CreateTriggerTaskConfiguration::GetTargetServiceId() const
{
    return m_targetServiceId;
}

void CreateTriggerTaskConfiguration::SetTargetServiceId(const string& _targetServiceId)
{
    m_targetServiceId = _targetServiceId;
    m_targetServiceIdHasBeenSet = true;
}

bool CreateTriggerTaskConfiguration::TargetServiceIdHasBeenSet() const
{
    return m_targetServiceIdHasBeenSet;
}

vector<TaskSchedulingParameter> CreateTriggerTaskConfiguration::GetTaskSchedulingParameterList() const
{
    return m_taskSchedulingParameterList;
}

void CreateTriggerTaskConfiguration::SetTaskSchedulingParameterList(const vector<TaskSchedulingParameter>& _taskSchedulingParameterList)
{
    m_taskSchedulingParameterList = _taskSchedulingParameterList;
    m_taskSchedulingParameterListHasBeenSet = true;
}

bool CreateTriggerTaskConfiguration::TaskSchedulingParameterListHasBeenSet() const
{
    return m_taskSchedulingParameterListHasBeenSet;
}

string CreateTriggerTaskConfiguration::GetBundleId() const
{
    return m_bundleId;
}

void CreateTriggerTaskConfiguration::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool CreateTriggerTaskConfiguration::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string CreateTriggerTaskConfiguration::GetBundleInfo() const
{
    return m_bundleInfo;
}

void CreateTriggerTaskConfiguration::SetBundleInfo(const string& _bundleInfo)
{
    m_bundleInfo = _bundleInfo;
    m_bundleInfoHasBeenSet = true;
}

bool CreateTriggerTaskConfiguration::BundleInfoHasBeenSet() const
{
    return m_bundleInfoHasBeenSet;
}

