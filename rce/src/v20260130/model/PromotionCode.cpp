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

#include <tencentcloud/rce/v20260130/model/PromotionCode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

PromotionCode::PromotionCode() :
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_imageLinkHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

CoreInternalOutcome PromotionCode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PromotionCode.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PromotionCode.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ImageLink") && !value["ImageLink"].IsNull())
    {
        if (!value["ImageLink"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PromotionCode.ImageLink` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageLink = string(value["ImageLink"].GetString());
        m_imageLinkHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PromotionCode.Address` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_address.Deserialize(value["Address"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PromotionCode.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Item item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_items.push_back(item);
        }
        m_itemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PromotionCode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_imageLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageLink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageLink.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_address.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string PromotionCode::GetId() const
{
    return m_id;
}

void PromotionCode::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool PromotionCode::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string PromotionCode::GetType() const
{
    return m_type;
}

void PromotionCode::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PromotionCode::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string PromotionCode::GetImageLink() const
{
    return m_imageLink;
}

void PromotionCode::SetImageLink(const string& _imageLink)
{
    m_imageLink = _imageLink;
    m_imageLinkHasBeenSet = true;
}

bool PromotionCode::ImageLinkHasBeenSet() const
{
    return m_imageLinkHasBeenSet;
}

Address PromotionCode::GetAddress() const
{
    return m_address;
}

void PromotionCode::SetAddress(const Address& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool PromotionCode::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

vector<Item> PromotionCode::GetItems() const
{
    return m_items;
}

void PromotionCode::SetItems(const vector<Item>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool PromotionCode::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

