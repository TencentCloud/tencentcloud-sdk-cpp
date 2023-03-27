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

#include <tencentcloud/tiw/v20190919/model/CreateApplicationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

CreateApplicationRequest::CreateApplicationRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_sKeyHasBeenSet(false),
    m_tinyIdHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

string CreateApplicationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_sKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tinyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TinyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tinyId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
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


int64_t CreateApplicationRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateApplicationRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateApplicationRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string CreateApplicationRequest::GetAppName() const
{
    return m_appName;
}

void CreateApplicationRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool CreateApplicationRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string CreateApplicationRequest::GetSKey() const
{
    return m_sKey;
}

void CreateApplicationRequest::SetSKey(const string& _sKey)
{
    m_sKey = _sKey;
    m_sKeyHasBeenSet = true;
}

bool CreateApplicationRequest::SKeyHasBeenSet() const
{
    return m_sKeyHasBeenSet;
}

string CreateApplicationRequest::GetTinyId() const
{
    return m_tinyId;
}

void CreateApplicationRequest::SetTinyId(const string& _tinyId)
{
    m_tinyId = _tinyId;
    m_tinyIdHasBeenSet = true;
}

bool CreateApplicationRequest::TinyIdHasBeenSet() const
{
    return m_tinyIdHasBeenSet;
}

vector<Tag> CreateApplicationRequest::GetTagList() const
{
    return m_tagList;
}

void CreateApplicationRequest::SetTagList(const vector<Tag>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool CreateApplicationRequest::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}


