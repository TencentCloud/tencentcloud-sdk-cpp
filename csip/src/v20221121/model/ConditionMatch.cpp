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

#include <tencentcloud/csip/v20221121/model/ConditionMatch.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ConditionMatch::ConditionMatch() :
    m_imageIDMatchStringHasBeenSet(false),
    m_imageNameMatchStringHasBeenSet(false),
    m_imageAddressMatchStringHasBeenSet(false),
    m_matchTypeHasBeenSet(false)
{
}

CoreInternalOutcome ConditionMatch::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageIDMatchString") && !value["ImageIDMatchString"].IsNull())
    {
        if (!value["ImageIDMatchString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConditionMatch.ImageIDMatchString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageIDMatchString = string(value["ImageIDMatchString"].GetString());
        m_imageIDMatchStringHasBeenSet = true;
    }

    if (value.HasMember("ImageNameMatchString") && !value["ImageNameMatchString"].IsNull())
    {
        if (!value["ImageNameMatchString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConditionMatch.ImageNameMatchString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageNameMatchString = string(value["ImageNameMatchString"].GetString());
        m_imageNameMatchStringHasBeenSet = true;
    }

    if (value.HasMember("ImageAddressMatchString") && !value["ImageAddressMatchString"].IsNull())
    {
        if (!value["ImageAddressMatchString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConditionMatch.ImageAddressMatchString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageAddressMatchString = string(value["ImageAddressMatchString"].GetString());
        m_imageAddressMatchStringHasBeenSet = true;
    }

    if (value.HasMember("MatchType") && !value["MatchType"].IsNull())
    {
        if (!value["MatchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConditionMatch.MatchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchType = string(value["MatchType"].GetString());
        m_matchTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConditionMatch::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageIDMatchStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageIDMatchString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageIDMatchString.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameMatchStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageNameMatchString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageNameMatchString.c_str(), allocator).Move(), allocator);
    }

    if (m_imageAddressMatchStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageAddressMatchString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageAddressMatchString.c_str(), allocator).Move(), allocator);
    }

    if (m_matchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchType.c_str(), allocator).Move(), allocator);
    }

}


string ConditionMatch::GetImageIDMatchString() const
{
    return m_imageIDMatchString;
}

void ConditionMatch::SetImageIDMatchString(const string& _imageIDMatchString)
{
    m_imageIDMatchString = _imageIDMatchString;
    m_imageIDMatchStringHasBeenSet = true;
}

bool ConditionMatch::ImageIDMatchStringHasBeenSet() const
{
    return m_imageIDMatchStringHasBeenSet;
}

string ConditionMatch::GetImageNameMatchString() const
{
    return m_imageNameMatchString;
}

void ConditionMatch::SetImageNameMatchString(const string& _imageNameMatchString)
{
    m_imageNameMatchString = _imageNameMatchString;
    m_imageNameMatchStringHasBeenSet = true;
}

bool ConditionMatch::ImageNameMatchStringHasBeenSet() const
{
    return m_imageNameMatchStringHasBeenSet;
}

string ConditionMatch::GetImageAddressMatchString() const
{
    return m_imageAddressMatchString;
}

void ConditionMatch::SetImageAddressMatchString(const string& _imageAddressMatchString)
{
    m_imageAddressMatchString = _imageAddressMatchString;
    m_imageAddressMatchStringHasBeenSet = true;
}

bool ConditionMatch::ImageAddressMatchStringHasBeenSet() const
{
    return m_imageAddressMatchStringHasBeenSet;
}

string ConditionMatch::GetMatchType() const
{
    return m_matchType;
}

void ConditionMatch::SetMatchType(const string& _matchType)
{
    m_matchType = _matchType;
    m_matchTypeHasBeenSet = true;
}

bool ConditionMatch::MatchTypeHasBeenSet() const
{
    return m_matchTypeHasBeenSet;
}

