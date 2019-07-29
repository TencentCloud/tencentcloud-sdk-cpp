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

#include <tencentcloud/tci/v20190318/model/DeleteFaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tci::V20190318::Model;
using namespace rapidjson;
using namespace std;

DeleteFaceRequest::DeleteFaceRequest() :
    m_faceIdSetHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_libraryIdHasBeenSet(false)
{
}

string DeleteFaceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_faceIdSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FaceIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_faceIdSet.begin(); itr != m_faceIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_personIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_libraryIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LibraryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_libraryId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DeleteFaceRequest::GetFaceIdSet() const
{
    return m_faceIdSet;
}

void DeleteFaceRequest::SetFaceIdSet(const vector<string>& _faceIdSet)
{
    m_faceIdSet = _faceIdSet;
    m_faceIdSetHasBeenSet = true;
}

bool DeleteFaceRequest::FaceIdSetHasBeenSet() const
{
    return m_faceIdSetHasBeenSet;
}

string DeleteFaceRequest::GetPersonId() const
{
    return m_personId;
}

void DeleteFaceRequest::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool DeleteFaceRequest::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

string DeleteFaceRequest::GetLibraryId() const
{
    return m_libraryId;
}

void DeleteFaceRequest::SetLibraryId(const string& _libraryId)
{
    m_libraryId = _libraryId;
    m_libraryIdHasBeenSet = true;
}

bool DeleteFaceRequest::LibraryIdHasBeenSet() const
{
    return m_libraryIdHasBeenSet;
}


