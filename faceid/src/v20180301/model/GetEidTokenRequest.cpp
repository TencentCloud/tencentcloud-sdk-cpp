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

#include <tencentcloud/faceid/v20180301/model/GetEidTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace rapidjson;
using namespace std;

GetEidTokenRequest::GetEidTokenRequest() :
    m_merchantIdHasBeenSet(false),
    m_idCardHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_extraHasBeenSet(false),
    m_configHasBeenSet(false)
{
}

string GetEidTokenRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_merchantIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IdCard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_idCard.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_extraHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_extra.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_config.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetEidTokenRequest::GetMerchantId() const
{
    return m_merchantId;
}

void GetEidTokenRequest::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool GetEidTokenRequest::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string GetEidTokenRequest::GetIdCard() const
{
    return m_idCard;
}

void GetEidTokenRequest::SetIdCard(const string& _idCard)
{
    m_idCard = _idCard;
    m_idCardHasBeenSet = true;
}

bool GetEidTokenRequest::IdCardHasBeenSet() const
{
    return m_idCardHasBeenSet;
}

string GetEidTokenRequest::GetName() const
{
    return m_name;
}

void GetEidTokenRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GetEidTokenRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GetEidTokenRequest::GetExtra() const
{
    return m_extra;
}

void GetEidTokenRequest::SetExtra(const string& _extra)
{
    m_extra = _extra;
    m_extraHasBeenSet = true;
}

bool GetEidTokenRequest::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}

GetEidTokenConfig GetEidTokenRequest::GetConfig() const
{
    return m_config;
}

void GetEidTokenRequest::SetConfig(const GetEidTokenConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool GetEidTokenRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}


