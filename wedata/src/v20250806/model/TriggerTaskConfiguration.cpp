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

#include <tencentcloud/wedata/v20250806/model/TriggerTaskConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

TriggerTaskConfiguration::TriggerTaskConfiguration() :
    m_codeContentHasBeenSet(false),
    m_taskExtConfigurationListHasBeenSet(false),
    m_dataClusterHasBeenSet(false),
    m_brokerIpHasBeenSet(false),
    m_yarnQueueHasBeenSet(false),
    m_sourceServiceIdHasBeenSet(false),
    m_sourceServiceTypeHasBeenSet(false),
    m_sourceServiceNameHasBeenSet(false),
    m_targetServiceIdHasBeenSet(false),
    m_targetServiceTypeHasBeenSet(false),
    m_targetServiceNameHasBeenSet(false),
    m_resourceGroupHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false),
    m_taskSchedulingParameterListHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_bundleInfoHasBeenSet(false)
{
}

CoreInternalOutcome TriggerTaskConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CodeContent") && !value["CodeContent"].IsNull())
    {
        if (!value["CodeContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskConfiguration.CodeContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeContent = string(value["CodeContent"].GetString());
        m_codeContentHasBeenSet = true;
    }

    if (value.HasMember("TaskExtConfigurationList") && !value["TaskExtConfigurationList"].IsNull())
    {
        if (!value["TaskExtConfigurationList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TriggerTaskConfiguration.TaskExtConfigurationList` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `TriggerTaskConfiguration.DataCluster` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataCluster = string(value["DataCluster"].GetString());
        m_dataClusterHasBeenSet = true;
    }

    if (value.HasMember("BrokerIp") && !value["BrokerIp"].IsNull())
    {
        if (!value["BrokerIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskConfiguration.BrokerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brokerIp = string(value["BrokerIp"].GetString());
        m_brokerIpHasBeenSet = true;
    }

    if (value.HasMember("YarnQueue") && !value["YarnQueue"].IsNull())
    {
        if (!value["YarnQueue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskConfiguration.YarnQueue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yarnQueue = string(value["YarnQueue"].GetString());
        m_yarnQueueHasBeenSet = true;
    }

    if (value.HasMember("SourceServiceId") && !value["SourceServiceId"].IsNull())
    {
        if (!value["SourceServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskConfiguration.SourceServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceServiceId = string(value["SourceServiceId"].GetString());
        m_sourceServiceIdHasBeenSet = true;
    }

    if (value.HasMember("SourceServiceType") && !value["SourceServiceType"].IsNull())
    {
        if (!value["SourceServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskConfiguration.SourceServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceServiceType = string(value["SourceServiceType"].GetString());
        m_sourceServiceTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceServiceName") && !value["SourceServiceName"].IsNull())
    {
        if (!value["SourceServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskConfiguration.SourceServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceServiceName = string(value["SourceServiceName"].GetString());
        m_sourceServiceNameHasBeenSet = true;
    }

    if (value.HasMember("TargetServiceId") && !value["TargetServiceId"].IsNull())
    {
        if (!value["TargetServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskConfiguration.TargetServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetServiceId = string(value["TargetServiceId"].GetString());
        m_targetServiceIdHasBeenSet = true;
    }

    if (value.HasMember("TargetServiceType") && !value["TargetServiceType"].IsNull())
    {
        if (!value["TargetServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskConfiguration.TargetServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetServiceType = string(value["TargetServiceType"].GetString());
        m_targetServiceTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetServiceName") && !value["TargetServiceName"].IsNull())
    {
        if (!value["TargetServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskConfiguration.TargetServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetServiceName = string(value["TargetServiceName"].GetString());
        m_targetServiceNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroup") && !value["ResourceGroup"].IsNull())
    {
        if (!value["ResourceGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskConfiguration.ResourceGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroup = string(value["ResourceGroup"].GetString());
        m_resourceGroupHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupName") && !value["ResourceGroupName"].IsNull())
    {
        if (!value["ResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskConfiguration.ResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupName = string(value["ResourceGroupName"].GetString());
        m_resourceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("TaskSchedulingParameterList") && !value["TaskSchedulingParameterList"].IsNull())
    {
        if (!value["TaskSchedulingParameterList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TriggerTaskConfiguration.TaskSchedulingParameterList` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `TriggerTaskConfiguration.BundleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleId = string(value["BundleId"].GetString());
        m_bundleIdHasBeenSet = true;
    }

    if (value.HasMember("BundleInfo") && !value["BundleInfo"].IsNull())
    {
        if (!value["BundleInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskConfiguration.BundleInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleInfo = string(value["BundleInfo"].GetString());
        m_bundleInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerTaskConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_sourceServiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceServiceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceServiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceServiceName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetServiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetServiceType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetServiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetServiceName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupName.c_str(), allocator).Move(), allocator);
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


string TriggerTaskConfiguration::GetCodeContent() const
{
    return m_codeContent;
}

void TriggerTaskConfiguration::SetCodeContent(const string& _codeContent)
{
    m_codeContent = _codeContent;
    m_codeContentHasBeenSet = true;
}

bool TriggerTaskConfiguration::CodeContentHasBeenSet() const
{
    return m_codeContentHasBeenSet;
}

vector<TaskExtParameter> TriggerTaskConfiguration::GetTaskExtConfigurationList() const
{
    return m_taskExtConfigurationList;
}

void TriggerTaskConfiguration::SetTaskExtConfigurationList(const vector<TaskExtParameter>& _taskExtConfigurationList)
{
    m_taskExtConfigurationList = _taskExtConfigurationList;
    m_taskExtConfigurationListHasBeenSet = true;
}

bool TriggerTaskConfiguration::TaskExtConfigurationListHasBeenSet() const
{
    return m_taskExtConfigurationListHasBeenSet;
}

string TriggerTaskConfiguration::GetDataCluster() const
{
    return m_dataCluster;
}

void TriggerTaskConfiguration::SetDataCluster(const string& _dataCluster)
{
    m_dataCluster = _dataCluster;
    m_dataClusterHasBeenSet = true;
}

bool TriggerTaskConfiguration::DataClusterHasBeenSet() const
{
    return m_dataClusterHasBeenSet;
}

string TriggerTaskConfiguration::GetBrokerIp() const
{
    return m_brokerIp;
}

void TriggerTaskConfiguration::SetBrokerIp(const string& _brokerIp)
{
    m_brokerIp = _brokerIp;
    m_brokerIpHasBeenSet = true;
}

bool TriggerTaskConfiguration::BrokerIpHasBeenSet() const
{
    return m_brokerIpHasBeenSet;
}

string TriggerTaskConfiguration::GetYarnQueue() const
{
    return m_yarnQueue;
}

void TriggerTaskConfiguration::SetYarnQueue(const string& _yarnQueue)
{
    m_yarnQueue = _yarnQueue;
    m_yarnQueueHasBeenSet = true;
}

bool TriggerTaskConfiguration::YarnQueueHasBeenSet() const
{
    return m_yarnQueueHasBeenSet;
}

string TriggerTaskConfiguration::GetSourceServiceId() const
{
    return m_sourceServiceId;
}

void TriggerTaskConfiguration::SetSourceServiceId(const string& _sourceServiceId)
{
    m_sourceServiceId = _sourceServiceId;
    m_sourceServiceIdHasBeenSet = true;
}

bool TriggerTaskConfiguration::SourceServiceIdHasBeenSet() const
{
    return m_sourceServiceIdHasBeenSet;
}

string TriggerTaskConfiguration::GetSourceServiceType() const
{
    return m_sourceServiceType;
}

void TriggerTaskConfiguration::SetSourceServiceType(const string& _sourceServiceType)
{
    m_sourceServiceType = _sourceServiceType;
    m_sourceServiceTypeHasBeenSet = true;
}

bool TriggerTaskConfiguration::SourceServiceTypeHasBeenSet() const
{
    return m_sourceServiceTypeHasBeenSet;
}

string TriggerTaskConfiguration::GetSourceServiceName() const
{
    return m_sourceServiceName;
}

void TriggerTaskConfiguration::SetSourceServiceName(const string& _sourceServiceName)
{
    m_sourceServiceName = _sourceServiceName;
    m_sourceServiceNameHasBeenSet = true;
}

bool TriggerTaskConfiguration::SourceServiceNameHasBeenSet() const
{
    return m_sourceServiceNameHasBeenSet;
}

string TriggerTaskConfiguration::GetTargetServiceId() const
{
    return m_targetServiceId;
}

void TriggerTaskConfiguration::SetTargetServiceId(const string& _targetServiceId)
{
    m_targetServiceId = _targetServiceId;
    m_targetServiceIdHasBeenSet = true;
}

bool TriggerTaskConfiguration::TargetServiceIdHasBeenSet() const
{
    return m_targetServiceIdHasBeenSet;
}

string TriggerTaskConfiguration::GetTargetServiceType() const
{
    return m_targetServiceType;
}

void TriggerTaskConfiguration::SetTargetServiceType(const string& _targetServiceType)
{
    m_targetServiceType = _targetServiceType;
    m_targetServiceTypeHasBeenSet = true;
}

bool TriggerTaskConfiguration::TargetServiceTypeHasBeenSet() const
{
    return m_targetServiceTypeHasBeenSet;
}

string TriggerTaskConfiguration::GetTargetServiceName() const
{
    return m_targetServiceName;
}

void TriggerTaskConfiguration::SetTargetServiceName(const string& _targetServiceName)
{
    m_targetServiceName = _targetServiceName;
    m_targetServiceNameHasBeenSet = true;
}

bool TriggerTaskConfiguration::TargetServiceNameHasBeenSet() const
{
    return m_targetServiceNameHasBeenSet;
}

string TriggerTaskConfiguration::GetResourceGroup() const
{
    return m_resourceGroup;
}

void TriggerTaskConfiguration::SetResourceGroup(const string& _resourceGroup)
{
    m_resourceGroup = _resourceGroup;
    m_resourceGroupHasBeenSet = true;
}

bool TriggerTaskConfiguration::ResourceGroupHasBeenSet() const
{
    return m_resourceGroupHasBeenSet;
}

string TriggerTaskConfiguration::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void TriggerTaskConfiguration::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool TriggerTaskConfiguration::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}

vector<TaskSchedulingParameter> TriggerTaskConfiguration::GetTaskSchedulingParameterList() const
{
    return m_taskSchedulingParameterList;
}

void TriggerTaskConfiguration::SetTaskSchedulingParameterList(const vector<TaskSchedulingParameter>& _taskSchedulingParameterList)
{
    m_taskSchedulingParameterList = _taskSchedulingParameterList;
    m_taskSchedulingParameterListHasBeenSet = true;
}

bool TriggerTaskConfiguration::TaskSchedulingParameterListHasBeenSet() const
{
    return m_taskSchedulingParameterListHasBeenSet;
}

string TriggerTaskConfiguration::GetBundleId() const
{
    return m_bundleId;
}

void TriggerTaskConfiguration::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool TriggerTaskConfiguration::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string TriggerTaskConfiguration::GetBundleInfo() const
{
    return m_bundleInfo;
}

void TriggerTaskConfiguration::SetBundleInfo(const string& _bundleInfo)
{
    m_bundleInfo = _bundleInfo;
    m_bundleInfoHasBeenSet = true;
}

bool TriggerTaskConfiguration::BundleInfoHasBeenSet() const
{
    return m_bundleInfoHasBeenSet;
}

