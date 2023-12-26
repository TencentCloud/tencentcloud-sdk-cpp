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

#include <tencentcloud/vpc/v20170312/model/ModifyCcnAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyCcnAttributeRequest::ModifyCcnAttributeRequest() :
    m_ccnIdHasBeenSet(false),
    m_ccnNameHasBeenSet(false),
    m_ccnDescriptionHasBeenSet(false),
    m_routeECMPFlagHasBeenSet(false),
    m_routeOverlapFlagHasBeenSet(false)
{
}

string ModifyCcnAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccnName.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccnDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_routeECMPFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteECMPFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_routeECMPFlag, allocator);
    }

    if (m_routeOverlapFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteOverlapFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_routeOverlapFlag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCcnAttributeRequest::GetCcnId() const
{
    return m_ccnId;
}

void ModifyCcnAttributeRequest::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool ModifyCcnAttributeRequest::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string ModifyCcnAttributeRequest::GetCcnName() const
{
    return m_ccnName;
}

void ModifyCcnAttributeRequest::SetCcnName(const string& _ccnName)
{
    m_ccnName = _ccnName;
    m_ccnNameHasBeenSet = true;
}

bool ModifyCcnAttributeRequest::CcnNameHasBeenSet() const
{
    return m_ccnNameHasBeenSet;
}

string ModifyCcnAttributeRequest::GetCcnDescription() const
{
    return m_ccnDescription;
}

void ModifyCcnAttributeRequest::SetCcnDescription(const string& _ccnDescription)
{
    m_ccnDescription = _ccnDescription;
    m_ccnDescriptionHasBeenSet = true;
}

bool ModifyCcnAttributeRequest::CcnDescriptionHasBeenSet() const
{
    return m_ccnDescriptionHasBeenSet;
}

bool ModifyCcnAttributeRequest::GetRouteECMPFlag() const
{
    return m_routeECMPFlag;
}

void ModifyCcnAttributeRequest::SetRouteECMPFlag(const bool& _routeECMPFlag)
{
    m_routeECMPFlag = _routeECMPFlag;
    m_routeECMPFlagHasBeenSet = true;
}

bool ModifyCcnAttributeRequest::RouteECMPFlagHasBeenSet() const
{
    return m_routeECMPFlagHasBeenSet;
}

bool ModifyCcnAttributeRequest::GetRouteOverlapFlag() const
{
    return m_routeOverlapFlag;
}

void ModifyCcnAttributeRequest::SetRouteOverlapFlag(const bool& _routeOverlapFlag)
{
    m_routeOverlapFlag = _routeOverlapFlag;
    m_routeOverlapFlagHasBeenSet = true;
}

bool ModifyCcnAttributeRequest::RouteOverlapFlagHasBeenSet() const
{
    return m_routeOverlapFlagHasBeenSet;
}


