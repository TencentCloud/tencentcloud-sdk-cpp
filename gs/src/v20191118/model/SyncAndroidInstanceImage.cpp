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

#include <tencentcloud/gs/v20191118/model/SyncAndroidInstanceImage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

SyncAndroidInstanceImage::SyncAndroidInstanceImage() :
    m_androidInstanceImageIdHasBeenSet(false),
    m_androidInstanceImageZoneHasBeenSet(false)
{
}

CoreInternalOutcome SyncAndroidInstanceImage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AndroidInstanceImageId") && !value["AndroidInstanceImageId"].IsNull())
    {
        if (!value["AndroidInstanceImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncAndroidInstanceImage.AndroidInstanceImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidInstanceImageId = string(value["AndroidInstanceImageId"].GetString());
        m_androidInstanceImageIdHasBeenSet = true;
    }

    if (value.HasMember("AndroidInstanceImageZone") && !value["AndroidInstanceImageZone"].IsNull())
    {
        if (!value["AndroidInstanceImageZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncAndroidInstanceImage.AndroidInstanceImageZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidInstanceImageZone = string(value["AndroidInstanceImageZone"].GetString());
        m_androidInstanceImageZoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SyncAndroidInstanceImage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_androidInstanceImageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidInstanceImageId.c_str(), allocator).Move(), allocator);
    }

    if (m_androidInstanceImageZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceImageZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidInstanceImageZone.c_str(), allocator).Move(), allocator);
    }

}


string SyncAndroidInstanceImage::GetAndroidInstanceImageId() const
{
    return m_androidInstanceImageId;
}

void SyncAndroidInstanceImage::SetAndroidInstanceImageId(const string& _androidInstanceImageId)
{
    m_androidInstanceImageId = _androidInstanceImageId;
    m_androidInstanceImageIdHasBeenSet = true;
}

bool SyncAndroidInstanceImage::AndroidInstanceImageIdHasBeenSet() const
{
    return m_androidInstanceImageIdHasBeenSet;
}

string SyncAndroidInstanceImage::GetAndroidInstanceImageZone() const
{
    return m_androidInstanceImageZone;
}

void SyncAndroidInstanceImage::SetAndroidInstanceImageZone(const string& _androidInstanceImageZone)
{
    m_androidInstanceImageZone = _androidInstanceImageZone;
    m_androidInstanceImageZoneHasBeenSet = true;
}

bool SyncAndroidInstanceImage::AndroidInstanceImageZoneHasBeenSet() const
{
    return m_androidInstanceImageZoneHasBeenSet;
}

