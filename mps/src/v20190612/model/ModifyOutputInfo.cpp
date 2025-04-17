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

#include <tencentcloud/mps/v20190612/model/ModifyOutputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ModifyOutputInfo::ModifyOutputInfo() :
    m_outputIdHasBeenSet(false),
    m_outputNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_outputKindHasBeenSet(false),
    m_sRTSettingsHasBeenSet(false),
    m_rTPSettingsHasBeenSet(false),
    m_rTMPSettingsHasBeenSet(false),
    m_allowIpListHasBeenSet(false),
    m_maxConcurrentHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_rISTSettingsHasBeenSet(false),
    m_outputTypeHasBeenSet(false),
    m_pidSelectorHasBeenSet(false)
{
}

CoreInternalOutcome ModifyOutputInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutputId") && !value["OutputId"].IsNull())
    {
        if (!value["OutputId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyOutputInfo.OutputId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputId = string(value["OutputId"].GetString());
        m_outputIdHasBeenSet = true;
    }

    if (value.HasMember("OutputName") && !value["OutputName"].IsNull())
    {
        if (!value["OutputName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyOutputInfo.OutputName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputName = string(value["OutputName"].GetString());
        m_outputNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyOutputInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyOutputInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("OutputKind") && !value["OutputKind"].IsNull())
    {
        if (!value["OutputKind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyOutputInfo.OutputKind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputKind = string(value["OutputKind"].GetString());
        m_outputKindHasBeenSet = true;
    }

    if (value.HasMember("SRTSettings") && !value["SRTSettings"].IsNull())
    {
        if (!value["SRTSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyOutputInfo.SRTSettings` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ModifyOutputInfo.RTPSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rTPSettings.Deserialize(value["RTPSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rTPSettingsHasBeenSet = true;
    }

    if (value.HasMember("RTMPSettings") && !value["RTMPSettings"].IsNull())
    {
        if (!value["RTMPSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyOutputInfo.RTMPSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rTMPSettings.Deserialize(value["RTMPSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rTMPSettingsHasBeenSet = true;
    }

    if (value.HasMember("AllowIpList") && !value["AllowIpList"].IsNull())
    {
        if (!value["AllowIpList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyOutputInfo.AllowIpList` is not array type"));

        const rapidjson::Value &tmpValue = value["AllowIpList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_allowIpList.push_back((*itr).GetString());
        }
        m_allowIpListHasBeenSet = true;
    }

    if (value.HasMember("MaxConcurrent") && !value["MaxConcurrent"].IsNull())
    {
        if (!value["MaxConcurrent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyOutputInfo.MaxConcurrent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConcurrent = value["MaxConcurrent"].GetUint64();
        m_maxConcurrentHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupIds") && !value["SecurityGroupIds"].IsNull())
    {
        if (!value["SecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyOutputInfo.SecurityGroupIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ModifyOutputInfo.Zones` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ModifyOutputInfo.RISTSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rISTSettings.Deserialize(value["RISTSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rISTSettingsHasBeenSet = true;
    }

    if (value.HasMember("OutputType") && !value["OutputType"].IsNull())
    {
        if (!value["OutputType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyOutputInfo.OutputType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputType = string(value["OutputType"].GetString());
        m_outputTypeHasBeenSet = true;
    }

    if (value.HasMember("PidSelector") && !value["PidSelector"].IsNull())
    {
        if (!value["PidSelector"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyOutputInfo.PidSelector` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pidSelector.Deserialize(value["PidSelector"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pidSelectorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyOutputInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outputIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputId.c_str(), allocator).Move(), allocator);
    }

    if (m_outputNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_outputKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputKind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputKind.c_str(), allocator).Move(), allocator);
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

    if (m_rTMPSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTMPSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rTMPSettings.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_maxConcurrentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConcurrent, allocator);
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

    if (m_outputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputType.c_str(), allocator).Move(), allocator);
    }

    if (m_pidSelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PidSelector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pidSelector.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ModifyOutputInfo::GetOutputId() const
{
    return m_outputId;
}

void ModifyOutputInfo::SetOutputId(const string& _outputId)
{
    m_outputId = _outputId;
    m_outputIdHasBeenSet = true;
}

bool ModifyOutputInfo::OutputIdHasBeenSet() const
{
    return m_outputIdHasBeenSet;
}

string ModifyOutputInfo::GetOutputName() const
{
    return m_outputName;
}

void ModifyOutputInfo::SetOutputName(const string& _outputName)
{
    m_outputName = _outputName;
    m_outputNameHasBeenSet = true;
}

bool ModifyOutputInfo::OutputNameHasBeenSet() const
{
    return m_outputNameHasBeenSet;
}

string ModifyOutputInfo::GetDescription() const
{
    return m_description;
}

void ModifyOutputInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyOutputInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyOutputInfo::GetProtocol() const
{
    return m_protocol;
}

void ModifyOutputInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ModifyOutputInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string ModifyOutputInfo::GetOutputKind() const
{
    return m_outputKind;
}

void ModifyOutputInfo::SetOutputKind(const string& _outputKind)
{
    m_outputKind = _outputKind;
    m_outputKindHasBeenSet = true;
}

bool ModifyOutputInfo::OutputKindHasBeenSet() const
{
    return m_outputKindHasBeenSet;
}

CreateOutputSRTSettings ModifyOutputInfo::GetSRTSettings() const
{
    return m_sRTSettings;
}

void ModifyOutputInfo::SetSRTSettings(const CreateOutputSRTSettings& _sRTSettings)
{
    m_sRTSettings = _sRTSettings;
    m_sRTSettingsHasBeenSet = true;
}

bool ModifyOutputInfo::SRTSettingsHasBeenSet() const
{
    return m_sRTSettingsHasBeenSet;
}

CreateOutputInfoRTPSettings ModifyOutputInfo::GetRTPSettings() const
{
    return m_rTPSettings;
}

void ModifyOutputInfo::SetRTPSettings(const CreateOutputInfoRTPSettings& _rTPSettings)
{
    m_rTPSettings = _rTPSettings;
    m_rTPSettingsHasBeenSet = true;
}

bool ModifyOutputInfo::RTPSettingsHasBeenSet() const
{
    return m_rTPSettingsHasBeenSet;
}

CreateOutputRTMPSettings ModifyOutputInfo::GetRTMPSettings() const
{
    return m_rTMPSettings;
}

void ModifyOutputInfo::SetRTMPSettings(const CreateOutputRTMPSettings& _rTMPSettings)
{
    m_rTMPSettings = _rTMPSettings;
    m_rTMPSettingsHasBeenSet = true;
}

bool ModifyOutputInfo::RTMPSettingsHasBeenSet() const
{
    return m_rTMPSettingsHasBeenSet;
}

vector<string> ModifyOutputInfo::GetAllowIpList() const
{
    return m_allowIpList;
}

void ModifyOutputInfo::SetAllowIpList(const vector<string>& _allowIpList)
{
    m_allowIpList = _allowIpList;
    m_allowIpListHasBeenSet = true;
}

bool ModifyOutputInfo::AllowIpListHasBeenSet() const
{
    return m_allowIpListHasBeenSet;
}

uint64_t ModifyOutputInfo::GetMaxConcurrent() const
{
    return m_maxConcurrent;
}

void ModifyOutputInfo::SetMaxConcurrent(const uint64_t& _maxConcurrent)
{
    m_maxConcurrent = _maxConcurrent;
    m_maxConcurrentHasBeenSet = true;
}

bool ModifyOutputInfo::MaxConcurrentHasBeenSet() const
{
    return m_maxConcurrentHasBeenSet;
}

vector<string> ModifyOutputInfo::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void ModifyOutputInfo::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool ModifyOutputInfo::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

vector<string> ModifyOutputInfo::GetZones() const
{
    return m_zones;
}

void ModifyOutputInfo::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool ModifyOutputInfo::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

CreateOutputRistSettings ModifyOutputInfo::GetRISTSettings() const
{
    return m_rISTSettings;
}

void ModifyOutputInfo::SetRISTSettings(const CreateOutputRistSettings& _rISTSettings)
{
    m_rISTSettings = _rISTSettings;
    m_rISTSettingsHasBeenSet = true;
}

bool ModifyOutputInfo::RISTSettingsHasBeenSet() const
{
    return m_rISTSettingsHasBeenSet;
}

string ModifyOutputInfo::GetOutputType() const
{
    return m_outputType;
}

void ModifyOutputInfo::SetOutputType(const string& _outputType)
{
    m_outputType = _outputType;
    m_outputTypeHasBeenSet = true;
}

bool ModifyOutputInfo::OutputTypeHasBeenSet() const
{
    return m_outputTypeHasBeenSet;
}

PidSelector ModifyOutputInfo::GetPidSelector() const
{
    return m_pidSelector;
}

void ModifyOutputInfo::SetPidSelector(const PidSelector& _pidSelector)
{
    m_pidSelector = _pidSelector;
    m_pidSelectorHasBeenSet = true;
}

bool ModifyOutputInfo::PidSelectorHasBeenSet() const
{
    return m_pidSelectorHasBeenSet;
}

