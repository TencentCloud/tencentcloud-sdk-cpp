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

#include <tencentcloud/csip/v20221121/model/DeleteWebhookPoliciesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DeleteWebhookPoliciesRequest::DeleteWebhookPoliciesRequest() :
    m_iDListHasBeenSet(false)
{
}

string DeleteWebhookPoliciesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_iDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_iDList.begin(); itr != m_iDList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<int64_t> DeleteWebhookPoliciesRequest::GetIDList() const
{
    return m_iDList;
}

void DeleteWebhookPoliciesRequest::SetIDList(const vector<int64_t>& _iDList)
{
    m_iDList = _iDList;
    m_iDListHasBeenSet = true;
}

bool DeleteWebhookPoliciesRequest::IDListHasBeenSet() const
{
    return m_iDListHasBeenSet;
}


