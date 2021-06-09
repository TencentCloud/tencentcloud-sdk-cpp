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

#include <tencentcloud/cfs/v20190719/model/UpdateCfsPGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

UpdateCfsPGroupRequest::UpdateCfsPGroupRequest() :
    m_pGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descInfoHasBeenSet(false)
{
}

string UpdateCfsPGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_descInfo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateCfsPGroupRequest::GetPGroupId() const
{
    return m_pGroupId;
}

void UpdateCfsPGroupRequest::SetPGroupId(const string& _pGroupId)
{
    m_pGroupId = _pGroupId;
    m_pGroupIdHasBeenSet = true;
}

bool UpdateCfsPGroupRequest::PGroupIdHasBeenSet() const
{
    return m_pGroupIdHasBeenSet;
}

string UpdateCfsPGroupRequest::GetName() const
{
    return m_name;
}

void UpdateCfsPGroupRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateCfsPGroupRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateCfsPGroupRequest::GetDescInfo() const
{
    return m_descInfo;
}

void UpdateCfsPGroupRequest::SetDescInfo(const string& _descInfo)
{
    m_descInfo = _descInfo;
    m_descInfoHasBeenSet = true;
}

bool UpdateCfsPGroupRequest::DescInfoHasBeenSet() const
{
    return m_descInfoHasBeenSet;
}


