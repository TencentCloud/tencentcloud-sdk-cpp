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

#include <tencentcloud/waf/v20180125/model/DeleteIpAccessControlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DeleteIpAccessControlRequest::DeleteIpAccessControlRequest() :
    m_domainHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_isIdHasBeenSet(false),
    m_deleteAllHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_actionTypeHasBeenSet(false)
{
}

string DeleteIpAccessControlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isId, allocator);
    }

    if (m_deleteAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteAll, allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_actionType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteIpAccessControlRequest::GetDomain() const
{
    return m_domain;
}

void DeleteIpAccessControlRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DeleteIpAccessControlRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<string> DeleteIpAccessControlRequest::GetItems() const
{
    return m_items;
}

void DeleteIpAccessControlRequest::SetItems(const vector<string>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool DeleteIpAccessControlRequest::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

bool DeleteIpAccessControlRequest::GetIsId() const
{
    return m_isId;
}

void DeleteIpAccessControlRequest::SetIsId(const bool& _isId)
{
    m_isId = _isId;
    m_isIdHasBeenSet = true;
}

bool DeleteIpAccessControlRequest::IsIdHasBeenSet() const
{
    return m_isIdHasBeenSet;
}

bool DeleteIpAccessControlRequest::GetDeleteAll() const
{
    return m_deleteAll;
}

void DeleteIpAccessControlRequest::SetDeleteAll(const bool& _deleteAll)
{
    m_deleteAll = _deleteAll;
    m_deleteAllHasBeenSet = true;
}

bool DeleteIpAccessControlRequest::DeleteAllHasBeenSet() const
{
    return m_deleteAllHasBeenSet;
}

string DeleteIpAccessControlRequest::GetSourceType() const
{
    return m_sourceType;
}

void DeleteIpAccessControlRequest::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool DeleteIpAccessControlRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

uint64_t DeleteIpAccessControlRequest::GetActionType() const
{
    return m_actionType;
}

void DeleteIpAccessControlRequest::SetActionType(const uint64_t& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool DeleteIpAccessControlRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}


