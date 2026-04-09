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

#include <tencentcloud/hai/v20230812/model/ContainerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

ContainerInfo::ContainerInfo() :
    m_imageHasBeenSet(false),
    m_portHasBeenSet(false),
    m_scriptsHasBeenSet(false),
    m_envsHasBeenSet(false),
    m_storagesHasBeenSet(false),
    m_probeHasBeenSet(false)
{
}

CoreInternalOutcome ContainerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.Image` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_image.Deserialize(value["Image"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Scripts") && !value["Scripts"].IsNull())
    {
        if (!value["Scripts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.Scripts` is not array type"));

        const rapidjson::Value &tmpValue = value["Scripts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scripts.push_back((*itr).GetString());
        }
        m_scriptsHasBeenSet = true;
    }

    if (value.HasMember("Envs") && !value["Envs"].IsNull())
    {
        if (!value["Envs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.Envs` is not array type"));

        const rapidjson::Value &tmpValue = value["Envs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EnvParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_envs.push_back(item);
        }
        m_envsHasBeenSet = true;
    }

    if (value.HasMember("Storages") && !value["Storages"].IsNull())
    {
        if (!value["Storages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.Storages` is not array type"));

        const rapidjson::Value &tmpValue = value["Storages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StorageInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_storages.push_back(item);
        }
        m_storagesHasBeenSet = true;
    }

    if (value.HasMember("Probe") && !value["Probe"].IsNull())
    {
        if (!value["Probe"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.Probe` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_probe.Deserialize(value["Probe"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_probeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_image.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scripts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scripts.begin(); itr != m_scripts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_envsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Envs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envs.begin(); itr != m_envs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_storagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_storages.begin(); itr != m_storages.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_probeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Probe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_probe.ToJsonObject(value[key.c_str()], allocator);
    }

}


ImageInfo ContainerInfo::GetImage() const
{
    return m_image;
}

void ContainerInfo::SetImage(const ImageInfo& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool ContainerInfo::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string ContainerInfo::GetPort() const
{
    return m_port;
}

void ContainerInfo::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool ContainerInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

vector<string> ContainerInfo::GetScripts() const
{
    return m_scripts;
}

void ContainerInfo::SetScripts(const vector<string>& _scripts)
{
    m_scripts = _scripts;
    m_scriptsHasBeenSet = true;
}

bool ContainerInfo::ScriptsHasBeenSet() const
{
    return m_scriptsHasBeenSet;
}

vector<EnvParam> ContainerInfo::GetEnvs() const
{
    return m_envs;
}

void ContainerInfo::SetEnvs(const vector<EnvParam>& _envs)
{
    m_envs = _envs;
    m_envsHasBeenSet = true;
}

bool ContainerInfo::EnvsHasBeenSet() const
{
    return m_envsHasBeenSet;
}

vector<StorageInfo> ContainerInfo::GetStorages() const
{
    return m_storages;
}

void ContainerInfo::SetStorages(const vector<StorageInfo>& _storages)
{
    m_storages = _storages;
    m_storagesHasBeenSet = true;
}

bool ContainerInfo::StoragesHasBeenSet() const
{
    return m_storagesHasBeenSet;
}

ProbeInfo ContainerInfo::GetProbe() const
{
    return m_probe;
}

void ContainerInfo::SetProbe(const ProbeInfo& _probe)
{
    m_probe = _probe;
    m_probeHasBeenSet = true;
}

bool ContainerInfo::ProbeHasBeenSet() const
{
    return m_probeHasBeenSet;
}

