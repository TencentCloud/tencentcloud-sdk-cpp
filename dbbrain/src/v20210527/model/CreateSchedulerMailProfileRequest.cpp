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

#include <tencentcloud/dbbrain/v20210527/model/CreateSchedulerMailProfileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

CreateSchedulerMailProfileRequest::CreateSchedulerMailProfileRequest() :
    m_weekConfigurationHasBeenSet(false),
    m_profileInfoHasBeenSet(false),
    m_profileNameHasBeenSet(false),
    m_bindInstanceIdHasBeenSet(false),
    m_productHasBeenSet(false)
{
}

string CreateSchedulerMailProfileRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_weekConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeekConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_weekConfiguration.begin(); itr != m_weekConfiguration.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_profileInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfileInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_profileInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_profileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profileName.c_str(), allocator).Move(), allocator);
    }

    if (m_bindInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bindInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<int64_t> CreateSchedulerMailProfileRequest::GetWeekConfiguration() const
{
    return m_weekConfiguration;
}

void CreateSchedulerMailProfileRequest::SetWeekConfiguration(const vector<int64_t>& _weekConfiguration)
{
    m_weekConfiguration = _weekConfiguration;
    m_weekConfigurationHasBeenSet = true;
}

bool CreateSchedulerMailProfileRequest::WeekConfigurationHasBeenSet() const
{
    return m_weekConfigurationHasBeenSet;
}

ProfileInfo CreateSchedulerMailProfileRequest::GetProfileInfo() const
{
    return m_profileInfo;
}

void CreateSchedulerMailProfileRequest::SetProfileInfo(const ProfileInfo& _profileInfo)
{
    m_profileInfo = _profileInfo;
    m_profileInfoHasBeenSet = true;
}

bool CreateSchedulerMailProfileRequest::ProfileInfoHasBeenSet() const
{
    return m_profileInfoHasBeenSet;
}

string CreateSchedulerMailProfileRequest::GetProfileName() const
{
    return m_profileName;
}

void CreateSchedulerMailProfileRequest::SetProfileName(const string& _profileName)
{
    m_profileName = _profileName;
    m_profileNameHasBeenSet = true;
}

bool CreateSchedulerMailProfileRequest::ProfileNameHasBeenSet() const
{
    return m_profileNameHasBeenSet;
}

string CreateSchedulerMailProfileRequest::GetBindInstanceId() const
{
    return m_bindInstanceId;
}

void CreateSchedulerMailProfileRequest::SetBindInstanceId(const string& _bindInstanceId)
{
    m_bindInstanceId = _bindInstanceId;
    m_bindInstanceIdHasBeenSet = true;
}

bool CreateSchedulerMailProfileRequest::BindInstanceIdHasBeenSet() const
{
    return m_bindInstanceIdHasBeenSet;
}

string CreateSchedulerMailProfileRequest::GetProduct() const
{
    return m_product;
}

void CreateSchedulerMailProfileRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool CreateSchedulerMailProfileRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}


