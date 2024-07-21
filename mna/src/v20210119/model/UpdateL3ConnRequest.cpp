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

#include <tencentcloud/mna/v20210119/model/UpdateL3ConnRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

UpdateL3ConnRequest::UpdateL3ConnRequest() :
    m_l3ConnIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string UpdateL3ConnRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_l3ConnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L3ConnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_l3ConnId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateL3ConnRequest::GetL3ConnId() const
{
    return m_l3ConnId;
}

void UpdateL3ConnRequest::SetL3ConnId(const string& _l3ConnId)
{
    m_l3ConnId = _l3ConnId;
    m_l3ConnIdHasBeenSet = true;
}

bool UpdateL3ConnRequest::L3ConnIdHasBeenSet() const
{
    return m_l3ConnIdHasBeenSet;
}

string UpdateL3ConnRequest::GetDescription() const
{
    return m_description;
}

void UpdateL3ConnRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateL3ConnRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


