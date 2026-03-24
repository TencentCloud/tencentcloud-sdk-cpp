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

#include <tencentcloud/csip/v20221121/model/AIAgentAsset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AIAgentAsset::AIAgentAsset() :
    m_iDHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_agentModelHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_metadataRiskListHasBeenSet(false),
    m_identityTimeFirstHasBeenSet(false),
    m_identityTimeLastHasBeenSet(false),
    m_identityMethodHasBeenSet(false),
    m_exposureStatusHasBeenSet(false),
    m_metadataRiskURLHasBeenSet(false),
    m_skillStateHasBeenSet(false)
{
}

CoreInternalOutcome AIAgentAsset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIAgentAsset.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("AgentName") && !value["AgentName"].IsNull())
    {
        if (!value["AgentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIAgentAsset.AgentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentName = string(value["AgentName"].GetString());
        m_agentNameHasBeenSet = true;
    }

    if (value.HasMember("AgentModel") && !value["AgentModel"].IsNull())
    {
        if (!value["AgentModel"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIAgentAsset.AgentModel` is not array type"));

        const rapidjson::Value &tmpValue = value["AgentModel"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_agentModel.push_back((*itr).GetString());
        }
        m_agentModelHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIAgentAsset.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("MetadataRiskList") && !value["MetadataRiskList"].IsNull())
    {
        if (!value["MetadataRiskList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIAgentAsset.MetadataRiskList` is not array type"));

        const rapidjson::Value &tmpValue = value["MetadataRiskList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_metadataRiskList.push_back((*itr).GetString());
        }
        m_metadataRiskListHasBeenSet = true;
    }

    if (value.HasMember("IdentityTimeFirst") && !value["IdentityTimeFirst"].IsNull())
    {
        if (!value["IdentityTimeFirst"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIAgentAsset.IdentityTimeFirst` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityTimeFirst = string(value["IdentityTimeFirst"].GetString());
        m_identityTimeFirstHasBeenSet = true;
    }

    if (value.HasMember("IdentityTimeLast") && !value["IdentityTimeLast"].IsNull())
    {
        if (!value["IdentityTimeLast"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIAgentAsset.IdentityTimeLast` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityTimeLast = string(value["IdentityTimeLast"].GetString());
        m_identityTimeLastHasBeenSet = true;
    }

    if (value.HasMember("IdentityMethod") && !value["IdentityMethod"].IsNull())
    {
        if (!value["IdentityMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIAgentAsset.IdentityMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityMethod = string(value["IdentityMethod"].GetString());
        m_identityMethodHasBeenSet = true;
    }

    if (value.HasMember("ExposureStatus") && !value["ExposureStatus"].IsNull())
    {
        if (!value["ExposureStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIAgentAsset.ExposureStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exposureStatus = string(value["ExposureStatus"].GetString());
        m_exposureStatusHasBeenSet = true;
    }

    if (value.HasMember("MetadataRiskURL") && !value["MetadataRiskURL"].IsNull())
    {
        if (!value["MetadataRiskURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIAgentAsset.MetadataRiskURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metadataRiskURL = string(value["MetadataRiskURL"].GetString());
        m_metadataRiskURLHasBeenSet = true;
    }

    if (value.HasMember("SkillState") && !value["SkillState"].IsNull())
    {
        if (!value["SkillState"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIAgentAsset.SkillState` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_skillState.Deserialize(value["SkillState"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_skillStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIAgentAsset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_agentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentName.c_str(), allocator).Move(), allocator);
    }

    if (m_agentModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_agentModel.begin(); itr != m_agentModel.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_metadataRiskListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetadataRiskList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_metadataRiskList.begin(); itr != m_metadataRiskList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_identityTimeFirstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityTimeFirst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identityTimeFirst.c_str(), allocator).Move(), allocator);
    }

    if (m_identityTimeLastHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityTimeLast";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identityTimeLast.c_str(), allocator).Move(), allocator);
    }

    if (m_identityMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identityMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_exposureStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExposureStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exposureStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_metadataRiskURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetadataRiskURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metadataRiskURL.c_str(), allocator).Move(), allocator);
    }

    if (m_skillStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_skillState.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AIAgentAsset::GetID() const
{
    return m_iD;
}

void AIAgentAsset::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool AIAgentAsset::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string AIAgentAsset::GetAgentName() const
{
    return m_agentName;
}

void AIAgentAsset::SetAgentName(const string& _agentName)
{
    m_agentName = _agentName;
    m_agentNameHasBeenSet = true;
}

bool AIAgentAsset::AgentNameHasBeenSet() const
{
    return m_agentNameHasBeenSet;
}

vector<string> AIAgentAsset::GetAgentModel() const
{
    return m_agentModel;
}

void AIAgentAsset::SetAgentModel(const vector<string>& _agentModel)
{
    m_agentModel = _agentModel;
    m_agentModelHasBeenSet = true;
}

bool AIAgentAsset::AgentModelHasBeenSet() const
{
    return m_agentModelHasBeenSet;
}

string AIAgentAsset::GetInstanceID() const
{
    return m_instanceID;
}

void AIAgentAsset::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool AIAgentAsset::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

vector<string> AIAgentAsset::GetMetadataRiskList() const
{
    return m_metadataRiskList;
}

void AIAgentAsset::SetMetadataRiskList(const vector<string>& _metadataRiskList)
{
    m_metadataRiskList = _metadataRiskList;
    m_metadataRiskListHasBeenSet = true;
}

bool AIAgentAsset::MetadataRiskListHasBeenSet() const
{
    return m_metadataRiskListHasBeenSet;
}

string AIAgentAsset::GetIdentityTimeFirst() const
{
    return m_identityTimeFirst;
}

void AIAgentAsset::SetIdentityTimeFirst(const string& _identityTimeFirst)
{
    m_identityTimeFirst = _identityTimeFirst;
    m_identityTimeFirstHasBeenSet = true;
}

bool AIAgentAsset::IdentityTimeFirstHasBeenSet() const
{
    return m_identityTimeFirstHasBeenSet;
}

string AIAgentAsset::GetIdentityTimeLast() const
{
    return m_identityTimeLast;
}

void AIAgentAsset::SetIdentityTimeLast(const string& _identityTimeLast)
{
    m_identityTimeLast = _identityTimeLast;
    m_identityTimeLastHasBeenSet = true;
}

bool AIAgentAsset::IdentityTimeLastHasBeenSet() const
{
    return m_identityTimeLastHasBeenSet;
}

string AIAgentAsset::GetIdentityMethod() const
{
    return m_identityMethod;
}

void AIAgentAsset::SetIdentityMethod(const string& _identityMethod)
{
    m_identityMethod = _identityMethod;
    m_identityMethodHasBeenSet = true;
}

bool AIAgentAsset::IdentityMethodHasBeenSet() const
{
    return m_identityMethodHasBeenSet;
}

string AIAgentAsset::GetExposureStatus() const
{
    return m_exposureStatus;
}

void AIAgentAsset::SetExposureStatus(const string& _exposureStatus)
{
    m_exposureStatus = _exposureStatus;
    m_exposureStatusHasBeenSet = true;
}

bool AIAgentAsset::ExposureStatusHasBeenSet() const
{
    return m_exposureStatusHasBeenSet;
}

string AIAgentAsset::GetMetadataRiskURL() const
{
    return m_metadataRiskURL;
}

void AIAgentAsset::SetMetadataRiskURL(const string& _metadataRiskURL)
{
    m_metadataRiskURL = _metadataRiskURL;
    m_metadataRiskURLHasBeenSet = true;
}

bool AIAgentAsset::MetadataRiskURLHasBeenSet() const
{
    return m_metadataRiskURLHasBeenSet;
}

SkillState AIAgentAsset::GetSkillState() const
{
    return m_skillState;
}

void AIAgentAsset::SetSkillState(const SkillState& _skillState)
{
    m_skillState = _skillState;
    m_skillStateHasBeenSet = true;
}

bool AIAgentAsset::SkillStateHasBeenSet() const
{
    return m_skillStateHasBeenSet;
}

