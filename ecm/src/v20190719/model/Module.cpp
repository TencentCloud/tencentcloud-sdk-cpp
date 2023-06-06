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

#include <tencentcloud/ecm/v20190719/model/Module.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

Module::Module() :
    m_moduleIdHasBeenSet(false),
    m_moduleNameHasBeenSet(false),
    m_moduleStateHasBeenSet(false),
    m_defaultSystemDiskSizeHasBeenSet(false),
    m_defaultDataDiskSizeHasBeenSet(false),
    m_instanceTypeConfigHasBeenSet(false),
    m_defaultImageHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_defaultBandwidthHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_closeIpDirectHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_defaultBandwidthInHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_dataDisksHasBeenSet(false),
    m_disableWanIpHasBeenSet(false)
{
}

CoreInternalOutcome Module::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModuleId") && !value["ModuleId"].IsNull())
    {
        if (!value["ModuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Module.ModuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moduleId = string(value["ModuleId"].GetString());
        m_moduleIdHasBeenSet = true;
    }

    if (value.HasMember("ModuleName") && !value["ModuleName"].IsNull())
    {
        if (!value["ModuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Module.ModuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moduleName = string(value["ModuleName"].GetString());
        m_moduleNameHasBeenSet = true;
    }

    if (value.HasMember("ModuleState") && !value["ModuleState"].IsNull())
    {
        if (!value["ModuleState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Module.ModuleState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moduleState = string(value["ModuleState"].GetString());
        m_moduleStateHasBeenSet = true;
    }

    if (value.HasMember("DefaultSystemDiskSize") && !value["DefaultSystemDiskSize"].IsNull())
    {
        if (!value["DefaultSystemDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Module.DefaultSystemDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultSystemDiskSize = value["DefaultSystemDiskSize"].GetInt64();
        m_defaultSystemDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("DefaultDataDiskSize") && !value["DefaultDataDiskSize"].IsNull())
    {
        if (!value["DefaultDataDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Module.DefaultDataDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultDataDiskSize = value["DefaultDataDiskSize"].GetInt64();
        m_defaultDataDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("InstanceTypeConfig") && !value["InstanceTypeConfig"].IsNull())
    {
        if (!value["InstanceTypeConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Module.InstanceTypeConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceTypeConfig.Deserialize(value["InstanceTypeConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceTypeConfigHasBeenSet = true;
    }

    if (value.HasMember("DefaultImage") && !value["DefaultImage"].IsNull())
    {
        if (!value["DefaultImage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Module.DefaultImage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_defaultImage.Deserialize(value["DefaultImage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_defaultImageHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Module.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DefaultBandwidth") && !value["DefaultBandwidth"].IsNull())
    {
        if (!value["DefaultBandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Module.DefaultBandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultBandwidth = value["DefaultBandwidth"].GetInt64();
        m_defaultBandwidthHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Module.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }

    if (value.HasMember("CloseIpDirect") && !value["CloseIpDirect"].IsNull())
    {
        if (!value["CloseIpDirect"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Module.CloseIpDirect` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_closeIpDirect = value["CloseIpDirect"].GetInt64();
        m_closeIpDirectHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupIds") && !value["SecurityGroupIds"].IsNull())
    {
        if (!value["SecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Module.SecurityGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroupIds.push_back((*itr).GetString());
        }
        m_securityGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("DefaultBandwidthIn") && !value["DefaultBandwidthIn"].IsNull())
    {
        if (!value["DefaultBandwidthIn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Module.DefaultBandwidthIn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultBandwidthIn = value["DefaultBandwidthIn"].GetInt64();
        m_defaultBandwidthInHasBeenSet = true;
    }

    if (value.HasMember("UserData") && !value["UserData"].IsNull())
    {
        if (!value["UserData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Module.UserData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userData = string(value["UserData"].GetString());
        m_userDataHasBeenSet = true;
    }

    if (value.HasMember("SystemDisk") && !value["SystemDisk"].IsNull())
    {
        if (!value["SystemDisk"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Module.SystemDisk` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_systemDisk.Deserialize(value["SystemDisk"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_systemDiskHasBeenSet = true;
    }

    if (value.HasMember("DataDisks") && !value["DataDisks"].IsNull())
    {
        if (!value["DataDisks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Module.DataDisks` is not array type"));

        const rapidjson::Value &tmpValue = value["DataDisks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataDisk item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataDisks.push_back(item);
        }
        m_dataDisksHasBeenSet = true;
    }

    if (value.HasMember("DisableWanIp") && !value["DisableWanIp"].IsNull())
    {
        if (!value["DisableWanIp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Module.DisableWanIp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_disableWanIp = value["DisableWanIp"].GetInt64();
        m_disableWanIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Module::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_moduleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moduleId.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moduleName.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moduleState.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultSystemDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultSystemDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultSystemDiskSize, allocator);
    }

    if (m_defaultDataDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultDataDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultDataDiskSize, allocator);
    }

    if (m_instanceTypeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceTypeConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_defaultImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_defaultImage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultBandwidth, allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_closeIpDirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloseIpDirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_closeIpDirect, allocator);
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

    if (m_defaultBandwidthInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultBandwidthIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultBandwidthIn, allocator);
    }

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_systemDisk.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dataDisksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDisks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataDisks.begin(); itr != m_dataDisks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_disableWanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableWanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableWanIp, allocator);
    }

}


string Module::GetModuleId() const
{
    return m_moduleId;
}

void Module::SetModuleId(const string& _moduleId)
{
    m_moduleId = _moduleId;
    m_moduleIdHasBeenSet = true;
}

bool Module::ModuleIdHasBeenSet() const
{
    return m_moduleIdHasBeenSet;
}

string Module::GetModuleName() const
{
    return m_moduleName;
}

void Module::SetModuleName(const string& _moduleName)
{
    m_moduleName = _moduleName;
    m_moduleNameHasBeenSet = true;
}

bool Module::ModuleNameHasBeenSet() const
{
    return m_moduleNameHasBeenSet;
}

string Module::GetModuleState() const
{
    return m_moduleState;
}

void Module::SetModuleState(const string& _moduleState)
{
    m_moduleState = _moduleState;
    m_moduleStateHasBeenSet = true;
}

bool Module::ModuleStateHasBeenSet() const
{
    return m_moduleStateHasBeenSet;
}

int64_t Module::GetDefaultSystemDiskSize() const
{
    return m_defaultSystemDiskSize;
}

void Module::SetDefaultSystemDiskSize(const int64_t& _defaultSystemDiskSize)
{
    m_defaultSystemDiskSize = _defaultSystemDiskSize;
    m_defaultSystemDiskSizeHasBeenSet = true;
}

bool Module::DefaultSystemDiskSizeHasBeenSet() const
{
    return m_defaultSystemDiskSizeHasBeenSet;
}

int64_t Module::GetDefaultDataDiskSize() const
{
    return m_defaultDataDiskSize;
}

void Module::SetDefaultDataDiskSize(const int64_t& _defaultDataDiskSize)
{
    m_defaultDataDiskSize = _defaultDataDiskSize;
    m_defaultDataDiskSizeHasBeenSet = true;
}

bool Module::DefaultDataDiskSizeHasBeenSet() const
{
    return m_defaultDataDiskSizeHasBeenSet;
}

InstanceTypeConfig Module::GetInstanceTypeConfig() const
{
    return m_instanceTypeConfig;
}

void Module::SetInstanceTypeConfig(const InstanceTypeConfig& _instanceTypeConfig)
{
    m_instanceTypeConfig = _instanceTypeConfig;
    m_instanceTypeConfigHasBeenSet = true;
}

bool Module::InstanceTypeConfigHasBeenSet() const
{
    return m_instanceTypeConfigHasBeenSet;
}

Image Module::GetDefaultImage() const
{
    return m_defaultImage;
}

void Module::SetDefaultImage(const Image& _defaultImage)
{
    m_defaultImage = _defaultImage;
    m_defaultImageHasBeenSet = true;
}

bool Module::DefaultImageHasBeenSet() const
{
    return m_defaultImageHasBeenSet;
}

string Module::GetCreateTime() const
{
    return m_createTime;
}

void Module::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Module::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t Module::GetDefaultBandwidth() const
{
    return m_defaultBandwidth;
}

void Module::SetDefaultBandwidth(const int64_t& _defaultBandwidth)
{
    m_defaultBandwidth = _defaultBandwidth;
    m_defaultBandwidthHasBeenSet = true;
}

bool Module::DefaultBandwidthHasBeenSet() const
{
    return m_defaultBandwidthHasBeenSet;
}

vector<Tag> Module::GetTagSet() const
{
    return m_tagSet;
}

void Module::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool Module::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

int64_t Module::GetCloseIpDirect() const
{
    return m_closeIpDirect;
}

void Module::SetCloseIpDirect(const int64_t& _closeIpDirect)
{
    m_closeIpDirect = _closeIpDirect;
    m_closeIpDirectHasBeenSet = true;
}

bool Module::CloseIpDirectHasBeenSet() const
{
    return m_closeIpDirectHasBeenSet;
}

vector<string> Module::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void Module::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool Module::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

int64_t Module::GetDefaultBandwidthIn() const
{
    return m_defaultBandwidthIn;
}

void Module::SetDefaultBandwidthIn(const int64_t& _defaultBandwidthIn)
{
    m_defaultBandwidthIn = _defaultBandwidthIn;
    m_defaultBandwidthInHasBeenSet = true;
}

bool Module::DefaultBandwidthInHasBeenSet() const
{
    return m_defaultBandwidthInHasBeenSet;
}

string Module::GetUserData() const
{
    return m_userData;
}

void Module::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool Module::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

SystemDisk Module::GetSystemDisk() const
{
    return m_systemDisk;
}

void Module::SetSystemDisk(const SystemDisk& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool Module::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

vector<DataDisk> Module::GetDataDisks() const
{
    return m_dataDisks;
}

void Module::SetDataDisks(const vector<DataDisk>& _dataDisks)
{
    m_dataDisks = _dataDisks;
    m_dataDisksHasBeenSet = true;
}

bool Module::DataDisksHasBeenSet() const
{
    return m_dataDisksHasBeenSet;
}

int64_t Module::GetDisableWanIp() const
{
    return m_disableWanIp;
}

void Module::SetDisableWanIp(const int64_t& _disableWanIp)
{
    m_disableWanIp = _disableWanIp;
    m_disableWanIpHasBeenSet = true;
}

bool Module::DisableWanIpHasBeenSet() const
{
    return m_disableWanIpHasBeenSet;
}

