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

#include <tencentcloud/bma/v20210624/model/CreateCRDesktopCodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

CreateCRDesktopCodeRequest::CreateCRDesktopCodeRequest() :
    m_tortIdHasBeenSet(false),
    m_desktopCodeHasBeenSet(false)
{
}

string CreateCRDesktopCodeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tortIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tortId, allocator);
    }

    if (m_desktopCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesktopCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_desktopCode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateCRDesktopCodeRequest::GetTortId() const
{
    return m_tortId;
}

void CreateCRDesktopCodeRequest::SetTortId(const int64_t& _tortId)
{
    m_tortId = _tortId;
    m_tortIdHasBeenSet = true;
}

bool CreateCRDesktopCodeRequest::TortIdHasBeenSet() const
{
    return m_tortIdHasBeenSet;
}

string CreateCRDesktopCodeRequest::GetDesktopCode() const
{
    return m_desktopCode;
}

void CreateCRDesktopCodeRequest::SetDesktopCode(const string& _desktopCode)
{
    m_desktopCode = _desktopCode;
    m_desktopCodeHasBeenSet = true;
}

bool CreateCRDesktopCodeRequest::DesktopCodeHasBeenSet() const
{
    return m_desktopCodeHasBeenSet;
}


