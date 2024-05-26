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

#include <tencentcloud/iotexplorer/v20190423/model/AssignTWeCallLicenseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

AssignTWeCallLicenseRequest::AssignTWeCallLicenseRequest() :
    m_pkgTypeHasBeenSet(false),
    m_miniProgramAppIdHasBeenSet(false),
    m_deductNumHasBeenSet(false)
{
}

string AssignTWeCallLicenseRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pkgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pkgType, allocator);
    }

    if (m_miniProgramAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniProgramAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_miniProgramAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_deductNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deductNum, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t AssignTWeCallLicenseRequest::GetPkgType() const
{
    return m_pkgType;
}

void AssignTWeCallLicenseRequest::SetPkgType(const int64_t& _pkgType)
{
    m_pkgType = _pkgType;
    m_pkgTypeHasBeenSet = true;
}

bool AssignTWeCallLicenseRequest::PkgTypeHasBeenSet() const
{
    return m_pkgTypeHasBeenSet;
}

string AssignTWeCallLicenseRequest::GetMiniProgramAppId() const
{
    return m_miniProgramAppId;
}

void AssignTWeCallLicenseRequest::SetMiniProgramAppId(const string& _miniProgramAppId)
{
    m_miniProgramAppId = _miniProgramAppId;
    m_miniProgramAppIdHasBeenSet = true;
}

bool AssignTWeCallLicenseRequest::MiniProgramAppIdHasBeenSet() const
{
    return m_miniProgramAppIdHasBeenSet;
}

int64_t AssignTWeCallLicenseRequest::GetDeductNum() const
{
    return m_deductNum;
}

void AssignTWeCallLicenseRequest::SetDeductNum(const int64_t& _deductNum)
{
    m_deductNum = _deductNum;
    m_deductNumHasBeenSet = true;
}

bool AssignTWeCallLicenseRequest::DeductNumHasBeenSet() const
{
    return m_deductNumHasBeenSet;
}


