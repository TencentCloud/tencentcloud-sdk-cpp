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

#include <tencentcloud/ccc/v20200210/model/ModifyCompanyApplyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

ModifyCompanyApplyRequest::ModifyCompanyApplyRequest() :
    m_applyIdHasBeenSet(false),
    m_companyInfoHasBeenSet(false)
{
}

string ModifyCompanyApplyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_applyId, allocator);
    }

    if (m_companyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_companyInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyCompanyApplyRequest::GetApplyId() const
{
    return m_applyId;
}

void ModifyCompanyApplyRequest::SetApplyId(const int64_t& _applyId)
{
    m_applyId = _applyId;
    m_applyIdHasBeenSet = true;
}

bool ModifyCompanyApplyRequest::ApplyIdHasBeenSet() const
{
    return m_applyIdHasBeenSet;
}

CompanyApplyInfo ModifyCompanyApplyRequest::GetCompanyInfo() const
{
    return m_companyInfo;
}

void ModifyCompanyApplyRequest::SetCompanyInfo(const CompanyApplyInfo& _companyInfo)
{
    m_companyInfo = _companyInfo;
    m_companyInfoHasBeenSet = true;
}

bool ModifyCompanyApplyRequest::CompanyInfoHasBeenSet() const
{
    return m_companyInfoHasBeenSet;
}


