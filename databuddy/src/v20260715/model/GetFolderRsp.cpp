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

#include <tencentcloud/databuddy/v20260715/model/GetFolderRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

GetFolderRsp::GetFolderRsp() :
    m_folderHasBeenSet(false)
{
}

CoreInternalOutcome GetFolderRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Folder") && !value["Folder"].IsNull())
    {
        if (!value["Folder"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GetFolderRsp.Folder` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_folder.Deserialize(value["Folder"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_folderHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GetFolderRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_folderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Folder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_folder.ToJsonObject(value[key.c_str()], allocator);
    }

}


FileNode GetFolderRsp::GetFolder() const
{
    return m_folder;
}

void GetFolderRsp::SetFolder(const FileNode& _folder)
{
    m_folder = _folder;
    m_folderHasBeenSet = true;
}

bool GetFolderRsp::FolderHasBeenSet() const
{
    return m_folderHasBeenSet;
}

