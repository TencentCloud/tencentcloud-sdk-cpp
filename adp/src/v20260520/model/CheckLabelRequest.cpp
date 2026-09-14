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

#include <tencentcloud/adp/v20260520/model/CheckLabelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CheckLabelRequest::CheckLabelRequest() :
    m_kbIdHasBeenSet(false),
    m_termListHasBeenSet(false),
    m_labelIdHasBeenSet(false)
{
}

string CheckLabelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_kbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kbId.c_str(), allocator).Move(), allocator);
    }

    if (m_termListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TermList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_termList.begin(); itr != m_termList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_labelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_labelId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckLabelRequest::GetKbId() const
{
    return m_kbId;
}

void CheckLabelRequest::SetKbId(const string& _kbId)
{
    m_kbId = _kbId;
    m_kbIdHasBeenSet = true;
}

bool CheckLabelRequest::KbIdHasBeenSet() const
{
    return m_kbIdHasBeenSet;
}

vector<string> CheckLabelRequest::GetTermList() const
{
    return m_termList;
}

void CheckLabelRequest::SetTermList(const vector<string>& _termList)
{
    m_termList = _termList;
    m_termListHasBeenSet = true;
}

bool CheckLabelRequest::TermListHasBeenSet() const
{
    return m_termListHasBeenSet;
}

string CheckLabelRequest::GetLabelId() const
{
    return m_labelId;
}

void CheckLabelRequest::SetLabelId(const string& _labelId)
{
    m_labelId = _labelId;
    m_labelIdHasBeenSet = true;
}

bool CheckLabelRequest::LabelIdHasBeenSet() const
{
    return m_labelIdHasBeenSet;
}


