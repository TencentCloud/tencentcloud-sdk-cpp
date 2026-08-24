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

#include <tencentcloud/bdrc/v20260330/model/CommonBackupPoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

CommonBackupPoint::CommonBackupPoint() :
    m_backupCommonTimeHasBeenSet(false),
    m_backupDetailSetHasBeenSet(false)
{
}

CoreInternalOutcome CommonBackupPoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackupCommonTime") && !value["BackupCommonTime"].IsNull())
    {
        if (!value["BackupCommonTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonBackupPoint.BackupCommonTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupCommonTime = string(value["BackupCommonTime"].GetString());
        m_backupCommonTimeHasBeenSet = true;
    }

    if (value.HasMember("BackupDetailSet") && !value["BackupDetailSet"].IsNull())
    {
        if (!value["BackupDetailSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CommonBackupPoint.BackupDetailSet` is not array type"));

        const rapidjson::Value &tmpValue = value["BackupDetailSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BackupDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_backupDetailSet.push_back(item);
        }
        m_backupDetailSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommonBackupPoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backupCommonTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupCommonTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupCommonTime.c_str(), allocator).Move(), allocator);
    }

    if (m_backupDetailSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupDetailSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_backupDetailSet.begin(); itr != m_backupDetailSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CommonBackupPoint::GetBackupCommonTime() const
{
    return m_backupCommonTime;
}

void CommonBackupPoint::SetBackupCommonTime(const string& _backupCommonTime)
{
    m_backupCommonTime = _backupCommonTime;
    m_backupCommonTimeHasBeenSet = true;
}

bool CommonBackupPoint::BackupCommonTimeHasBeenSet() const
{
    return m_backupCommonTimeHasBeenSet;
}

vector<BackupDetail> CommonBackupPoint::GetBackupDetailSet() const
{
    return m_backupDetailSet;
}

void CommonBackupPoint::SetBackupDetailSet(const vector<BackupDetail>& _backupDetailSet)
{
    m_backupDetailSet = _backupDetailSet;
    m_backupDetailSetHasBeenSet = true;
}

bool CommonBackupPoint::BackupDetailSetHasBeenSet() const
{
    return m_backupDetailSetHasBeenSet;
}

