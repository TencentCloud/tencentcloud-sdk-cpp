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

#include <tencentcloud/faceid/v20180301/model/GetDetectInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GetDetectInfoRequest::GetDetectInfoRequest() :
    m_bizTokenHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_infoTypeHasBeenSet(false)
{
}

string GetDetectInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bizTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bizToken.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_infoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InfoType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_infoType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetDetectInfoRequest::GetBizToken() const
{
    return m_bizToken;
}

void GetDetectInfoRequest::SetBizToken(const string& _bizToken)
{
    m_bizToken = _bizToken;
    m_bizTokenHasBeenSet = true;
}

bool GetDetectInfoRequest::BizTokenHasBeenSet() const
{
    return m_bizTokenHasBeenSet;
}

string GetDetectInfoRequest::GetRuleId() const
{
    return m_ruleId;
}

void GetDetectInfoRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool GetDetectInfoRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string GetDetectInfoRequest::GetInfoType() const
{
    return m_infoType;
}

void GetDetectInfoRequest::SetInfoType(const string& _infoType)
{
    m_infoType = _infoType;
    m_infoTypeHasBeenSet = true;
}

bool GetDetectInfoRequest::InfoTypeHasBeenSet() const
{
    return m_infoTypeHasBeenSet;
}


