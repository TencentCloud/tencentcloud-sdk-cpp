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

#include <tencentcloud/cwp/v20180228/model/FixBaselineDetectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

FixBaselineDetectRequest::FixBaselineDetectRequest() :
    m_hostIdHasBeenSet(false),
    m_itemIdHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

string FixBaselineDetectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_hostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostId.c_str(), allocator).Move(), allocator);
    }

    if (m_itemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_itemId, allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string FixBaselineDetectRequest::GetHostId() const
{
    return m_hostId;
}

void FixBaselineDetectRequest::SetHostId(const string& _hostId)
{
    m_hostId = _hostId;
    m_hostIdHasBeenSet = true;
}

bool FixBaselineDetectRequest::HostIdHasBeenSet() const
{
    return m_hostIdHasBeenSet;
}

int64_t FixBaselineDetectRequest::GetItemId() const
{
    return m_itemId;
}

void FixBaselineDetectRequest::SetItemId(const int64_t& _itemId)
{
    m_itemId = _itemId;
    m_itemIdHasBeenSet = true;
}

bool FixBaselineDetectRequest::ItemIdHasBeenSet() const
{
    return m_itemIdHasBeenSet;
}

vector<string> FixBaselineDetectRequest::GetData() const
{
    return m_data;
}

void FixBaselineDetectRequest::SetData(const vector<string>& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool FixBaselineDetectRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}


