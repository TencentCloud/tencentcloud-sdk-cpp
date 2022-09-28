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

#include <tencentcloud/teo/v20220901/model/FileAscriptionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

FileAscriptionInfo::FileAscriptionInfo() :
    m_identifyPathHasBeenSet(false),
    m_identifyContentHasBeenSet(false)
{
}

CoreInternalOutcome FileAscriptionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IdentifyPath") && !value["IdentifyPath"].IsNull())
    {
        if (!value["IdentifyPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileAscriptionInfo.IdentifyPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifyPath = string(value["IdentifyPath"].GetString());
        m_identifyPathHasBeenSet = true;
    }

    if (value.HasMember("IdentifyContent") && !value["IdentifyContent"].IsNull())
    {
        if (!value["IdentifyContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileAscriptionInfo.IdentifyContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifyContent = string(value["IdentifyContent"].GetString());
        m_identifyContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileAscriptionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_identifyPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identifyPath.c_str(), allocator).Move(), allocator);
    }

    if (m_identifyContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identifyContent.c_str(), allocator).Move(), allocator);
    }

}


string FileAscriptionInfo::GetIdentifyPath() const
{
    return m_identifyPath;
}

void FileAscriptionInfo::SetIdentifyPath(const string& _identifyPath)
{
    m_identifyPath = _identifyPath;
    m_identifyPathHasBeenSet = true;
}

bool FileAscriptionInfo::IdentifyPathHasBeenSet() const
{
    return m_identifyPathHasBeenSet;
}

string FileAscriptionInfo::GetIdentifyContent() const
{
    return m_identifyContent;
}

void FileAscriptionInfo::SetIdentifyContent(const string& _identifyContent)
{
    m_identifyContent = _identifyContent;
    m_identifyContentHasBeenSet = true;
}

bool FileAscriptionInfo::IdentifyContentHasBeenSet() const
{
    return m_identifyContentHasBeenSet;
}

