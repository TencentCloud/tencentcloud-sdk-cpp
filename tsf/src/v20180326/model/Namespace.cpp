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

#include <tencentcloud/tsf/v20180326/model/Namespace.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

Namespace::Namespace() :
    m_namespaceIdHasBeenSet(false),
    m_namespaceCodeHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_namespaceDescHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_namespaceStatusHasBeenSet(false),
    m_deleteFlagHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_clusterListHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_namespaceResourceTypeHasBeenSet(false),
    m_namespaceTypeHasBeenSet(false),
    m_isHaEnableHasBeenSet(false),
    m_kubeInjectEnableHasBeenSet(false)
{
}

CoreInternalOutcome Namespace::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Namespace.NamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = string(value["NamespaceId"].GetString());
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("NamespaceCode") && !value["NamespaceCode"].IsNull())
    {
        if (!value["NamespaceCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Namespace.NamespaceCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceCode = string(value["NamespaceCode"].GetString());
        m_namespaceCodeHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Namespace.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }

    if (value.HasMember("NamespaceDesc") && !value["NamespaceDesc"].IsNull())
    {
        if (!value["NamespaceDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Namespace.NamespaceDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceDesc = string(value["NamespaceDesc"].GetString());
        m_namespaceDescHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Namespace.IsDefault` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = string(value["IsDefault"].GetString());
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("NamespaceStatus") && !value["NamespaceStatus"].IsNull())
    {
        if (!value["NamespaceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Namespace.NamespaceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceStatus = string(value["NamespaceStatus"].GetString());
        m_namespaceStatusHasBeenSet = true;
    }

    if (value.HasMember("DeleteFlag") && !value["DeleteFlag"].IsNull())
    {
        if (!value["DeleteFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Namespace.DeleteFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleteFlag = value["DeleteFlag"].GetBool();
        m_deleteFlagHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Namespace.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Namespace.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ClusterList") && !value["ClusterList"].IsNull())
    {
        if (!value["ClusterList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Namespace.ClusterList` is not array type"));

        const rapidjson::Value &tmpValue = value["ClusterList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Cluster item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clusterList.push_back(item);
        }
        m_clusterListHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Namespace.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("NamespaceResourceType") && !value["NamespaceResourceType"].IsNull())
    {
        if (!value["NamespaceResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Namespace.NamespaceResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceResourceType = string(value["NamespaceResourceType"].GetString());
        m_namespaceResourceTypeHasBeenSet = true;
    }

    if (value.HasMember("NamespaceType") && !value["NamespaceType"].IsNull())
    {
        if (!value["NamespaceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Namespace.NamespaceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceType = string(value["NamespaceType"].GetString());
        m_namespaceTypeHasBeenSet = true;
    }

    if (value.HasMember("IsHaEnable") && !value["IsHaEnable"].IsNull())
    {
        if (!value["IsHaEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Namespace.IsHaEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isHaEnable = string(value["IsHaEnable"].GetString());
        m_isHaEnableHasBeenSet = true;
    }

    if (value.HasMember("KubeInjectEnable") && !value["KubeInjectEnable"].IsNull())
    {
        if (!value["KubeInjectEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Namespace.KubeInjectEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_kubeInjectEnable = value["KubeInjectEnable"].GetBool();
        m_kubeInjectEnableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Namespace::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceCode.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isDefault.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteFlag, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusterList.begin(); itr != m_clusterList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceType.c_str(), allocator).Move(), allocator);
    }

    if (m_isHaEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsHaEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isHaEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_kubeInjectEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KubeInjectEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kubeInjectEnable, allocator);
    }

}


string Namespace::GetNamespaceId() const
{
    return m_namespaceId;
}

void Namespace::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool Namespace::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string Namespace::GetNamespaceCode() const
{
    return m_namespaceCode;
}

void Namespace::SetNamespaceCode(const string& _namespaceCode)
{
    m_namespaceCode = _namespaceCode;
    m_namespaceCodeHasBeenSet = true;
}

bool Namespace::NamespaceCodeHasBeenSet() const
{
    return m_namespaceCodeHasBeenSet;
}

string Namespace::GetNamespaceName() const
{
    return m_namespaceName;
}

void Namespace::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool Namespace::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

string Namespace::GetNamespaceDesc() const
{
    return m_namespaceDesc;
}

void Namespace::SetNamespaceDesc(const string& _namespaceDesc)
{
    m_namespaceDesc = _namespaceDesc;
    m_namespaceDescHasBeenSet = true;
}

bool Namespace::NamespaceDescHasBeenSet() const
{
    return m_namespaceDescHasBeenSet;
}

string Namespace::GetIsDefault() const
{
    return m_isDefault;
}

void Namespace::SetIsDefault(const string& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool Namespace::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

string Namespace::GetNamespaceStatus() const
{
    return m_namespaceStatus;
}

void Namespace::SetNamespaceStatus(const string& _namespaceStatus)
{
    m_namespaceStatus = _namespaceStatus;
    m_namespaceStatusHasBeenSet = true;
}

bool Namespace::NamespaceStatusHasBeenSet() const
{
    return m_namespaceStatusHasBeenSet;
}

bool Namespace::GetDeleteFlag() const
{
    return m_deleteFlag;
}

void Namespace::SetDeleteFlag(const bool& _deleteFlag)
{
    m_deleteFlag = _deleteFlag;
    m_deleteFlagHasBeenSet = true;
}

bool Namespace::DeleteFlagHasBeenSet() const
{
    return m_deleteFlagHasBeenSet;
}

string Namespace::GetCreateTime() const
{
    return m_createTime;
}

void Namespace::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Namespace::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Namespace::GetUpdateTime() const
{
    return m_updateTime;
}

void Namespace::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Namespace::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<Cluster> Namespace::GetClusterList() const
{
    return m_clusterList;
}

void Namespace::SetClusterList(const vector<Cluster>& _clusterList)
{
    m_clusterList = _clusterList;
    m_clusterListHasBeenSet = true;
}

bool Namespace::ClusterListHasBeenSet() const
{
    return m_clusterListHasBeenSet;
}

string Namespace::GetClusterId() const
{
    return m_clusterId;
}

void Namespace::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool Namespace::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string Namespace::GetNamespaceResourceType() const
{
    return m_namespaceResourceType;
}

void Namespace::SetNamespaceResourceType(const string& _namespaceResourceType)
{
    m_namespaceResourceType = _namespaceResourceType;
    m_namespaceResourceTypeHasBeenSet = true;
}

bool Namespace::NamespaceResourceTypeHasBeenSet() const
{
    return m_namespaceResourceTypeHasBeenSet;
}

string Namespace::GetNamespaceType() const
{
    return m_namespaceType;
}

void Namespace::SetNamespaceType(const string& _namespaceType)
{
    m_namespaceType = _namespaceType;
    m_namespaceTypeHasBeenSet = true;
}

bool Namespace::NamespaceTypeHasBeenSet() const
{
    return m_namespaceTypeHasBeenSet;
}

string Namespace::GetIsHaEnable() const
{
    return m_isHaEnable;
}

void Namespace::SetIsHaEnable(const string& _isHaEnable)
{
    m_isHaEnable = _isHaEnable;
    m_isHaEnableHasBeenSet = true;
}

bool Namespace::IsHaEnableHasBeenSet() const
{
    return m_isHaEnableHasBeenSet;
}

bool Namespace::GetKubeInjectEnable() const
{
    return m_kubeInjectEnable;
}

void Namespace::SetKubeInjectEnable(const bool& _kubeInjectEnable)
{
    m_kubeInjectEnable = _kubeInjectEnable;
    m_kubeInjectEnableHasBeenSet = true;
}

bool Namespace::KubeInjectEnableHasBeenSet() const
{
    return m_kubeInjectEnableHasBeenSet;
}

