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

#include <tencentcloud/ocr/v20181119/model/SmartFormFileUrl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

SmartFormFileUrl::SmartFormFileUrl() :
    m_fileUrlHasBeenSet(false),
    m_fileOrderNumberHasBeenSet(false)
{
}

CoreInternalOutcome SmartFormFileUrl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileUrl") && !value["FileUrl"].IsNull())
    {
        if (!value["FileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartFormFileUrl.FileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileUrl = string(value["FileUrl"].GetString());
        m_fileUrlHasBeenSet = true;
    }

    if (value.HasMember("FileOrderNumber") && !value["FileOrderNumber"].IsNull())
    {
        if (!value["FileOrderNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmartFormFileUrl.FileOrderNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileOrderNumber = value["FileOrderNumber"].GetUint64();
        m_fileOrderNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartFormFileUrl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileOrderNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileOrderNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileOrderNumber, allocator);
    }

}


string SmartFormFileUrl::GetFileUrl() const
{
    return m_fileUrl;
}

void SmartFormFileUrl::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool SmartFormFileUrl::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

uint64_t SmartFormFileUrl::GetFileOrderNumber() const
{
    return m_fileOrderNumber;
}

void SmartFormFileUrl::SetFileOrderNumber(const uint64_t& _fileOrderNumber)
{
    m_fileOrderNumber = _fileOrderNumber;
    m_fileOrderNumberHasBeenSet = true;
}

bool SmartFormFileUrl::FileOrderNumberHasBeenSet() const
{
    return m_fileOrderNumberHasBeenSet;
}

