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

#include <tencentcloud/tag/v20180813/model/TagResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tag::V20180813::Model;
using namespace std;

TagResource::TagResource() :
    m_tagKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_tagKeyMd5HasBeenSet(false),
    m_tagValueMd5HasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_categoryHasBeenSet(false)
{
}

CoreInternalOutcome TagResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagKey") && !value["TagKey"].IsNull())
    {
        if (!value["TagKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagResource.TagKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagKey = string(value["TagKey"].GetString());
        m_tagKeyHasBeenSet = true;
    }

    if (value.HasMember("TagValue") && !value["TagValue"].IsNull())
    {
        if (!value["TagValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagResource.TagValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagValue = string(value["TagValue"].GetString());
        m_tagValueHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagResource.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("TagKeyMd5") && !value["TagKeyMd5"].IsNull())
    {
        if (!value["TagKeyMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagResource.TagKeyMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagKeyMd5 = string(value["TagKeyMd5"].GetString());
        m_tagKeyMd5HasBeenSet = true;
    }

    if (value.HasMember("TagValueMd5") && !value["TagValueMd5"].IsNull())
    {
        if (!value["TagValueMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagResource.TagValueMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagValueMd5 = string(value["TagValueMd5"].GetString());
        m_tagValueMd5HasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagResource.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagResource.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TagResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagKeyMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKeyMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagKeyMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_tagValueMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValueMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagValueMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

}


string TagResource::GetTagKey() const
{
    return m_tagKey;
}

void TagResource::SetTagKey(const string& _tagKey)
{
    m_tagKey = _tagKey;
    m_tagKeyHasBeenSet = true;
}

bool TagResource::TagKeyHasBeenSet() const
{
    return m_tagKeyHasBeenSet;
}

string TagResource::GetTagValue() const
{
    return m_tagValue;
}

void TagResource::SetTagValue(const string& _tagValue)
{
    m_tagValue = _tagValue;
    m_tagValueHasBeenSet = true;
}

bool TagResource::TagValueHasBeenSet() const
{
    return m_tagValueHasBeenSet;
}

string TagResource::GetResourceId() const
{
    return m_resourceId;
}

void TagResource::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool TagResource::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string TagResource::GetTagKeyMd5() const
{
    return m_tagKeyMd5;
}

void TagResource::SetTagKeyMd5(const string& _tagKeyMd5)
{
    m_tagKeyMd5 = _tagKeyMd5;
    m_tagKeyMd5HasBeenSet = true;
}

bool TagResource::TagKeyMd5HasBeenSet() const
{
    return m_tagKeyMd5HasBeenSet;
}

string TagResource::GetTagValueMd5() const
{
    return m_tagValueMd5;
}

void TagResource::SetTagValueMd5(const string& _tagValueMd5)
{
    m_tagValueMd5 = _tagValueMd5;
    m_tagValueMd5HasBeenSet = true;
}

bool TagResource::TagValueMd5HasBeenSet() const
{
    return m_tagValueMd5HasBeenSet;
}

string TagResource::GetServiceType() const
{
    return m_serviceType;
}

void TagResource::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool TagResource::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string TagResource::GetCategory() const
{
    return m_category;
}

void TagResource::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool TagResource::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

