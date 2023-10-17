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

#include <tencentcloud/ms/v20180408/model/IOSInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

IOSInfo::IOSInfo() :
    m_infoPListUrlHasBeenSet(false),
    m_infoPListSizeHasBeenSet(false),
    m_infoPListMd5HasBeenSet(false),
    m_buildTypeHasBeenSet(false)
{
}

CoreInternalOutcome IOSInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InfoPListUrl") && !value["InfoPListUrl"].IsNull())
    {
        if (!value["InfoPListUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IOSInfo.InfoPListUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_infoPListUrl = string(value["InfoPListUrl"].GetString());
        m_infoPListUrlHasBeenSet = true;
    }

    if (value.HasMember("InfoPListSize") && !value["InfoPListSize"].IsNull())
    {
        if (!value["InfoPListSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IOSInfo.InfoPListSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_infoPListSize = value["InfoPListSize"].GetInt64();
        m_infoPListSizeHasBeenSet = true;
    }

    if (value.HasMember("InfoPListMd5") && !value["InfoPListMd5"].IsNull())
    {
        if (!value["InfoPListMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IOSInfo.InfoPListMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_infoPListMd5 = string(value["InfoPListMd5"].GetString());
        m_infoPListMd5HasBeenSet = true;
    }

    if (value.HasMember("BuildType") && !value["BuildType"].IsNull())
    {
        if (!value["BuildType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IOSInfo.BuildType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildType = string(value["BuildType"].GetString());
        m_buildTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IOSInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_infoPListUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InfoPListUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_infoPListUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_infoPListSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InfoPListSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_infoPListSize, allocator);
    }

    if (m_infoPListMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InfoPListMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_infoPListMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_buildTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildType.c_str(), allocator).Move(), allocator);
    }

}


string IOSInfo::GetInfoPListUrl() const
{
    return m_infoPListUrl;
}

void IOSInfo::SetInfoPListUrl(const string& _infoPListUrl)
{
    m_infoPListUrl = _infoPListUrl;
    m_infoPListUrlHasBeenSet = true;
}

bool IOSInfo::InfoPListUrlHasBeenSet() const
{
    return m_infoPListUrlHasBeenSet;
}

int64_t IOSInfo::GetInfoPListSize() const
{
    return m_infoPListSize;
}

void IOSInfo::SetInfoPListSize(const int64_t& _infoPListSize)
{
    m_infoPListSize = _infoPListSize;
    m_infoPListSizeHasBeenSet = true;
}

bool IOSInfo::InfoPListSizeHasBeenSet() const
{
    return m_infoPListSizeHasBeenSet;
}

string IOSInfo::GetInfoPListMd5() const
{
    return m_infoPListMd5;
}

void IOSInfo::SetInfoPListMd5(const string& _infoPListMd5)
{
    m_infoPListMd5 = _infoPListMd5;
    m_infoPListMd5HasBeenSet = true;
}

bool IOSInfo::InfoPListMd5HasBeenSet() const
{
    return m_infoPListMd5HasBeenSet;
}

string IOSInfo::GetBuildType() const
{
    return m_buildType;
}

void IOSInfo::SetBuildType(const string& _buildType)
{
    m_buildType = _buildType;
    m_buildTypeHasBeenSet = true;
}

bool IOSInfo::BuildTypeHasBeenSet() const
{
    return m_buildTypeHasBeenSet;
}

