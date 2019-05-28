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

#include <tencentcloud/emr/v20190103/model/EMRProductConfigSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace rapidjson;
using namespace std;

EMRProductConfigSettings::EMRProductConfigSettings() :
    m_softInfoHasBeenSet(false),
    m_masterNodeSizeHasBeenSet(false),
    m_coreNodeSizeHasBeenSet(false),
    m_taskNodeSizeHasBeenSet(false),
    m_comNodeSizeHasBeenSet(false),
    m_masterResourceSpecHasBeenSet(false),
    m_coreResourceSpecHasBeenSet(false),
    m_taskResourceSpecHasBeenSet(false),
    m_commonResourceSpecHasBeenSet(false),
    m_oncosHasBeenSet(false),
    m_cOSSettingsHasBeenSet(false)
{
}

CoreInternalOutcome EMRProductConfigSettings::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SoftInfo") && !value["SoftInfo"].IsNull())
    {
        if (!value["SoftInfo"].IsArray())
            return CoreInternalOutcome(Error("response `EMRProductConfigSettings.SoftInfo` is not array type"));

        const Value &tmpValue = value["SoftInfo"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_softInfo.push_back((*itr).GetString());
        }
        m_softInfoHasBeenSet = true;
    }

    if (value.HasMember("MasterNodeSize") && !value["MasterNodeSize"].IsNull())
    {
        if (!value["MasterNodeSize"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `EMRProductConfigSettings.MasterNodeSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_masterNodeSize = value["MasterNodeSize"].GetUint64();
        m_masterNodeSizeHasBeenSet = true;
    }

    if (value.HasMember("CoreNodeSize") && !value["CoreNodeSize"].IsNull())
    {
        if (!value["CoreNodeSize"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `EMRProductConfigSettings.CoreNodeSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_coreNodeSize = value["CoreNodeSize"].GetUint64();
        m_coreNodeSizeHasBeenSet = true;
    }

    if (value.HasMember("TaskNodeSize") && !value["TaskNodeSize"].IsNull())
    {
        if (!value["TaskNodeSize"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `EMRProductConfigSettings.TaskNodeSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskNodeSize = value["TaskNodeSize"].GetUint64();
        m_taskNodeSizeHasBeenSet = true;
    }

    if (value.HasMember("ComNodeSize") && !value["ComNodeSize"].IsNull())
    {
        if (!value["ComNodeSize"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `EMRProductConfigSettings.ComNodeSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_comNodeSize = value["ComNodeSize"].GetUint64();
        m_comNodeSizeHasBeenSet = true;
    }

    if (value.HasMember("MasterResourceSpec") && !value["MasterResourceSpec"].IsNull())
    {
        if (!value["MasterResourceSpec"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EMRProductConfigSettings.MasterResourceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_masterResourceSpec.Deserialize(value["MasterResourceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_masterResourceSpecHasBeenSet = true;
    }

    if (value.HasMember("CoreResourceSpec") && !value["CoreResourceSpec"].IsNull())
    {
        if (!value["CoreResourceSpec"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EMRProductConfigSettings.CoreResourceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coreResourceSpec.Deserialize(value["CoreResourceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coreResourceSpecHasBeenSet = true;
    }

    if (value.HasMember("TaskResourceSpec") && !value["TaskResourceSpec"].IsNull())
    {
        if (!value["TaskResourceSpec"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EMRProductConfigSettings.TaskResourceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskResourceSpec.Deserialize(value["TaskResourceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskResourceSpecHasBeenSet = true;
    }

    if (value.HasMember("CommonResourceSpec") && !value["CommonResourceSpec"].IsNull())
    {
        if (!value["CommonResourceSpec"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EMRProductConfigSettings.CommonResourceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_commonResourceSpec.Deserialize(value["CommonResourceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_commonResourceSpecHasBeenSet = true;
    }

    if (value.HasMember("Oncos") && !value["Oncos"].IsNull())
    {
        if (!value["Oncos"].IsBool())
        {
            return CoreInternalOutcome(Error("response `EMRProductConfigSettings.Oncos` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_oncos = value["Oncos"].GetBool();
        m_oncosHasBeenSet = true;
    }

    if (value.HasMember("COSSettings") && !value["COSSettings"].IsNull())
    {
        if (!value["COSSettings"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EMRProductConfigSettings.COSSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cOSSettings.Deserialize(value["COSSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cOSSettingsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EMRProductConfigSettings::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_softInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SoftInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_softInfo.begin(); itr != m_softInfo.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_masterNodeSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MasterNodeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_masterNodeSize, allocator);
    }

    if (m_coreNodeSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CoreNodeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coreNodeSize, allocator);
    }

    if (m_taskNodeSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskNodeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskNodeSize, allocator);
    }

    if (m_comNodeSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ComNodeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_comNodeSize, allocator);
    }

    if (m_masterResourceSpecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MasterResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_masterResourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_coreResourceSpecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CoreResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_coreResourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskResourceSpecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_taskResourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_commonResourceSpecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CommonResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_commonResourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_oncosHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Oncos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oncos, allocator);
    }

    if (m_cOSSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "COSSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_cOSSettings.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<string> EMRProductConfigSettings::GetSoftInfo() const
{
    return m_softInfo;
}

void EMRProductConfigSettings::SetSoftInfo(const vector<string>& _softInfo)
{
    m_softInfo = _softInfo;
    m_softInfoHasBeenSet = true;
}

bool EMRProductConfigSettings::SoftInfoHasBeenSet() const
{
    return m_softInfoHasBeenSet;
}

uint64_t EMRProductConfigSettings::GetMasterNodeSize() const
{
    return m_masterNodeSize;
}

void EMRProductConfigSettings::SetMasterNodeSize(const uint64_t& _masterNodeSize)
{
    m_masterNodeSize = _masterNodeSize;
    m_masterNodeSizeHasBeenSet = true;
}

bool EMRProductConfigSettings::MasterNodeSizeHasBeenSet() const
{
    return m_masterNodeSizeHasBeenSet;
}

uint64_t EMRProductConfigSettings::GetCoreNodeSize() const
{
    return m_coreNodeSize;
}

void EMRProductConfigSettings::SetCoreNodeSize(const uint64_t& _coreNodeSize)
{
    m_coreNodeSize = _coreNodeSize;
    m_coreNodeSizeHasBeenSet = true;
}

bool EMRProductConfigSettings::CoreNodeSizeHasBeenSet() const
{
    return m_coreNodeSizeHasBeenSet;
}

uint64_t EMRProductConfigSettings::GetTaskNodeSize() const
{
    return m_taskNodeSize;
}

void EMRProductConfigSettings::SetTaskNodeSize(const uint64_t& _taskNodeSize)
{
    m_taskNodeSize = _taskNodeSize;
    m_taskNodeSizeHasBeenSet = true;
}

bool EMRProductConfigSettings::TaskNodeSizeHasBeenSet() const
{
    return m_taskNodeSizeHasBeenSet;
}

uint64_t EMRProductConfigSettings::GetComNodeSize() const
{
    return m_comNodeSize;
}

void EMRProductConfigSettings::SetComNodeSize(const uint64_t& _comNodeSize)
{
    m_comNodeSize = _comNodeSize;
    m_comNodeSizeHasBeenSet = true;
}

bool EMRProductConfigSettings::ComNodeSizeHasBeenSet() const
{
    return m_comNodeSizeHasBeenSet;
}

NodeSpec EMRProductConfigSettings::GetMasterResourceSpec() const
{
    return m_masterResourceSpec;
}

void EMRProductConfigSettings::SetMasterResourceSpec(const NodeSpec& _masterResourceSpec)
{
    m_masterResourceSpec = _masterResourceSpec;
    m_masterResourceSpecHasBeenSet = true;
}

bool EMRProductConfigSettings::MasterResourceSpecHasBeenSet() const
{
    return m_masterResourceSpecHasBeenSet;
}

NodeSpec EMRProductConfigSettings::GetCoreResourceSpec() const
{
    return m_coreResourceSpec;
}

void EMRProductConfigSettings::SetCoreResourceSpec(const NodeSpec& _coreResourceSpec)
{
    m_coreResourceSpec = _coreResourceSpec;
    m_coreResourceSpecHasBeenSet = true;
}

bool EMRProductConfigSettings::CoreResourceSpecHasBeenSet() const
{
    return m_coreResourceSpecHasBeenSet;
}

NodeSpec EMRProductConfigSettings::GetTaskResourceSpec() const
{
    return m_taskResourceSpec;
}

void EMRProductConfigSettings::SetTaskResourceSpec(const NodeSpec& _taskResourceSpec)
{
    m_taskResourceSpec = _taskResourceSpec;
    m_taskResourceSpecHasBeenSet = true;
}

bool EMRProductConfigSettings::TaskResourceSpecHasBeenSet() const
{
    return m_taskResourceSpecHasBeenSet;
}

NodeSpec EMRProductConfigSettings::GetCommonResourceSpec() const
{
    return m_commonResourceSpec;
}

void EMRProductConfigSettings::SetCommonResourceSpec(const NodeSpec& _commonResourceSpec)
{
    m_commonResourceSpec = _commonResourceSpec;
    m_commonResourceSpecHasBeenSet = true;
}

bool EMRProductConfigSettings::CommonResourceSpecHasBeenSet() const
{
    return m_commonResourceSpecHasBeenSet;
}

bool EMRProductConfigSettings::GetOncos() const
{
    return m_oncos;
}

void EMRProductConfigSettings::SetOncos(const bool& _oncos)
{
    m_oncos = _oncos;
    m_oncosHasBeenSet = true;
}

bool EMRProductConfigSettings::OncosHasBeenSet() const
{
    return m_oncosHasBeenSet;
}

COSSettings EMRProductConfigSettings::GetCOSSettings() const
{
    return m_cOSSettings;
}

void EMRProductConfigSettings::SetCOSSettings(const COSSettings& _cOSSettings)
{
    m_cOSSettings = _cOSSettings;
    m_cOSSettingsHasBeenSet = true;
}

bool EMRProductConfigSettings::COSSettingsHasBeenSet() const
{
    return m_cOSSettingsHasBeenSet;
}

