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

#include <tencentcloud/dlc/v20210125/model/DatasourceConnectionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DatasourceConnectionInfo::DatasourceConnectionInfo() :
    m_idHasBeenSet(false),
    m_datasourceConnectionIdHasBeenSet(false),
    m_datasourceConnectionNameHasBeenSet(false),
    m_datasourceConnectionDescHasBeenSet(false),
    m_datasourceConnectionTypeHasBeenSet(false),
    m_datasourceConnectionConfigHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_dataEnginesHasBeenSet(false),
    m_userAliasHasBeenSet(false),
    m_networkConnectionSetHasBeenSet(false),
    m_connectivityStateHasBeenSet(false),
    m_connectivityTipsHasBeenSet(false)
{
}

CoreInternalOutcome DatasourceConnectionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DatasourceConnectionId") && !value["DatasourceConnectionId"].IsNull())
    {
        if (!value["DatasourceConnectionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionInfo.DatasourceConnectionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceConnectionId = string(value["DatasourceConnectionId"].GetString());
        m_datasourceConnectionIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceConnectionName") && !value["DatasourceConnectionName"].IsNull())
    {
        if (!value["DatasourceConnectionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionInfo.DatasourceConnectionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceConnectionName = string(value["DatasourceConnectionName"].GetString());
        m_datasourceConnectionNameHasBeenSet = true;
    }

    if (value.HasMember("DatasourceConnectionDesc") && !value["DatasourceConnectionDesc"].IsNull())
    {
        if (!value["DatasourceConnectionDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionInfo.DatasourceConnectionDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceConnectionDesc = string(value["DatasourceConnectionDesc"].GetString());
        m_datasourceConnectionDescHasBeenSet = true;
    }

    if (value.HasMember("DatasourceConnectionType") && !value["DatasourceConnectionType"].IsNull())
    {
        if (!value["DatasourceConnectionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionInfo.DatasourceConnectionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceConnectionType = string(value["DatasourceConnectionType"].GetString());
        m_datasourceConnectionTypeHasBeenSet = true;
    }

    if (value.HasMember("DatasourceConnectionConfig") && !value["DatasourceConnectionConfig"].IsNull())
    {
        if (!value["DatasourceConnectionConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionInfo.DatasourceConnectionConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_datasourceConnectionConfig.Deserialize(value["DatasourceConnectionConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_datasourceConnectionConfigHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionInfo.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionInfo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionInfo.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("DataEngines") && !value["DataEngines"].IsNull())
    {
        if (!value["DataEngines"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionInfo.DataEngines` is not array type"));

        const rapidjson::Value &tmpValue = value["DataEngines"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataEngineInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataEngines.push_back(item);
        }
        m_dataEnginesHasBeenSet = true;
    }

    if (value.HasMember("UserAlias") && !value["UserAlias"].IsNull())
    {
        if (!value["UserAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionInfo.UserAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAlias = string(value["UserAlias"].GetString());
        m_userAliasHasBeenSet = true;
    }

    if (value.HasMember("NetworkConnectionSet") && !value["NetworkConnectionSet"].IsNull())
    {
        if (!value["NetworkConnectionSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionInfo.NetworkConnectionSet` is not array type"));

        const rapidjson::Value &tmpValue = value["NetworkConnectionSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NetworkConnection item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_networkConnectionSet.push_back(item);
        }
        m_networkConnectionSetHasBeenSet = true;
    }

    if (value.HasMember("ConnectivityState") && !value["ConnectivityState"].IsNull())
    {
        if (!value["ConnectivityState"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionInfo.ConnectivityState` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_connectivityState = value["ConnectivityState"].GetUint64();
        m_connectivityStateHasBeenSet = true;
    }

    if (value.HasMember("ConnectivityTips") && !value["ConnectivityTips"].IsNull())
    {
        if (!value["ConnectivityTips"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionInfo.ConnectivityTips` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectivityTips = string(value["ConnectivityTips"].GetString());
        m_connectivityTipsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatasourceConnectionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_datasourceConnectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceConnectionId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceConnectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceConnectionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceConnectionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceConnectionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceConnectionType.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceConnectionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_datasourceConnectionConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
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

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEnginesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngines";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataEngines.begin(); itr != m_dataEngines.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_userAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_networkConnectionSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkConnectionSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_networkConnectionSet.begin(); itr != m_networkConnectionSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_connectivityStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectivityState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectivityState, allocator);
    }

    if (m_connectivityTipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectivityTips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectivityTips.c_str(), allocator).Move(), allocator);
    }

}


int64_t DatasourceConnectionInfo::GetId() const
{
    return m_id;
}

void DatasourceConnectionInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DatasourceConnectionInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DatasourceConnectionInfo::GetDatasourceConnectionId() const
{
    return m_datasourceConnectionId;
}

void DatasourceConnectionInfo::SetDatasourceConnectionId(const string& _datasourceConnectionId)
{
    m_datasourceConnectionId = _datasourceConnectionId;
    m_datasourceConnectionIdHasBeenSet = true;
}

bool DatasourceConnectionInfo::DatasourceConnectionIdHasBeenSet() const
{
    return m_datasourceConnectionIdHasBeenSet;
}

string DatasourceConnectionInfo::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void DatasourceConnectionInfo::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool DatasourceConnectionInfo::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}

string DatasourceConnectionInfo::GetDatasourceConnectionDesc() const
{
    return m_datasourceConnectionDesc;
}

void DatasourceConnectionInfo::SetDatasourceConnectionDesc(const string& _datasourceConnectionDesc)
{
    m_datasourceConnectionDesc = _datasourceConnectionDesc;
    m_datasourceConnectionDescHasBeenSet = true;
}

bool DatasourceConnectionInfo::DatasourceConnectionDescHasBeenSet() const
{
    return m_datasourceConnectionDescHasBeenSet;
}

string DatasourceConnectionInfo::GetDatasourceConnectionType() const
{
    return m_datasourceConnectionType;
}

void DatasourceConnectionInfo::SetDatasourceConnectionType(const string& _datasourceConnectionType)
{
    m_datasourceConnectionType = _datasourceConnectionType;
    m_datasourceConnectionTypeHasBeenSet = true;
}

bool DatasourceConnectionInfo::DatasourceConnectionTypeHasBeenSet() const
{
    return m_datasourceConnectionTypeHasBeenSet;
}

DatasourceConnectionConfig DatasourceConnectionInfo::GetDatasourceConnectionConfig() const
{
    return m_datasourceConnectionConfig;
}

void DatasourceConnectionInfo::SetDatasourceConnectionConfig(const DatasourceConnectionConfig& _datasourceConnectionConfig)
{
    m_datasourceConnectionConfig = _datasourceConnectionConfig;
    m_datasourceConnectionConfigHasBeenSet = true;
}

bool DatasourceConnectionInfo::DatasourceConnectionConfigHasBeenSet() const
{
    return m_datasourceConnectionConfigHasBeenSet;
}

int64_t DatasourceConnectionInfo::GetState() const
{
    return m_state;
}

void DatasourceConnectionInfo::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DatasourceConnectionInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string DatasourceConnectionInfo::GetRegion() const
{
    return m_region;
}

void DatasourceConnectionInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DatasourceConnectionInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DatasourceConnectionInfo::GetAppId() const
{
    return m_appId;
}

void DatasourceConnectionInfo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DatasourceConnectionInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DatasourceConnectionInfo::GetCreateTime() const
{
    return m_createTime;
}

void DatasourceConnectionInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DatasourceConnectionInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DatasourceConnectionInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void DatasourceConnectionInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DatasourceConnectionInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DatasourceConnectionInfo::GetMessage() const
{
    return m_message;
}

void DatasourceConnectionInfo::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool DatasourceConnectionInfo::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

vector<DataEngineInfo> DatasourceConnectionInfo::GetDataEngines() const
{
    return m_dataEngines;
}

void DatasourceConnectionInfo::SetDataEngines(const vector<DataEngineInfo>& _dataEngines)
{
    m_dataEngines = _dataEngines;
    m_dataEnginesHasBeenSet = true;
}

bool DatasourceConnectionInfo::DataEnginesHasBeenSet() const
{
    return m_dataEnginesHasBeenSet;
}

string DatasourceConnectionInfo::GetUserAlias() const
{
    return m_userAlias;
}

void DatasourceConnectionInfo::SetUserAlias(const string& _userAlias)
{
    m_userAlias = _userAlias;
    m_userAliasHasBeenSet = true;
}

bool DatasourceConnectionInfo::UserAliasHasBeenSet() const
{
    return m_userAliasHasBeenSet;
}

vector<NetworkConnection> DatasourceConnectionInfo::GetNetworkConnectionSet() const
{
    return m_networkConnectionSet;
}

void DatasourceConnectionInfo::SetNetworkConnectionSet(const vector<NetworkConnection>& _networkConnectionSet)
{
    m_networkConnectionSet = _networkConnectionSet;
    m_networkConnectionSetHasBeenSet = true;
}

bool DatasourceConnectionInfo::NetworkConnectionSetHasBeenSet() const
{
    return m_networkConnectionSetHasBeenSet;
}

uint64_t DatasourceConnectionInfo::GetConnectivityState() const
{
    return m_connectivityState;
}

void DatasourceConnectionInfo::SetConnectivityState(const uint64_t& _connectivityState)
{
    m_connectivityState = _connectivityState;
    m_connectivityStateHasBeenSet = true;
}

bool DatasourceConnectionInfo::ConnectivityStateHasBeenSet() const
{
    return m_connectivityStateHasBeenSet;
}

string DatasourceConnectionInfo::GetConnectivityTips() const
{
    return m_connectivityTips;
}

void DatasourceConnectionInfo::SetConnectivityTips(const string& _connectivityTips)
{
    m_connectivityTips = _connectivityTips;
    m_connectivityTipsHasBeenSet = true;
}

bool DatasourceConnectionInfo::ConnectivityTipsHasBeenSet() const
{
    return m_connectivityTipsHasBeenSet;
}

