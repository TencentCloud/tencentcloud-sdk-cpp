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

#include <tencentcloud/gme/v20180711/model/UserMicStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

UserMicStatus::UserMicStatus() :
    m_enableMicHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_strUidHasBeenSet(false)
{
}

CoreInternalOutcome UserMicStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableMic") && !value["EnableMic"].IsNull())
    {
        if (!value["EnableMic"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserMicStatus.EnableMic` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableMic = value["EnableMic"].GetInt64();
        m_enableMicHasBeenSet = true;
    }

    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserMicStatus.Uid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uid = value["Uid"].GetInt64();
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("StrUid") && !value["StrUid"].IsNull())
    {
        if (!value["StrUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserMicStatus.StrUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strUid = string(value["StrUid"].GetString());
        m_strUidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserMicStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableMicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableMic, allocator);
    }

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uid, allocator);
    }

    if (m_strUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strUid.c_str(), allocator).Move(), allocator);
    }

}


int64_t UserMicStatus::GetEnableMic() const
{
    return m_enableMic;
}

void UserMicStatus::SetEnableMic(const int64_t& _enableMic)
{
    m_enableMic = _enableMic;
    m_enableMicHasBeenSet = true;
}

bool UserMicStatus::EnableMicHasBeenSet() const
{
    return m_enableMicHasBeenSet;
}

int64_t UserMicStatus::GetUid() const
{
    return m_uid;
}

void UserMicStatus::SetUid(const int64_t& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool UserMicStatus::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string UserMicStatus::GetStrUid() const
{
    return m_strUid;
}

void UserMicStatus::SetStrUid(const string& _strUid)
{
    m_strUid = _strUid;
    m_strUidHasBeenSet = true;
}

bool UserMicStatus::StrUidHasBeenSet() const
{
    return m_strUidHasBeenSet;
}

