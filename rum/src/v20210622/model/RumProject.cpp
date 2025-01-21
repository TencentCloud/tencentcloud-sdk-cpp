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

#include <tencentcloud/rum/v20210622/model/RumProject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

RumProject::RumProject() :
    m_nameHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_repoHasBeenSet(false),
    m_uRLHasBeenSet(false),
    m_rateHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_enableURLGroupHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_instanceKeyHasBeenSet(false),
    m_descHasBeenSet(false),
    m_isStarHasBeenSet(false),
    m_projectStatusHasBeenSet(false),
    m_accessPointHasBeenSet(false),
    m_kafkaHasBeenSet(false)
{
}

CoreInternalOutcome RumProject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RumProject.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RumProject.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RumProject.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RumProject.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RumProject.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Repo") && !value["Repo"].IsNull())
    {
        if (!value["Repo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RumProject.Repo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repo = string(value["Repo"].GetString());
        m_repoHasBeenSet = true;
    }

    if (value.HasMember("URL") && !value["URL"].IsNull())
    {
        if (!value["URL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RumProject.URL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uRL = string(value["URL"].GetString());
        m_uRLHasBeenSet = true;
    }

    if (value.HasMember("Rate") && !value["Rate"].IsNull())
    {
        if (!value["Rate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RumProject.Rate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rate = string(value["Rate"].GetString());
        m_rateHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RumProject.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("EnableURLGroup") && !value["EnableURLGroup"].IsNull())
    {
        if (!value["EnableURLGroup"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RumProject.EnableURLGroup` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableURLGroup = value["EnableURLGroup"].GetInt64();
        m_enableURLGroupHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RumProject.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RumProject.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("InstanceKey") && !value["InstanceKey"].IsNull())
    {
        if (!value["InstanceKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RumProject.InstanceKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceKey = string(value["InstanceKey"].GetString());
        m_instanceKeyHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RumProject.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("IsStar") && !value["IsStar"].IsNull())
    {
        if (!value["IsStar"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RumProject.IsStar` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isStar = value["IsStar"].GetInt64();
        m_isStarHasBeenSet = true;
    }

    if (value.HasMember("ProjectStatus") && !value["ProjectStatus"].IsNull())
    {
        if (!value["ProjectStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RumProject.ProjectStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectStatus = value["ProjectStatus"].GetInt64();
        m_projectStatusHasBeenSet = true;
    }

    if (value.HasMember("AccessPoint") && !value["AccessPoint"].IsNull())
    {
        if (!value["AccessPoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RumProject.AccessPoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessPoint = string(value["AccessPoint"].GetString());
        m_accessPointHasBeenSet = true;
    }

    if (value.HasMember("Kafka") && !value["Kafka"].IsNull())
    {
        if (!value["Kafka"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RumProject.Kafka` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_kafka.Deserialize(value["Kafka"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_kafkaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RumProject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_repoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Repo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repo.c_str(), allocator).Move(), allocator);
    }

    if (m_uRLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uRL.c_str(), allocator).Move(), allocator);
    }

    if (m_rateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rate.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_enableURLGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableURLGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableURLGroup, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_instanceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceKey.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_isStarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsStar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isStar, allocator);
    }

    if (m_projectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectStatus, allocator);
    }

    if (m_accessPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessPoint.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kafka";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_kafka.ToJsonObject(value[key.c_str()], allocator);
    }

}


string RumProject::GetName() const
{
    return m_name;
}

void RumProject::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RumProject::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RumProject::GetCreator() const
{
    return m_creator;
}

void RumProject::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool RumProject::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string RumProject::GetInstanceID() const
{
    return m_instanceID;
}

void RumProject::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool RumProject::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string RumProject::GetType() const
{
    return m_type;
}

void RumProject::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RumProject::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string RumProject::GetCreateTime() const
{
    return m_createTime;
}

void RumProject::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RumProject::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RumProject::GetRepo() const
{
    return m_repo;
}

void RumProject::SetRepo(const string& _repo)
{
    m_repo = _repo;
    m_repoHasBeenSet = true;
}

bool RumProject::RepoHasBeenSet() const
{
    return m_repoHasBeenSet;
}

string RumProject::GetURL() const
{
    return m_uRL;
}

void RumProject::SetURL(const string& _uRL)
{
    m_uRL = _uRL;
    m_uRLHasBeenSet = true;
}

bool RumProject::URLHasBeenSet() const
{
    return m_uRLHasBeenSet;
}

string RumProject::GetRate() const
{
    return m_rate;
}

void RumProject::SetRate(const string& _rate)
{
    m_rate = _rate;
    m_rateHasBeenSet = true;
}

bool RumProject::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

string RumProject::GetKey() const
{
    return m_key;
}

void RumProject::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool RumProject::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

int64_t RumProject::GetEnableURLGroup() const
{
    return m_enableURLGroup;
}

void RumProject::SetEnableURLGroup(const int64_t& _enableURLGroup)
{
    m_enableURLGroup = _enableURLGroup;
    m_enableURLGroupHasBeenSet = true;
}

bool RumProject::EnableURLGroupHasBeenSet() const
{
    return m_enableURLGroupHasBeenSet;
}

string RumProject::GetInstanceName() const
{
    return m_instanceName;
}

void RumProject::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool RumProject::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t RumProject::GetID() const
{
    return m_iD;
}

void RumProject::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool RumProject::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string RumProject::GetInstanceKey() const
{
    return m_instanceKey;
}

void RumProject::SetInstanceKey(const string& _instanceKey)
{
    m_instanceKey = _instanceKey;
    m_instanceKeyHasBeenSet = true;
}

bool RumProject::InstanceKeyHasBeenSet() const
{
    return m_instanceKeyHasBeenSet;
}

string RumProject::GetDesc() const
{
    return m_desc;
}

void RumProject::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool RumProject::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

int64_t RumProject::GetIsStar() const
{
    return m_isStar;
}

void RumProject::SetIsStar(const int64_t& _isStar)
{
    m_isStar = _isStar;
    m_isStarHasBeenSet = true;
}

bool RumProject::IsStarHasBeenSet() const
{
    return m_isStarHasBeenSet;
}

int64_t RumProject::GetProjectStatus() const
{
    return m_projectStatus;
}

void RumProject::SetProjectStatus(const int64_t& _projectStatus)
{
    m_projectStatus = _projectStatus;
    m_projectStatusHasBeenSet = true;
}

bool RumProject::ProjectStatusHasBeenSet() const
{
    return m_projectStatusHasBeenSet;
}

string RumProject::GetAccessPoint() const
{
    return m_accessPoint;
}

void RumProject::SetAccessPoint(const string& _accessPoint)
{
    m_accessPoint = _accessPoint;
    m_accessPointHasBeenSet = true;
}

bool RumProject::AccessPointHasBeenSet() const
{
    return m_accessPointHasBeenSet;
}

Kafka RumProject::GetKafka() const
{
    return m_kafka;
}

void RumProject::SetKafka(const Kafka& _kafka)
{
    m_kafka = _kafka;
    m_kafkaHasBeenSet = true;
}

bool RumProject::KafkaHasBeenSet() const
{
    return m_kafkaHasBeenSet;
}

