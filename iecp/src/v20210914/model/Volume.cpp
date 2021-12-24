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

#include <tencentcloud/iecp/v20210914/model/Volume.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

Volume::Volume() :
    m_sourceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_hostPathHasBeenSet(false),
    m_configMapHasBeenSet(false),
    m_secretHasBeenSet(false),
    m_nFSHasBeenSet(false)
{
}

CoreInternalOutcome Volume::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("HostPath") && !value["HostPath"].IsNull())
    {
        if (!value["HostPath"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.HostPath` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hostPath.Deserialize(value["HostPath"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hostPathHasBeenSet = true;
    }

    if (value.HasMember("ConfigMap") && !value["ConfigMap"].IsNull())
    {
        if (!value["ConfigMap"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.ConfigMap` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_configMap.Deserialize(value["ConfigMap"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configMapHasBeenSet = true;
    }

    if (value.HasMember("Secret") && !value["Secret"].IsNull())
    {
        if (!value["Secret"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.Secret` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_secret.Deserialize(value["Secret"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_secretHasBeenSet = true;
    }

    if (value.HasMember("NFS") && !value["NFS"].IsNull())
    {
        if (!value["NFS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Volume.NFS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nFS.Deserialize(value["NFS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nFSHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Volume::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_hostPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostPath.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_configMapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigMap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_configMap.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_secretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Secret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_secret.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nFSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NFS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nFS.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Volume::GetSource() const
{
    return m_source;
}

void Volume::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool Volume::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string Volume::GetName() const
{
    return m_name;
}

void Volume::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Volume::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

VolumeHostPath Volume::GetHostPath() const
{
    return m_hostPath;
}

void Volume::SetHostPath(const VolumeHostPath& _hostPath)
{
    m_hostPath = _hostPath;
    m_hostPathHasBeenSet = true;
}

bool Volume::HostPathHasBeenSet() const
{
    return m_hostPathHasBeenSet;
}

VolumeConfigMap Volume::GetConfigMap() const
{
    return m_configMap;
}

void Volume::SetConfigMap(const VolumeConfigMap& _configMap)
{
    m_configMap = _configMap;
    m_configMapHasBeenSet = true;
}

bool Volume::ConfigMapHasBeenSet() const
{
    return m_configMapHasBeenSet;
}

VolumeConfigMap Volume::GetSecret() const
{
    return m_secret;
}

void Volume::SetSecret(const VolumeConfigMap& _secret)
{
    m_secret = _secret;
    m_secretHasBeenSet = true;
}

bool Volume::SecretHasBeenSet() const
{
    return m_secretHasBeenSet;
}

VolumeNFS Volume::GetNFS() const
{
    return m_nFS;
}

void Volume::SetNFS(const VolumeNFS& _nFS)
{
    m_nFS = _nFS;
    m_nFSHasBeenSet = true;
}

bool Volume::NFSHasBeenSet() const
{
    return m_nFSHasBeenSet;
}

