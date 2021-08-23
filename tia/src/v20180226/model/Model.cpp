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

#include <tencentcloud/tia/v20180226/model/Model.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tia::V20180226::Model;
using namespace std;

Model::Model() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_clusterHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_runtimeVersionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_servingUrlHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_servTypeHasBeenSet(false),
    m_exposeHasBeenSet(false),
    m_replicasHasBeenSet(false),
    m_idHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_delTimeHasBeenSet(false)
{
}

CoreInternalOutcome Model::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Cluster") && !value["Cluster"].IsNull())
    {
        if (!value["Cluster"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.Cluster` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cluster = string(value["Cluster"].GetString());
        m_clusterHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("RuntimeVersion") && !value["RuntimeVersion"].IsNull())
    {
        if (!value["RuntimeVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.RuntimeVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeVersion = string(value["RuntimeVersion"].GetString());
        m_runtimeVersionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("ServingUrl") && !value["ServingUrl"].IsNull())
    {
        if (!value["ServingUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.ServingUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_servingUrl = string(value["ServingUrl"].GetString());
        m_servingUrlHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Model.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ServType") && !value["ServType"].IsNull())
    {
        if (!value["ServType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.ServType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_servType = string(value["ServType"].GetString());
        m_servTypeHasBeenSet = true;
    }

    if (value.HasMember("Expose") && !value["Expose"].IsNull())
    {
        if (!value["Expose"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.Expose` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expose = string(value["Expose"].GetString());
        m_exposeHasBeenSet = true;
    }

    if (value.HasMember("Replicas") && !value["Replicas"].IsNull())
    {
        if (!value["Replicas"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Model.Replicas` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_replicas = value["Replicas"].GetUint64();
        m_replicasHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("DelTime") && !value["DelTime"].IsNull())
    {
        if (!value["DelTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.DelTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_delTime = string(value["DelTime"].GetString());
        m_delTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Model::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_clusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cluster.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtimeVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_servingUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServingUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_servingUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_servTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_servType.c_str(), allocator).Move(), allocator);
    }

    if (m_exposeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expose.c_str(), allocator).Move(), allocator);
    }

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicas, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_delTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_delTime.c_str(), allocator).Move(), allocator);
    }

}


string Model::GetName() const
{
    return m_name;
}

void Model::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Model::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Model::GetDescription() const
{
    return m_description;
}

void Model::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Model::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Model::GetCluster() const
{
    return m_cluster;
}

void Model::SetCluster(const string& _cluster)
{
    m_cluster = _cluster;
    m_clusterHasBeenSet = true;
}

bool Model::ClusterHasBeenSet() const
{
    return m_clusterHasBeenSet;
}

string Model::GetModel() const
{
    return m_model;
}

void Model::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool Model::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string Model::GetRuntimeVersion() const
{
    return m_runtimeVersion;
}

void Model::SetRuntimeVersion(const string& _runtimeVersion)
{
    m_runtimeVersion = _runtimeVersion;
    m_runtimeVersionHasBeenSet = true;
}

bool Model::RuntimeVersionHasBeenSet() const
{
    return m_runtimeVersionHasBeenSet;
}

string Model::GetCreateTime() const
{
    return m_createTime;
}

void Model::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Model::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Model::GetState() const
{
    return m_state;
}

void Model::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool Model::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string Model::GetServingUrl() const
{
    return m_servingUrl;
}

void Model::SetServingUrl(const string& _servingUrl)
{
    m_servingUrl = _servingUrl;
    m_servingUrlHasBeenSet = true;
}

bool Model::ServingUrlHasBeenSet() const
{
    return m_servingUrlHasBeenSet;
}

string Model::GetMessage() const
{
    return m_message;
}

void Model::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool Model::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

uint64_t Model::GetAppId() const
{
    return m_appId;
}

void Model::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool Model::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string Model::GetServType() const
{
    return m_servType;
}

void Model::SetServType(const string& _servType)
{
    m_servType = _servType;
    m_servTypeHasBeenSet = true;
}

bool Model::ServTypeHasBeenSet() const
{
    return m_servTypeHasBeenSet;
}

string Model::GetExpose() const
{
    return m_expose;
}

void Model::SetExpose(const string& _expose)
{
    m_expose = _expose;
    m_exposeHasBeenSet = true;
}

bool Model::ExposeHasBeenSet() const
{
    return m_exposeHasBeenSet;
}

uint64_t Model::GetReplicas() const
{
    return m_replicas;
}

void Model::SetReplicas(const uint64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool Model::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

string Model::GetId() const
{
    return m_id;
}

void Model::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Model::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Model::GetUin() const
{
    return m_uin;
}

void Model::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool Model::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string Model::GetDelTime() const
{
    return m_delTime;
}

void Model::SetDelTime(const string& _delTime)
{
    m_delTime = _delTime;
    m_delTimeHasBeenSet = true;
}

bool Model::DelTimeHasBeenSet() const
{
    return m_delTimeHasBeenSet;
}

