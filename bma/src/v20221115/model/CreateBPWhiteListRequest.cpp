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

#include <tencentcloud/bma/v20221115/model/CreateBPWhiteListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bma::V20221115::Model;
using namespace std;

CreateBPWhiteListRequest::CreateBPWhiteListRequest() :
    m_companyIdHasBeenSet(false),
    m_whiteListTypeHasBeenSet(false),
    m_whiteListsHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string CreateBPWhiteListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_companyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_companyId, allocator);
    }

    if (m_whiteListTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteListType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_whiteListType, allocator);
    }

    if (m_whiteListsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteLists";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_whiteLists.begin(); itr != m_whiteLists.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateBPWhiteListRequest::GetCompanyId() const
{
    return m_companyId;
}

void CreateBPWhiteListRequest::SetCompanyId(const int64_t& _companyId)
{
    m_companyId = _companyId;
    m_companyIdHasBeenSet = true;
}

bool CreateBPWhiteListRequest::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

int64_t CreateBPWhiteListRequest::GetWhiteListType() const
{
    return m_whiteListType;
}

void CreateBPWhiteListRequest::SetWhiteListType(const int64_t& _whiteListType)
{
    m_whiteListType = _whiteListType;
    m_whiteListTypeHasBeenSet = true;
}

bool CreateBPWhiteListRequest::WhiteListTypeHasBeenSet() const
{
    return m_whiteListTypeHasBeenSet;
}

vector<string> CreateBPWhiteListRequest::GetWhiteLists() const
{
    return m_whiteLists;
}

void CreateBPWhiteListRequest::SetWhiteLists(const vector<string>& _whiteLists)
{
    m_whiteLists = _whiteLists;
    m_whiteListsHasBeenSet = true;
}

bool CreateBPWhiteListRequest::WhiteListsHasBeenSet() const
{
    return m_whiteListsHasBeenSet;
}

string CreateBPWhiteListRequest::GetRemark() const
{
    return m_remark;
}

void CreateBPWhiteListRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateBPWhiteListRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


