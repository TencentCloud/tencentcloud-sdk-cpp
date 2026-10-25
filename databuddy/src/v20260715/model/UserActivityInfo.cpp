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

#include <tencentcloud/databuddy/v20260715/model/UserActivityInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

UserActivityInfo::UserActivityInfo() :
    m_isFavoriteHasBeenSet(false),
    m_lastViewTimeHasBeenSet(false)
{
}

CoreInternalOutcome UserActivityInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsFavorite") && !value["IsFavorite"].IsNull())
    {
        if (!value["IsFavorite"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UserActivityInfo.IsFavorite` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFavorite = value["IsFavorite"].GetBool();
        m_isFavoriteHasBeenSet = true;
    }

    if (value.HasMember("LastViewTime") && !value["LastViewTime"].IsNull())
    {
        if (!value["LastViewTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserActivityInfo.LastViewTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastViewTime = string(value["LastViewTime"].GetString());
        m_lastViewTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserActivityInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isFavoriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFavorite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFavorite, allocator);
    }

    if (m_lastViewTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastViewTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastViewTime.c_str(), allocator).Move(), allocator);
    }

}


bool UserActivityInfo::GetIsFavorite() const
{
    return m_isFavorite;
}

void UserActivityInfo::SetIsFavorite(const bool& _isFavorite)
{
    m_isFavorite = _isFavorite;
    m_isFavoriteHasBeenSet = true;
}

bool UserActivityInfo::IsFavoriteHasBeenSet() const
{
    return m_isFavoriteHasBeenSet;
}

string UserActivityInfo::GetLastViewTime() const
{
    return m_lastViewTime;
}

void UserActivityInfo::SetLastViewTime(const string& _lastViewTime)
{
    m_lastViewTime = _lastViewTime;
    m_lastViewTimeHasBeenSet = true;
}

bool UserActivityInfo::LastViewTimeHasBeenSet() const
{
    return m_lastViewTimeHasBeenSet;
}

