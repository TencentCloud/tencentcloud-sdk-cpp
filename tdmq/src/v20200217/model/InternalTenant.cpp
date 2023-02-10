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

#include <tencentcloud/tdmq/v20200217/model/InternalTenant.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

InternalTenant::InternalTenant() :
    m_tenantIdHasBeenSet(false),
    m_tenantNameHasBeenSet(false),
    m_customerUinHasBeenSet(false),
    m_customerAppIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_maxNamespacesHasBeenSet(false),
    m_usedNamespacesHasBeenSet(false),
    m_maxTopicsHasBeenSet(false),
    m_usedTopicsHasBeenSet(false),
    m_maxPartitionsHasBeenSet(false),
    m_usedPartitionsHasBeenSet(false),
    m_maxMsgBacklogSizeHasBeenSet(false),
    m_maxPublishTpsHasBeenSet(false),
    m_maxRetentionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_maxDispatchTpsHasBeenSet(false),
    m_maxDispatchRateInBytesHasBeenSet(false),
    m_maxPublishRateInBytesHasBeenSet(false),
    m_maxRetentionSizeInMBHasBeenSet(false),
    m_publicAccessEnabledHasBeenSet(false)
{
}

CoreInternalOutcome InternalTenant::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TenantId") && !value["TenantId"].IsNull())
    {
        if (!value["TenantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternalTenant.TenantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tenantId = string(value["TenantId"].GetString());
        m_tenantIdHasBeenSet = true;
    }

    if (value.HasMember("TenantName") && !value["TenantName"].IsNull())
    {
        if (!value["TenantName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternalTenant.TenantName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tenantName = string(value["TenantName"].GetString());
        m_tenantNameHasBeenSet = true;
    }

    if (value.HasMember("CustomerUin") && !value["CustomerUin"].IsNull())
    {
        if (!value["CustomerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternalTenant.CustomerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerUin = string(value["CustomerUin"].GetString());
        m_customerUinHasBeenSet = true;
    }

    if (value.HasMember("CustomerAppId") && !value["CustomerAppId"].IsNull())
    {
        if (!value["CustomerAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternalTenant.CustomerAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerAppId = string(value["CustomerAppId"].GetString());
        m_customerAppIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternalTenant.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternalTenant.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("MaxNamespaces") && !value["MaxNamespaces"].IsNull())
    {
        if (!value["MaxNamespaces"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InternalTenant.MaxNamespaces` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNamespaces = value["MaxNamespaces"].GetInt64();
        m_maxNamespacesHasBeenSet = true;
    }

    if (value.HasMember("UsedNamespaces") && !value["UsedNamespaces"].IsNull())
    {
        if (!value["UsedNamespaces"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InternalTenant.UsedNamespaces` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedNamespaces = value["UsedNamespaces"].GetInt64();
        m_usedNamespacesHasBeenSet = true;
    }

    if (value.HasMember("MaxTopics") && !value["MaxTopics"].IsNull())
    {
        if (!value["MaxTopics"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InternalTenant.MaxTopics` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTopics = value["MaxTopics"].GetInt64();
        m_maxTopicsHasBeenSet = true;
    }

    if (value.HasMember("UsedTopics") && !value["UsedTopics"].IsNull())
    {
        if (!value["UsedTopics"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InternalTenant.UsedTopics` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedTopics = value["UsedTopics"].GetInt64();
        m_usedTopicsHasBeenSet = true;
    }

    if (value.HasMember("MaxPartitions") && !value["MaxPartitions"].IsNull())
    {
        if (!value["MaxPartitions"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InternalTenant.MaxPartitions` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxPartitions = value["MaxPartitions"].GetInt64();
        m_maxPartitionsHasBeenSet = true;
    }

    if (value.HasMember("UsedPartitions") && !value["UsedPartitions"].IsNull())
    {
        if (!value["UsedPartitions"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InternalTenant.UsedPartitions` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedPartitions = value["UsedPartitions"].GetInt64();
        m_usedPartitionsHasBeenSet = true;
    }

    if (value.HasMember("MaxMsgBacklogSize") && !value["MaxMsgBacklogSize"].IsNull())
    {
        if (!value["MaxMsgBacklogSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InternalTenant.MaxMsgBacklogSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMsgBacklogSize = value["MaxMsgBacklogSize"].GetUint64();
        m_maxMsgBacklogSizeHasBeenSet = true;
    }

    if (value.HasMember("MaxPublishTps") && !value["MaxPublishTps"].IsNull())
    {
        if (!value["MaxPublishTps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InternalTenant.MaxPublishTps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxPublishTps = value["MaxPublishTps"].GetUint64();
        m_maxPublishTpsHasBeenSet = true;
    }

    if (value.HasMember("MaxRetention") && !value["MaxRetention"].IsNull())
    {
        if (!value["MaxRetention"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InternalTenant.MaxRetention` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRetention = value["MaxRetention"].GetUint64();
        m_maxRetentionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InternalTenant.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InternalTenant.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxDispatchTps") && !value["MaxDispatchTps"].IsNull())
    {
        if (!value["MaxDispatchTps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InternalTenant.MaxDispatchTps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDispatchTps = value["MaxDispatchTps"].GetUint64();
        m_maxDispatchTpsHasBeenSet = true;
    }

    if (value.HasMember("MaxDispatchRateInBytes") && !value["MaxDispatchRateInBytes"].IsNull())
    {
        if (!value["MaxDispatchRateInBytes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InternalTenant.MaxDispatchRateInBytes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDispatchRateInBytes = value["MaxDispatchRateInBytes"].GetUint64();
        m_maxDispatchRateInBytesHasBeenSet = true;
    }

    if (value.HasMember("MaxPublishRateInBytes") && !value["MaxPublishRateInBytes"].IsNull())
    {
        if (!value["MaxPublishRateInBytes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InternalTenant.MaxPublishRateInBytes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxPublishRateInBytes = value["MaxPublishRateInBytes"].GetUint64();
        m_maxPublishRateInBytesHasBeenSet = true;
    }

    if (value.HasMember("MaxRetentionSizeInMB") && !value["MaxRetentionSizeInMB"].IsNull())
    {
        if (!value["MaxRetentionSizeInMB"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InternalTenant.MaxRetentionSizeInMB` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRetentionSizeInMB = value["MaxRetentionSizeInMB"].GetUint64();
        m_maxRetentionSizeInMBHasBeenSet = true;
    }

    if (value.HasMember("PublicAccessEnabled") && !value["PublicAccessEnabled"].IsNull())
    {
        if (!value["PublicAccessEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InternalTenant.PublicAccessEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_publicAccessEnabled = value["PublicAccessEnabled"].GetBool();
        m_publicAccessEnabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InternalTenant::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tenantId.c_str(), allocator).Move(), allocator);
    }

    if (m_tenantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tenantName.c_str(), allocator).Move(), allocator);
    }

    if (m_customerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_customerAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_maxNamespacesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNamespaces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxNamespaces, allocator);
    }

    if (m_usedNamespacesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedNamespaces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedNamespaces, allocator);
    }

    if (m_maxTopicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTopics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTopics, allocator);
    }

    if (m_usedTopicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedTopics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedTopics, allocator);
    }

    if (m_maxPartitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxPartitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxPartitions, allocator);
    }

    if (m_usedPartitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedPartitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedPartitions, allocator);
    }

    if (m_maxMsgBacklogSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMsgBacklogSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMsgBacklogSize, allocator);
    }

    if (m_maxPublishTpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxPublishTps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxPublishTps, allocator);
    }

    if (m_maxRetentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRetention, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_maxDispatchTpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDispatchTps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDispatchTps, allocator);
    }

    if (m_maxDispatchRateInBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDispatchRateInBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDispatchRateInBytes, allocator);
    }

    if (m_maxPublishRateInBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxPublishRateInBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxPublishRateInBytes, allocator);
    }

    if (m_maxRetentionSizeInMBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetentionSizeInMB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRetentionSizeInMB, allocator);
    }

    if (m_publicAccessEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicAccessEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicAccessEnabled, allocator);
    }

}


string InternalTenant::GetTenantId() const
{
    return m_tenantId;
}

void InternalTenant::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool InternalTenant::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

string InternalTenant::GetTenantName() const
{
    return m_tenantName;
}

void InternalTenant::SetTenantName(const string& _tenantName)
{
    m_tenantName = _tenantName;
    m_tenantNameHasBeenSet = true;
}

bool InternalTenant::TenantNameHasBeenSet() const
{
    return m_tenantNameHasBeenSet;
}

string InternalTenant::GetCustomerUin() const
{
    return m_customerUin;
}

void InternalTenant::SetCustomerUin(const string& _customerUin)
{
    m_customerUin = _customerUin;
    m_customerUinHasBeenSet = true;
}

bool InternalTenant::CustomerUinHasBeenSet() const
{
    return m_customerUinHasBeenSet;
}

string InternalTenant::GetCustomerAppId() const
{
    return m_customerAppId;
}

void InternalTenant::SetCustomerAppId(const string& _customerAppId)
{
    m_customerAppId = _customerAppId;
    m_customerAppIdHasBeenSet = true;
}

bool InternalTenant::CustomerAppIdHasBeenSet() const
{
    return m_customerAppIdHasBeenSet;
}

string InternalTenant::GetClusterName() const
{
    return m_clusterName;
}

void InternalTenant::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool InternalTenant::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string InternalTenant::GetType() const
{
    return m_type;
}

void InternalTenant::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool InternalTenant::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t InternalTenant::GetMaxNamespaces() const
{
    return m_maxNamespaces;
}

void InternalTenant::SetMaxNamespaces(const int64_t& _maxNamespaces)
{
    m_maxNamespaces = _maxNamespaces;
    m_maxNamespacesHasBeenSet = true;
}

bool InternalTenant::MaxNamespacesHasBeenSet() const
{
    return m_maxNamespacesHasBeenSet;
}

int64_t InternalTenant::GetUsedNamespaces() const
{
    return m_usedNamespaces;
}

void InternalTenant::SetUsedNamespaces(const int64_t& _usedNamespaces)
{
    m_usedNamespaces = _usedNamespaces;
    m_usedNamespacesHasBeenSet = true;
}

bool InternalTenant::UsedNamespacesHasBeenSet() const
{
    return m_usedNamespacesHasBeenSet;
}

int64_t InternalTenant::GetMaxTopics() const
{
    return m_maxTopics;
}

void InternalTenant::SetMaxTopics(const int64_t& _maxTopics)
{
    m_maxTopics = _maxTopics;
    m_maxTopicsHasBeenSet = true;
}

bool InternalTenant::MaxTopicsHasBeenSet() const
{
    return m_maxTopicsHasBeenSet;
}

int64_t InternalTenant::GetUsedTopics() const
{
    return m_usedTopics;
}

void InternalTenant::SetUsedTopics(const int64_t& _usedTopics)
{
    m_usedTopics = _usedTopics;
    m_usedTopicsHasBeenSet = true;
}

bool InternalTenant::UsedTopicsHasBeenSet() const
{
    return m_usedTopicsHasBeenSet;
}

int64_t InternalTenant::GetMaxPartitions() const
{
    return m_maxPartitions;
}

void InternalTenant::SetMaxPartitions(const int64_t& _maxPartitions)
{
    m_maxPartitions = _maxPartitions;
    m_maxPartitionsHasBeenSet = true;
}

bool InternalTenant::MaxPartitionsHasBeenSet() const
{
    return m_maxPartitionsHasBeenSet;
}

int64_t InternalTenant::GetUsedPartitions() const
{
    return m_usedPartitions;
}

void InternalTenant::SetUsedPartitions(const int64_t& _usedPartitions)
{
    m_usedPartitions = _usedPartitions;
    m_usedPartitionsHasBeenSet = true;
}

bool InternalTenant::UsedPartitionsHasBeenSet() const
{
    return m_usedPartitionsHasBeenSet;
}

uint64_t InternalTenant::GetMaxMsgBacklogSize() const
{
    return m_maxMsgBacklogSize;
}

void InternalTenant::SetMaxMsgBacklogSize(const uint64_t& _maxMsgBacklogSize)
{
    m_maxMsgBacklogSize = _maxMsgBacklogSize;
    m_maxMsgBacklogSizeHasBeenSet = true;
}

bool InternalTenant::MaxMsgBacklogSizeHasBeenSet() const
{
    return m_maxMsgBacklogSizeHasBeenSet;
}

uint64_t InternalTenant::GetMaxPublishTps() const
{
    return m_maxPublishTps;
}

void InternalTenant::SetMaxPublishTps(const uint64_t& _maxPublishTps)
{
    m_maxPublishTps = _maxPublishTps;
    m_maxPublishTpsHasBeenSet = true;
}

bool InternalTenant::MaxPublishTpsHasBeenSet() const
{
    return m_maxPublishTpsHasBeenSet;
}

uint64_t InternalTenant::GetMaxRetention() const
{
    return m_maxRetention;
}

void InternalTenant::SetMaxRetention(const uint64_t& _maxRetention)
{
    m_maxRetention = _maxRetention;
    m_maxRetentionHasBeenSet = true;
}

bool InternalTenant::MaxRetentionHasBeenSet() const
{
    return m_maxRetentionHasBeenSet;
}

uint64_t InternalTenant::GetCreateTime() const
{
    return m_createTime;
}

void InternalTenant::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InternalTenant::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t InternalTenant::GetUpdateTime() const
{
    return m_updateTime;
}

void InternalTenant::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool InternalTenant::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t InternalTenant::GetMaxDispatchTps() const
{
    return m_maxDispatchTps;
}

void InternalTenant::SetMaxDispatchTps(const uint64_t& _maxDispatchTps)
{
    m_maxDispatchTps = _maxDispatchTps;
    m_maxDispatchTpsHasBeenSet = true;
}

bool InternalTenant::MaxDispatchTpsHasBeenSet() const
{
    return m_maxDispatchTpsHasBeenSet;
}

uint64_t InternalTenant::GetMaxDispatchRateInBytes() const
{
    return m_maxDispatchRateInBytes;
}

void InternalTenant::SetMaxDispatchRateInBytes(const uint64_t& _maxDispatchRateInBytes)
{
    m_maxDispatchRateInBytes = _maxDispatchRateInBytes;
    m_maxDispatchRateInBytesHasBeenSet = true;
}

bool InternalTenant::MaxDispatchRateInBytesHasBeenSet() const
{
    return m_maxDispatchRateInBytesHasBeenSet;
}

uint64_t InternalTenant::GetMaxPublishRateInBytes() const
{
    return m_maxPublishRateInBytes;
}

void InternalTenant::SetMaxPublishRateInBytes(const uint64_t& _maxPublishRateInBytes)
{
    m_maxPublishRateInBytes = _maxPublishRateInBytes;
    m_maxPublishRateInBytesHasBeenSet = true;
}

bool InternalTenant::MaxPublishRateInBytesHasBeenSet() const
{
    return m_maxPublishRateInBytesHasBeenSet;
}

uint64_t InternalTenant::GetMaxRetentionSizeInMB() const
{
    return m_maxRetentionSizeInMB;
}

void InternalTenant::SetMaxRetentionSizeInMB(const uint64_t& _maxRetentionSizeInMB)
{
    m_maxRetentionSizeInMB = _maxRetentionSizeInMB;
    m_maxRetentionSizeInMBHasBeenSet = true;
}

bool InternalTenant::MaxRetentionSizeInMBHasBeenSet() const
{
    return m_maxRetentionSizeInMBHasBeenSet;
}

bool InternalTenant::GetPublicAccessEnabled() const
{
    return m_publicAccessEnabled;
}

void InternalTenant::SetPublicAccessEnabled(const bool& _publicAccessEnabled)
{
    m_publicAccessEnabled = _publicAccessEnabled;
    m_publicAccessEnabledHasBeenSet = true;
}

bool InternalTenant::PublicAccessEnabledHasBeenSet() const
{
    return m_publicAccessEnabledHasBeenSet;
}

