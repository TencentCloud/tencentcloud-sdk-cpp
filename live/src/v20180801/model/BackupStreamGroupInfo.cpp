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

#include <tencentcloud/live/v20180801/model/BackupStreamGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

BackupStreamGroupInfo::BackupStreamGroupInfo() :
    m_streamNameHasBeenSet(false),
    m_backupListHasBeenSet(false),
    m_optimalEnableHasBeenSet(false),
    m_hostGroupNameHasBeenSet(false)
{
}

CoreInternalOutcome BackupStreamGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StreamName") && !value["StreamName"].IsNull())
    {
        if (!value["StreamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStreamGroupInfo.StreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamName = string(value["StreamName"].GetString());
        m_streamNameHasBeenSet = true;
    }

    if (value.HasMember("BackupList") && !value["BackupList"].IsNull())
    {
        if (!value["BackupList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupStreamGroupInfo.BackupList` is not array type"));

        const rapidjson::Value &tmpValue = value["BackupList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BackupStreamDetailData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_backupList.push_back(item);
        }
        m_backupListHasBeenSet = true;
    }

    if (value.HasMember("OptimalEnable") && !value["OptimalEnable"].IsNull())
    {
        if (!value["OptimalEnable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStreamGroupInfo.OptimalEnable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_optimalEnable = value["OptimalEnable"].GetInt64();
        m_optimalEnableHasBeenSet = true;
    }

    if (value.HasMember("HostGroupName") && !value["HostGroupName"].IsNull())
    {
        if (!value["HostGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStreamGroupInfo.HostGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostGroupName = string(value["HostGroupName"].GetString());
        m_hostGroupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupStreamGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_streamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamName.c_str(), allocator).Move(), allocator);
    }

    if (m_backupListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_backupList.begin(); itr != m_backupList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_optimalEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptimalEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_optimalEnable, allocator);
    }

    if (m_hostGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostGroupName.c_str(), allocator).Move(), allocator);
    }

}


string BackupStreamGroupInfo::GetStreamName() const
{
    return m_streamName;
}

void BackupStreamGroupInfo::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool BackupStreamGroupInfo::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

vector<BackupStreamDetailData> BackupStreamGroupInfo::GetBackupList() const
{
    return m_backupList;
}

void BackupStreamGroupInfo::SetBackupList(const vector<BackupStreamDetailData>& _backupList)
{
    m_backupList = _backupList;
    m_backupListHasBeenSet = true;
}

bool BackupStreamGroupInfo::BackupListHasBeenSet() const
{
    return m_backupListHasBeenSet;
}

int64_t BackupStreamGroupInfo::GetOptimalEnable() const
{
    return m_optimalEnable;
}

void BackupStreamGroupInfo::SetOptimalEnable(const int64_t& _optimalEnable)
{
    m_optimalEnable = _optimalEnable;
    m_optimalEnableHasBeenSet = true;
}

bool BackupStreamGroupInfo::OptimalEnableHasBeenSet() const
{
    return m_optimalEnableHasBeenSet;
}

string BackupStreamGroupInfo::GetHostGroupName() const
{
    return m_hostGroupName;
}

void BackupStreamGroupInfo::SetHostGroupName(const string& _hostGroupName)
{
    m_hostGroupName = _hostGroupName;
    m_hostGroupNameHasBeenSet = true;
}

bool BackupStreamGroupInfo::HostGroupNameHasBeenSet() const
{
    return m_hostGroupNameHasBeenSet;
}

