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

#include <tencentcloud/mps/v20190612/model/ModifyInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ModifyInput::ModifyInput() :
    m_inputIdHasBeenSet(false),
    m_inputNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_allowIpListHasBeenSet(false),
    m_sRTSettingsHasBeenSet(false),
    m_rTPSettingsHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_failOverHasBeenSet(false),
    m_rTMPPullSettingsHasBeenSet(false),
    m_rTSPPullSettingsHasBeenSet(false),
    m_hLSPullSettingsHasBeenSet(false),
    m_resilientStreamHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_rISTSettingsHasBeenSet(false),
    m_inputRegionHasBeenSet(false)
{
}

CoreInternalOutcome ModifyInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputId") && !value["InputId"].IsNull())
    {
        if (!value["InputId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInput.InputId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputId = string(value["InputId"].GetString());
        m_inputIdHasBeenSet = true;
    }

    if (value.HasMember("InputName") && !value["InputName"].IsNull())
    {
        if (!value["InputName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInput.InputName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputName = string(value["InputName"].GetString());
        m_inputNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInput.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("AllowIpList") && !value["AllowIpList"].IsNull())
    {
        if (!value["AllowIpList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyInput.AllowIpList` is not array type"));

        const rapidjson::Value &tmpValue = value["AllowIpList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_allowIpList.push_back((*itr).GetString());
        }
        m_allowIpListHasBeenSet = true;
    }

    if (value.HasMember("SRTSettings") && !value["SRTSettings"].IsNull())
    {
        if (!value["SRTSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInput.SRTSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sRTSettings.Deserialize(value["SRTSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sRTSettingsHasBeenSet = true;
    }

    if (value.HasMember("RTPSettings") && !value["RTPSettings"].IsNull())
    {
        if (!value["RTPSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInput.RTPSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rTPSettings.Deserialize(value["RTPSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rTPSettingsHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInput.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("FailOver") && !value["FailOver"].IsNull())
    {
        if (!value["FailOver"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInput.FailOver` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failOver = string(value["FailOver"].GetString());
        m_failOverHasBeenSet = true;
    }

    if (value.HasMember("RTMPPullSettings") && !value["RTMPPullSettings"].IsNull())
    {
        if (!value["RTMPPullSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInput.RTMPPullSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rTMPPullSettings.Deserialize(value["RTMPPullSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rTMPPullSettingsHasBeenSet = true;
    }

    if (value.HasMember("RTSPPullSettings") && !value["RTSPPullSettings"].IsNull())
    {
        if (!value["RTSPPullSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInput.RTSPPullSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rTSPPullSettings.Deserialize(value["RTSPPullSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rTSPPullSettingsHasBeenSet = true;
    }

    if (value.HasMember("HLSPullSettings") && !value["HLSPullSettings"].IsNull())
    {
        if (!value["HLSPullSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInput.HLSPullSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hLSPullSettings.Deserialize(value["HLSPullSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hLSPullSettingsHasBeenSet = true;
    }

    if (value.HasMember("ResilientStream") && !value["ResilientStream"].IsNull())
    {
        if (!value["ResilientStream"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInput.ResilientStream` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resilientStream.Deserialize(value["ResilientStream"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resilientStreamHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupIds") && !value["SecurityGroupIds"].IsNull())
    {
        if (!value["SecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyInput.SecurityGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroupIds.push_back((*itr).GetString());
        }
        m_securityGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("Zones") && !value["Zones"].IsNull())
    {
        if (!value["Zones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyInput.Zones` is not array type"));

        const rapidjson::Value &tmpValue = value["Zones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_zones.push_back((*itr).GetString());
        }
        m_zonesHasBeenSet = true;
    }

    if (value.HasMember("RISTSettings") && !value["RISTSettings"].IsNull())
    {
        if (!value["RISTSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInput.RISTSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rISTSettings.Deserialize(value["RISTSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rISTSettingsHasBeenSet = true;
    }

    if (value.HasMember("InputRegion") && !value["InputRegion"].IsNull())
    {
        if (!value["InputRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInput.InputRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputRegion = string(value["InputRegion"].GetString());
        m_inputRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputId.c_str(), allocator).Move(), allocator);
    }

    if (m_inputNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_allowIpListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowIpList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowIpList.begin(); itr != m_allowIpList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sRTSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SRTSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sRTSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rTPSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTPSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rTPSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_failOverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailOver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failOver.c_str(), allocator).Move(), allocator);
    }

    if (m_rTMPPullSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTMPPullSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rTMPPullSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rTSPPullSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTSPPullSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rTSPPullSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hLSPullSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HLSPullSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hLSPullSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resilientStreamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResilientStream";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resilientStream.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_zonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_rISTSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RISTSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rISTSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_inputRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputRegion.c_str(), allocator).Move(), allocator);
    }

}


string ModifyInput::GetInputId() const
{
    return m_inputId;
}

void ModifyInput::SetInputId(const string& _inputId)
{
    m_inputId = _inputId;
    m_inputIdHasBeenSet = true;
}

bool ModifyInput::InputIdHasBeenSet() const
{
    return m_inputIdHasBeenSet;
}

string ModifyInput::GetInputName() const
{
    return m_inputName;
}

void ModifyInput::SetInputName(const string& _inputName)
{
    m_inputName = _inputName;
    m_inputNameHasBeenSet = true;
}

bool ModifyInput::InputNameHasBeenSet() const
{
    return m_inputNameHasBeenSet;
}

string ModifyInput::GetDescription() const
{
    return m_description;
}

void ModifyInput::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyInput::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> ModifyInput::GetAllowIpList() const
{
    return m_allowIpList;
}

void ModifyInput::SetAllowIpList(const vector<string>& _allowIpList)
{
    m_allowIpList = _allowIpList;
    m_allowIpListHasBeenSet = true;
}

bool ModifyInput::AllowIpListHasBeenSet() const
{
    return m_allowIpListHasBeenSet;
}

CreateInputSRTSettings ModifyInput::GetSRTSettings() const
{
    return m_sRTSettings;
}

void ModifyInput::SetSRTSettings(const CreateInputSRTSettings& _sRTSettings)
{
    m_sRTSettings = _sRTSettings;
    m_sRTSettingsHasBeenSet = true;
}

bool ModifyInput::SRTSettingsHasBeenSet() const
{
    return m_sRTSettingsHasBeenSet;
}

CreateInputRTPSettings ModifyInput::GetRTPSettings() const
{
    return m_rTPSettings;
}

void ModifyInput::SetRTPSettings(const CreateInputRTPSettings& _rTPSettings)
{
    m_rTPSettings = _rTPSettings;
    m_rTPSettingsHasBeenSet = true;
}

bool ModifyInput::RTPSettingsHasBeenSet() const
{
    return m_rTPSettingsHasBeenSet;
}

string ModifyInput::GetProtocol() const
{
    return m_protocol;
}

void ModifyInput::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ModifyInput::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string ModifyInput::GetFailOver() const
{
    return m_failOver;
}

void ModifyInput::SetFailOver(const string& _failOver)
{
    m_failOver = _failOver;
    m_failOverHasBeenSet = true;
}

bool ModifyInput::FailOverHasBeenSet() const
{
    return m_failOverHasBeenSet;
}

CreateInputRTMPPullSettings ModifyInput::GetRTMPPullSettings() const
{
    return m_rTMPPullSettings;
}

void ModifyInput::SetRTMPPullSettings(const CreateInputRTMPPullSettings& _rTMPPullSettings)
{
    m_rTMPPullSettings = _rTMPPullSettings;
    m_rTMPPullSettingsHasBeenSet = true;
}

bool ModifyInput::RTMPPullSettingsHasBeenSet() const
{
    return m_rTMPPullSettingsHasBeenSet;
}

CreateInputRTSPPullSettings ModifyInput::GetRTSPPullSettings() const
{
    return m_rTSPPullSettings;
}

void ModifyInput::SetRTSPPullSettings(const CreateInputRTSPPullSettings& _rTSPPullSettings)
{
    m_rTSPPullSettings = _rTSPPullSettings;
    m_rTSPPullSettingsHasBeenSet = true;
}

bool ModifyInput::RTSPPullSettingsHasBeenSet() const
{
    return m_rTSPPullSettingsHasBeenSet;
}

CreateInputHLSPullSettings ModifyInput::GetHLSPullSettings() const
{
    return m_hLSPullSettings;
}

void ModifyInput::SetHLSPullSettings(const CreateInputHLSPullSettings& _hLSPullSettings)
{
    m_hLSPullSettings = _hLSPullSettings;
    m_hLSPullSettingsHasBeenSet = true;
}

bool ModifyInput::HLSPullSettingsHasBeenSet() const
{
    return m_hLSPullSettingsHasBeenSet;
}

ResilientStreamConf ModifyInput::GetResilientStream() const
{
    return m_resilientStream;
}

void ModifyInput::SetResilientStream(const ResilientStreamConf& _resilientStream)
{
    m_resilientStream = _resilientStream;
    m_resilientStreamHasBeenSet = true;
}

bool ModifyInput::ResilientStreamHasBeenSet() const
{
    return m_resilientStreamHasBeenSet;
}

vector<string> ModifyInput::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void ModifyInput::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool ModifyInput::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

vector<string> ModifyInput::GetZones() const
{
    return m_zones;
}

void ModifyInput::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool ModifyInput::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

CreateInputRISTSettings ModifyInput::GetRISTSettings() const
{
    return m_rISTSettings;
}

void ModifyInput::SetRISTSettings(const CreateInputRISTSettings& _rISTSettings)
{
    m_rISTSettings = _rISTSettings;
    m_rISTSettingsHasBeenSet = true;
}

bool ModifyInput::RISTSettingsHasBeenSet() const
{
    return m_rISTSettingsHasBeenSet;
}

string ModifyInput::GetInputRegion() const
{
    return m_inputRegion;
}

void ModifyInput::SetInputRegion(const string& _inputRegion)
{
    m_inputRegion = _inputRegion;
    m_inputRegionHasBeenSet = true;
}

bool ModifyInput::InputRegionHasBeenSet() const
{
    return m_inputRegionHasBeenSet;
}

