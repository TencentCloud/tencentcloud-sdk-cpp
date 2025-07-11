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

#include <tencentcloud/teo/v20220901/model/IPExpireInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

IPExpireInfo::IPExpireInfo() :
    m_expireTimeHasBeenSet(false),
    m_iPListHasBeenSet(false)
{
}

CoreInternalOutcome IPExpireInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPExpireInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("IPList") && !value["IPList"].IsNull())
    {
        if (!value["IPList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IPExpireInfo.IPList` is not array type"));

        const rapidjson::Value &tmpValue = value["IPList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_iPList.push_back((*itr).GetString());
        }
        m_iPListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IPExpireInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_iPListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_iPList.begin(); itr != m_iPList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string IPExpireInfo::GetExpireTime() const
{
    return m_expireTime;
}

void IPExpireInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool IPExpireInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

vector<string> IPExpireInfo::GetIPList() const
{
    return m_iPList;
}

void IPExpireInfo::SetIPList(const vector<string>& _iPList)
{
    m_iPList = _iPList;
    m_iPListHasBeenSet = true;
}

bool IPExpireInfo::IPListHasBeenSet() const
{
    return m_iPListHasBeenSet;
}

