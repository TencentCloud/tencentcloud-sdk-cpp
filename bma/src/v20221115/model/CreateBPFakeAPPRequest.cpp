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

#include <tencentcloud/bma/v20221115/model/CreateBPFakeAPPRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bma::V20221115::Model;
using namespace std;

CreateBPFakeAPPRequest::CreateBPFakeAPPRequest() :
    m_companyIdHasBeenSet(false),
    m_fakeAPPNameHasBeenSet(false),
    m_aPPChanHasBeenSet(false),
    m_fakeAPPPackageNameHasBeenSet(false),
    m_fakeAPPCertHasBeenSet(false),
    m_fakeAPPSizeHasBeenSet(false),
    m_fakeAPPSnapshotsHasBeenSet(false),
    m_noteHasBeenSet(false)
{
}

string CreateBPFakeAPPRequest::ToJsonString() const
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

    if (m_fakeAPPNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeAPPName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fakeAPPName.c_str(), allocator).Move(), allocator);
    }

    if (m_aPPChanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APPChan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aPPChan.c_str(), allocator).Move(), allocator);
    }

    if (m_fakeAPPPackageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeAPPPackageName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fakeAPPPackageName.c_str(), allocator).Move(), allocator);
    }

    if (m_fakeAPPCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeAPPCert";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fakeAPPCert.c_str(), allocator).Move(), allocator);
    }

    if (m_fakeAPPSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeAPPSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fakeAPPSize.c_str(), allocator).Move(), allocator);
    }

    if (m_fakeAPPSnapshotsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeAPPSnapshots";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fakeAPPSnapshots.begin(); itr != m_fakeAPPSnapshots.end(); ++itr)
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


int64_t CreateBPFakeAPPRequest::GetCompanyId() const
{
    return m_companyId;
}

void CreateBPFakeAPPRequest::SetCompanyId(const int64_t& _companyId)
{
    m_companyId = _companyId;
    m_companyIdHasBeenSet = true;
}

bool CreateBPFakeAPPRequest::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

string CreateBPFakeAPPRequest::GetFakeAPPName() const
{
    return m_fakeAPPName;
}

void CreateBPFakeAPPRequest::SetFakeAPPName(const string& _fakeAPPName)
{
    m_fakeAPPName = _fakeAPPName;
    m_fakeAPPNameHasBeenSet = true;
}

bool CreateBPFakeAPPRequest::FakeAPPNameHasBeenSet() const
{
    return m_fakeAPPNameHasBeenSet;
}

string CreateBPFakeAPPRequest::GetAPPChan() const
{
    return m_aPPChan;
}

void CreateBPFakeAPPRequest::SetAPPChan(const string& _aPPChan)
{
    m_aPPChan = _aPPChan;
    m_aPPChanHasBeenSet = true;
}

bool CreateBPFakeAPPRequest::APPChanHasBeenSet() const
{
    return m_aPPChanHasBeenSet;
}

string CreateBPFakeAPPRequest::GetFakeAPPPackageName() const
{
    return m_fakeAPPPackageName;
}

void CreateBPFakeAPPRequest::SetFakeAPPPackageName(const string& _fakeAPPPackageName)
{
    m_fakeAPPPackageName = _fakeAPPPackageName;
    m_fakeAPPPackageNameHasBeenSet = true;
}

bool CreateBPFakeAPPRequest::FakeAPPPackageNameHasBeenSet() const
{
    return m_fakeAPPPackageNameHasBeenSet;
}

string CreateBPFakeAPPRequest::GetFakeAPPCert() const
{
    return m_fakeAPPCert;
}

void CreateBPFakeAPPRequest::SetFakeAPPCert(const string& _fakeAPPCert)
{
    m_fakeAPPCert = _fakeAPPCert;
    m_fakeAPPCertHasBeenSet = true;
}

bool CreateBPFakeAPPRequest::FakeAPPCertHasBeenSet() const
{
    return m_fakeAPPCertHasBeenSet;
}

string CreateBPFakeAPPRequest::GetFakeAPPSize() const
{
    return m_fakeAPPSize;
}

void CreateBPFakeAPPRequest::SetFakeAPPSize(const string& _fakeAPPSize)
{
    m_fakeAPPSize = _fakeAPPSize;
    m_fakeAPPSizeHasBeenSet = true;
}

bool CreateBPFakeAPPRequest::FakeAPPSizeHasBeenSet() const
{
    return m_fakeAPPSizeHasBeenSet;
}

vector<string> CreateBPFakeAPPRequest::GetFakeAPPSnapshots() const
{
    return m_fakeAPPSnapshots;
}

void CreateBPFakeAPPRequest::SetFakeAPPSnapshots(const vector<string>& _fakeAPPSnapshots)
{
    m_fakeAPPSnapshots = _fakeAPPSnapshots;
    m_fakeAPPSnapshotsHasBeenSet = true;
}

bool CreateBPFakeAPPRequest::FakeAPPSnapshotsHasBeenSet() const
{
    return m_fakeAPPSnapshotsHasBeenSet;
}

string CreateBPFakeAPPRequest::GetNote() const
{
    return m_note;
}

void CreateBPFakeAPPRequest::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool CreateBPFakeAPPRequest::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}


