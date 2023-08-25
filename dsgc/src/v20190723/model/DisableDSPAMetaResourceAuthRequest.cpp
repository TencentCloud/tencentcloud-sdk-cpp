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

#include <tencentcloud/dsgc/v20190723/model/DisableDSPAMetaResourceAuthRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DisableDSPAMetaResourceAuthRequest::DisableDSPAMetaResourceAuthRequest() :
    m_dspaIdHasBeenSet(false),
    m_metaTypeHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceIDsHasBeenSet(false)
{
}

string DisableDSPAMetaResourceAuthRequest::ToJsonString() const
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

    if (m_metaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metaType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
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


string DisableDSPAMetaResourceAuthRequest::GetDspaId() const
{
    return m_dspaId;
}

void DisableDSPAMetaResourceAuthRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool DisableDSPAMetaResourceAuthRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string DisableDSPAMetaResourceAuthRequest::GetMetaType() const
{
    return m_metaType;
}

void DisableDSPAMetaResourceAuthRequest::SetMetaType(const string& _metaType)
{
    m_metaType = _metaType;
    m_metaTypeHasBeenSet = true;
}

bool DisableDSPAMetaResourceAuthRequest::MetaTypeHasBeenSet() const
{
    return m_metaTypeHasBeenSet;
}

string DisableDSPAMetaResourceAuthRequest::GetResourceRegion() const
{
    return m_resourceRegion;
}

void DisableDSPAMetaResourceAuthRequest::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool DisableDSPAMetaResourceAuthRequest::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

vector<string> DisableDSPAMetaResourceAuthRequest::GetResourceIDs() const
{
    return m_resourceIDs;
}

void DisableDSPAMetaResourceAuthRequest::SetResourceIDs(const vector<string>& _resourceIDs)
{
    m_resourceIDs = _resourceIDs;
    m_resourceIDsHasBeenSet = true;
}

bool DisableDSPAMetaResourceAuthRequest::ResourceIDsHasBeenSet() const
{
    return m_resourceIDsHasBeenSet;
}


