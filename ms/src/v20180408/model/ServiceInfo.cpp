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

#include <tencentcloud/ms/v20180408/model/ServiceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

ServiceInfo::ServiceInfo() :
    m_serviceEditionHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_submitSourceHasBeenSet(false),
    m_planIdHasBeenSet(false)
{
}

CoreInternalOutcome ServiceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceEdition") && !value["ServiceEdition"].IsNull())
    {
        if (!value["ServiceEdition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.ServiceEdition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceEdition = string(value["ServiceEdition"].GetString());
        m_serviceEditionHasBeenSet = true;
    }

    if (value.HasMember("CallbackUrl") && !value["CallbackUrl"].IsNull())
    {
        if (!value["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(value["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }

    if (value.HasMember("SubmitSource") && !value["SubmitSource"].IsNull())
    {
        if (!value["SubmitSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.SubmitSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_submitSource = string(value["SubmitSource"].GetString());
        m_submitSourceHasBeenSet = true;
    }

    if (value.HasMember("PlanId") && !value["PlanId"].IsNull())
    {
        if (!value["PlanId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.PlanId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_planId = value["PlanId"].GetUint64();
        m_planIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceEditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceEdition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceEdition.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_submitSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_submitSource.c_str(), allocator).Move(), allocator);
    }

    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_planId, allocator);
    }

}


string ServiceInfo::GetServiceEdition() const
{
    return m_serviceEdition;
}

void ServiceInfo::SetServiceEdition(const string& _serviceEdition)
{
    m_serviceEdition = _serviceEdition;
    m_serviceEditionHasBeenSet = true;
}

bool ServiceInfo::ServiceEditionHasBeenSet() const
{
    return m_serviceEditionHasBeenSet;
}

string ServiceInfo::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void ServiceInfo::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool ServiceInfo::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string ServiceInfo::GetSubmitSource() const
{
    return m_submitSource;
}

void ServiceInfo::SetSubmitSource(const string& _submitSource)
{
    m_submitSource = _submitSource;
    m_submitSourceHasBeenSet = true;
}

bool ServiceInfo::SubmitSourceHasBeenSet() const
{
    return m_submitSourceHasBeenSet;
}

uint64_t ServiceInfo::GetPlanId() const
{
    return m_planId;
}

void ServiceInfo::SetPlanId(const uint64_t& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool ServiceInfo::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

