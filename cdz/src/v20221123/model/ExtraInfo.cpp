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

#include <tencentcloud/cdz/v20221123/model/ExtraInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdz::V20221123::Model;
using namespace std;

ExtraInfo::ExtraInfo() :
    m_thisMondayLocalDateHasBeenSet(false),
    m_lastMondayLocalDateHasBeenSet(false)
{
}

CoreInternalOutcome ExtraInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ThisMondayLocalDate") && !value["ThisMondayLocalDate"].IsNull())
    {
        if (!value["ThisMondayLocalDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtraInfo.ThisMondayLocalDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thisMondayLocalDate = string(value["ThisMondayLocalDate"].GetString());
        m_thisMondayLocalDateHasBeenSet = true;
    }

    if (value.HasMember("LastMondayLocalDate") && !value["LastMondayLocalDate"].IsNull())
    {
        if (!value["LastMondayLocalDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtraInfo.LastMondayLocalDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastMondayLocalDate = string(value["LastMondayLocalDate"].GetString());
        m_lastMondayLocalDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtraInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_thisMondayLocalDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThisMondayLocalDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thisMondayLocalDate.c_str(), allocator).Move(), allocator);
    }

    if (m_lastMondayLocalDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastMondayLocalDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastMondayLocalDate.c_str(), allocator).Move(), allocator);
    }

}


string ExtraInfo::GetThisMondayLocalDate() const
{
    return m_thisMondayLocalDate;
}

void ExtraInfo::SetThisMondayLocalDate(const string& _thisMondayLocalDate)
{
    m_thisMondayLocalDate = _thisMondayLocalDate;
    m_thisMondayLocalDateHasBeenSet = true;
}

bool ExtraInfo::ThisMondayLocalDateHasBeenSet() const
{
    return m_thisMondayLocalDateHasBeenSet;
}

string ExtraInfo::GetLastMondayLocalDate() const
{
    return m_lastMondayLocalDate;
}

void ExtraInfo::SetLastMondayLocalDate(const string& _lastMondayLocalDate)
{
    m_lastMondayLocalDate = _lastMondayLocalDate;
    m_lastMondayLocalDateHasBeenSet = true;
}

bool ExtraInfo::LastMondayLocalDateHasBeenSet() const
{
    return m_lastMondayLocalDateHasBeenSet;
}

