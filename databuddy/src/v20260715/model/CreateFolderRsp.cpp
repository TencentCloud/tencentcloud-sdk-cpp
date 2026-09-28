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

#include <tencentcloud/databuddy/v20260715/model/CreateFolderRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

CreateFolderRsp::CreateFolderRsp() :
    m_folderIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateFolderRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateFolderRsp.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateFolderRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

}


string CreateFolderRsp::GetFolderId() const
{
    return m_folderId;
}

void CreateFolderRsp::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool CreateFolderRsp::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

