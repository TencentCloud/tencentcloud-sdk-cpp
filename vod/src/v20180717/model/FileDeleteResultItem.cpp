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

#include <tencentcloud/vod/v20180717/model/FileDeleteResultItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

FileDeleteResultItem::FileDeleteResultItem() :
    m_fileIdHasBeenSet(false),
    m_deletePartsHasBeenSet(false)
{
}

CoreInternalOutcome FileDeleteResultItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileDeleteResultItem.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("DeleteParts") && !value["DeleteParts"].IsNull())
    {
        if (!value["DeleteParts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FileDeleteResultItem.DeleteParts` is not array type"));

        const rapidjson::Value &tmpValue = value["DeleteParts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaDeleteItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deleteParts.push_back(item);
        }
        m_deletePartsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileDeleteResultItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_deletePartsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteParts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deleteParts.begin(); itr != m_deleteParts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string FileDeleteResultItem::GetFileId() const
{
    return m_fileId;
}

void FileDeleteResultItem::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool FileDeleteResultItem::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

vector<MediaDeleteItem> FileDeleteResultItem::GetDeleteParts() const
{
    return m_deleteParts;
}

void FileDeleteResultItem::SetDeleteParts(const vector<MediaDeleteItem>& _deleteParts)
{
    m_deleteParts = _deleteParts;
    m_deletePartsHasBeenSet = true;
}

bool FileDeleteResultItem::DeletePartsHasBeenSet() const
{
    return m_deletePartsHasBeenSet;
}

