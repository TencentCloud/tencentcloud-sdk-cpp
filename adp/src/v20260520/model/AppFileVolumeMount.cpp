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

#include <tencentcloud/adp/v20260520/model/AppFileVolumeMount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppFileVolumeMount::AppFileVolumeMount() :
    m_fileVolumeMountHasBeenSet(false),
    m_actionHasBeenSet(false)
{
}

CoreInternalOutcome AppFileVolumeMount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileVolumeMount") && !value["FileVolumeMount"].IsNull())
    {
        if (!value["FileVolumeMount"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppFileVolumeMount.FileVolumeMount` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fileVolumeMount.Deserialize(value["FileVolumeMount"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileVolumeMountHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppFileVolumeMount.Action` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_action = value["Action"].GetInt64();
        m_actionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppFileVolumeMount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileVolumeMountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileVolumeMount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fileVolumeMount.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_action, allocator);
    }

}


FileVolumeMount AppFileVolumeMount::GetFileVolumeMount() const
{
    return m_fileVolumeMount;
}

void AppFileVolumeMount::SetFileVolumeMount(const FileVolumeMount& _fileVolumeMount)
{
    m_fileVolumeMount = _fileVolumeMount;
    m_fileVolumeMountHasBeenSet = true;
}

bool AppFileVolumeMount::FileVolumeMountHasBeenSet() const
{
    return m_fileVolumeMountHasBeenSet;
}

int64_t AppFileVolumeMount::GetAction() const
{
    return m_action;
}

void AppFileVolumeMount::SetAction(const int64_t& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool AppFileVolumeMount::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

