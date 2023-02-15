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

#include <tencentcloud/bma/v20221115/model/CreateBPFakeURLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bma::V20221115::Model;
using namespace std;

CreateBPFakeURLRequest::CreateBPFakeURLRequest() :
    m_companyIdHasBeenSet(false),
    m_fakeURLHasBeenSet(false),
    m_fakeURLSnapshotsHasBeenSet(false),
    m_noteHasBeenSet(false)
{
}

string CreateBPFakeURLRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_companyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_companyId, allocator);
    }

    if (m_fakeURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fakeURL.c_str(), allocator).Move(), allocator);
    }

    if (m_fakeURLSnapshotsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeURLSnapshots";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fakeURLSnapshots.begin(); itr != m_fakeURLSnapshots.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateBPFakeURLRequest::GetCompanyId() const
{
    return m_companyId;
}

void CreateBPFakeURLRequest::SetCompanyId(const int64_t& _companyId)
{
    m_companyId = _companyId;
    m_companyIdHasBeenSet = true;
}

bool CreateBPFakeURLRequest::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

string CreateBPFakeURLRequest::GetFakeURL() const
{
    return m_fakeURL;
}

void CreateBPFakeURLRequest::SetFakeURL(const string& _fakeURL)
{
    m_fakeURL = _fakeURL;
    m_fakeURLHasBeenSet = true;
}

bool CreateBPFakeURLRequest::FakeURLHasBeenSet() const
{
    return m_fakeURLHasBeenSet;
}

vector<string> CreateBPFakeURLRequest::GetFakeURLSnapshots() const
{
    return m_fakeURLSnapshots;
}

void CreateBPFakeURLRequest::SetFakeURLSnapshots(const vector<string>& _fakeURLSnapshots)
{
    m_fakeURLSnapshots = _fakeURLSnapshots;
    m_fakeURLSnapshotsHasBeenSet = true;
}

bool CreateBPFakeURLRequest::FakeURLSnapshotsHasBeenSet() const
{
    return m_fakeURLSnapshotsHasBeenSet;
}

string CreateBPFakeURLRequest::GetNote() const
{
    return m_note;
}

void CreateBPFakeURLRequest::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool CreateBPFakeURLRequest::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}


