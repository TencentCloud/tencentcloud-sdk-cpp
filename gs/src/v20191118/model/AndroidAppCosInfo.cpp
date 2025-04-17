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

#include <tencentcloud/gs/v20191118/model/AndroidAppCosInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

AndroidAppCosInfo::AndroidAppCosInfo() :
    m_androidAppIdHasBeenSet(false),
    m_fileNameHasBeenSet(false)
{
}

CoreInternalOutcome AndroidAppCosInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AndroidAppId") && !value["AndroidAppId"].IsNull())
    {
        if (!value["AndroidAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidAppCosInfo.AndroidAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidAppId = string(value["AndroidAppId"].GetString());
        m_androidAppIdHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidAppCosInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AndroidAppCosInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_androidAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

}


string AndroidAppCosInfo::GetAndroidAppId() const
{
    return m_androidAppId;
}

void AndroidAppCosInfo::SetAndroidAppId(const string& _androidAppId)
{
    m_androidAppId = _androidAppId;
    m_androidAppIdHasBeenSet = true;
}

bool AndroidAppCosInfo::AndroidAppIdHasBeenSet() const
{
    return m_androidAppIdHasBeenSet;
}

string AndroidAppCosInfo::GetFileName() const
{
    return m_fileName;
}

void AndroidAppCosInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool AndroidAppCosInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

