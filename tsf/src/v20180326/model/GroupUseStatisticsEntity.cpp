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

#include <tencentcloud/tsf/v20180326/model/GroupUseStatisticsEntity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

GroupUseStatisticsEntity::GroupUseStatisticsEntity() :
    m_apiPathHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_apiIdHasBeenSet(false)
{
}

CoreInternalOutcome GroupUseStatisticsEntity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiPath") && !value["ApiPath"].IsNull())
    {
        if (!value["ApiPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupUseStatisticsEntity.ApiPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiPath = string(value["ApiPath"].GetString());
        m_apiPathHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupUseStatisticsEntity.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupUseStatisticsEntity.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("ApiId") && !value["ApiId"].IsNull())
    {
        if (!value["ApiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupUseStatisticsEntity.ApiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiId = string(value["ApiId"].GetString());
        m_apiIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupUseStatisticsEntity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiPath.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_apiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiId.c_str(), allocator).Move(), allocator);
    }

}


string GroupUseStatisticsEntity::GetApiPath() const
{
    return m_apiPath;
}

void GroupUseStatisticsEntity::SetApiPath(const string& _apiPath)
{
    m_apiPath = _apiPath;
    m_apiPathHasBeenSet = true;
}

bool GroupUseStatisticsEntity::ApiPathHasBeenSet() const
{
    return m_apiPathHasBeenSet;
}

string GroupUseStatisticsEntity::GetServiceName() const
{
    return m_serviceName;
}

void GroupUseStatisticsEntity::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool GroupUseStatisticsEntity::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string GroupUseStatisticsEntity::GetValue() const
{
    return m_value;
}

void GroupUseStatisticsEntity::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool GroupUseStatisticsEntity::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string GroupUseStatisticsEntity::GetApiId() const
{
    return m_apiId;
}

void GroupUseStatisticsEntity::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool GroupUseStatisticsEntity::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}

