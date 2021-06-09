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

#include <tencentcloud/eis/v20200715/model/ListEisConnectorOperationsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eis::V20200715::Model;
using namespace std;

ListEisConnectorOperationsRequest::ListEisConnectorOperationsRequest() :
    m_connectorNameHasBeenSet(false),
    m_connectorVersionHasBeenSet(false)
{
}

string ListEisConnectorOperationsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_connectorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectorName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connectorName.c_str(), allocator).Move(), allocator);
    }

    if (m_connectorVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectorVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connectorVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListEisConnectorOperationsRequest::GetConnectorName() const
{
    return m_connectorName;
}

void ListEisConnectorOperationsRequest::SetConnectorName(const string& _connectorName)
{
    m_connectorName = _connectorName;
    m_connectorNameHasBeenSet = true;
}

bool ListEisConnectorOperationsRequest::ConnectorNameHasBeenSet() const
{
    return m_connectorNameHasBeenSet;
}

string ListEisConnectorOperationsRequest::GetConnectorVersion() const
{
    return m_connectorVersion;
}

void ListEisConnectorOperationsRequest::SetConnectorVersion(const string& _connectorVersion)
{
    m_connectorVersion = _connectorVersion;
    m_connectorVersionHasBeenSet = true;
}

bool ListEisConnectorOperationsRequest::ConnectorVersionHasBeenSet() const
{
    return m_connectorVersionHasBeenSet;
}


