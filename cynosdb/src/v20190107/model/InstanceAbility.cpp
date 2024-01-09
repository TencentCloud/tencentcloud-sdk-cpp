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

#include <tencentcloud/cynosdb/v20190107/model/InstanceAbility.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

InstanceAbility::InstanceAbility() :
    m_isSupportForceRestartHasBeenSet(false),
    m_nonsupportForceRestartReasonHasBeenSet(false)
{
}

CoreInternalOutcome InstanceAbility::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsSupportForceRestart") && !value["IsSupportForceRestart"].IsNull())
    {
        if (!value["IsSupportForceRestart"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAbility.IsSupportForceRestart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportForceRestart = string(value["IsSupportForceRestart"].GetString());
        m_isSupportForceRestartHasBeenSet = true;
    }

    if (value.HasMember("NonsupportForceRestartReason") && !value["NonsupportForceRestartReason"].IsNull())
    {
        if (!value["NonsupportForceRestartReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAbility.NonsupportForceRestartReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nonsupportForceRestartReason = string(value["NonsupportForceRestartReason"].GetString());
        m_nonsupportForceRestartReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceAbility::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isSupportForceRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportForceRestart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isSupportForceRestart.c_str(), allocator).Move(), allocator);
    }

    if (m_nonsupportForceRestartReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NonsupportForceRestartReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nonsupportForceRestartReason.c_str(), allocator).Move(), allocator);
    }

}


string InstanceAbility::GetIsSupportForceRestart() const
{
    return m_isSupportForceRestart;
}

void InstanceAbility::SetIsSupportForceRestart(const string& _isSupportForceRestart)
{
    m_isSupportForceRestart = _isSupportForceRestart;
    m_isSupportForceRestartHasBeenSet = true;
}

bool InstanceAbility::IsSupportForceRestartHasBeenSet() const
{
    return m_isSupportForceRestartHasBeenSet;
}

string InstanceAbility::GetNonsupportForceRestartReason() const
{
    return m_nonsupportForceRestartReason;
}

void InstanceAbility::SetNonsupportForceRestartReason(const string& _nonsupportForceRestartReason)
{
    m_nonsupportForceRestartReason = _nonsupportForceRestartReason;
    m_nonsupportForceRestartReasonHasBeenSet = true;
}

bool InstanceAbility::NonsupportForceRestartReasonHasBeenSet() const
{
    return m_nonsupportForceRestartReasonHasBeenSet;
}

