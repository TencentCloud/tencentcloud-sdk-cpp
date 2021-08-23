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

#include <tencentcloud/iai/v20200303/model/PersonExDescriptionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

PersonExDescriptionInfo::PersonExDescriptionInfo() :
    m_personExDescriptionIndexHasBeenSet(false),
    m_personExDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome PersonExDescriptionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PersonExDescriptionIndex") && !value["PersonExDescriptionIndex"].IsNull())
    {
        if (!value["PersonExDescriptionIndex"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonExDescriptionInfo.PersonExDescriptionIndex` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_personExDescriptionIndex = value["PersonExDescriptionIndex"].GetUint64();
        m_personExDescriptionIndexHasBeenSet = true;
    }

    if (value.HasMember("PersonExDescription") && !value["PersonExDescription"].IsNull())
    {
        if (!value["PersonExDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonExDescriptionInfo.PersonExDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personExDescription = string(value["PersonExDescription"].GetString());
        m_personExDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PersonExDescriptionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_personExDescriptionIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonExDescriptionIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_personExDescriptionIndex, allocator);
    }

    if (m_personExDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonExDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personExDescription.c_str(), allocator).Move(), allocator);
    }

}


uint64_t PersonExDescriptionInfo::GetPersonExDescriptionIndex() const
{
    return m_personExDescriptionIndex;
}

void PersonExDescriptionInfo::SetPersonExDescriptionIndex(const uint64_t& _personExDescriptionIndex)
{
    m_personExDescriptionIndex = _personExDescriptionIndex;
    m_personExDescriptionIndexHasBeenSet = true;
}

bool PersonExDescriptionInfo::PersonExDescriptionIndexHasBeenSet() const
{
    return m_personExDescriptionIndexHasBeenSet;
}

string PersonExDescriptionInfo::GetPersonExDescription() const
{
    return m_personExDescription;
}

void PersonExDescriptionInfo::SetPersonExDescription(const string& _personExDescription)
{
    m_personExDescription = _personExDescription;
    m_personExDescriptionHasBeenSet = true;
}

bool PersonExDescriptionInfo::PersonExDescriptionHasBeenSet() const
{
    return m_personExDescriptionHasBeenSet;
}

