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

#include <tencentcloud/adp/v20260520/model/DescribeSkillDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DescribeSkillDetailRequest::DescribeSkillDetailRequest() :
    m_skillIdHasBeenSet(false),
    m_spaceIdHasBeenSet(false),
    m_versionFilterListHasBeenSet(false)
{
}

string DescribeSkillDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_skillIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_skillId.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionFilterListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionFilterList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_versionFilterList.begin(); itr != m_versionFilterList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSkillDetailRequest::GetSkillId() const
{
    return m_skillId;
}

void DescribeSkillDetailRequest::SetSkillId(const string& _skillId)
{
    m_skillId = _skillId;
    m_skillIdHasBeenSet = true;
}

bool DescribeSkillDetailRequest::SkillIdHasBeenSet() const
{
    return m_skillIdHasBeenSet;
}

string DescribeSkillDetailRequest::GetSpaceId() const
{
    return m_spaceId;
}

void DescribeSkillDetailRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool DescribeSkillDetailRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

vector<Filter> DescribeSkillDetailRequest::GetVersionFilterList() const
{
    return m_versionFilterList;
}

void DescribeSkillDetailRequest::SetVersionFilterList(const vector<Filter>& _versionFilterList)
{
    m_versionFilterList = _versionFilterList;
    m_versionFilterListHasBeenSet = true;
}

bool DescribeSkillDetailRequest::VersionFilterListHasBeenSet() const
{
    return m_versionFilterListHasBeenSet;
}


