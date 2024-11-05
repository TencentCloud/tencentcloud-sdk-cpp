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

#include <tencentcloud/hunyuan/v20230901/model/ThreadMessageAttachmentObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

ThreadMessageAttachmentObject::ThreadMessageAttachmentObject() :
    m_fileIDHasBeenSet(false)
{
}

CoreInternalOutcome ThreadMessageAttachmentObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileID") && !value["FileID"].IsNull())
    {
        if (!value["FileID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThreadMessageAttachmentObject.FileID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileID = string(value["FileID"].GetString());
        m_fileIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ThreadMessageAttachmentObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileID.c_str(), allocator).Move(), allocator);
    }

}


string ThreadMessageAttachmentObject::GetFileID() const
{
    return m_fileID;
}

void ThreadMessageAttachmentObject::SetFileID(const string& _fileID)
{
    m_fileID = _fileID;
    m_fileIDHasBeenSet = true;
}

bool ThreadMessageAttachmentObject::FileIDHasBeenSet() const
{
    return m_fileIDHasBeenSet;
}

