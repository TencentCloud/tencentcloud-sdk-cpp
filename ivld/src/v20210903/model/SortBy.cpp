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

#include <tencentcloud/ivld/v20210903/model/SortBy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

SortBy::SortBy() :
    m_byHasBeenSet(false),
    m_descendHasBeenSet(false)
{
}

CoreInternalOutcome SortBy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("By") && !value["By"].IsNull())
    {
        if (!value["By"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SortBy.By` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_by = string(value["By"].GetString());
        m_byHasBeenSet = true;
    }

    if (value.HasMember("Descend") && !value["Descend"].IsNull())
    {
        if (!value["Descend"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SortBy.Descend` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_descend = value["Descend"].GetBool();
        m_descendHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SortBy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_byHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "By";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_by.c_str(), allocator).Move(), allocator);
    }

    if (m_descendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Descend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_descend, allocator);
    }

}


string SortBy::GetBy() const
{
    return m_by;
}

void SortBy::SetBy(const string& _by)
{
    m_by = _by;
    m_byHasBeenSet = true;
}

bool SortBy::ByHasBeenSet() const
{
    return m_byHasBeenSet;
}

bool SortBy::GetDescend() const
{
    return m_descend;
}

void SortBy::SetDescend(const bool& _descend)
{
    m_descend = _descend;
    m_descendHasBeenSet = true;
}

bool SortBy::DescendHasBeenSet() const
{
    return m_descendHasBeenSet;
}

