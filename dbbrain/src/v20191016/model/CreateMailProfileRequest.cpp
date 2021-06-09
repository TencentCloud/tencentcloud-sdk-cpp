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

#include <tencentcloud/dbbrain/v20191016/model/CreateMailProfileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20191016::Model;
using namespace std;

CreateMailProfileRequest::CreateMailProfileRequest() :
    m_profileInfoHasBeenSet(false),
    m_profileLevelHasBeenSet(false),
    m_profileNameHasBeenSet(false),
    m_profileTypeHasBeenSet(false),
    m_productHasBeenSet(false),
    m_bindInstanceIdsHasBeenSet(false)
{
}

string CreateMailProfileRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_profileInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfileInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_profileInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_profileLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfileLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profileLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_profileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profileName.c_str(), allocator).Move(), allocator);
    }

    if (m_profileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profileType.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_bindInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bindInstanceIds.begin(); itr != m_bindInstanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


ProfileInfo CreateMailProfileRequest::GetProfileInfo() const
{
    return m_profileInfo;
}

void CreateMailProfileRequest::SetProfileInfo(const ProfileInfo& _profileInfo)
{
    m_profileInfo = _profileInfo;
    m_profileInfoHasBeenSet = true;
}

bool CreateMailProfileRequest::ProfileInfoHasBeenSet() const
{
    return m_profileInfoHasBeenSet;
}

string CreateMailProfileRequest::GetProfileLevel() const
{
    return m_profileLevel;
}

void CreateMailProfileRequest::SetProfileLevel(const string& _profileLevel)
{
    m_profileLevel = _profileLevel;
    m_profileLevelHasBeenSet = true;
}

bool CreateMailProfileRequest::ProfileLevelHasBeenSet() const
{
    return m_profileLevelHasBeenSet;
}

string CreateMailProfileRequest::GetProfileName() const
{
    return m_profileName;
}

void CreateMailProfileRequest::SetProfileName(const string& _profileName)
{
    m_profileName = _profileName;
    m_profileNameHasBeenSet = true;
}

bool CreateMailProfileRequest::ProfileNameHasBeenSet() const
{
    return m_profileNameHasBeenSet;
}

string CreateMailProfileRequest::GetProfileType() const
{
    return m_profileType;
}

void CreateMailProfileRequest::SetProfileType(const string& _profileType)
{
    m_profileType = _profileType;
    m_profileTypeHasBeenSet = true;
}

bool CreateMailProfileRequest::ProfileTypeHasBeenSet() const
{
    return m_profileTypeHasBeenSet;
}

string CreateMailProfileRequest::GetProduct() const
{
    return m_product;
}

void CreateMailProfileRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool CreateMailProfileRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

vector<string> CreateMailProfileRequest::GetBindInstanceIds() const
{
    return m_bindInstanceIds;
}

void CreateMailProfileRequest::SetBindInstanceIds(const vector<string>& _bindInstanceIds)
{
    m_bindInstanceIds = _bindInstanceIds;
    m_bindInstanceIdsHasBeenSet = true;
}

bool CreateMailProfileRequest::BindInstanceIdsHasBeenSet() const
{
    return m_bindInstanceIdsHasBeenSet;
}


