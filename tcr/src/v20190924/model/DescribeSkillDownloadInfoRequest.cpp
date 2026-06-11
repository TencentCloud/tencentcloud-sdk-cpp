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

#include <tencentcloud/tcr/v20190924/model/DescribeSkillDownloadInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

DescribeSkillDownloadInfoRequest::DescribeSkillDownloadInfoRequest() :
    m_registryIdHasBeenSet(false),
    m_skillNameHasBeenSet(false),
    m_skillVersionHasBeenSet(false)
{
}

string DescribeSkillDownloadInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_skillNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_skillName.c_str(), allocator).Move(), allocator);
    }

    if (m_skillVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_skillVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSkillDownloadInfoRequest::GetRegistryId() const
{
    return m_registryId;
}

void DescribeSkillDownloadInfoRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool DescribeSkillDownloadInfoRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string DescribeSkillDownloadInfoRequest::GetSkillName() const
{
    return m_skillName;
}

void DescribeSkillDownloadInfoRequest::SetSkillName(const string& _skillName)
{
    m_skillName = _skillName;
    m_skillNameHasBeenSet = true;
}

bool DescribeSkillDownloadInfoRequest::SkillNameHasBeenSet() const
{
    return m_skillNameHasBeenSet;
}

string DescribeSkillDownloadInfoRequest::GetSkillVersion() const
{
    return m_skillVersion;
}

void DescribeSkillDownloadInfoRequest::SetSkillVersion(const string& _skillVersion)
{
    m_skillVersion = _skillVersion;
    m_skillVersionHasBeenSet = true;
}

bool DescribeSkillDownloadInfoRequest::SkillVersionHasBeenSet() const
{
    return m_skillVersionHasBeenSet;
}


