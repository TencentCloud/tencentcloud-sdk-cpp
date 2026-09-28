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

#include <tencentcloud/databuddy/v20260715/model/FolderLocator.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

FolderLocator::FolderLocator() :
    m_folderIdHasBeenSet(false),
    m_pathNameHasBeenSet(false)
{
}

CoreInternalOutcome FolderLocator::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FolderLocator.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("PathName") && !value["PathName"].IsNull())
    {
        if (!value["PathName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FolderLocator.PathName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pathName = string(value["PathName"].GetString());
        m_pathNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FolderLocator::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_pathNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pathName.c_str(), allocator).Move(), allocator);
    }

}


string FolderLocator::GetFolderId() const
{
    return m_folderId;
}

void FolderLocator::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool FolderLocator::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string FolderLocator::GetPathName() const
{
    return m_pathName;
}

void FolderLocator::SetPathName(const string& _pathName)
{
    m_pathName = _pathName;
    m_pathNameHasBeenSet = true;
}

bool FolderLocator::PathNameHasBeenSet() const
{
    return m_pathNameHasBeenSet;
}

