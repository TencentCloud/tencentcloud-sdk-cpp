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

#include <tencentcloud/cwp/v20180228/model/CreateBuyBindTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

CreateBuyBindTaskRequest::CreateBuyBindTaskRequest() :
    m_dealNameHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_quuidListHasBeenSet(false),
    m_isAllHasBeenSet(false)
{
}

string CreateBuyBindTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dealName.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_licenseType, allocator);
    }

    if (m_quuidListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuuidList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_quuidList.begin(); itr != m_quuidList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAll, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBuyBindTaskRequest::GetDealName() const
{
    return m_dealName;
}

void CreateBuyBindTaskRequest::SetDealName(const string& _dealName)
{
    m_dealName = _dealName;
    m_dealNameHasBeenSet = true;
}

bool CreateBuyBindTaskRequest::DealNameHasBeenSet() const
{
    return m_dealNameHasBeenSet;
}

uint64_t CreateBuyBindTaskRequest::GetLicenseType() const
{
    return m_licenseType;
}

void CreateBuyBindTaskRequest::SetLicenseType(const uint64_t& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool CreateBuyBindTaskRequest::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

vector<string> CreateBuyBindTaskRequest::GetQuuidList() const
{
    return m_quuidList;
}

void CreateBuyBindTaskRequest::SetQuuidList(const vector<string>& _quuidList)
{
    m_quuidList = _quuidList;
    m_quuidListHasBeenSet = true;
}

bool CreateBuyBindTaskRequest::QuuidListHasBeenSet() const
{
    return m_quuidListHasBeenSet;
}

bool CreateBuyBindTaskRequest::GetIsAll() const
{
    return m_isAll;
}

void CreateBuyBindTaskRequest::SetIsAll(const bool& _isAll)
{
    m_isAll = _isAll;
    m_isAllHasBeenSet = true;
}

bool CreateBuyBindTaskRequest::IsAllHasBeenSet() const
{
    return m_isAllHasBeenSet;
}


