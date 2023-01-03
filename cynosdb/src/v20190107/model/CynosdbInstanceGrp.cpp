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

#include <tencentcloud/cynosdb/v20190107/model/CynosdbInstanceGrp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CynosdbInstanceGrp::CynosdbInstanceGrp() :
    m_appIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_deletedTimeHasBeenSet(false),
    m_instanceGrpIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_wanDomainHasBeenSet(false),
    m_wanIPHasBeenSet(false),
    m_wanPortHasBeenSet(false),
    m_wanStatusHasBeenSet(false),
    m_instanceSetHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_oldAddrInfoHasBeenSet(false),
    m_processingTasksHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_netServiceIdHasBeenSet(false)
{
}

CoreInternalOutcome CynosdbInstanceGrp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceGrp.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceGrp.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceGrp.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("DeletedTime") && !value["DeletedTime"].IsNull())
    {
        if (!value["DeletedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceGrp.DeletedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deletedTime = string(value["DeletedTime"].GetString());
        m_deletedTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceGrpId") && !value["InstanceGrpId"].IsNull())
    {
        if (!value["InstanceGrpId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceGrp.InstanceGrpId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceGrpId = string(value["InstanceGrpId"].GetString());
        m_instanceGrpIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceGrp.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceGrp.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceGrp.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceGrp.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceGrp.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("WanDomain") && !value["WanDomain"].IsNull())
    {
        if (!value["WanDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceGrp.WanDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanDomain = string(value["WanDomain"].GetString());
        m_wanDomainHasBeenSet = true;
    }

    if (value.HasMember("WanIP") && !value["WanIP"].IsNull())
    {
        if (!value["WanIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceGrp.WanIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIP = string(value["WanIP"].GetString());
        m_wanIPHasBeenSet = true;
    }

    if (value.HasMember("WanPort") && !value["WanPort"].IsNull())
    {
        if (!value["WanPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceGrp.WanPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wanPort = value["WanPort"].GetInt64();
        m_wanPortHasBeenSet = true;
    }

    if (value.HasMember("WanStatus") && !value["WanStatus"].IsNull())
    {
        if (!value["WanStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceGrp.WanStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanStatus = string(value["WanStatus"].GetString());
        m_wanStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceSet") && !value["InstanceSet"].IsNull())
    {
        if (!value["InstanceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceGrp.InstanceSet` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CynosdbInstance item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceSet.push_back(item);
        }
        m_instanceSetHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceGrp.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("UniqSubnetId") && !value["UniqSubnetId"].IsNull())
    {
        if (!value["UniqSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceGrp.UniqSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqSubnetId = string(value["UniqSubnetId"].GetString());
        m_uniqSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("OldAddrInfo") && !value["OldAddrInfo"].IsNull())
    {
        if (!value["OldAddrInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceGrp.OldAddrInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_oldAddrInfo.Deserialize(value["OldAddrInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_oldAddrInfoHasBeenSet = true;
    }

    if (value.HasMember("ProcessingTasks") && !value["ProcessingTasks"].IsNull())
    {
        if (!value["ProcessingTasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceGrp.ProcessingTasks` is not array type"));

        const rapidjson::Value &tmpValue = value["ProcessingTasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_processingTasks.push_back((*itr).GetString());
        }
        m_processingTasksHasBeenSet = true;
    }

    if (value.HasMember("Tasks") && !value["Tasks"].IsNull())
    {
        if (!value["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceGrp.Tasks` is not array type"));

        const rapidjson::Value &tmpValue = value["Tasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ObjectTask item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tasks.push_back(item);
        }
        m_tasksHasBeenSet = true;
    }

    if (value.HasMember("NetServiceId") && !value["NetServiceId"].IsNull())
    {
        if (!value["NetServiceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceGrp.NetServiceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_netServiceId = value["NetServiceId"].GetInt64();
        m_netServiceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CynosdbInstanceGrp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deletedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deletedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceGrpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceGrpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceGrpId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

    if (m_wanDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_wanIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanIP.c_str(), allocator).Move(), allocator);
    }

    if (m_wanPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wanPort, allocator);
    }

    if (m_wanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceSet.begin(); itr != m_instanceSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_oldAddrInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldAddrInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oldAddrInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_processingTasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessingTasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_processingTasks.begin(); itr != m_processingTasks.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tasks.begin(); itr != m_tasks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_netServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_netServiceId, allocator);
    }

}


int64_t CynosdbInstanceGrp::GetAppId() const
{
    return m_appId;
}

void CynosdbInstanceGrp::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CynosdbInstanceGrp::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CynosdbInstanceGrp::GetClusterId() const
{
    return m_clusterId;
}

void CynosdbInstanceGrp::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CynosdbInstanceGrp::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CynosdbInstanceGrp::GetCreatedTime() const
{
    return m_createdTime;
}

void CynosdbInstanceGrp::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool CynosdbInstanceGrp::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string CynosdbInstanceGrp::GetDeletedTime() const
{
    return m_deletedTime;
}

void CynosdbInstanceGrp::SetDeletedTime(const string& _deletedTime)
{
    m_deletedTime = _deletedTime;
    m_deletedTimeHasBeenSet = true;
}

bool CynosdbInstanceGrp::DeletedTimeHasBeenSet() const
{
    return m_deletedTimeHasBeenSet;
}

string CynosdbInstanceGrp::GetInstanceGrpId() const
{
    return m_instanceGrpId;
}

void CynosdbInstanceGrp::SetInstanceGrpId(const string& _instanceGrpId)
{
    m_instanceGrpId = _instanceGrpId;
    m_instanceGrpIdHasBeenSet = true;
}

bool CynosdbInstanceGrp::InstanceGrpIdHasBeenSet() const
{
    return m_instanceGrpIdHasBeenSet;
}

string CynosdbInstanceGrp::GetStatus() const
{
    return m_status;
}

void CynosdbInstanceGrp::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CynosdbInstanceGrp::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CynosdbInstanceGrp::GetType() const
{
    return m_type;
}

void CynosdbInstanceGrp::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CynosdbInstanceGrp::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CynosdbInstanceGrp::GetUpdatedTime() const
{
    return m_updatedTime;
}

void CynosdbInstanceGrp::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool CynosdbInstanceGrp::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

string CynosdbInstanceGrp::GetVip() const
{
    return m_vip;
}

void CynosdbInstanceGrp::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool CynosdbInstanceGrp::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t CynosdbInstanceGrp::GetVport() const
{
    return m_vport;
}

void CynosdbInstanceGrp::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool CynosdbInstanceGrp::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string CynosdbInstanceGrp::GetWanDomain() const
{
    return m_wanDomain;
}

void CynosdbInstanceGrp::SetWanDomain(const string& _wanDomain)
{
    m_wanDomain = _wanDomain;
    m_wanDomainHasBeenSet = true;
}

bool CynosdbInstanceGrp::WanDomainHasBeenSet() const
{
    return m_wanDomainHasBeenSet;
}

string CynosdbInstanceGrp::GetWanIP() const
{
    return m_wanIP;
}

void CynosdbInstanceGrp::SetWanIP(const string& _wanIP)
{
    m_wanIP = _wanIP;
    m_wanIPHasBeenSet = true;
}

bool CynosdbInstanceGrp::WanIPHasBeenSet() const
{
    return m_wanIPHasBeenSet;
}

int64_t CynosdbInstanceGrp::GetWanPort() const
{
    return m_wanPort;
}

void CynosdbInstanceGrp::SetWanPort(const int64_t& _wanPort)
{
    m_wanPort = _wanPort;
    m_wanPortHasBeenSet = true;
}

bool CynosdbInstanceGrp::WanPortHasBeenSet() const
{
    return m_wanPortHasBeenSet;
}

string CynosdbInstanceGrp::GetWanStatus() const
{
    return m_wanStatus;
}

void CynosdbInstanceGrp::SetWanStatus(const string& _wanStatus)
{
    m_wanStatus = _wanStatus;
    m_wanStatusHasBeenSet = true;
}

bool CynosdbInstanceGrp::WanStatusHasBeenSet() const
{
    return m_wanStatusHasBeenSet;
}

vector<CynosdbInstance> CynosdbInstanceGrp::GetInstanceSet() const
{
    return m_instanceSet;
}

void CynosdbInstanceGrp::SetInstanceSet(const vector<CynosdbInstance>& _instanceSet)
{
    m_instanceSet = _instanceSet;
    m_instanceSetHasBeenSet = true;
}

bool CynosdbInstanceGrp::InstanceSetHasBeenSet() const
{
    return m_instanceSetHasBeenSet;
}

string CynosdbInstanceGrp::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void CynosdbInstanceGrp::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool CynosdbInstanceGrp::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string CynosdbInstanceGrp::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void CynosdbInstanceGrp::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool CynosdbInstanceGrp::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

OldAddrInfo CynosdbInstanceGrp::GetOldAddrInfo() const
{
    return m_oldAddrInfo;
}

void CynosdbInstanceGrp::SetOldAddrInfo(const OldAddrInfo& _oldAddrInfo)
{
    m_oldAddrInfo = _oldAddrInfo;
    m_oldAddrInfoHasBeenSet = true;
}

bool CynosdbInstanceGrp::OldAddrInfoHasBeenSet() const
{
    return m_oldAddrInfoHasBeenSet;
}

vector<string> CynosdbInstanceGrp::GetProcessingTasks() const
{
    return m_processingTasks;
}

void CynosdbInstanceGrp::SetProcessingTasks(const vector<string>& _processingTasks)
{
    m_processingTasks = _processingTasks;
    m_processingTasksHasBeenSet = true;
}

bool CynosdbInstanceGrp::ProcessingTasksHasBeenSet() const
{
    return m_processingTasksHasBeenSet;
}

vector<ObjectTask> CynosdbInstanceGrp::GetTasks() const
{
    return m_tasks;
}

void CynosdbInstanceGrp::SetTasks(const vector<ObjectTask>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool CynosdbInstanceGrp::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

int64_t CynosdbInstanceGrp::GetNetServiceId() const
{
    return m_netServiceId;
}

void CynosdbInstanceGrp::SetNetServiceId(const int64_t& _netServiceId)
{
    m_netServiceId = _netServiceId;
    m_netServiceIdHasBeenSet = true;
}

bool CynosdbInstanceGrp::NetServiceIdHasBeenSet() const
{
    return m_netServiceIdHasBeenSet;
}

