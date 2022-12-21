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

#include <tencentcloud/lighthouse/v20200324/model/DiskBackupDeniedActions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

DiskBackupDeniedActions::DiskBackupDeniedActions() :
    m_diskBackupIdHasBeenSet(false),
    m_deniedActionsHasBeenSet(false)
{
}

CoreInternalOutcome DiskBackupDeniedActions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskBackupId") && !value["DiskBackupId"].IsNull())
    {
        if (!value["DiskBackupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskBackupDeniedActions.DiskBackupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskBackupId = string(value["DiskBackupId"].GetString());
        m_diskBackupIdHasBeenSet = true;
    }

    if (value.HasMember("DeniedActions") && !value["DeniedActions"].IsNull())
    {
        if (!value["DeniedActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiskBackupDeniedActions.DeniedActions` is not array type"));

        const rapidjson::Value &tmpValue = value["DeniedActions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeniedAction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deniedActions.push_back(item);
        }
        m_deniedActionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiskBackupDeniedActions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diskBackupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskBackupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskBackupId.c_str(), allocator).Move(), allocator);
    }

    if (m_deniedActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeniedActions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deniedActions.begin(); itr != m_deniedActions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DiskBackupDeniedActions::GetDiskBackupId() const
{
    return m_diskBackupId;
}

void DiskBackupDeniedActions::SetDiskBackupId(const string& _diskBackupId)
{
    m_diskBackupId = _diskBackupId;
    m_diskBackupIdHasBeenSet = true;
}

bool DiskBackupDeniedActions::DiskBackupIdHasBeenSet() const
{
    return m_diskBackupIdHasBeenSet;
}

vector<DeniedAction> DiskBackupDeniedActions::GetDeniedActions() const
{
    return m_deniedActions;
}

void DiskBackupDeniedActions::SetDeniedActions(const vector<DeniedAction>& _deniedActions)
{
    m_deniedActions = _deniedActions;
    m_deniedActionsHasBeenSet = true;
}

bool DiskBackupDeniedActions::DeniedActionsHasBeenSet() const
{
    return m_deniedActionsHasBeenSet;
}

