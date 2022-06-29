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

#include <tencentcloud/casb/v20200507/model/CopyCryptoColumnPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Casb::V20200507::Model;
using namespace std;

CopyCryptoColumnPolicyRequest::CopyCryptoColumnPolicyRequest() :
    m_casbIdHasBeenSet(false),
    m_metaDataIdHasBeenSet(false),
    m_dstCasbIdHasBeenSet(false),
    m_dstMetaDataIdHasBeenSet(false),
    m_srcTableFilterHasBeenSet(false),
    m_dstDatabaseNameHasBeenSet(false)
{
}

string CopyCryptoColumnPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_casbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CasbId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_casbId.c_str(), allocator).Move(), allocator);
    }

    if (m_metaDataIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaDataId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metaDataId.c_str(), allocator).Move(), allocator);
    }

    if (m_dstCasbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstCasbId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstCasbId.c_str(), allocator).Move(), allocator);
    }

    if (m_dstMetaDataIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstMetaDataId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstMetaDataId.c_str(), allocator).Move(), allocator);
    }

    if (m_srcTableFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcTableFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_srcTableFilter.begin(); itr != m_srcTableFilter.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_dstDatabaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstDatabaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstDatabaseName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CopyCryptoColumnPolicyRequest::GetCasbId() const
{
    return m_casbId;
}

void CopyCryptoColumnPolicyRequest::SetCasbId(const string& _casbId)
{
    m_casbId = _casbId;
    m_casbIdHasBeenSet = true;
}

bool CopyCryptoColumnPolicyRequest::CasbIdHasBeenSet() const
{
    return m_casbIdHasBeenSet;
}

string CopyCryptoColumnPolicyRequest::GetMetaDataId() const
{
    return m_metaDataId;
}

void CopyCryptoColumnPolicyRequest::SetMetaDataId(const string& _metaDataId)
{
    m_metaDataId = _metaDataId;
    m_metaDataIdHasBeenSet = true;
}

bool CopyCryptoColumnPolicyRequest::MetaDataIdHasBeenSet() const
{
    return m_metaDataIdHasBeenSet;
}

string CopyCryptoColumnPolicyRequest::GetDstCasbId() const
{
    return m_dstCasbId;
}

void CopyCryptoColumnPolicyRequest::SetDstCasbId(const string& _dstCasbId)
{
    m_dstCasbId = _dstCasbId;
    m_dstCasbIdHasBeenSet = true;
}

bool CopyCryptoColumnPolicyRequest::DstCasbIdHasBeenSet() const
{
    return m_dstCasbIdHasBeenSet;
}

string CopyCryptoColumnPolicyRequest::GetDstMetaDataId() const
{
    return m_dstMetaDataId;
}

void CopyCryptoColumnPolicyRequest::SetDstMetaDataId(const string& _dstMetaDataId)
{
    m_dstMetaDataId = _dstMetaDataId;
    m_dstMetaDataIdHasBeenSet = true;
}

bool CopyCryptoColumnPolicyRequest::DstMetaDataIdHasBeenSet() const
{
    return m_dstMetaDataIdHasBeenSet;
}

vector<CryptoCopyColumnPolicyTableFilter> CopyCryptoColumnPolicyRequest::GetSrcTableFilter() const
{
    return m_srcTableFilter;
}

void CopyCryptoColumnPolicyRequest::SetSrcTableFilter(const vector<CryptoCopyColumnPolicyTableFilter>& _srcTableFilter)
{
    m_srcTableFilter = _srcTableFilter;
    m_srcTableFilterHasBeenSet = true;
}

bool CopyCryptoColumnPolicyRequest::SrcTableFilterHasBeenSet() const
{
    return m_srcTableFilterHasBeenSet;
}

string CopyCryptoColumnPolicyRequest::GetDstDatabaseName() const
{
    return m_dstDatabaseName;
}

void CopyCryptoColumnPolicyRequest::SetDstDatabaseName(const string& _dstDatabaseName)
{
    m_dstDatabaseName = _dstDatabaseName;
    m_dstDatabaseNameHasBeenSet = true;
}

bool CopyCryptoColumnPolicyRequest::DstDatabaseNameHasBeenSet() const
{
    return m_dstDatabaseNameHasBeenSet;
}


