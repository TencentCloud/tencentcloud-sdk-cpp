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

#include <tencentcloud/cdwpg/v20201230/model/UpgradeItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

UpgradeItem::UpgradeItem() :
    m_taskNameHasBeenSet(false),
    m_sourceVersionHasBeenSet(false),
    m_targetVersionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_operateUinHasBeenSet(false)
{
}

CoreInternalOutcome UpgradeItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeItem.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("SourceVersion") && !value["SourceVersion"].IsNull())
    {
        if (!value["SourceVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeItem.SourceVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceVersion = string(value["SourceVersion"].GetString());
        m_sourceVersionHasBeenSet = true;
    }

    if (value.HasMember("TargetVersion") && !value["TargetVersion"].IsNull())
    {
        if (!value["TargetVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeItem.TargetVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetVersion = string(value["TargetVersion"].GetString());
        m_targetVersionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeItem.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OperateUin") && !value["OperateUin"].IsNull())
    {
        if (!value["OperateUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeItem.OperateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateUin = string(value["OperateUin"].GetString());
        m_operateUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpgradeItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_targetVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_operateUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operateUin.c_str(), allocator).Move(), allocator);
    }

}


string UpgradeItem::GetTaskName() const
{
    return m_taskName;
}

void UpgradeItem::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool UpgradeItem::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string UpgradeItem::GetSourceVersion() const
{
    return m_sourceVersion;
}

void UpgradeItem::SetSourceVersion(const string& _sourceVersion)
{
    m_sourceVersion = _sourceVersion;
    m_sourceVersionHasBeenSet = true;
}

bool UpgradeItem::SourceVersionHasBeenSet() const
{
    return m_sourceVersionHasBeenSet;
}

string UpgradeItem::GetTargetVersion() const
{
    return m_targetVersion;
}

void UpgradeItem::SetTargetVersion(const string& _targetVersion)
{
    m_targetVersion = _targetVersion;
    m_targetVersionHasBeenSet = true;
}

bool UpgradeItem::TargetVersionHasBeenSet() const
{
    return m_targetVersionHasBeenSet;
}

string UpgradeItem::GetCreateTime() const
{
    return m_createTime;
}

void UpgradeItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool UpgradeItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string UpgradeItem::GetEndTime() const
{
    return m_endTime;
}

void UpgradeItem::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool UpgradeItem::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string UpgradeItem::GetStatus() const
{
    return m_status;
}

void UpgradeItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UpgradeItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string UpgradeItem::GetOperateUin() const
{
    return m_operateUin;
}

void UpgradeItem::SetOperateUin(const string& _operateUin)
{
    m_operateUin = _operateUin;
    m_operateUinHasBeenSet = true;
}

bool UpgradeItem::OperateUinHasBeenSet() const
{
    return m_operateUinHasBeenSet;
}

