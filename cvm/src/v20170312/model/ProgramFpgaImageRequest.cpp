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

#include <tencentcloud/cvm/v20170312/model/ProgramFpgaImageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ProgramFpgaImageRequest::ProgramFpgaImageRequest() :
    m_instanceIdHasBeenSet(false),
    m_fPGAUrlHasBeenSet(false),
    m_dBDFsHasBeenSet(false),
    m_dryRunHasBeenSet(false)
{
}

string ProgramFpgaImageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_fPGAUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FPGAUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fPGAUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_dBDFsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBDFs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dBDFs.begin(); itr != m_dBDFs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ProgramFpgaImageRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ProgramFpgaImageRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ProgramFpgaImageRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ProgramFpgaImageRequest::GetFPGAUrl() const
{
    return m_fPGAUrl;
}

void ProgramFpgaImageRequest::SetFPGAUrl(const string& _fPGAUrl)
{
    m_fPGAUrl = _fPGAUrl;
    m_fPGAUrlHasBeenSet = true;
}

bool ProgramFpgaImageRequest::FPGAUrlHasBeenSet() const
{
    return m_fPGAUrlHasBeenSet;
}

vector<string> ProgramFpgaImageRequest::GetDBDFs() const
{
    return m_dBDFs;
}

void ProgramFpgaImageRequest::SetDBDFs(const vector<string>& _dBDFs)
{
    m_dBDFs = _dBDFs;
    m_dBDFsHasBeenSet = true;
}

bool ProgramFpgaImageRequest::DBDFsHasBeenSet() const
{
    return m_dBDFsHasBeenSet;
}

bool ProgramFpgaImageRequest::GetDryRun() const
{
    return m_dryRun;
}

void ProgramFpgaImageRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool ProgramFpgaImageRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}


