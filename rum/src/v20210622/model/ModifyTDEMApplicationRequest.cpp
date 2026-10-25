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

#include <tencentcloud/rum/v20210622/model/ModifyTDEMApplicationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

ModifyTDEMApplicationRequest::ModifyTDEMApplicationRequest() :
    m_appIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_excludeIgnoredErrorsHasBeenSet(false),
    m_apmInstanceIdsHasBeenSet(false)
{
}

string ModifyTDEMApplicationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_excludeIgnoredErrorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeIgnoredErrors";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_excludeIgnoredErrors, allocator);
    }

    if (m_apmInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApmInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_apmInstanceIds.begin(); itr != m_apmInstanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTDEMApplicationRequest::GetAppId() const
{
    return m_appId;
}

void ModifyTDEMApplicationRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ModifyTDEMApplicationRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ModifyTDEMApplicationRequest::GetName() const
{
    return m_name;
}

void ModifyTDEMApplicationRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyTDEMApplicationRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyTDEMApplicationRequest::GetDesc() const
{
    return m_desc;
}

void ModifyTDEMApplicationRequest::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool ModifyTDEMApplicationRequest::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

bool ModifyTDEMApplicationRequest::GetExcludeIgnoredErrors() const
{
    return m_excludeIgnoredErrors;
}

void ModifyTDEMApplicationRequest::SetExcludeIgnoredErrors(const bool& _excludeIgnoredErrors)
{
    m_excludeIgnoredErrors = _excludeIgnoredErrors;
    m_excludeIgnoredErrorsHasBeenSet = true;
}

bool ModifyTDEMApplicationRequest::ExcludeIgnoredErrorsHasBeenSet() const
{
    return m_excludeIgnoredErrorsHasBeenSet;
}

vector<string> ModifyTDEMApplicationRequest::GetApmInstanceIds() const
{
    return m_apmInstanceIds;
}

void ModifyTDEMApplicationRequest::SetApmInstanceIds(const vector<string>& _apmInstanceIds)
{
    m_apmInstanceIds = _apmInstanceIds;
    m_apmInstanceIdsHasBeenSet = true;
}

bool ModifyTDEMApplicationRequest::ApmInstanceIdsHasBeenSet() const
{
    return m_apmInstanceIdsHasBeenSet;
}


