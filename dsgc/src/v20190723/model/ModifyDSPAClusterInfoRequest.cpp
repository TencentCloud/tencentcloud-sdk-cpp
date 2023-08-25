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

#include <tencentcloud/dsgc/v20190723/model/ModifyDSPAClusterInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ModifyDSPAClusterInfoRequest::ModifyDSPAClusterInfoRequest() :
    m_dspaIdHasBeenSet(false),
    m_dspaNameHasBeenSet(false),
    m_dspaDescriptionHasBeenSet(false)
{
}

string ModifyDSPAClusterInfoRequest::ToJsonString() const
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

    if (m_dspaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaName.c_str(), allocator).Move(), allocator);
    }

    if (m_dspaDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaDescription.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDSPAClusterInfoRequest::GetDspaId() const
{
    return m_dspaId;
}

void ModifyDSPAClusterInfoRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool ModifyDSPAClusterInfoRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string ModifyDSPAClusterInfoRequest::GetDspaName() const
{
    return m_dspaName;
}

void ModifyDSPAClusterInfoRequest::SetDspaName(const string& _dspaName)
{
    m_dspaName = _dspaName;
    m_dspaNameHasBeenSet = true;
}

bool ModifyDSPAClusterInfoRequest::DspaNameHasBeenSet() const
{
    return m_dspaNameHasBeenSet;
}

string ModifyDSPAClusterInfoRequest::GetDspaDescription() const
{
    return m_dspaDescription;
}

void ModifyDSPAClusterInfoRequest::SetDspaDescription(const string& _dspaDescription)
{
    m_dspaDescription = _dspaDescription;
    m_dspaDescriptionHasBeenSet = true;
}

bool ModifyDSPAClusterInfoRequest::DspaDescriptionHasBeenSet() const
{
    return m_dspaDescriptionHasBeenSet;
}


