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

#include <tencentcloud/iotvideoindustry/v20201201/model/SceneItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

SceneItem::SceneItem() :
    m_intIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_sceneNameHasBeenSet(false),
    m_sceneTriggerHasBeenSet(false),
    m_recordDurationHasBeenSet(false),
    m_storeDurationHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome SceneItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IntId") && !value["IntId"].IsNull())
    {
        if (!value["IntId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SceneItem.IntId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intId = value["IntId"].GetInt64();
        m_intIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneItem.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SceneName") && !value["SceneName"].IsNull())
    {
        if (!value["SceneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneItem.SceneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneName = string(value["SceneName"].GetString());
        m_sceneNameHasBeenSet = true;
    }

    if (value.HasMember("SceneTrigger") && !value["SceneTrigger"].IsNull())
    {
        if (!value["SceneTrigger"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneItem.SceneTrigger` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneTrigger = string(value["SceneTrigger"].GetString());
        m_sceneTriggerHasBeenSet = true;
    }

    if (value.HasMember("RecordDuration") && !value["RecordDuration"].IsNull())
    {
        if (!value["RecordDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SceneItem.RecordDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordDuration = value["RecordDuration"].GetInt64();
        m_recordDurationHasBeenSet = true;
    }

    if (value.HasMember("StoreDuration") && !value["StoreDuration"].IsNull())
    {
        if (!value["StoreDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SceneItem.StoreDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storeDuration = value["StoreDuration"].GetInt64();
        m_storeDurationHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SceneItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_intIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneName.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneTriggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneTrigger";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneTrigger.c_str(), allocator).Move(), allocator);
    }

    if (m_recordDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordDuration, allocator);
    }

    if (m_storeDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storeDuration, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t SceneItem::GetIntId() const
{
    return m_intId;
}

void SceneItem::SetIntId(const int64_t& _intId)
{
    m_intId = _intId;
    m_intIdHasBeenSet = true;
}

bool SceneItem::IntIdHasBeenSet() const
{
    return m_intIdHasBeenSet;
}

string SceneItem::GetUin() const
{
    return m_uin;
}

void SceneItem::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool SceneItem::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string SceneItem::GetSceneName() const
{
    return m_sceneName;
}

void SceneItem::SetSceneName(const string& _sceneName)
{
    m_sceneName = _sceneName;
    m_sceneNameHasBeenSet = true;
}

bool SceneItem::SceneNameHasBeenSet() const
{
    return m_sceneNameHasBeenSet;
}

string SceneItem::GetSceneTrigger() const
{
    return m_sceneTrigger;
}

void SceneItem::SetSceneTrigger(const string& _sceneTrigger)
{
    m_sceneTrigger = _sceneTrigger;
    m_sceneTriggerHasBeenSet = true;
}

bool SceneItem::SceneTriggerHasBeenSet() const
{
    return m_sceneTriggerHasBeenSet;
}

int64_t SceneItem::GetRecordDuration() const
{
    return m_recordDuration;
}

void SceneItem::SetRecordDuration(const int64_t& _recordDuration)
{
    m_recordDuration = _recordDuration;
    m_recordDurationHasBeenSet = true;
}

bool SceneItem::RecordDurationHasBeenSet() const
{
    return m_recordDurationHasBeenSet;
}

int64_t SceneItem::GetStoreDuration() const
{
    return m_storeDuration;
}

void SceneItem::SetStoreDuration(const int64_t& _storeDuration)
{
    m_storeDuration = _storeDuration;
    m_storeDurationHasBeenSet = true;
}

bool SceneItem::StoreDurationHasBeenSet() const
{
    return m_storeDurationHasBeenSet;
}

string SceneItem::GetCreateTime() const
{
    return m_createTime;
}

void SceneItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SceneItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SceneItem::GetUpdateTime() const
{
    return m_updateTime;
}

void SceneItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SceneItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

