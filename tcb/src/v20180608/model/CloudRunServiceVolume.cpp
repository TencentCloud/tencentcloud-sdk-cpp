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

#include <tencentcloud/tcb/v20180608/model/CloudRunServiceVolume.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudRunServiceVolume::CloudRunServiceVolume() :
    m_nameHasBeenSet(false),
    m_nFSHasBeenSet(false),
    m_secretNameHasBeenSet(false),
    m_enableEmptyDirVolumeHasBeenSet(false),
    m_emptyDirHasBeenSet(false),
    m_hostPathHasBeenSet(false)
{
}

CoreInternalOutcome CloudRunServiceVolume::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceVolume.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("NFS") && !value["NFS"].IsNull())
    {
        if (!value["NFS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceVolume.NFS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nFS.Deserialize(value["NFS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nFSHasBeenSet = true;
    }

    if (value.HasMember("SecretName") && !value["SecretName"].IsNull())
    {
        if (!value["SecretName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceVolume.SecretName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretName = string(value["SecretName"].GetString());
        m_secretNameHasBeenSet = true;
    }

    if (value.HasMember("EnableEmptyDirVolume") && !value["EnableEmptyDirVolume"].IsNull())
    {
        if (!value["EnableEmptyDirVolume"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceVolume.EnableEmptyDirVolume` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableEmptyDirVolume = value["EnableEmptyDirVolume"].GetBool();
        m_enableEmptyDirVolumeHasBeenSet = true;
    }

    if (value.HasMember("EmptyDir") && !value["EmptyDir"].IsNull())
    {
        if (!value["EmptyDir"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceVolume.EmptyDir` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_emptyDir.Deserialize(value["EmptyDir"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_emptyDirHasBeenSet = true;
    }

    if (value.HasMember("HostPath") && !value["HostPath"].IsNull())
    {
        if (!value["HostPath"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRunServiceVolume.HostPath` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hostPath.Deserialize(value["HostPath"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hostPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudRunServiceVolume::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_nFSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NFS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nFS.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_secretNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableEmptyDirVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableEmptyDirVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableEmptyDirVolume, allocator);
    }

    if (m_emptyDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmptyDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_emptyDir.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hostPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostPath.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CloudRunServiceVolume::GetName() const
{
    return m_name;
}

void CloudRunServiceVolume::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CloudRunServiceVolume::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

CloudBaseRunNfsVolumeSource CloudRunServiceVolume::GetNFS() const
{
    return m_nFS;
}

void CloudRunServiceVolume::SetNFS(const CloudBaseRunNfsVolumeSource& _nFS)
{
    m_nFS = _nFS;
    m_nFSHasBeenSet = true;
}

bool CloudRunServiceVolume::NFSHasBeenSet() const
{
    return m_nFSHasBeenSet;
}

string CloudRunServiceVolume::GetSecretName() const
{
    return m_secretName;
}

void CloudRunServiceVolume::SetSecretName(const string& _secretName)
{
    m_secretName = _secretName;
    m_secretNameHasBeenSet = true;
}

bool CloudRunServiceVolume::SecretNameHasBeenSet() const
{
    return m_secretNameHasBeenSet;
}

bool CloudRunServiceVolume::GetEnableEmptyDirVolume() const
{
    return m_enableEmptyDirVolume;
}

void CloudRunServiceVolume::SetEnableEmptyDirVolume(const bool& _enableEmptyDirVolume)
{
    m_enableEmptyDirVolume = _enableEmptyDirVolume;
    m_enableEmptyDirVolumeHasBeenSet = true;
}

bool CloudRunServiceVolume::EnableEmptyDirVolumeHasBeenSet() const
{
    return m_enableEmptyDirVolumeHasBeenSet;
}

CloudBaseRunEmptyDirVolumeSource CloudRunServiceVolume::GetEmptyDir() const
{
    return m_emptyDir;
}

void CloudRunServiceVolume::SetEmptyDir(const CloudBaseRunEmptyDirVolumeSource& _emptyDir)
{
    m_emptyDir = _emptyDir;
    m_emptyDirHasBeenSet = true;
}

bool CloudRunServiceVolume::EmptyDirHasBeenSet() const
{
    return m_emptyDirHasBeenSet;
}

CloudBaseRunServiceVolumeHostPath CloudRunServiceVolume::GetHostPath() const
{
    return m_hostPath;
}

void CloudRunServiceVolume::SetHostPath(const CloudBaseRunServiceVolumeHostPath& _hostPath)
{
    m_hostPath = _hostPath;
    m_hostPathHasBeenSet = true;
}

bool CloudRunServiceVolume::HostPathHasBeenSet() const
{
    return m_hostPathHasBeenSet;
}

