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

#include <tencentcloud/iotexplorer/v20190423/model/ModifyPositionSpaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

ModifyPositionSpaceRequest::ModifyPositionSpaceRequest() :
    m_spaceIdHasBeenSet(false),
    m_spaceNameHasBeenSet(false),
    m_authorizeTypeHasBeenSet(false),
    m_productIdListHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_iconHasBeenSet(false)
{
}

string ModifyPositionSpaceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_authorizeType, allocator);
    }

    if (m_productIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_productIdList.begin(); itr != m_productIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_iconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Icon";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_icon.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPositionSpaceRequest::GetSpaceId() const
{
    return m_spaceId;
}

void ModifyPositionSpaceRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool ModifyPositionSpaceRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string ModifyPositionSpaceRequest::GetSpaceName() const
{
    return m_spaceName;
}

void ModifyPositionSpaceRequest::SetSpaceName(const string& _spaceName)
{
    m_spaceName = _spaceName;
    m_spaceNameHasBeenSet = true;
}

bool ModifyPositionSpaceRequest::SpaceNameHasBeenSet() const
{
    return m_spaceNameHasBeenSet;
}

int64_t ModifyPositionSpaceRequest::GetAuthorizeType() const
{
    return m_authorizeType;
}

void ModifyPositionSpaceRequest::SetAuthorizeType(const int64_t& _authorizeType)
{
    m_authorizeType = _authorizeType;
    m_authorizeTypeHasBeenSet = true;
}

bool ModifyPositionSpaceRequest::AuthorizeTypeHasBeenSet() const
{
    return m_authorizeTypeHasBeenSet;
}

vector<string> ModifyPositionSpaceRequest::GetProductIdList() const
{
    return m_productIdList;
}

void ModifyPositionSpaceRequest::SetProductIdList(const vector<string>& _productIdList)
{
    m_productIdList = _productIdList;
    m_productIdListHasBeenSet = true;
}

bool ModifyPositionSpaceRequest::ProductIdListHasBeenSet() const
{
    return m_productIdListHasBeenSet;
}

string ModifyPositionSpaceRequest::GetDescription() const
{
    return m_description;
}

void ModifyPositionSpaceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyPositionSpaceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyPositionSpaceRequest::GetIcon() const
{
    return m_icon;
}

void ModifyPositionSpaceRequest::SetIcon(const string& _icon)
{
    m_icon = _icon;
    m_iconHasBeenSet = true;
}

bool ModifyPositionSpaceRequest::IconHasBeenSet() const
{
    return m_iconHasBeenSet;
}


