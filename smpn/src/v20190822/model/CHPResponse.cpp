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

#include <tencentcloud/smpn/v20190822/model/CHPResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Smpn::V20190822::Model;
using namespace std;

CHPResponse::CHPResponse() :
    m_tagTypeHasBeenSet(false),
    m_tagCountHasBeenSet(false)
{
}

CoreInternalOutcome CHPResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagType") && !value["TagType"].IsNull())
    {
        if (!value["TagType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CHPResponse.TagType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tagType = value["TagType"].GetInt64();
        m_tagTypeHasBeenSet = true;
    }

    if (value.HasMember("TagCount") && !value["TagCount"].IsNull())
    {
        if (!value["TagCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CHPResponse.TagCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tagCount = value["TagCount"].GetInt64();
        m_tagCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CHPResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tagType, allocator);
    }

    if (m_tagCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tagCount, allocator);
    }

}


int64_t CHPResponse::GetTagType() const
{
    return m_tagType;
}

void CHPResponse::SetTagType(const int64_t& _tagType)
{
    m_tagType = _tagType;
    m_tagTypeHasBeenSet = true;
}

bool CHPResponse::TagTypeHasBeenSet() const
{
    return m_tagTypeHasBeenSet;
}

int64_t CHPResponse::GetTagCount() const
{
    return m_tagCount;
}

void CHPResponse::SetTagCount(const int64_t& _tagCount)
{
    m_tagCount = _tagCount;
    m_tagCountHasBeenSet = true;
}

bool CHPResponse::TagCountHasBeenSet() const
{
    return m_tagCountHasBeenSet;
}

