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

#include <tencentcloud/cvm/v20170312/model/DeleteLaunchTemplateVersionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

DeleteLaunchTemplateVersionsRequest::DeleteLaunchTemplateVersionsRequest() :
    m_launchTemplateIdHasBeenSet(false),
    m_launchTemplateVersionsHasBeenSet(false)
{
}

string DeleteLaunchTemplateVersionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_launchTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_launchTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_launchTemplateVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchTemplateVersions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_launchTemplateVersions.begin(); itr != m_launchTemplateVersions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteLaunchTemplateVersionsRequest::GetLaunchTemplateId() const
{
    return m_launchTemplateId;
}

void DeleteLaunchTemplateVersionsRequest::SetLaunchTemplateId(const string& _launchTemplateId)
{
    m_launchTemplateId = _launchTemplateId;
    m_launchTemplateIdHasBeenSet = true;
}

bool DeleteLaunchTemplateVersionsRequest::LaunchTemplateIdHasBeenSet() const
{
    return m_launchTemplateIdHasBeenSet;
}

vector<int64_t> DeleteLaunchTemplateVersionsRequest::GetLaunchTemplateVersions() const
{
    return m_launchTemplateVersions;
}

void DeleteLaunchTemplateVersionsRequest::SetLaunchTemplateVersions(const vector<int64_t>& _launchTemplateVersions)
{
    m_launchTemplateVersions = _launchTemplateVersions;
    m_launchTemplateVersionsHasBeenSet = true;
}

bool DeleteLaunchTemplateVersionsRequest::LaunchTemplateVersionsHasBeenSet() const
{
    return m_launchTemplateVersionsHasBeenSet;
}


