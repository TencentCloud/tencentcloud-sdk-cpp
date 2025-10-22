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

#include <tencentcloud/ic/v20190307/model/ModifyUserCardRemarkRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ic::V20190307::Model;
using namespace std;

ModifyUserCardRemarkRequest::ModifyUserCardRemarkRequest() :
    m_sdkappidHasBeenSet(false),
    m_iccidHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string ModifyUserCardRemarkRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkappidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sdkappid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkappid, allocator);
    }

    if (m_iccidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Iccid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iccid.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyUserCardRemarkRequest::GetSdkappid() const
{
    return m_sdkappid;
}

void ModifyUserCardRemarkRequest::SetSdkappid(const int64_t& _sdkappid)
{
    m_sdkappid = _sdkappid;
    m_sdkappidHasBeenSet = true;
}

bool ModifyUserCardRemarkRequest::SdkappidHasBeenSet() const
{
    return m_sdkappidHasBeenSet;
}

string ModifyUserCardRemarkRequest::GetIccid() const
{
    return m_iccid;
}

void ModifyUserCardRemarkRequest::SetIccid(const string& _iccid)
{
    m_iccid = _iccid;
    m_iccidHasBeenSet = true;
}

bool ModifyUserCardRemarkRequest::IccidHasBeenSet() const
{
    return m_iccidHasBeenSet;
}

string ModifyUserCardRemarkRequest::GetRemark() const
{
    return m_remark;
}

void ModifyUserCardRemarkRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyUserCardRemarkRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


