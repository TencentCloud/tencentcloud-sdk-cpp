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

#include <tencentcloud/gs/v20191118/model/AndroidInstanceImage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

AndroidInstanceImage::AndroidInstanceImage() :
    m_androidInstanceImageIdHasBeenSet(false),
    m_androidInstanceImageNameHasBeenSet(false),
    m_androidInstanceImageStateHasBeenSet(false),
    m_androidInstanceImageZoneHasBeenSet(false),
    m_androidVersionHasBeenSet(false)
{
}

CoreInternalOutcome AndroidInstanceImage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AndroidInstanceImageId") && !value["AndroidInstanceImageId"].IsNull())
    {
        if (!value["AndroidInstanceImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceImage.AndroidInstanceImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidInstanceImageId = string(value["AndroidInstanceImageId"].GetString());
        m_androidInstanceImageIdHasBeenSet = true;
    }

    if (value.HasMember("AndroidInstanceImageName") && !value["AndroidInstanceImageName"].IsNull())
    {
        if (!value["AndroidInstanceImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceImage.AndroidInstanceImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidInstanceImageName = string(value["AndroidInstanceImageName"].GetString());
        m_androidInstanceImageNameHasBeenSet = true;
    }

    if (value.HasMember("AndroidInstanceImageState") && !value["AndroidInstanceImageState"].IsNull())
    {
        if (!value["AndroidInstanceImageState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceImage.AndroidInstanceImageState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidInstanceImageState = string(value["AndroidInstanceImageState"].GetString());
        m_androidInstanceImageStateHasBeenSet = true;
    }

    if (value.HasMember("AndroidInstanceImageZone") && !value["AndroidInstanceImageZone"].IsNull())
    {
        if (!value["AndroidInstanceImageZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceImage.AndroidInstanceImageZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidInstanceImageZone = string(value["AndroidInstanceImageZone"].GetString());
        m_androidInstanceImageZoneHasBeenSet = true;
    }

    if (value.HasMember("AndroidVersion") && !value["AndroidVersion"].IsNull())
    {
        if (!value["AndroidVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceImage.AndroidVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidVersion = string(value["AndroidVersion"].GetString());
        m_androidVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AndroidInstanceImage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_androidInstanceImageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidInstanceImageId.c_str(), allocator).Move(), allocator);
    }

    if (m_androidInstanceImageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidInstanceImageName.c_str(), allocator).Move(), allocator);
    }

    if (m_androidInstanceImageStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceImageState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidInstanceImageState.c_str(), allocator).Move(), allocator);
    }

    if (m_androidInstanceImageZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceImageZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidInstanceImageZone.c_str(), allocator).Move(), allocator);
    }

    if (m_androidVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidVersion.c_str(), allocator).Move(), allocator);
    }

}


string AndroidInstanceImage::GetAndroidInstanceImageId() const
{
    return m_androidInstanceImageId;
}

void AndroidInstanceImage::SetAndroidInstanceImageId(const string& _androidInstanceImageId)
{
    m_androidInstanceImageId = _androidInstanceImageId;
    m_androidInstanceImageIdHasBeenSet = true;
}

bool AndroidInstanceImage::AndroidInstanceImageIdHasBeenSet() const
{
    return m_androidInstanceImageIdHasBeenSet;
}

string AndroidInstanceImage::GetAndroidInstanceImageName() const
{
    return m_androidInstanceImageName;
}

void AndroidInstanceImage::SetAndroidInstanceImageName(const string& _androidInstanceImageName)
{
    m_androidInstanceImageName = _androidInstanceImageName;
    m_androidInstanceImageNameHasBeenSet = true;
}

bool AndroidInstanceImage::AndroidInstanceImageNameHasBeenSet() const
{
    return m_androidInstanceImageNameHasBeenSet;
}

string AndroidInstanceImage::GetAndroidInstanceImageState() const
{
    return m_androidInstanceImageState;
}

void AndroidInstanceImage::SetAndroidInstanceImageState(const string& _androidInstanceImageState)
{
    m_androidInstanceImageState = _androidInstanceImageState;
    m_androidInstanceImageStateHasBeenSet = true;
}

bool AndroidInstanceImage::AndroidInstanceImageStateHasBeenSet() const
{
    return m_androidInstanceImageStateHasBeenSet;
}

string AndroidInstanceImage::GetAndroidInstanceImageZone() const
{
    return m_androidInstanceImageZone;
}

void AndroidInstanceImage::SetAndroidInstanceImageZone(const string& _androidInstanceImageZone)
{
    m_androidInstanceImageZone = _androidInstanceImageZone;
    m_androidInstanceImageZoneHasBeenSet = true;
}

bool AndroidInstanceImage::AndroidInstanceImageZoneHasBeenSet() const
{
    return m_androidInstanceImageZoneHasBeenSet;
}

string AndroidInstanceImage::GetAndroidVersion() const
{
    return m_androidVersion;
}

void AndroidInstanceImage::SetAndroidVersion(const string& _androidVersion)
{
    m_androidVersion = _androidVersion;
    m_androidVersionHasBeenSet = true;
}

bool AndroidInstanceImage::AndroidVersionHasBeenSet() const
{
    return m_androidVersionHasBeenSet;
}

