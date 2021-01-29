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

#include <tencentcloud/tcb/v20180608/model/CloudBaseProjectVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace rapidjson;
using namespace std;

CloudBaseProjectVersion::CloudBaseProjectVersion() :
    m_nameHasBeenSet(false),
    m_samHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_cIIdHasBeenSet(false),
    m_cDIdHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_versionNumHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_rcJsonHasBeenSet(false),
    m_addonConfigHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_networkConfigHasBeenSet(false),
    m_extensionIdHasBeenSet(false),
    m_failTypeHasBeenSet(false)
{
}

CoreInternalOutcome CloudBaseProjectVersion::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `CloudBaseProjectVersion.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Sam") && !value["Sam"].IsNull())
    {
        if (!value["Sam"].IsString())
        {
            return CoreInternalOutcome(Error("response `CloudBaseProjectVersion.Sam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sam = string(value["Sam"].GetString());
        m_samHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsObject())
        {
            return CoreInternalOutcome(Error("response `CloudBaseProjectVersion.Source` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_source.Deserialize(value["Source"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CloudBaseProjectVersion.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CloudBaseProjectVersion.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `CloudBaseProjectVersion.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Parameters") && !value["Parameters"].IsNull())
    {
        if (!value["Parameters"].IsArray())
            return CoreInternalOutcome(Error("response `CloudBaseProjectVersion.Parameters` is not array type"));

        const Value &tmpValue = value["Parameters"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_parameters.push_back(item);
        }
        m_parametersHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `CloudBaseProjectVersion.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CIId") && !value["CIId"].IsNull())
    {
        if (!value["CIId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CloudBaseProjectVersion.CIId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cIId = string(value["CIId"].GetString());
        m_cIIdHasBeenSet = true;
    }

    if (value.HasMember("CDId") && !value["CDId"].IsNull())
    {
        if (!value["CDId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CloudBaseProjectVersion.CDId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cDId = string(value["CDId"].GetString());
        m_cDIdHasBeenSet = true;
    }

    if (value.HasMember("EnvId") && !value["EnvId"].IsNull())
    {
        if (!value["EnvId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CloudBaseProjectVersion.EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(value["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (value.HasMember("VersionNum") && !value["VersionNum"].IsNull())
    {
        if (!value["VersionNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CloudBaseProjectVersion.VersionNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_versionNum = value["VersionNum"].GetInt64();
        m_versionNumHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Error("response `CloudBaseProjectVersion.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("RcJson") && !value["RcJson"].IsNull())
    {
        if (!value["RcJson"].IsString())
        {
            return CoreInternalOutcome(Error("response `CloudBaseProjectVersion.RcJson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rcJson = string(value["RcJson"].GetString());
        m_rcJsonHasBeenSet = true;
    }

    if (value.HasMember("AddonConfig") && !value["AddonConfig"].IsNull())
    {
        if (!value["AddonConfig"].IsString())
        {
            return CoreInternalOutcome(Error("response `CloudBaseProjectVersion.AddonConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addonConfig = string(value["AddonConfig"].GetString());
        m_addonConfigHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Error("response `CloudBaseProjectVersion.Tags` is not array type"));

        const Value &tmpValue = value["Tags"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("NetworkConfig") && !value["NetworkConfig"].IsNull())
    {
        if (!value["NetworkConfig"].IsString())
        {
            return CoreInternalOutcome(Error("response `CloudBaseProjectVersion.NetworkConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkConfig = string(value["NetworkConfig"].GetString());
        m_networkConfigHasBeenSet = true;
    }

    if (value.HasMember("ExtensionId") && !value["ExtensionId"].IsNull())
    {
        if (!value["ExtensionId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CloudBaseProjectVersion.ExtensionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extensionId = string(value["ExtensionId"].GetString());
        m_extensionIdHasBeenSet = true;
    }

    if (value.HasMember("FailType") && !value["FailType"].IsNull())
    {
        if (!value["FailType"].IsString())
        {
            return CoreInternalOutcome(Error("response `CloudBaseProjectVersion.FailType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failType = string(value["FailType"].GetString());
        m_failTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudBaseProjectVersion::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_samHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Sam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sam.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_source.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_parametersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Parameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_parameters.begin(); itr != m_parameters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_cIIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CIId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cIId.c_str(), allocator).Move(), allocator);
    }

    if (m_cDIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CDId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cDId.c_str(), allocator).Move(), allocator);
    }

    if (m_envIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VersionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_versionNum, allocator);
    }

    if (m_failReasonHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

    if (m_rcJsonHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RcJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_rcJson.c_str(), allocator).Move(), allocator);
    }

    if (m_addonConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddonConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_addonConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_networkConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_networkConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_extensionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExtensionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_extensionId.c_str(), allocator).Move(), allocator);
    }

    if (m_failTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FailType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_failType.c_str(), allocator).Move(), allocator);
    }

}


string CloudBaseProjectVersion::GetName() const
{
    return m_name;
}

void CloudBaseProjectVersion::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CloudBaseProjectVersion::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CloudBaseProjectVersion::GetSam() const
{
    return m_sam;
}

void CloudBaseProjectVersion::SetSam(const string& _sam)
{
    m_sam = _sam;
    m_samHasBeenSet = true;
}

bool CloudBaseProjectVersion::SamHasBeenSet() const
{
    return m_samHasBeenSet;
}

CodeSource CloudBaseProjectVersion::GetSource() const
{
    return m_source;
}

void CloudBaseProjectVersion::SetSource(const CodeSource& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool CloudBaseProjectVersion::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

int64_t CloudBaseProjectVersion::GetCreateTime() const
{
    return m_createTime;
}

void CloudBaseProjectVersion::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CloudBaseProjectVersion::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t CloudBaseProjectVersion::GetUpdateTime() const
{
    return m_updateTime;
}

void CloudBaseProjectVersion::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CloudBaseProjectVersion::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string CloudBaseProjectVersion::GetStatus() const
{
    return m_status;
}

void CloudBaseProjectVersion::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CloudBaseProjectVersion::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<KVPair> CloudBaseProjectVersion::GetParameters() const
{
    return m_parameters;
}

void CloudBaseProjectVersion::SetParameters(const vector<KVPair>& _parameters)
{
    m_parameters = _parameters;
    m_parametersHasBeenSet = true;
}

bool CloudBaseProjectVersion::ParametersHasBeenSet() const
{
    return m_parametersHasBeenSet;
}

string CloudBaseProjectVersion::GetType() const
{
    return m_type;
}

void CloudBaseProjectVersion::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CloudBaseProjectVersion::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CloudBaseProjectVersion::GetCIId() const
{
    return m_cIId;
}

void CloudBaseProjectVersion::SetCIId(const string& _cIId)
{
    m_cIId = _cIId;
    m_cIIdHasBeenSet = true;
}

bool CloudBaseProjectVersion::CIIdHasBeenSet() const
{
    return m_cIIdHasBeenSet;
}

string CloudBaseProjectVersion::GetCDId() const
{
    return m_cDId;
}

void CloudBaseProjectVersion::SetCDId(const string& _cDId)
{
    m_cDId = _cDId;
    m_cDIdHasBeenSet = true;
}

bool CloudBaseProjectVersion::CDIdHasBeenSet() const
{
    return m_cDIdHasBeenSet;
}

string CloudBaseProjectVersion::GetEnvId() const
{
    return m_envId;
}

void CloudBaseProjectVersion::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool CloudBaseProjectVersion::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

int64_t CloudBaseProjectVersion::GetVersionNum() const
{
    return m_versionNum;
}

void CloudBaseProjectVersion::SetVersionNum(const int64_t& _versionNum)
{
    m_versionNum = _versionNum;
    m_versionNumHasBeenSet = true;
}

bool CloudBaseProjectVersion::VersionNumHasBeenSet() const
{
    return m_versionNumHasBeenSet;
}

string CloudBaseProjectVersion::GetFailReason() const
{
    return m_failReason;
}

void CloudBaseProjectVersion::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool CloudBaseProjectVersion::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

string CloudBaseProjectVersion::GetRcJson() const
{
    return m_rcJson;
}

void CloudBaseProjectVersion::SetRcJson(const string& _rcJson)
{
    m_rcJson = _rcJson;
    m_rcJsonHasBeenSet = true;
}

bool CloudBaseProjectVersion::RcJsonHasBeenSet() const
{
    return m_rcJsonHasBeenSet;
}

string CloudBaseProjectVersion::GetAddonConfig() const
{
    return m_addonConfig;
}

void CloudBaseProjectVersion::SetAddonConfig(const string& _addonConfig)
{
    m_addonConfig = _addonConfig;
    m_addonConfigHasBeenSet = true;
}

bool CloudBaseProjectVersion::AddonConfigHasBeenSet() const
{
    return m_addonConfigHasBeenSet;
}

vector<string> CloudBaseProjectVersion::GetTags() const
{
    return m_tags;
}

void CloudBaseProjectVersion::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CloudBaseProjectVersion::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CloudBaseProjectVersion::GetNetworkConfig() const
{
    return m_networkConfig;
}

void CloudBaseProjectVersion::SetNetworkConfig(const string& _networkConfig)
{
    m_networkConfig = _networkConfig;
    m_networkConfigHasBeenSet = true;
}

bool CloudBaseProjectVersion::NetworkConfigHasBeenSet() const
{
    return m_networkConfigHasBeenSet;
}

string CloudBaseProjectVersion::GetExtensionId() const
{
    return m_extensionId;
}

void CloudBaseProjectVersion::SetExtensionId(const string& _extensionId)
{
    m_extensionId = _extensionId;
    m_extensionIdHasBeenSet = true;
}

bool CloudBaseProjectVersion::ExtensionIdHasBeenSet() const
{
    return m_extensionIdHasBeenSet;
}

string CloudBaseProjectVersion::GetFailType() const
{
    return m_failType;
}

void CloudBaseProjectVersion::SetFailType(const string& _failType)
{
    m_failType = _failType;
    m_failTypeHasBeenSet = true;
}

bool CloudBaseProjectVersion::FailTypeHasBeenSet() const
{
    return m_failTypeHasBeenSet;
}

