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
    m_failTypeHasBeenSet(false),
    m_repoUrlHasBeenSet(false),
    m_autoDeployOnCodeChangeHasBeenSet(false),
    m_buildPercentHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_buildFinishTimeHasBeenSet(false),
    m_deployFinishTimeHasBeenSet(false),
    m_buildIdHasBeenSet(false),
    m_sourceUrlHasBeenSet(false),
    m_failReasonShortHasBeenSet(false),
    m_firstInitRepoHasBeenSet(false)
{
}

CoreInternalOutcome CloudBaseProjectVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Sam") && !value["Sam"].IsNull())
    {
        if (!value["Sam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.Sam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sam = string(value["Sam"].GetString());
        m_samHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.Source` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Parameters") && !value["Parameters"].IsNull())
    {
        if (!value["Parameters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.Parameters` is not array type"));

        const rapidjson::Value &tmpValue = value["Parameters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CIId") && !value["CIId"].IsNull())
    {
        if (!value["CIId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.CIId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cIId = string(value["CIId"].GetString());
        m_cIIdHasBeenSet = true;
    }

    if (value.HasMember("CDId") && !value["CDId"].IsNull())
    {
        if (!value["CDId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.CDId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cDId = string(value["CDId"].GetString());
        m_cDIdHasBeenSet = true;
    }

    if (value.HasMember("EnvId") && !value["EnvId"].IsNull())
    {
        if (!value["EnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(value["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (value.HasMember("VersionNum") && !value["VersionNum"].IsNull())
    {
        if (!value["VersionNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.VersionNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_versionNum = value["VersionNum"].GetInt64();
        m_versionNumHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("RcJson") && !value["RcJson"].IsNull())
    {
        if (!value["RcJson"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.RcJson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rcJson = string(value["RcJson"].GetString());
        m_rcJsonHasBeenSet = true;
    }

    if (value.HasMember("AddonConfig") && !value["AddonConfig"].IsNull())
    {
        if (!value["AddonConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.AddonConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addonConfig = string(value["AddonConfig"].GetString());
        m_addonConfigHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("NetworkConfig") && !value["NetworkConfig"].IsNull())
    {
        if (!value["NetworkConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.NetworkConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkConfig = string(value["NetworkConfig"].GetString());
        m_networkConfigHasBeenSet = true;
    }

    if (value.HasMember("ExtensionId") && !value["ExtensionId"].IsNull())
    {
        if (!value["ExtensionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.ExtensionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extensionId = string(value["ExtensionId"].GetString());
        m_extensionIdHasBeenSet = true;
    }

    if (value.HasMember("FailType") && !value["FailType"].IsNull())
    {
        if (!value["FailType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.FailType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failType = string(value["FailType"].GetString());
        m_failTypeHasBeenSet = true;
    }

    if (value.HasMember("RepoUrl") && !value["RepoUrl"].IsNull())
    {
        if (!value["RepoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.RepoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoUrl = string(value["RepoUrl"].GetString());
        m_repoUrlHasBeenSet = true;
    }

    if (value.HasMember("AutoDeployOnCodeChange") && !value["AutoDeployOnCodeChange"].IsNull())
    {
        if (!value["AutoDeployOnCodeChange"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.AutoDeployOnCodeChange` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoDeployOnCodeChange = value["AutoDeployOnCodeChange"].GetBool();
        m_autoDeployOnCodeChangeHasBeenSet = true;
    }

    if (value.HasMember("BuildPercent") && !value["BuildPercent"].IsNull())
    {
        if (!value["BuildPercent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.BuildPercent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_buildPercent = value["BuildPercent"].GetInt64();
        m_buildPercentHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("BuildFinishTime") && !value["BuildFinishTime"].IsNull())
    {
        if (!value["BuildFinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.BuildFinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildFinishTime = string(value["BuildFinishTime"].GetString());
        m_buildFinishTimeHasBeenSet = true;
    }

    if (value.HasMember("DeployFinishTime") && !value["DeployFinishTime"].IsNull())
    {
        if (!value["DeployFinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.DeployFinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployFinishTime = string(value["DeployFinishTime"].GetString());
        m_deployFinishTimeHasBeenSet = true;
    }

    if (value.HasMember("BuildId") && !value["BuildId"].IsNull())
    {
        if (!value["BuildId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.BuildId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildId = string(value["BuildId"].GetString());
        m_buildIdHasBeenSet = true;
    }

    if (value.HasMember("SourceUrl") && !value["SourceUrl"].IsNull())
    {
        if (!value["SourceUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.SourceUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceUrl = string(value["SourceUrl"].GetString());
        m_sourceUrlHasBeenSet = true;
    }

    if (value.HasMember("FailReasonShort") && !value["FailReasonShort"].IsNull())
    {
        if (!value["FailReasonShort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.FailReasonShort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReasonShort = string(value["FailReasonShort"].GetString());
        m_failReasonShortHasBeenSet = true;
    }

    if (value.HasMember("FirstInitRepo") && !value["FirstInitRepo"].IsNull())
    {
        if (!value["FirstInitRepo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseProjectVersion.FirstInitRepo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstInitRepo = string(value["FirstInitRepo"].GetString());
        m_firstInitRepoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudBaseProjectVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_samHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sam.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_source.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_parametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_parameters.begin(); itr != m_parameters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_cIIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CIId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cIId.c_str(), allocator).Move(), allocator);
    }

    if (m_cDIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CDId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cDId.c_str(), allocator).Move(), allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_versionNum, allocator);
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

    if (m_rcJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RcJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rcJson.c_str(), allocator).Move(), allocator);
    }

    if (m_addonConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddonConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addonConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_networkConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_extensionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extensionId.c_str(), allocator).Move(), allocator);
    }

    if (m_failTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failType.c_str(), allocator).Move(), allocator);
    }

    if (m_repoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_autoDeployOnCodeChangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoDeployOnCodeChange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoDeployOnCodeChange, allocator);
    }

    if (m_buildPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_buildPercent, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_buildFinishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildFinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildFinishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deployFinishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployFinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployFinishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_buildIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_failReasonShortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReasonShort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReasonShort.c_str(), allocator).Move(), allocator);
    }

    if (m_firstInitRepoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstInitRepo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstInitRepo.c_str(), allocator).Move(), allocator);
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

string CloudBaseProjectVersion::GetRepoUrl() const
{
    return m_repoUrl;
}

void CloudBaseProjectVersion::SetRepoUrl(const string& _repoUrl)
{
    m_repoUrl = _repoUrl;
    m_repoUrlHasBeenSet = true;
}

bool CloudBaseProjectVersion::RepoUrlHasBeenSet() const
{
    return m_repoUrlHasBeenSet;
}

bool CloudBaseProjectVersion::GetAutoDeployOnCodeChange() const
{
    return m_autoDeployOnCodeChange;
}

void CloudBaseProjectVersion::SetAutoDeployOnCodeChange(const bool& _autoDeployOnCodeChange)
{
    m_autoDeployOnCodeChange = _autoDeployOnCodeChange;
    m_autoDeployOnCodeChangeHasBeenSet = true;
}

bool CloudBaseProjectVersion::AutoDeployOnCodeChangeHasBeenSet() const
{
    return m_autoDeployOnCodeChangeHasBeenSet;
}

int64_t CloudBaseProjectVersion::GetBuildPercent() const
{
    return m_buildPercent;
}

void CloudBaseProjectVersion::SetBuildPercent(const int64_t& _buildPercent)
{
    m_buildPercent = _buildPercent;
    m_buildPercentHasBeenSet = true;
}

bool CloudBaseProjectVersion::BuildPercentHasBeenSet() const
{
    return m_buildPercentHasBeenSet;
}

string CloudBaseProjectVersion::GetUin() const
{
    return m_uin;
}

void CloudBaseProjectVersion::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool CloudBaseProjectVersion::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string CloudBaseProjectVersion::GetBuildFinishTime() const
{
    return m_buildFinishTime;
}

void CloudBaseProjectVersion::SetBuildFinishTime(const string& _buildFinishTime)
{
    m_buildFinishTime = _buildFinishTime;
    m_buildFinishTimeHasBeenSet = true;
}

bool CloudBaseProjectVersion::BuildFinishTimeHasBeenSet() const
{
    return m_buildFinishTimeHasBeenSet;
}

string CloudBaseProjectVersion::GetDeployFinishTime() const
{
    return m_deployFinishTime;
}

void CloudBaseProjectVersion::SetDeployFinishTime(const string& _deployFinishTime)
{
    m_deployFinishTime = _deployFinishTime;
    m_deployFinishTimeHasBeenSet = true;
}

bool CloudBaseProjectVersion::DeployFinishTimeHasBeenSet() const
{
    return m_deployFinishTimeHasBeenSet;
}

string CloudBaseProjectVersion::GetBuildId() const
{
    return m_buildId;
}

void CloudBaseProjectVersion::SetBuildId(const string& _buildId)
{
    m_buildId = _buildId;
    m_buildIdHasBeenSet = true;
}

bool CloudBaseProjectVersion::BuildIdHasBeenSet() const
{
    return m_buildIdHasBeenSet;
}

string CloudBaseProjectVersion::GetSourceUrl() const
{
    return m_sourceUrl;
}

void CloudBaseProjectVersion::SetSourceUrl(const string& _sourceUrl)
{
    m_sourceUrl = _sourceUrl;
    m_sourceUrlHasBeenSet = true;
}

bool CloudBaseProjectVersion::SourceUrlHasBeenSet() const
{
    return m_sourceUrlHasBeenSet;
}

string CloudBaseProjectVersion::GetFailReasonShort() const
{
    return m_failReasonShort;
}

void CloudBaseProjectVersion::SetFailReasonShort(const string& _failReasonShort)
{
    m_failReasonShort = _failReasonShort;
    m_failReasonShortHasBeenSet = true;
}

bool CloudBaseProjectVersion::FailReasonShortHasBeenSet() const
{
    return m_failReasonShortHasBeenSet;
}

string CloudBaseProjectVersion::GetFirstInitRepo() const
{
    return m_firstInitRepo;
}

void CloudBaseProjectVersion::SetFirstInitRepo(const string& _firstInitRepo)
{
    m_firstInitRepo = _firstInitRepo;
    m_firstInitRepoHasBeenSet = true;
}

bool CloudBaseProjectVersion::FirstInitRepoHasBeenSet() const
{
    return m_firstInitRepoHasBeenSet;
}

