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

#include <tencentcloud/tdid/v20210519/model/ResourceCounterData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

ResourceCounterData::ResourceCounterData() :
    m_didCntHasBeenSet(false),
    m_vCCntHasBeenSet(false),
    m_cPTCntHasBeenSet(false),
    m_verifyCntHasBeenSet(false),
    m_authCntHasBeenSet(false)
{
}

CoreInternalOutcome ResourceCounterData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DidCnt") && !value["DidCnt"].IsNull())
    {
        if (!value["DidCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceCounterData.DidCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_didCnt = value["DidCnt"].GetUint64();
        m_didCntHasBeenSet = true;
    }

    if (value.HasMember("VCCnt") && !value["VCCnt"].IsNull())
    {
        if (!value["VCCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceCounterData.VCCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vCCnt = value["VCCnt"].GetUint64();
        m_vCCntHasBeenSet = true;
    }

    if (value.HasMember("CPTCnt") && !value["CPTCnt"].IsNull())
    {
        if (!value["CPTCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceCounterData.CPTCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cPTCnt = value["CPTCnt"].GetUint64();
        m_cPTCntHasBeenSet = true;
    }

    if (value.HasMember("VerifyCnt") && !value["VerifyCnt"].IsNull())
    {
        if (!value["VerifyCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceCounterData.VerifyCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_verifyCnt = value["VerifyCnt"].GetUint64();
        m_verifyCntHasBeenSet = true;
    }

    if (value.HasMember("AuthCnt") && !value["AuthCnt"].IsNull())
    {
        if (!value["AuthCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceCounterData.AuthCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_authCnt = value["AuthCnt"].GetUint64();
        m_authCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceCounterData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_didCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DidCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_didCnt, allocator);
    }

    if (m_vCCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VCCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vCCnt, allocator);
    }

    if (m_cPTCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPTCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPTCnt, allocator);
    }

    if (m_verifyCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verifyCnt, allocator);
    }

    if (m_authCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authCnt, allocator);
    }

}


uint64_t ResourceCounterData::GetDidCnt() const
{
    return m_didCnt;
}

void ResourceCounterData::SetDidCnt(const uint64_t& _didCnt)
{
    m_didCnt = _didCnt;
    m_didCntHasBeenSet = true;
}

bool ResourceCounterData::DidCntHasBeenSet() const
{
    return m_didCntHasBeenSet;
}

uint64_t ResourceCounterData::GetVCCnt() const
{
    return m_vCCnt;
}

void ResourceCounterData::SetVCCnt(const uint64_t& _vCCnt)
{
    m_vCCnt = _vCCnt;
    m_vCCntHasBeenSet = true;
}

bool ResourceCounterData::VCCntHasBeenSet() const
{
    return m_vCCntHasBeenSet;
}

uint64_t ResourceCounterData::GetCPTCnt() const
{
    return m_cPTCnt;
}

void ResourceCounterData::SetCPTCnt(const uint64_t& _cPTCnt)
{
    m_cPTCnt = _cPTCnt;
    m_cPTCntHasBeenSet = true;
}

bool ResourceCounterData::CPTCntHasBeenSet() const
{
    return m_cPTCntHasBeenSet;
}

uint64_t ResourceCounterData::GetVerifyCnt() const
{
    return m_verifyCnt;
}

void ResourceCounterData::SetVerifyCnt(const uint64_t& _verifyCnt)
{
    m_verifyCnt = _verifyCnt;
    m_verifyCntHasBeenSet = true;
}

bool ResourceCounterData::VerifyCntHasBeenSet() const
{
    return m_verifyCntHasBeenSet;
}

uint64_t ResourceCounterData::GetAuthCnt() const
{
    return m_authCnt;
}

void ResourceCounterData::SetAuthCnt(const uint64_t& _authCnt)
{
    m_authCnt = _authCnt;
    m_authCntHasBeenSet = true;
}

bool ResourceCounterData::AuthCntHasBeenSet() const
{
    return m_authCntHasBeenSet;
}

