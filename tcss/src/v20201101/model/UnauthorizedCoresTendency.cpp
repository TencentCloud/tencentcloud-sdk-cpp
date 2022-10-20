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

#include <tencentcloud/tcss/v20201101/model/UnauthorizedCoresTendency.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

UnauthorizedCoresTendency::UnauthorizedCoresTendency() :
    m_dateTimeHasBeenSet(false),
    m_coresCountHasBeenSet(false)
{
}

CoreInternalOutcome UnauthorizedCoresTendency::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DateTime") && !value["DateTime"].IsNull())
    {
        if (!value["DateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnauthorizedCoresTendency.DateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateTime = string(value["DateTime"].GetString());
        m_dateTimeHasBeenSet = true;
    }

    if (value.HasMember("CoresCount") && !value["CoresCount"].IsNull())
    {
        if (!value["CoresCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UnauthorizedCoresTendency.CoresCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_coresCount = value["CoresCount"].GetInt64();
        m_coresCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UnauthorizedCoresTendency::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_coresCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoresCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coresCount, allocator);
    }

}


string UnauthorizedCoresTendency::GetDateTime() const
{
    return m_dateTime;
}

void UnauthorizedCoresTendency::SetDateTime(const string& _dateTime)
{
    m_dateTime = _dateTime;
    m_dateTimeHasBeenSet = true;
}

bool UnauthorizedCoresTendency::DateTimeHasBeenSet() const
{
    return m_dateTimeHasBeenSet;
}

int64_t UnauthorizedCoresTendency::GetCoresCount() const
{
    return m_coresCount;
}

void UnauthorizedCoresTendency::SetCoresCount(const int64_t& _coresCount)
{
    m_coresCount = _coresCount;
    m_coresCountHasBeenSet = true;
}

bool UnauthorizedCoresTendency::CoresCountHasBeenSet() const
{
    return m_coresCountHasBeenSet;
}

