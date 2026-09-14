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

#include <tencentcloud/adp/v20260520/model/DeleteLabelListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DeleteLabelListRequest::DeleteLabelListRequest() :
    m_kbIdHasBeenSet(false),
    m_labelIdListHasBeenSet(false)
{
}

string DeleteLabelListRequest::ToJsonString() const
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

    if (m_labelIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelIdList.begin(); itr != m_labelIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteLabelListRequest::GetKbId() const
{
    return m_kbId;
}

void DeleteLabelListRequest::SetKbId(const string& _kbId)
{
    m_kbId = _kbId;
    m_kbIdHasBeenSet = true;
}

bool DeleteLabelListRequest::KbIdHasBeenSet() const
{
    return m_kbIdHasBeenSet;
}

vector<string> DeleteLabelListRequest::GetLabelIdList() const
{
    return m_labelIdList;
}

void DeleteLabelListRequest::SetLabelIdList(const vector<string>& _labelIdList)
{
    m_labelIdList = _labelIdList;
    m_labelIdListHasBeenSet = true;
}

bool DeleteLabelListRequest::LabelIdListHasBeenSet() const
{
    return m_labelIdListHasBeenSet;
}


