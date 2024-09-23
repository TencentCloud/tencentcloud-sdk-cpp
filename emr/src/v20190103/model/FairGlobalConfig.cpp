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

#include <tencentcloud/emr/v20190103/model/FairGlobalConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

FairGlobalConfig::FairGlobalConfig() :
    m_userMaxAppsDefaultHasBeenSet(false)
{
}

CoreInternalOutcome FairGlobalConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserMaxAppsDefault") && !value["UserMaxAppsDefault"].IsNull())
    {
        if (!value["UserMaxAppsDefault"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FairGlobalConfig.UserMaxAppsDefault` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userMaxAppsDefault = value["UserMaxAppsDefault"].GetInt64();
        m_userMaxAppsDefaultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FairGlobalConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userMaxAppsDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserMaxAppsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userMaxAppsDefault, allocator);
    }

}


int64_t FairGlobalConfig::GetUserMaxAppsDefault() const
{
    return m_userMaxAppsDefault;
}

void FairGlobalConfig::SetUserMaxAppsDefault(const int64_t& _userMaxAppsDefault)
{
    m_userMaxAppsDefault = _userMaxAppsDefault;
    m_userMaxAppsDefaultHasBeenSet = true;
}

bool FairGlobalConfig::UserMaxAppsDefaultHasBeenSet() const
{
    return m_userMaxAppsDefaultHasBeenSet;
}

