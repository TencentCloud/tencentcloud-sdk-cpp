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

#include <tencentcloud/tcb/v20180608/model/CloudBaseRunVolumeMount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudBaseRunVolumeMount::CloudBaseRunVolumeMount() :
    m_nameHasBeenSet(false),
    m_mountPathHasBeenSet(false),
    m_readOnlyHasBeenSet(false),
    m_nfsVolumesHasBeenSet(false),
    m_mountPropagationHasBeenSet(false)
{
}

CoreInternalOutcome CloudBaseRunVolumeMount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunVolumeMount.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("MountPath") && !value["MountPath"].IsNull())
    {
        if (!value["MountPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunVolumeMount.MountPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountPath = string(value["MountPath"].GetString());
        m_mountPathHasBeenSet = true;
    }

    if (value.HasMember("ReadOnly") && !value["ReadOnly"].IsNull())
    {
        if (!value["ReadOnly"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunVolumeMount.ReadOnly` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_readOnly = value["ReadOnly"].GetBool();
        m_readOnlyHasBeenSet = true;
    }

    if (value.HasMember("NfsVolumes") && !value["NfsVolumes"].IsNull())
    {
        if (!value["NfsVolumes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunVolumeMount.NfsVolumes` is not array type"));

        const rapidjson::Value &tmpValue = value["NfsVolumes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudBaseRunNfsVolumeSource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nfsVolumes.push_back(item);
        }
        m_nfsVolumesHasBeenSet = true;
    }

    if (value.HasMember("MountPropagation") && !value["MountPropagation"].IsNull())
    {
        if (!value["MountPropagation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunVolumeMount.MountPropagation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountPropagation = string(value["MountPropagation"].GetString());
        m_mountPropagationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudBaseRunVolumeMount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_mountPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountPath.c_str(), allocator).Move(), allocator);
    }

    if (m_readOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readOnly, allocator);
    }

    if (m_nfsVolumesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NfsVolumes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nfsVolumes.begin(); itr != m_nfsVolumes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_mountPropagationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPropagation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountPropagation.c_str(), allocator).Move(), allocator);
    }

}


string CloudBaseRunVolumeMount::GetName() const
{
    return m_name;
}

void CloudBaseRunVolumeMount::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CloudBaseRunVolumeMount::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CloudBaseRunVolumeMount::GetMountPath() const
{
    return m_mountPath;
}

void CloudBaseRunVolumeMount::SetMountPath(const string& _mountPath)
{
    m_mountPath = _mountPath;
    m_mountPathHasBeenSet = true;
}

bool CloudBaseRunVolumeMount::MountPathHasBeenSet() const
{
    return m_mountPathHasBeenSet;
}

bool CloudBaseRunVolumeMount::GetReadOnly() const
{
    return m_readOnly;
}

void CloudBaseRunVolumeMount::SetReadOnly(const bool& _readOnly)
{
    m_readOnly = _readOnly;
    m_readOnlyHasBeenSet = true;
}

bool CloudBaseRunVolumeMount::ReadOnlyHasBeenSet() const
{
    return m_readOnlyHasBeenSet;
}

vector<CloudBaseRunNfsVolumeSource> CloudBaseRunVolumeMount::GetNfsVolumes() const
{
    return m_nfsVolumes;
}

void CloudBaseRunVolumeMount::SetNfsVolumes(const vector<CloudBaseRunNfsVolumeSource>& _nfsVolumes)
{
    m_nfsVolumes = _nfsVolumes;
    m_nfsVolumesHasBeenSet = true;
}

bool CloudBaseRunVolumeMount::NfsVolumesHasBeenSet() const
{
    return m_nfsVolumesHasBeenSet;
}

string CloudBaseRunVolumeMount::GetMountPropagation() const
{
    return m_mountPropagation;
}

void CloudBaseRunVolumeMount::SetMountPropagation(const string& _mountPropagation)
{
    m_mountPropagation = _mountPropagation;
    m_mountPropagationHasBeenSet = true;
}

bool CloudBaseRunVolumeMount::MountPropagationHasBeenSet() const
{
    return m_mountPropagationHasBeenSet;
}

