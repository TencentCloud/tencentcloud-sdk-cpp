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

#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ModifyCloudNativeAPIGatewayRequest::ModifyCloudNativeAPIGatewayRequest() :
    m_gatewayIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enableClsHasBeenSet(false),
    m_internetPayModeHasBeenSet(false),
    m_deleteProtectHasBeenSet(false)
{
}

string ModifyCloudNativeAPIGatewayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_enableClsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCls";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableCls, allocator);
    }

    if (m_internetPayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetPayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_internetPayMode.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteProtectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteProtect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteProtect, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCloudNativeAPIGatewayRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void ModifyCloudNativeAPIGatewayRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayRequest::GetName() const
{
    return m_name;
}

void ModifyCloudNativeAPIGatewayRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyCloudNativeAPIGatewayRequest::GetDescription() const
{
    return m_description;
}

void ModifyCloudNativeAPIGatewayRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool ModifyCloudNativeAPIGatewayRequest::GetEnableCls() const
{
    return m_enableCls;
}

void ModifyCloudNativeAPIGatewayRequest::SetEnableCls(const bool& _enableCls)
{
    m_enableCls = _enableCls;
    m_enableClsHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRequest::EnableClsHasBeenSet() const
{
    return m_enableClsHasBeenSet;
}

string ModifyCloudNativeAPIGatewayRequest::GetInternetPayMode() const
{
    return m_internetPayMode;
}

void ModifyCloudNativeAPIGatewayRequest::SetInternetPayMode(const string& _internetPayMode)
{
    m_internetPayMode = _internetPayMode;
    m_internetPayModeHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRequest::InternetPayModeHasBeenSet() const
{
    return m_internetPayModeHasBeenSet;
}

bool ModifyCloudNativeAPIGatewayRequest::GetDeleteProtect() const
{
    return m_deleteProtect;
}

void ModifyCloudNativeAPIGatewayRequest::SetDeleteProtect(const bool& _deleteProtect)
{
    m_deleteProtect = _deleteProtect;
    m_deleteProtectHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayRequest::DeleteProtectHasBeenSet() const
{
    return m_deleteProtectHasBeenSet;
}


