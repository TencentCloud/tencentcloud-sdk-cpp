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

#include <tencentcloud/csip/v20221121/model/DescribeTaskLogURLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeTaskLogURLRequest::DescribeTaskLogURLRequest() :
    m_typeHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_reportItemKeyListHasBeenSet(false),
    m_reportTaskIdListHasBeenSet(false)
{
}

string DescribeTaskLogURLRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_reportItemKeyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportItemKeyList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_reportItemKeyList.begin(); itr != m_reportItemKeyList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_reportTaskIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportTaskIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_reportTaskIdList.begin(); itr != m_reportTaskIdList.end(); ++itr, ++i)
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


int64_t DescribeTaskLogURLRequest::GetType() const
{
    return m_type;
}

void DescribeTaskLogURLRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeTaskLogURLRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> DescribeTaskLogURLRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeTaskLogURLRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeTaskLogURLRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<ReportItemKey> DescribeTaskLogURLRequest::GetReportItemKeyList() const
{
    return m_reportItemKeyList;
}

void DescribeTaskLogURLRequest::SetReportItemKeyList(const vector<ReportItemKey>& _reportItemKeyList)
{
    m_reportItemKeyList = _reportItemKeyList;
    m_reportItemKeyListHasBeenSet = true;
}

bool DescribeTaskLogURLRequest::ReportItemKeyListHasBeenSet() const
{
    return m_reportItemKeyListHasBeenSet;
}

vector<ReportTaskIdList> DescribeTaskLogURLRequest::GetReportTaskIdList() const
{
    return m_reportTaskIdList;
}

void DescribeTaskLogURLRequest::SetReportTaskIdList(const vector<ReportTaskIdList>& _reportTaskIdList)
{
    m_reportTaskIdList = _reportTaskIdList;
    m_reportTaskIdListHasBeenSet = true;
}

bool DescribeTaskLogURLRequest::ReportTaskIdListHasBeenSet() const
{
    return m_reportTaskIdListHasBeenSet;
}


