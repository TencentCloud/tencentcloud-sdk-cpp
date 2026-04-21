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

#include <tencentcloud/bi/v20220105/model/ResourceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

ResourceItem::ResourceItem() :
    m_resourceNameHasBeenSet(false),
    m_resourceValueHasBeenSet(false),
    m_canChangeHasBeenSet(false),
    m_tipsHasBeenSet(false)
{
}

CoreInternalOutcome ResourceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceValue") && !value["ResourceValue"].IsNull())
    {
        if (!value["ResourceValue"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.ResourceValue` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_resourceValue = value["ResourceValue"].GetBool();
        m_resourceValueHasBeenSet = true;
    }

    if (value.HasMember("CanChange") && !value["CanChange"].IsNull())
    {
        if (!value["CanChange"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.CanChange` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canChange = value["CanChange"].GetBool();
        m_canChangeHasBeenSet = true;
    }

    if (value.HasMember("Tips") && !value["Tips"].IsNull())
    {
        if (!value["Tips"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceItem.Tips` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tips = string(value["Tips"].GetString());
        m_tipsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceValue, allocator);
    }

    if (m_canChangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanChange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canChange, allocator);
    }

    if (m_tipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tips.c_str(), allocator).Move(), allocator);
    }

}


string ResourceItem::GetResourceName() const
{
    return m_resourceName;
}

void ResourceItem::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool ResourceItem::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

bool ResourceItem::GetResourceValue() const
{
    return m_resourceValue;
}

void ResourceItem::SetResourceValue(const bool& _resourceValue)
{
    m_resourceValue = _resourceValue;
    m_resourceValueHasBeenSet = true;
}

bool ResourceItem::ResourceValueHasBeenSet() const
{
    return m_resourceValueHasBeenSet;
}

bool ResourceItem::GetCanChange() const
{
    return m_canChange;
}

void ResourceItem::SetCanChange(const bool& _canChange)
{
    m_canChange = _canChange;
    m_canChangeHasBeenSet = true;
}

bool ResourceItem::CanChangeHasBeenSet() const
{
    return m_canChangeHasBeenSet;
}

string ResourceItem::GetTips() const
{
    return m_tips;
}

void ResourceItem::SetTips(const string& _tips)
{
    m_tips = _tips;
    m_tipsHasBeenSet = true;
}

bool ResourceItem::TipsHasBeenSet() const
{
    return m_tipsHasBeenSet;
}

