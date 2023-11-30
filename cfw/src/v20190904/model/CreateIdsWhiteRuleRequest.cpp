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

#include <tencentcloud/cfw/v20190904/model/CreateIdsWhiteRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

CreateIdsWhiteRuleRequest::CreateIdsWhiteRuleRequest() :
    m_idsRuleIdHasBeenSet(false),
    m_whiteRuleTypeHasBeenSet(false),
    m_fwTypeHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_dstIpHasBeenSet(false)
{
}

string CreateIdsWhiteRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idsRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdsRuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idsRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_whiteRuleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteRuleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_whiteRuleType.c_str(), allocator).Move(), allocator);
    }

    if (m_fwTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fwType, allocator);
    }

    if (m_srcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcIp.c_str(), allocator).Move(), allocator);
    }

    if (m_dstIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstIp.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateIdsWhiteRuleRequest::GetIdsRuleId() const
{
    return m_idsRuleId;
}

void CreateIdsWhiteRuleRequest::SetIdsRuleId(const string& _idsRuleId)
{
    m_idsRuleId = _idsRuleId;
    m_idsRuleIdHasBeenSet = true;
}

bool CreateIdsWhiteRuleRequest::IdsRuleIdHasBeenSet() const
{
    return m_idsRuleIdHasBeenSet;
}

string CreateIdsWhiteRuleRequest::GetWhiteRuleType() const
{
    return m_whiteRuleType;
}

void CreateIdsWhiteRuleRequest::SetWhiteRuleType(const string& _whiteRuleType)
{
    m_whiteRuleType = _whiteRuleType;
    m_whiteRuleTypeHasBeenSet = true;
}

bool CreateIdsWhiteRuleRequest::WhiteRuleTypeHasBeenSet() const
{
    return m_whiteRuleTypeHasBeenSet;
}

int64_t CreateIdsWhiteRuleRequest::GetFwType() const
{
    return m_fwType;
}

void CreateIdsWhiteRuleRequest::SetFwType(const int64_t& _fwType)
{
    m_fwType = _fwType;
    m_fwTypeHasBeenSet = true;
}

bool CreateIdsWhiteRuleRequest::FwTypeHasBeenSet() const
{
    return m_fwTypeHasBeenSet;
}

string CreateIdsWhiteRuleRequest::GetSrcIp() const
{
    return m_srcIp;
}

void CreateIdsWhiteRuleRequest::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool CreateIdsWhiteRuleRequest::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

string CreateIdsWhiteRuleRequest::GetDstIp() const
{
    return m_dstIp;
}

void CreateIdsWhiteRuleRequest::SetDstIp(const string& _dstIp)
{
    m_dstIp = _dstIp;
    m_dstIpHasBeenSet = true;
}

bool CreateIdsWhiteRuleRequest::DstIpHasBeenSet() const
{
    return m_dstIpHasBeenSet;
}


