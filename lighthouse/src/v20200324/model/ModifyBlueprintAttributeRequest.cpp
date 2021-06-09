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

#include <tencentcloud/lighthouse/v20200324/model/ModifyBlueprintAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

ModifyBlueprintAttributeRequest::ModifyBlueprintAttributeRequest() :
    m_blueprintIdHasBeenSet(false),
    m_blueprintNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string ModifyBlueprintAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_blueprintIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlueprintId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_blueprintId.c_str(), allocator).Move(), allocator);
    }

    if (m_blueprintNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlueprintName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_blueprintName.c_str(), allocator).Move(), allocator);
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


string ModifyBlueprintAttributeRequest::GetBlueprintId() const
{
    return m_blueprintId;
}

void ModifyBlueprintAttributeRequest::SetBlueprintId(const string& _blueprintId)
{
    m_blueprintId = _blueprintId;
    m_blueprintIdHasBeenSet = true;
}

bool ModifyBlueprintAttributeRequest::BlueprintIdHasBeenSet() const
{
    return m_blueprintIdHasBeenSet;
}

string ModifyBlueprintAttributeRequest::GetBlueprintName() const
{
    return m_blueprintName;
}

void ModifyBlueprintAttributeRequest::SetBlueprintName(const string& _blueprintName)
{
    m_blueprintName = _blueprintName;
    m_blueprintNameHasBeenSet = true;
}

bool ModifyBlueprintAttributeRequest::BlueprintNameHasBeenSet() const
{
    return m_blueprintNameHasBeenSet;
}

string ModifyBlueprintAttributeRequest::GetDescription() const
{
    return m_description;
}

void ModifyBlueprintAttributeRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyBlueprintAttributeRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


