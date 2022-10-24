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

#include <tencentcloud/thpc/v20220401/model/QueueConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20220401::Model;
using namespace std;

QueueConfig::QueueConfig() :
    m_queueNameHasBeenSet(false),
    m_minSizeHasBeenSet(false),
    m_maxSizeHasBeenSet(false),
    m_enableAutoExpansionHasBeenSet(false),
    m_enableAutoShrinkHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_dataDisksHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false),
    m_expansionNodeConfigsHasBeenSet(false)
{
}

CoreInternalOutcome QueueConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QueueName") && !value["QueueName"].IsNull())
    {
        if (!value["QueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueueConfig.QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(value["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }

    if (value.HasMember("MinSize") && !value["MinSize"].IsNull())
    {
        if (!value["MinSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueConfig.MinSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minSize = value["MinSize"].GetUint64();
        m_minSizeHasBeenSet = true;
    }

    if (value.HasMember("MaxSize") && !value["MaxSize"].IsNull())
    {
        if (!value["MaxSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueConfig.MaxSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSize = value["MaxSize"].GetUint64();
        m_maxSizeHasBeenSet = true;
    }

    if (value.HasMember("EnableAutoExpansion") && !value["EnableAutoExpansion"].IsNull())
    {
        if (!value["EnableAutoExpansion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QueueConfig.EnableAutoExpansion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableAutoExpansion = value["EnableAutoExpansion"].GetBool();
        m_enableAutoExpansionHasBeenSet = true;
    }

    if (value.HasMember("EnableAutoShrink") && !value["EnableAutoShrink"].IsNull())
    {
        if (!value["EnableAutoShrink"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QueueConfig.EnableAutoShrink` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableAutoShrink = value["EnableAutoShrink"].GetBool();
        m_enableAutoShrinkHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueueConfig.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("SystemDisk") && !value["SystemDisk"].IsNull())
    {
        if (!value["SystemDisk"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QueueConfig.SystemDisk` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_systemDisk.Deserialize(value["SystemDisk"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_systemDiskHasBeenSet = true;
    }

    if (value.HasMember("DataDisks") && !value["DataDisks"].IsNull())
    {
        if (!value["DataDisks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueueConfig.DataDisks` is not array type"));

        const rapidjson::Value &tmpValue = value["DataDisks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataDisk item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataDisks.push_back(item);
        }
        m_dataDisksHasBeenSet = true;
    }

    if (value.HasMember("InternetAccessible") && !value["InternetAccessible"].IsNull())
    {
        if (!value["InternetAccessible"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QueueConfig.InternetAccessible` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_internetAccessible.Deserialize(value["InternetAccessible"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_internetAccessibleHasBeenSet = true;
    }

    if (value.HasMember("ExpansionNodeConfigs") && !value["ExpansionNodeConfigs"].IsNull())
    {
        if (!value["ExpansionNodeConfigs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueueConfig.ExpansionNodeConfigs` is not array type"));

        const rapidjson::Value &tmpValue = value["ExpansionNodeConfigs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExpansionNodeConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_expansionNodeConfigs.push_back(item);
        }
        m_expansionNodeConfigsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueueConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_minSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minSize, allocator);
    }

    if (m_maxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSize, allocator);
    }

    if (m_enableAutoExpansionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAutoExpansion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableAutoExpansion, allocator);
    }

    if (m_enableAutoShrinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAutoShrink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableAutoShrink, allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_systemDisk.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dataDisksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDisks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataDisks.begin(); itr != m_dataDisks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_internetAccessibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internetAccessible.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_expansionNodeConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpansionNodeConfigs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_expansionNodeConfigs.begin(); itr != m_expansionNodeConfigs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string QueueConfig::GetQueueName() const
{
    return m_queueName;
}

void QueueConfig::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool QueueConfig::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

uint64_t QueueConfig::GetMinSize() const
{
    return m_minSize;
}

void QueueConfig::SetMinSize(const uint64_t& _minSize)
{
    m_minSize = _minSize;
    m_minSizeHasBeenSet = true;
}

bool QueueConfig::MinSizeHasBeenSet() const
{
    return m_minSizeHasBeenSet;
}

uint64_t QueueConfig::GetMaxSize() const
{
    return m_maxSize;
}

void QueueConfig::SetMaxSize(const uint64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool QueueConfig::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}

bool QueueConfig::GetEnableAutoExpansion() const
{
    return m_enableAutoExpansion;
}

void QueueConfig::SetEnableAutoExpansion(const bool& _enableAutoExpansion)
{
    m_enableAutoExpansion = _enableAutoExpansion;
    m_enableAutoExpansionHasBeenSet = true;
}

bool QueueConfig::EnableAutoExpansionHasBeenSet() const
{
    return m_enableAutoExpansionHasBeenSet;
}

bool QueueConfig::GetEnableAutoShrink() const
{
    return m_enableAutoShrink;
}

void QueueConfig::SetEnableAutoShrink(const bool& _enableAutoShrink)
{
    m_enableAutoShrink = _enableAutoShrink;
    m_enableAutoShrinkHasBeenSet = true;
}

bool QueueConfig::EnableAutoShrinkHasBeenSet() const
{
    return m_enableAutoShrinkHasBeenSet;
}

string QueueConfig::GetImageId() const
{
    return m_imageId;
}

void QueueConfig::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool QueueConfig::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

SystemDisk QueueConfig::GetSystemDisk() const
{
    return m_systemDisk;
}

void QueueConfig::SetSystemDisk(const SystemDisk& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool QueueConfig::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

vector<DataDisk> QueueConfig::GetDataDisks() const
{
    return m_dataDisks;
}

void QueueConfig::SetDataDisks(const vector<DataDisk>& _dataDisks)
{
    m_dataDisks = _dataDisks;
    m_dataDisksHasBeenSet = true;
}

bool QueueConfig::DataDisksHasBeenSet() const
{
    return m_dataDisksHasBeenSet;
}

InternetAccessible QueueConfig::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void QueueConfig::SetInternetAccessible(const InternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool QueueConfig::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
}

vector<ExpansionNodeConfig> QueueConfig::GetExpansionNodeConfigs() const
{
    return m_expansionNodeConfigs;
}

void QueueConfig::SetExpansionNodeConfigs(const vector<ExpansionNodeConfig>& _expansionNodeConfigs)
{
    m_expansionNodeConfigs = _expansionNodeConfigs;
    m_expansionNodeConfigsHasBeenSet = true;
}

bool QueueConfig::ExpansionNodeConfigsHasBeenSet() const
{
    return m_expansionNodeConfigsHasBeenSet;
}

