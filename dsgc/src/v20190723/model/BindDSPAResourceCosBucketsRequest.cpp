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

#include <tencentcloud/dsgc/v20190723/model/BindDSPAResourceCosBucketsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

BindDSPAResourceCosBucketsRequest::BindDSPAResourceCosBucketsRequest() :
    m_dspaIdHasBeenSet(false),
    m_bindCosResourceItemsHasBeenSet(false),
    m_unbindCosResourceItemsHasBeenSet(false)
{
}

string BindDSPAResourceCosBucketsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_bindCosResourceItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindCosResourceItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindCosResourceItems.begin(); itr != m_bindCosResourceItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_unbindCosResourceItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnbindCosResourceItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_unbindCosResourceItems.begin(); itr != m_unbindCosResourceItems.end(); ++itr, ++i)
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


string BindDSPAResourceCosBucketsRequest::GetDspaId() const
{
    return m_dspaId;
}

void BindDSPAResourceCosBucketsRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool BindDSPAResourceCosBucketsRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

vector<CosResourceItem> BindDSPAResourceCosBucketsRequest::GetBindCosResourceItems() const
{
    return m_bindCosResourceItems;
}

void BindDSPAResourceCosBucketsRequest::SetBindCosResourceItems(const vector<CosResourceItem>& _bindCosResourceItems)
{
    m_bindCosResourceItems = _bindCosResourceItems;
    m_bindCosResourceItemsHasBeenSet = true;
}

bool BindDSPAResourceCosBucketsRequest::BindCosResourceItemsHasBeenSet() const
{
    return m_bindCosResourceItemsHasBeenSet;
}

vector<CosResourceItem> BindDSPAResourceCosBucketsRequest::GetUnbindCosResourceItems() const
{
    return m_unbindCosResourceItems;
}

void BindDSPAResourceCosBucketsRequest::SetUnbindCosResourceItems(const vector<CosResourceItem>& _unbindCosResourceItems)
{
    m_unbindCosResourceItems = _unbindCosResourceItems;
    m_unbindCosResourceItemsHasBeenSet = true;
}

bool BindDSPAResourceCosBucketsRequest::UnbindCosResourceItemsHasBeenSet() const
{
    return m_unbindCosResourceItemsHasBeenSet;
}


