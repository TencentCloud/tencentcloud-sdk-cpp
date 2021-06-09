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

#include <tencentcloud/solar/v20181011/model/DescribeCustomersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Solar::V20181011::Model;
using namespace std;

DescribeCustomersRequest::DescribeCustomersRequest() :
    m_queryTypeHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_markFlagHasBeenSet(false),
    m_tagIdsHasBeenSet(false),
    m_relChannelFlagHasBeenSet(false),
    m_needPhoneFlagHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_keyWordHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_subProjectIdHasBeenSet(false)
{
}

string DescribeCustomersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_queryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryType.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_markFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_markFlag, allocator);
    }

    if (m_tagIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tagIds.c_str(), allocator).Move(), allocator);
    }

    if (m_relChannelFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelChannelFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_relChannelFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_needPhoneFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedPhoneFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needPhoneFlag, allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_keyWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyWord.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_subProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subProjectId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCustomersRequest::GetQueryType() const
{
    return m_queryType;
}

void DescribeCustomersRequest::SetQueryType(const string& _queryType)
{
    m_queryType = _queryType;
    m_queryTypeHasBeenSet = true;
}

bool DescribeCustomersRequest::QueryTypeHasBeenSet() const
{
    return m_queryTypeHasBeenSet;
}

string DescribeCustomersRequest::GetGroupId() const
{
    return m_groupId;
}

void DescribeCustomersRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeCustomersRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t DescribeCustomersRequest::GetMarkFlag() const
{
    return m_markFlag;
}

void DescribeCustomersRequest::SetMarkFlag(const int64_t& _markFlag)
{
    m_markFlag = _markFlag;
    m_markFlagHasBeenSet = true;
}

bool DescribeCustomersRequest::MarkFlagHasBeenSet() const
{
    return m_markFlagHasBeenSet;
}

string DescribeCustomersRequest::GetTagIds() const
{
    return m_tagIds;
}

void DescribeCustomersRequest::SetTagIds(const string& _tagIds)
{
    m_tagIds = _tagIds;
    m_tagIdsHasBeenSet = true;
}

bool DescribeCustomersRequest::TagIdsHasBeenSet() const
{
    return m_tagIdsHasBeenSet;
}

string DescribeCustomersRequest::GetRelChannelFlag() const
{
    return m_relChannelFlag;
}

void DescribeCustomersRequest::SetRelChannelFlag(const string& _relChannelFlag)
{
    m_relChannelFlag = _relChannelFlag;
    m_relChannelFlagHasBeenSet = true;
}

bool DescribeCustomersRequest::RelChannelFlagHasBeenSet() const
{
    return m_relChannelFlagHasBeenSet;
}

int64_t DescribeCustomersRequest::GetNeedPhoneFlag() const
{
    return m_needPhoneFlag;
}

void DescribeCustomersRequest::SetNeedPhoneFlag(const int64_t& _needPhoneFlag)
{
    m_needPhoneFlag = _needPhoneFlag;
    m_needPhoneFlagHasBeenSet = true;
}

bool DescribeCustomersRequest::NeedPhoneFlagHasBeenSet() const
{
    return m_needPhoneFlagHasBeenSet;
}

string DescribeCustomersRequest::GetProvince() const
{
    return m_province;
}

void DescribeCustomersRequest::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool DescribeCustomersRequest::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string DescribeCustomersRequest::GetCity() const
{
    return m_city;
}

void DescribeCustomersRequest::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool DescribeCustomersRequest::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string DescribeCustomersRequest::GetSex() const
{
    return m_sex;
}

void DescribeCustomersRequest::SetSex(const string& _sex)
{
    m_sex = _sex;
    m_sexHasBeenSet = true;
}

bool DescribeCustomersRequest::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string DescribeCustomersRequest::GetKeyWord() const
{
    return m_keyWord;
}

void DescribeCustomersRequest::SetKeyWord(const string& _keyWord)
{
    m_keyWord = _keyWord;
    m_keyWordHasBeenSet = true;
}

bool DescribeCustomersRequest::KeyWordHasBeenSet() const
{
    return m_keyWordHasBeenSet;
}

uint64_t DescribeCustomersRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCustomersRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCustomersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeCustomersRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCustomersRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCustomersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeCustomersRequest::GetSubProjectId() const
{
    return m_subProjectId;
}

void DescribeCustomersRequest::SetSubProjectId(const string& _subProjectId)
{
    m_subProjectId = _subProjectId;
    m_subProjectIdHasBeenSet = true;
}

bool DescribeCustomersRequest::SubProjectIdHasBeenSet() const
{
    return m_subProjectIdHasBeenSet;
}


