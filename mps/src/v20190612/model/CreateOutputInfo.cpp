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

#include <tencentcloud/mps/v20190612/model/CreateOutputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CreateOutputInfo::CreateOutputInfo() :
    m_outputNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_outputRegionHasBeenSet(false),
    m_outputTypeHasBeenSet(false),
    m_outputKindHasBeenSet(false),
    m_sRTSettingsHasBeenSet(false),
    m_rTMPSettingsHasBeenSet(false),
    m_rTPSettingsHasBeenSet(false),
    m_allowIpListHasBeenSet(false),
    m_maxConcurrentHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_rISTSettingsHasBeenSet(false),
    m_pidSelectorHasBeenSet(false)
{
}

CoreInternalOutcome CreateOutputInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutputName") && !value["OutputName"].IsNull())
    {
        if (!value["OutputName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOutputInfo.OutputName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputName = string(value["OutputName"].GetString());
        m_outputNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOutputInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOutputInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("OutputRegion") && !value["OutputRegion"].IsNull())
    {
        if (!value["OutputRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOutputInfo.OutputRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputRegion = string(value["OutputRegion"].GetString());
        m_outputRegionHasBeenSet = true;
    }

    if (value.HasMember("OutputType") && !value["OutputType"].IsNull())
    {
        if (!value["OutputType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOutputInfo.OutputType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputType = string(value["OutputType"].GetString());
        m_outputTypeHasBeenSet = true;
    }

    if (value.HasMember("OutputKind") && !value["OutputKind"].IsNull())
    {
        if (!value["OutputKind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOutputInfo.OutputKind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputKind = string(value["OutputKind"].GetString());
        m_outputKindHasBeenSet = true;
    }

    if (value.HasMember("SRTSettings") && !value["SRTSettings"].IsNull())
    {
        if (!value["SRTSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOutputInfo.SRTSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sRTSettings.Deserialize(value["SRTSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sRTSettingsHasBeenSet = true;
    }

    if (value.HasMember("RTMPSettings") && !value["RTMPSettings"].IsNull())
    {
        if (!value["RTMPSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOutputInfo.RTMPSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rTMPSettings.Deserialize(value["RTMPSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rTMPSettingsHasBeenSet = true;
    }

    if (value.HasMember("RTPSettings") && !value["RTPSettings"].IsNull())
    {
        if (!value["RTPSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOutputInfo.RTPSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rTPSettings.Deserialize(value["RTPSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rTPSettingsHasBeenSet = true;
    }

    if (value.HasMember("AllowIpList") && !value["AllowIpList"].IsNull())
    {
        if (!value["AllowIpList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateOutputInfo.AllowIpList` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `CreateOutputInfo.MaxConcurrent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConcurrent = value["MaxConcurrent"].GetUint64();
        m_maxConcurrentHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupIds") && !value["SecurityGroupIds"].IsNull())
    {
        if (!value["SecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateOutputInfo.SecurityGroupIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `CreateOutputInfo.Zones` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `CreateOutputInfo.RISTSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rISTSettings.Deserialize(value["RISTSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rISTSettingsHasBeenSet = true;
    }

    if (value.HasMember("PidSelector") && !value["PidSelector"].IsNull())
    {
        if (!value["PidSelector"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOutputInfo.PidSelector` is not object type").SetRequestId(requestId));
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

void CreateOutputInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_outputRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_outputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputType.c_str(), allocator).Move(), allocator);
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

    if (m_rTMPSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTMPSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rTMPSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rTPSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTPSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rTPSettings.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_pidSelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PidSelector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pidSelector.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CreateOutputInfo::GetOutputName() const
{
    return m_outputName;
}

void CreateOutputInfo::SetOutputName(const string& _outputName)
{
    m_outputName = _outputName;
    m_outputNameHasBeenSet = true;
}

bool CreateOutputInfo::OutputNameHasBeenSet() const
{
    return m_outputNameHasBeenSet;
}

string CreateOutputInfo::GetDescription() const
{
    return m_description;
}

void CreateOutputInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateOutputInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateOutputInfo::GetProtocol() const
{
    return m_protocol;
}

void CreateOutputInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateOutputInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string CreateOutputInfo::GetOutputRegion() const
{
    return m_outputRegion;
}

void CreateOutputInfo::SetOutputRegion(const string& _outputRegion)
{
    m_outputRegion = _outputRegion;
    m_outputRegionHasBeenSet = true;
}

bool CreateOutputInfo::OutputRegionHasBeenSet() const
{
    return m_outputRegionHasBeenSet;
}

string CreateOutputInfo::GetOutputType() const
{
    return m_outputType;
}

void CreateOutputInfo::SetOutputType(const string& _outputType)
{
    m_outputType = _outputType;
    m_outputTypeHasBeenSet = true;
}

bool CreateOutputInfo::OutputTypeHasBeenSet() const
{
    return m_outputTypeHasBeenSet;
}

string CreateOutputInfo::GetOutputKind() const
{
    return m_outputKind;
}

void CreateOutputInfo::SetOutputKind(const string& _outputKind)
{
    m_outputKind = _outputKind;
    m_outputKindHasBeenSet = true;
}

bool CreateOutputInfo::OutputKindHasBeenSet() const
{
    return m_outputKindHasBeenSet;
}

CreateOutputSRTSettings CreateOutputInfo::GetSRTSettings() const
{
    return m_sRTSettings;
}

void CreateOutputInfo::SetSRTSettings(const CreateOutputSRTSettings& _sRTSettings)
{
    m_sRTSettings = _sRTSettings;
    m_sRTSettingsHasBeenSet = true;
}

bool CreateOutputInfo::SRTSettingsHasBeenSet() const
{
    return m_sRTSettingsHasBeenSet;
}

CreateOutputRTMPSettings CreateOutputInfo::GetRTMPSettings() const
{
    return m_rTMPSettings;
}

void CreateOutputInfo::SetRTMPSettings(const CreateOutputRTMPSettings& _rTMPSettings)
{
    m_rTMPSettings = _rTMPSettings;
    m_rTMPSettingsHasBeenSet = true;
}

bool CreateOutputInfo::RTMPSettingsHasBeenSet() const
{
    return m_rTMPSettingsHasBeenSet;
}

CreateOutputInfoRTPSettings CreateOutputInfo::GetRTPSettings() const
{
    return m_rTPSettings;
}

void CreateOutputInfo::SetRTPSettings(const CreateOutputInfoRTPSettings& _rTPSettings)
{
    m_rTPSettings = _rTPSettings;
    m_rTPSettingsHasBeenSet = true;
}

bool CreateOutputInfo::RTPSettingsHasBeenSet() const
{
    return m_rTPSettingsHasBeenSet;
}

vector<string> CreateOutputInfo::GetAllowIpList() const
{
    return m_allowIpList;
}

void CreateOutputInfo::SetAllowIpList(const vector<string>& _allowIpList)
{
    m_allowIpList = _allowIpList;
    m_allowIpListHasBeenSet = true;
}

bool CreateOutputInfo::AllowIpListHasBeenSet() const
{
    return m_allowIpListHasBeenSet;
}

uint64_t CreateOutputInfo::GetMaxConcurrent() const
{
    return m_maxConcurrent;
}

void CreateOutputInfo::SetMaxConcurrent(const uint64_t& _maxConcurrent)
{
    m_maxConcurrent = _maxConcurrent;
    m_maxConcurrentHasBeenSet = true;
}

bool CreateOutputInfo::MaxConcurrentHasBeenSet() const
{
    return m_maxConcurrentHasBeenSet;
}

vector<string> CreateOutputInfo::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateOutputInfo::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateOutputInfo::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

vector<string> CreateOutputInfo::GetZones() const
{
    return m_zones;
}

void CreateOutputInfo::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool CreateOutputInfo::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

CreateOutputRistSettings CreateOutputInfo::GetRISTSettings() const
{
    return m_rISTSettings;
}

void CreateOutputInfo::SetRISTSettings(const CreateOutputRistSettings& _rISTSettings)
{
    m_rISTSettings = _rISTSettings;
    m_rISTSettingsHasBeenSet = true;
}

bool CreateOutputInfo::RISTSettingsHasBeenSet() const
{
    return m_rISTSettingsHasBeenSet;
}

PidSelector CreateOutputInfo::GetPidSelector() const
{
    return m_pidSelector;
}

void CreateOutputInfo::SetPidSelector(const PidSelector& _pidSelector)
{
    m_pidSelector = _pidSelector;
    m_pidSelectorHasBeenSet = true;
}

bool CreateOutputInfo::PidSelectorHasBeenSet() const
{
    return m_pidSelectorHasBeenSet;
}

