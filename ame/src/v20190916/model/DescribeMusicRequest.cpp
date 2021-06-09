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

#include <tencentcloud/ame/v20190916/model/DescribeMusicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

DescribeMusicRequest::DescribeMusicRequest() :
    m_itemIdHasBeenSet(false),
    m_identityIdHasBeenSet(false),
    m_subItemTypeHasBeenSet(false),
    m_sslHasBeenSet(false)
{
}

string DescribeMusicRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_itemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_itemId.c_str(), allocator).Move(), allocator);
    }

    if (m_identityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_identityId.c_str(), allocator).Move(), allocator);
    }

    if (m_subItemTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubItemType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subItemType.c_str(), allocator).Move(), allocator);
    }

    if (m_sslHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ssl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ssl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeMusicRequest::GetItemId() const
{
    return m_itemId;
}

void DescribeMusicRequest::SetItemId(const string& _itemId)
{
    m_itemId = _itemId;
    m_itemIdHasBeenSet = true;
}

bool DescribeMusicRequest::ItemIdHasBeenSet() const
{
    return m_itemIdHasBeenSet;
}

string DescribeMusicRequest::GetIdentityId() const
{
    return m_identityId;
}

void DescribeMusicRequest::SetIdentityId(const string& _identityId)
{
    m_identityId = _identityId;
    m_identityIdHasBeenSet = true;
}

bool DescribeMusicRequest::IdentityIdHasBeenSet() const
{
    return m_identityIdHasBeenSet;
}

string DescribeMusicRequest::GetSubItemType() const
{
    return m_subItemType;
}

void DescribeMusicRequest::SetSubItemType(const string& _subItemType)
{
    m_subItemType = _subItemType;
    m_subItemTypeHasBeenSet = true;
}

bool DescribeMusicRequest::SubItemTypeHasBeenSet() const
{
    return m_subItemTypeHasBeenSet;
}

string DescribeMusicRequest::GetSsl() const
{
    return m_ssl;
}

void DescribeMusicRequest::SetSsl(const string& _ssl)
{
    m_ssl = _ssl;
    m_sslHasBeenSet = true;
}

bool DescribeMusicRequest::SslHasBeenSet() const
{
    return m_sslHasBeenSet;
}


