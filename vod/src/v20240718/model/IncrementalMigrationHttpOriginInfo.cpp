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

#include <tencentcloud/vod/v20240718/model/IncrementalMigrationHttpOriginInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20240718::Model;
using namespace std;

IncrementalMigrationHttpOriginInfo::IncrementalMigrationHttpOriginInfo() :
    m_endpointInfoHasBeenSet(false),
    m_fileInfoHasBeenSet(false)
{
}

CoreInternalOutcome IncrementalMigrationHttpOriginInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EndpointInfo") && !value["EndpointInfo"].IsNull())
    {
        if (!value["EndpointInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationHttpOriginInfo.EndpointInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_endpointInfo.Deserialize(value["EndpointInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_endpointInfoHasBeenSet = true;
    }

    if (value.HasMember("FileInfo") && !value["FileInfo"].IsNull())
    {
        if (!value["FileInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationHttpOriginInfo.FileInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fileInfo.Deserialize(value["FileInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IncrementalMigrationHttpOriginInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endpointInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_endpointInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fileInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fileInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


IncrementalMigrationHttpEndpointInfo IncrementalMigrationHttpOriginInfo::GetEndpointInfo() const
{
    return m_endpointInfo;
}

void IncrementalMigrationHttpOriginInfo::SetEndpointInfo(const IncrementalMigrationHttpEndpointInfo& _endpointInfo)
{
    m_endpointInfo = _endpointInfo;
    m_endpointInfoHasBeenSet = true;
}

bool IncrementalMigrationHttpOriginInfo::EndpointInfoHasBeenSet() const
{
    return m_endpointInfoHasBeenSet;
}

IncrementalMigrationOriginFileInfo IncrementalMigrationHttpOriginInfo::GetFileInfo() const
{
    return m_fileInfo;
}

void IncrementalMigrationHttpOriginInfo::SetFileInfo(const IncrementalMigrationOriginFileInfo& _fileInfo)
{
    m_fileInfo = _fileInfo;
    m_fileInfoHasBeenSet = true;
}

bool IncrementalMigrationHttpOriginInfo::FileInfoHasBeenSet() const
{
    return m_fileInfoHasBeenSet;
}

