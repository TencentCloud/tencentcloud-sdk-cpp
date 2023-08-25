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

#include <tencentcloud/dsgc/v20190723/model/DeleteDSPAMetaResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DeleteDSPAMetaResourceRequest::DeleteDSPAMetaResourceRequest() :
    m_dspaIdHasBeenSet(false),
    m_resourceIDsHasBeenSet(false)
{
}

string DeleteDSPAMetaResourceRequest::ToJsonString() const
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

    if (m_resourceIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIDs.begin(); itr != m_resourceIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteDSPAMetaResourceRequest::GetDspaId() const
{
    return m_dspaId;
}

void DeleteDSPAMetaResourceRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool DeleteDSPAMetaResourceRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

vector<string> DeleteDSPAMetaResourceRequest::GetResourceIDs() const
{
    return m_resourceIDs;
}

void DeleteDSPAMetaResourceRequest::SetResourceIDs(const vector<string>& _resourceIDs)
{
    m_resourceIDs = _resourceIDs;
    m_resourceIDsHasBeenSet = true;
}

bool DeleteDSPAMetaResourceRequest::ResourceIDsHasBeenSet() const
{
    return m_resourceIDsHasBeenSet;
}


