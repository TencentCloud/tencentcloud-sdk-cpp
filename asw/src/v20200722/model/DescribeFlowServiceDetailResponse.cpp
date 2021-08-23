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

#include <tencentcloud/asw/v20200722/model/DescribeFlowServiceDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asw::V20200722::Model;
using namespace std;

DescribeFlowServiceDetailResponse::DescribeFlowServiceDetailResponse() :
    m_flowServiceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_roleResourceHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_flowServiceChineseNameHasBeenSet(false),
    m_enableCLSHasBeenSet(false),
    m_cLSUrlHasBeenSet(false),
    m_flowInputHasBeenSet(false)
{
}

CoreInternalOutcome DescribeFlowServiceDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("FlowServiceName") && !rsp["FlowServiceName"].IsNull())
    {
        if (!rsp["FlowServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowServiceName = string(rsp["FlowServiceName"].GetString());
        m_flowServiceNameHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Definition") && !rsp["Definition"].IsNull())
    {
        if (!rsp["Definition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Definition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_definition = string(rsp["Definition"].GetString());
        m_definitionHasBeenSet = true;
    }

    if (rsp.HasMember("RoleResource") && !rsp["RoleResource"].IsNull())
    {
        if (!rsp["RoleResource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleResource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleResource = string(rsp["RoleResource"].GetString());
        m_roleResourceHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("CreateDate") && !rsp["CreateDate"].IsNull())
    {
        if (!rsp["CreateDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createDate = string(rsp["CreateDate"].GetString());
        m_createDateHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("FlowServiceChineseName") && !rsp["FlowServiceChineseName"].IsNull())
    {
        if (!rsp["FlowServiceChineseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowServiceChineseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowServiceChineseName = string(rsp["FlowServiceChineseName"].GetString());
        m_flowServiceChineseNameHasBeenSet = true;
    }

    if (rsp.HasMember("EnableCLS") && !rsp["EnableCLS"].IsNull())
    {
        if (!rsp["EnableCLS"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnableCLS` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableCLS = rsp["EnableCLS"].GetBool();
        m_enableCLSHasBeenSet = true;
    }

    if (rsp.HasMember("CLSUrl") && !rsp["CLSUrl"].IsNull())
    {
        if (!rsp["CLSUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLSUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cLSUrl = string(rsp["CLSUrl"].GetString());
        m_cLSUrlHasBeenSet = true;
    }

    if (rsp.HasMember("FlowInput") && !rsp["FlowInput"].IsNull())
    {
        if (!rsp["FlowInput"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowInput` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowInput = string(rsp["FlowInput"].GetString());
        m_flowInputHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeFlowServiceDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_flowServiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowServiceName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_definition.c_str(), allocator).Move(), allocator);
    }

    if (m_roleResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleResource.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_createDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createDate.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_flowServiceChineseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowServiceChineseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowServiceChineseName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableCLSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCLS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableCLS, allocator);
    }

    if (m_cLSUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLSUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cLSUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_flowInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowInput.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeFlowServiceDetailResponse::GetFlowServiceName() const
{
    return m_flowServiceName;
}

bool DescribeFlowServiceDetailResponse::FlowServiceNameHasBeenSet() const
{
    return m_flowServiceNameHasBeenSet;
}

string DescribeFlowServiceDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeFlowServiceDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeFlowServiceDetailResponse::GetDefinition() const
{
    return m_definition;
}

bool DescribeFlowServiceDetailResponse::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string DescribeFlowServiceDetailResponse::GetRoleResource() const
{
    return m_roleResource;
}

bool DescribeFlowServiceDetailResponse::RoleResourceHasBeenSet() const
{
    return m_roleResourceHasBeenSet;
}

string DescribeFlowServiceDetailResponse::GetType() const
{
    return m_type;
}

bool DescribeFlowServiceDetailResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeFlowServiceDetailResponse::GetCreateDate() const
{
    return m_createDate;
}

bool DescribeFlowServiceDetailResponse::CreateDateHasBeenSet() const
{
    return m_createDateHasBeenSet;
}

string DescribeFlowServiceDetailResponse::GetDescription() const
{
    return m_description;
}

bool DescribeFlowServiceDetailResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeFlowServiceDetailResponse::GetFlowServiceChineseName() const
{
    return m_flowServiceChineseName;
}

bool DescribeFlowServiceDetailResponse::FlowServiceChineseNameHasBeenSet() const
{
    return m_flowServiceChineseNameHasBeenSet;
}

bool DescribeFlowServiceDetailResponse::GetEnableCLS() const
{
    return m_enableCLS;
}

bool DescribeFlowServiceDetailResponse::EnableCLSHasBeenSet() const
{
    return m_enableCLSHasBeenSet;
}

string DescribeFlowServiceDetailResponse::GetCLSUrl() const
{
    return m_cLSUrl;
}

bool DescribeFlowServiceDetailResponse::CLSUrlHasBeenSet() const
{
    return m_cLSUrlHasBeenSet;
}

string DescribeFlowServiceDetailResponse::GetFlowInput() const
{
    return m_flowInput;
}

bool DescribeFlowServiceDetailResponse::FlowInputHasBeenSet() const
{
    return m_flowInputHasBeenSet;
}


