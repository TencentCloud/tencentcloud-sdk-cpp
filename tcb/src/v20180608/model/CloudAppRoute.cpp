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

#include <tencentcloud/tcb/v20180608/model/CloudAppRoute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudAppRoute::CloudAppRoute() :
    m_sourceHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_targetPathHasBeenSet(false)
{
}

CoreInternalOutcome CloudAppRoute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppRoute.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppRoute.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppRoute.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("TargetPath") && !value["TargetPath"].IsNull())
    {
        if (!value["TargetPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppRoute.TargetPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetPath = string(value["TargetPath"].GetString());
        m_targetPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudAppRoute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetPath.c_str(), allocator).Move(), allocator);
    }

}


string CloudAppRoute::GetSource() const
{
    return m_source;
}

void CloudAppRoute::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool CloudAppRoute::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string CloudAppRoute::GetServiceType() const
{
    return m_serviceType;
}

void CloudAppRoute::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool CloudAppRoute::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string CloudAppRoute::GetServiceName() const
{
    return m_serviceName;
}

void CloudAppRoute::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool CloudAppRoute::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string CloudAppRoute::GetTargetPath() const
{
    return m_targetPath;
}

void CloudAppRoute::SetTargetPath(const string& _targetPath)
{
    m_targetPath = _targetPath;
    m_targetPathHasBeenSet = true;
}

bool CloudAppRoute::TargetPathHasBeenSet() const
{
    return m_targetPathHasBeenSet;
}

