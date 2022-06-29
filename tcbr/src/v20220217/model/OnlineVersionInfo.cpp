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

#include <tencentcloud/tcbr/v20220217/model/OnlineVersionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

OnlineVersionInfo::OnlineVersionInfo() :
    m_versionNameHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_flowRatioHasBeenSet(false)
{
}

CoreInternalOutcome OnlineVersionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OnlineVersionInfo.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("ImageUrl") && !value["ImageUrl"].IsNull())
    {
        if (!value["ImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OnlineVersionInfo.ImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrl = string(value["ImageUrl"].GetString());
        m_imageUrlHasBeenSet = true;
    }

    if (value.HasMember("FlowRatio") && !value["FlowRatio"].IsNull())
    {
        if (!value["FlowRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OnlineVersionInfo.FlowRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowRatio = string(value["FlowRatio"].GetString());
        m_flowRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OnlineVersionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_flowRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowRatio.c_str(), allocator).Move(), allocator);
    }

}


string OnlineVersionInfo::GetVersionName() const
{
    return m_versionName;
}

void OnlineVersionInfo::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool OnlineVersionInfo::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

string OnlineVersionInfo::GetImageUrl() const
{
    return m_imageUrl;
}

void OnlineVersionInfo::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool OnlineVersionInfo::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string OnlineVersionInfo::GetFlowRatio() const
{
    return m_flowRatio;
}

void OnlineVersionInfo::SetFlowRatio(const string& _flowRatio)
{
    m_flowRatio = _flowRatio;
    m_flowRatioHasBeenSet = true;
}

bool OnlineVersionInfo::FlowRatioHasBeenSet() const
{
    return m_flowRatioHasBeenSet;
}

