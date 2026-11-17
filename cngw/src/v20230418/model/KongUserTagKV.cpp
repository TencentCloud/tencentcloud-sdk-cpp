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

#include <tencentcloud/cngw/v20230418/model/KongUserTagKV.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

KongUserTagKV::KongUserTagKV() :
    m_tagIdHasBeenSet(false),
    m_tagKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false)
{
}

CoreInternalOutcome KongUserTagKV::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagId") && !value["TagId"].IsNull())
    {
        if (!value["TagId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KongUserTagKV.TagId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tagId = value["TagId"].GetUint64();
        m_tagIdHasBeenSet = true;
    }

    if (value.HasMember("TagKey") && !value["TagKey"].IsNull())
    {
        if (!value["TagKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongUserTagKV.TagKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagKey = string(value["TagKey"].GetString());
        m_tagKeyHasBeenSet = true;
    }

    if (value.HasMember("TagValue") && !value["TagValue"].IsNull())
    {
        if (!value["TagValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongUserTagKV.TagValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagValue = string(value["TagValue"].GetString());
        m_tagValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KongUserTagKV::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tagId, allocator);
    }

    if (m_tagKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tagValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagValue.c_str(), allocator).Move(), allocator);
    }

}


uint64_t KongUserTagKV::GetTagId() const
{
    return m_tagId;
}

void KongUserTagKV::SetTagId(const uint64_t& _tagId)
{
    m_tagId = _tagId;
    m_tagIdHasBeenSet = true;
}

bool KongUserTagKV::TagIdHasBeenSet() const
{
    return m_tagIdHasBeenSet;
}

string KongUserTagKV::GetTagKey() const
{
    return m_tagKey;
}

void KongUserTagKV::SetTagKey(const string& _tagKey)
{
    m_tagKey = _tagKey;
    m_tagKeyHasBeenSet = true;
}

bool KongUserTagKV::TagKeyHasBeenSet() const
{
    return m_tagKeyHasBeenSet;
}

string KongUserTagKV::GetTagValue() const
{
    return m_tagValue;
}

void KongUserTagKV::SetTagValue(const string& _tagValue)
{
    m_tagValue = _tagValue;
    m_tagValueHasBeenSet = true;
}

bool KongUserTagKV::TagValueHasBeenSet() const
{
    return m_tagValueHasBeenSet;
}

