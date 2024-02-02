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

#include <tencentcloud/csip/v20221121/model/ServiceSupport.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ServiceSupport::ServiceSupport() :
    m_serviceNameHasBeenSet(false),
    m_supportHandledCountHasBeenSet(false),
    m_supportTotalCountHasBeenSet(false),
    m_isSupportHasBeenSet(false)
{
}

CoreInternalOutcome ServiceSupport::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSupport.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("SupportHandledCount") && !value["SupportHandledCount"].IsNull())
    {
        if (!value["SupportHandledCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSupport.SupportHandledCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_supportHandledCount = value["SupportHandledCount"].GetInt64();
        m_supportHandledCountHasBeenSet = true;
    }

    if (value.HasMember("SupportTotalCount") && !value["SupportTotalCount"].IsNull())
    {
        if (!value["SupportTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSupport.SupportTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_supportTotalCount = value["SupportTotalCount"].GetInt64();
        m_supportTotalCountHasBeenSet = true;
    }

    if (value.HasMember("IsSupport") && !value["IsSupport"].IsNull())
    {
        if (!value["IsSupport"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSupport.IsSupport` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupport = value["IsSupport"].GetBool();
        m_isSupportHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceSupport::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_supportHandledCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportHandledCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportHandledCount, allocator);
    }

    if (m_supportTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportTotalCount, allocator);
    }

    if (m_isSupportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupport, allocator);
    }

}


string ServiceSupport::GetServiceName() const
{
    return m_serviceName;
}

void ServiceSupport::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ServiceSupport::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

int64_t ServiceSupport::GetSupportHandledCount() const
{
    return m_supportHandledCount;
}

void ServiceSupport::SetSupportHandledCount(const int64_t& _supportHandledCount)
{
    m_supportHandledCount = _supportHandledCount;
    m_supportHandledCountHasBeenSet = true;
}

bool ServiceSupport::SupportHandledCountHasBeenSet() const
{
    return m_supportHandledCountHasBeenSet;
}

int64_t ServiceSupport::GetSupportTotalCount() const
{
    return m_supportTotalCount;
}

void ServiceSupport::SetSupportTotalCount(const int64_t& _supportTotalCount)
{
    m_supportTotalCount = _supportTotalCount;
    m_supportTotalCountHasBeenSet = true;
}

bool ServiceSupport::SupportTotalCountHasBeenSet() const
{
    return m_supportTotalCountHasBeenSet;
}

bool ServiceSupport::GetIsSupport() const
{
    return m_isSupport;
}

void ServiceSupport::SetIsSupport(const bool& _isSupport)
{
    m_isSupport = _isSupport;
    m_isSupportHasBeenSet = true;
}

bool ServiceSupport::IsSupportHasBeenSet() const
{
    return m_isSupportHasBeenSet;
}

