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

#include <tencentcloud/tdmq/v20200217/model/RabbitMQPrivateVirtualHost.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RabbitMQPrivateVirtualHost::RabbitMQPrivateVirtualHost() :
    m_virtualHostNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQPrivateVirtualHost::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VirtualHostName") && !value["VirtualHostName"].IsNull())
    {
        if (!value["VirtualHostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQPrivateVirtualHost.VirtualHostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualHostName = string(value["VirtualHostName"].GetString());
        m_virtualHostNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQPrivateVirtualHost.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQPrivateVirtualHost::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_virtualHostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualHostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virtualHostName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string RabbitMQPrivateVirtualHost::GetVirtualHostName() const
{
    return m_virtualHostName;
}

void RabbitMQPrivateVirtualHost::SetVirtualHostName(const string& _virtualHostName)
{
    m_virtualHostName = _virtualHostName;
    m_virtualHostNameHasBeenSet = true;
}

bool RabbitMQPrivateVirtualHost::VirtualHostNameHasBeenSet() const
{
    return m_virtualHostNameHasBeenSet;
}

string RabbitMQPrivateVirtualHost::GetDescription() const
{
    return m_description;
}

void RabbitMQPrivateVirtualHost::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RabbitMQPrivateVirtualHost::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

