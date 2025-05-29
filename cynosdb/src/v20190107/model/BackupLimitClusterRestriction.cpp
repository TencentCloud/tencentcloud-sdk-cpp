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

#include <tencentcloud/cynosdb/v20190107/model/BackupLimitClusterRestriction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

BackupLimitClusterRestriction::BackupLimitClusterRestriction() :
    m_clusterIdHasBeenSet(false),
    m_backupLimitRestrictionHasBeenSet(false)
{
}

CoreInternalOutcome BackupLimitClusterRestriction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupLimitClusterRestriction.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("BackupLimitRestriction") && !value["BackupLimitRestriction"].IsNull())
    {
        if (!value["BackupLimitRestriction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackupLimitClusterRestriction.BackupLimitRestriction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backupLimitRestriction.Deserialize(value["BackupLimitRestriction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backupLimitRestrictionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupLimitClusterRestriction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupLimitRestrictionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupLimitRestriction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupLimitRestriction.ToJsonObject(value[key.c_str()], allocator);
    }

}


string BackupLimitClusterRestriction::GetClusterId() const
{
    return m_clusterId;
}

void BackupLimitClusterRestriction::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool BackupLimitClusterRestriction::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

BackupLimitRestriction BackupLimitClusterRestriction::GetBackupLimitRestriction() const
{
    return m_backupLimitRestriction;
}

void BackupLimitClusterRestriction::SetBackupLimitRestriction(const BackupLimitRestriction& _backupLimitRestriction)
{
    m_backupLimitRestriction = _backupLimitRestriction;
    m_backupLimitRestrictionHasBeenSet = true;
}

bool BackupLimitClusterRestriction::BackupLimitRestrictionHasBeenSet() const
{
    return m_backupLimitRestrictionHasBeenSet;
}

