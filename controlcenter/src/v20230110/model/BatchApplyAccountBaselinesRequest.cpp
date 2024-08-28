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

#include <tencentcloud/controlcenter/v20230110/model/BatchApplyAccountBaselinesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Controlcenter::V20230110::Model;
using namespace std;

BatchApplyAccountBaselinesRequest::BatchApplyAccountBaselinesRequest() :
    m_memberUinListHasBeenSet(false),
    m_baselineConfigItemsHasBeenSet(false)
{
}

string BatchApplyAccountBaselinesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_memberUinListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberUinList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberUinList.begin(); itr != m_memberUinList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_baselineConfigItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineConfigItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_baselineConfigItems.begin(); itr != m_baselineConfigItems.end(); ++itr, ++i)
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


vector<int64_t> BatchApplyAccountBaselinesRequest::GetMemberUinList() const
{
    return m_memberUinList;
}

void BatchApplyAccountBaselinesRequest::SetMemberUinList(const vector<int64_t>& _memberUinList)
{
    m_memberUinList = _memberUinList;
    m_memberUinListHasBeenSet = true;
}

bool BatchApplyAccountBaselinesRequest::MemberUinListHasBeenSet() const
{
    return m_memberUinListHasBeenSet;
}

vector<BaselineConfigItem> BatchApplyAccountBaselinesRequest::GetBaselineConfigItems() const
{
    return m_baselineConfigItems;
}

void BatchApplyAccountBaselinesRequest::SetBaselineConfigItems(const vector<BaselineConfigItem>& _baselineConfigItems)
{
    m_baselineConfigItems = _baselineConfigItems;
    m_baselineConfigItemsHasBeenSet = true;
}

bool BatchApplyAccountBaselinesRequest::BaselineConfigItemsHasBeenSet() const
{
    return m_baselineConfigItemsHasBeenSet;
}


