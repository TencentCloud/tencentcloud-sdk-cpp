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

#include <tencentcloud/cpdp/v20190820/model/QueryReconciliationFileApplyInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryReconciliationFileApplyInfoRequest::QueryReconciliationFileApplyInfoRequest() :
    m_applyFileIdHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false)
{
}

string QueryReconciliationFileApplyInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applyFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyFileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applyFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasEnvironment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryReconciliationFileApplyInfoRequest::GetApplyFileId() const
{
    return m_applyFileId;
}

void QueryReconciliationFileApplyInfoRequest::SetApplyFileId(const string& _applyFileId)
{
    m_applyFileId = _applyFileId;
    m_applyFileIdHasBeenSet = true;
}

bool QueryReconciliationFileApplyInfoRequest::ApplyFileIdHasBeenSet() const
{
    return m_applyFileIdHasBeenSet;
}

string QueryReconciliationFileApplyInfoRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void QueryReconciliationFileApplyInfoRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool QueryReconciliationFileApplyInfoRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}


