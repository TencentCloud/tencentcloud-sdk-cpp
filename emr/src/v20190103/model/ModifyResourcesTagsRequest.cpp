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

#include <tencentcloud/emr/v20190103/model/ModifyResourcesTagsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ModifyResourcesTagsRequest::ModifyResourcesTagsRequest() :
    m_modifyTypeHasBeenSet(false),
    m_modifyResourceTagsInfoListHasBeenSet(false)
{
}

string ModifyResourcesTagsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyResourceTagsInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyResourceTagsInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modifyResourceTagsInfoList.begin(); itr != m_modifyResourceTagsInfoList.end(); ++itr, ++i)
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


string ModifyResourcesTagsRequest::GetModifyType() const
{
    return m_modifyType;
}

void ModifyResourcesTagsRequest::SetModifyType(const string& _modifyType)
{
    m_modifyType = _modifyType;
    m_modifyTypeHasBeenSet = true;
}

bool ModifyResourcesTagsRequest::ModifyTypeHasBeenSet() const
{
    return m_modifyTypeHasBeenSet;
}

vector<ModifyResourceTags> ModifyResourcesTagsRequest::GetModifyResourceTagsInfoList() const
{
    return m_modifyResourceTagsInfoList;
}

void ModifyResourcesTagsRequest::SetModifyResourceTagsInfoList(const vector<ModifyResourceTags>& _modifyResourceTagsInfoList)
{
    m_modifyResourceTagsInfoList = _modifyResourceTagsInfoList;
    m_modifyResourceTagsInfoListHasBeenSet = true;
}

bool ModifyResourcesTagsRequest::ModifyResourceTagsInfoListHasBeenSet() const
{
    return m_modifyResourceTagsInfoListHasBeenSet;
}


