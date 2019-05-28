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

#include <tencentcloud/vod/v20180717/model/DeleteMediaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

DeleteMediaRequest::DeleteMediaRequest() :
    m_fileIdHasBeenSet(false),
    m_deletePartsHasBeenSet(false),
    m_subAppIdHasBeenSet(false)
{
}

string DeleteMediaRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_deletePartsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeleteParts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deleteParts.begin(); itr != m_deleteParts.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_subAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteMediaRequest::GetFileId() const
{
    return m_fileId;
}

void DeleteMediaRequest::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool DeleteMediaRequest::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

vector<MediaDeleteItem> DeleteMediaRequest::GetDeleteParts() const
{
    return m_deleteParts;
}

void DeleteMediaRequest::SetDeleteParts(const vector<MediaDeleteItem>& _deleteParts)
{
    m_deleteParts = _deleteParts;
    m_deletePartsHasBeenSet = true;
}

bool DeleteMediaRequest::DeletePartsHasBeenSet() const
{
    return m_deletePartsHasBeenSet;
}

uint64_t DeleteMediaRequest::GetSubAppId() const
{
    return m_subAppId;
}

void DeleteMediaRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool DeleteMediaRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}


