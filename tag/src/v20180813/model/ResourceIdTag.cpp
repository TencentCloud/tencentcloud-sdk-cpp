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

#include <tencentcloud/tag/v20180813/model/ResourceIdTag.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tag::V20180813::Model;
using namespace std;

ResourceIdTag::ResourceIdTag() :
    m_resourceIdHasBeenSet(false),
    m_tagKeyValuesHasBeenSet(false)
{
}

CoreInternalOutcome ResourceIdTag::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceIdTag.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("TagKeyValues") && !value["TagKeyValues"].IsNull())
    {
        if (!value["TagKeyValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceIdTag.TagKeyValues` is not array type"));

        const rapidjson::Value &tmpValue = value["TagKeyValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagKeyValues.push_back(item);
        }
        m_tagKeyValuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceIdTag::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagKeyValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKeyValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagKeyValues.begin(); itr != m_tagKeyValues.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ResourceIdTag::GetResourceId() const
{
    return m_resourceId;
}

void ResourceIdTag::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ResourceIdTag::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

vector<Tag> ResourceIdTag::GetTagKeyValues() const
{
    return m_tagKeyValues;
}

void ResourceIdTag::SetTagKeyValues(const vector<Tag>& _tagKeyValues)
{
    m_tagKeyValues = _tagKeyValues;
    m_tagKeyValuesHasBeenSet = true;
}

bool ResourceIdTag::TagKeyValuesHasBeenSet() const
{
    return m_tagKeyValuesHasBeenSet;
}

