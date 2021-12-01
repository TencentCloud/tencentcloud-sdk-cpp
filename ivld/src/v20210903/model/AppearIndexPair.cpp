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

#include <tencentcloud/ivld/v20210903/model/AppearIndexPair.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

AppearIndexPair::AppearIndexPair() :
    m_appearIndexHasBeenSet(false),
    m_indexHasBeenSet(false)
{
}

CoreInternalOutcome AppearIndexPair::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppearIndex") && !value["AppearIndex"].IsNull())
    {
        if (!value["AppearIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppearIndexPair.AppearIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appearIndex = value["AppearIndex"].GetInt64();
        m_appearIndexHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppearIndexPair.Index` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetInt64();
        m_indexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppearIndexPair::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appearIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppearIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appearIndex, allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

}


int64_t AppearIndexPair::GetAppearIndex() const
{
    return m_appearIndex;
}

void AppearIndexPair::SetAppearIndex(const int64_t& _appearIndex)
{
    m_appearIndex = _appearIndex;
    m_appearIndexHasBeenSet = true;
}

bool AppearIndexPair::AppearIndexHasBeenSet() const
{
    return m_appearIndexHasBeenSet;
}

int64_t AppearIndexPair::GetIndex() const
{
    return m_index;
}

void AppearIndexPair::SetIndex(const int64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool AppearIndexPair::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

