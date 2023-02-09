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

#include <tencentcloud/dlc/v20210125/model/NetworkConnection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

NetworkConnection::NetworkConnection() :
    m_idHasBeenSet(false),
    m_associateIdHasBeenSet(false),
    m_houseIdHasBeenSet(false),
    m_datasourceConnectionIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_appidHasBeenSet(false),
    m_houseNameHasBeenSet(false),
    m_datasourceConnectionNameHasBeenSet(false),
    m_networkConnectionTypeHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_networkConnectionDescHasBeenSet(false),
    m_datasourceConnectionVpcIdHasBeenSet(false),
    m_datasourceConnectionSubnetIdHasBeenSet(false),
    m_datasourceConnectionCidrBlockHasBeenSet(false),
    m_datasourceConnectionSubnetCidrBlockHasBeenSet(false)
{
}

CoreInternalOutcome NetworkConnection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConnection.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AssociateId") && !value["AssociateId"].IsNull())
    {
        if (!value["AssociateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConnection.AssociateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_associateId = string(value["AssociateId"].GetString());
        m_associateIdHasBeenSet = true;
    }

    if (value.HasMember("HouseId") && !value["HouseId"].IsNull())
    {
        if (!value["HouseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConnection.HouseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_houseId = string(value["HouseId"].GetString());
        m_houseIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceConnectionId") && !value["DatasourceConnectionId"].IsNull())
    {
        if (!value["DatasourceConnectionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConnection.DatasourceConnectionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceConnectionId = string(value["DatasourceConnectionId"].GetString());
        m_datasourceConnectionIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConnection.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConnection.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConnection.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Appid") && !value["Appid"].IsNull())
    {
        if (!value["Appid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConnection.Appid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appid = value["Appid"].GetInt64();
        m_appidHasBeenSet = true;
    }

    if (value.HasMember("HouseName") && !value["HouseName"].IsNull())
    {
        if (!value["HouseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConnection.HouseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_houseName = string(value["HouseName"].GetString());
        m_houseNameHasBeenSet = true;
    }

    if (value.HasMember("DatasourceConnectionName") && !value["DatasourceConnectionName"].IsNull())
    {
        if (!value["DatasourceConnectionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConnection.DatasourceConnectionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceConnectionName = string(value["DatasourceConnectionName"].GetString());
        m_datasourceConnectionNameHasBeenSet = true;
    }

    if (value.HasMember("NetworkConnectionType") && !value["NetworkConnectionType"].IsNull())
    {
        if (!value["NetworkConnectionType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConnection.NetworkConnectionType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_networkConnectionType = value["NetworkConnectionType"].GetInt64();
        m_networkConnectionTypeHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConnection.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConnection.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (value.HasMember("NetworkConnectionDesc") && !value["NetworkConnectionDesc"].IsNull())
    {
        if (!value["NetworkConnectionDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConnection.NetworkConnectionDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkConnectionDesc = string(value["NetworkConnectionDesc"].GetString());
        m_networkConnectionDescHasBeenSet = true;
    }

    if (value.HasMember("DatasourceConnectionVpcId") && !value["DatasourceConnectionVpcId"].IsNull())
    {
        if (!value["DatasourceConnectionVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConnection.DatasourceConnectionVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceConnectionVpcId = string(value["DatasourceConnectionVpcId"].GetString());
        m_datasourceConnectionVpcIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceConnectionSubnetId") && !value["DatasourceConnectionSubnetId"].IsNull())
    {
        if (!value["DatasourceConnectionSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConnection.DatasourceConnectionSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceConnectionSubnetId = string(value["DatasourceConnectionSubnetId"].GetString());
        m_datasourceConnectionSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceConnectionCidrBlock") && !value["DatasourceConnectionCidrBlock"].IsNull())
    {
        if (!value["DatasourceConnectionCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConnection.DatasourceConnectionCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceConnectionCidrBlock = string(value["DatasourceConnectionCidrBlock"].GetString());
        m_datasourceConnectionCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("DatasourceConnectionSubnetCidrBlock") && !value["DatasourceConnectionSubnetCidrBlock"].IsNull())
    {
        if (!value["DatasourceConnectionSubnetCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConnection.DatasourceConnectionSubnetCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceConnectionSubnetCidrBlock = string(value["DatasourceConnectionSubnetCidrBlock"].GetString());
        m_datasourceConnectionSubnetCidrBlockHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkConnection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_associateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_associateId.c_str(), allocator).Move(), allocator);
    }

    if (m_houseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HouseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_houseId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceConnectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceConnectionId.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
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

    if (m_appidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Appid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appid, allocator);
    }

    if (m_houseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HouseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_houseName.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceConnectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_networkConnectionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkConnectionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkConnectionType, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_networkConnectionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkConnectionDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkConnectionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceConnectionVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceConnectionVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceConnectionSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceConnectionSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceConnectionCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceConnectionCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceConnectionSubnetCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionSubnetCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceConnectionSubnetCidrBlock.c_str(), allocator).Move(), allocator);
    }

}


int64_t NetworkConnection::GetId() const
{
    return m_id;
}

void NetworkConnection::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool NetworkConnection::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string NetworkConnection::GetAssociateId() const
{
    return m_associateId;
}

void NetworkConnection::SetAssociateId(const string& _associateId)
{
    m_associateId = _associateId;
    m_associateIdHasBeenSet = true;
}

bool NetworkConnection::AssociateIdHasBeenSet() const
{
    return m_associateIdHasBeenSet;
}

string NetworkConnection::GetHouseId() const
{
    return m_houseId;
}

void NetworkConnection::SetHouseId(const string& _houseId)
{
    m_houseId = _houseId;
    m_houseIdHasBeenSet = true;
}

bool NetworkConnection::HouseIdHasBeenSet() const
{
    return m_houseIdHasBeenSet;
}

string NetworkConnection::GetDatasourceConnectionId() const
{
    return m_datasourceConnectionId;
}

void NetworkConnection::SetDatasourceConnectionId(const string& _datasourceConnectionId)
{
    m_datasourceConnectionId = _datasourceConnectionId;
    m_datasourceConnectionIdHasBeenSet = true;
}

bool NetworkConnection::DatasourceConnectionIdHasBeenSet() const
{
    return m_datasourceConnectionIdHasBeenSet;
}

int64_t NetworkConnection::GetState() const
{
    return m_state;
}

void NetworkConnection::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool NetworkConnection::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

int64_t NetworkConnection::GetCreateTime() const
{
    return m_createTime;
}

void NetworkConnection::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NetworkConnection::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t NetworkConnection::GetUpdateTime() const
{
    return m_updateTime;
}

void NetworkConnection::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool NetworkConnection::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t NetworkConnection::GetAppid() const
{
    return m_appid;
}

void NetworkConnection::SetAppid(const int64_t& _appid)
{
    m_appid = _appid;
    m_appidHasBeenSet = true;
}

bool NetworkConnection::AppidHasBeenSet() const
{
    return m_appidHasBeenSet;
}

string NetworkConnection::GetHouseName() const
{
    return m_houseName;
}

void NetworkConnection::SetHouseName(const string& _houseName)
{
    m_houseName = _houseName;
    m_houseNameHasBeenSet = true;
}

bool NetworkConnection::HouseNameHasBeenSet() const
{
    return m_houseNameHasBeenSet;
}

string NetworkConnection::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void NetworkConnection::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool NetworkConnection::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}

int64_t NetworkConnection::GetNetworkConnectionType() const
{
    return m_networkConnectionType;
}

void NetworkConnection::SetNetworkConnectionType(const int64_t& _networkConnectionType)
{
    m_networkConnectionType = _networkConnectionType;
    m_networkConnectionTypeHasBeenSet = true;
}

bool NetworkConnection::NetworkConnectionTypeHasBeenSet() const
{
    return m_networkConnectionTypeHasBeenSet;
}

string NetworkConnection::GetUin() const
{
    return m_uin;
}

void NetworkConnection::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool NetworkConnection::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string NetworkConnection::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void NetworkConnection::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool NetworkConnection::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

string NetworkConnection::GetNetworkConnectionDesc() const
{
    return m_networkConnectionDesc;
}

void NetworkConnection::SetNetworkConnectionDesc(const string& _networkConnectionDesc)
{
    m_networkConnectionDesc = _networkConnectionDesc;
    m_networkConnectionDescHasBeenSet = true;
}

bool NetworkConnection::NetworkConnectionDescHasBeenSet() const
{
    return m_networkConnectionDescHasBeenSet;
}

string NetworkConnection::GetDatasourceConnectionVpcId() const
{
    return m_datasourceConnectionVpcId;
}

void NetworkConnection::SetDatasourceConnectionVpcId(const string& _datasourceConnectionVpcId)
{
    m_datasourceConnectionVpcId = _datasourceConnectionVpcId;
    m_datasourceConnectionVpcIdHasBeenSet = true;
}

bool NetworkConnection::DatasourceConnectionVpcIdHasBeenSet() const
{
    return m_datasourceConnectionVpcIdHasBeenSet;
}

string NetworkConnection::GetDatasourceConnectionSubnetId() const
{
    return m_datasourceConnectionSubnetId;
}

void NetworkConnection::SetDatasourceConnectionSubnetId(const string& _datasourceConnectionSubnetId)
{
    m_datasourceConnectionSubnetId = _datasourceConnectionSubnetId;
    m_datasourceConnectionSubnetIdHasBeenSet = true;
}

bool NetworkConnection::DatasourceConnectionSubnetIdHasBeenSet() const
{
    return m_datasourceConnectionSubnetIdHasBeenSet;
}

string NetworkConnection::GetDatasourceConnectionCidrBlock() const
{
    return m_datasourceConnectionCidrBlock;
}

void NetworkConnection::SetDatasourceConnectionCidrBlock(const string& _datasourceConnectionCidrBlock)
{
    m_datasourceConnectionCidrBlock = _datasourceConnectionCidrBlock;
    m_datasourceConnectionCidrBlockHasBeenSet = true;
}

bool NetworkConnection::DatasourceConnectionCidrBlockHasBeenSet() const
{
    return m_datasourceConnectionCidrBlockHasBeenSet;
}

string NetworkConnection::GetDatasourceConnectionSubnetCidrBlock() const
{
    return m_datasourceConnectionSubnetCidrBlock;
}

void NetworkConnection::SetDatasourceConnectionSubnetCidrBlock(const string& _datasourceConnectionSubnetCidrBlock)
{
    m_datasourceConnectionSubnetCidrBlock = _datasourceConnectionSubnetCidrBlock;
    m_datasourceConnectionSubnetCidrBlockHasBeenSet = true;
}

bool NetworkConnection::DatasourceConnectionSubnetCidrBlockHasBeenSet() const
{
    return m_datasourceConnectionSubnetCidrBlockHasBeenSet;
}

