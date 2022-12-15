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

#include <tencentcloud/postgres/v20170312/model/DescribeParameterTemplateAttributesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

DescribeParameterTemplateAttributesResponse::DescribeParameterTemplateAttributesResponse() :
    m_templateIdHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_paramInfoSetHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_dBMajorVersionHasBeenSet(false),
    m_dBEngineHasBeenSet(false),
    m_templateDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeParameterTemplateAttributesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TemplateId") && !rsp["TemplateId"].IsNull())
    {
        if (!rsp["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(rsp["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("ParamInfoSet") && !rsp["ParamInfoSet"].IsNull())
    {
        if (!rsp["ParamInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ParamInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ParamInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParamInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_paramInfoSet.push_back(item);
        }
        m_paramInfoSetHasBeenSet = true;
    }

    if (rsp.HasMember("TemplateName") && !rsp["TemplateName"].IsNull())
    {
        if (!rsp["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(rsp["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (rsp.HasMember("DBMajorVersion") && !rsp["DBMajorVersion"].IsNull())
    {
        if (!rsp["DBMajorVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBMajorVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBMajorVersion = string(rsp["DBMajorVersion"].GetString());
        m_dBMajorVersionHasBeenSet = true;
    }

    if (rsp.HasMember("DBEngine") && !rsp["DBEngine"].IsNull())
    {
        if (!rsp["DBEngine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBEngine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBEngine = string(rsp["DBEngine"].GetString());
        m_dBEngineHasBeenSet = true;
    }

    if (rsp.HasMember("TemplateDescription") && !rsp["TemplateDescription"].IsNull())
    {
        if (!rsp["TemplateDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateDescription = string(rsp["TemplateDescription"].GetString());
        m_templateDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeParameterTemplateAttributesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_paramInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paramInfoSet.begin(); itr != m_paramInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_dBMajorVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBMajorVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBMajorVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_dBEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBEngine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBEngine.c_str(), allocator).Move(), allocator);
    }

    if (m_templateDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateDescription.c_str(), allocator).Move(), allocator);
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


string DescribeParameterTemplateAttributesResponse::GetTemplateId() const
{
    return m_templateId;
}

bool DescribeParameterTemplateAttributesResponse::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

int64_t DescribeParameterTemplateAttributesResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeParameterTemplateAttributesResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<ParamInfo> DescribeParameterTemplateAttributesResponse::GetParamInfoSet() const
{
    return m_paramInfoSet;
}

bool DescribeParameterTemplateAttributesResponse::ParamInfoSetHasBeenSet() const
{
    return m_paramInfoSetHasBeenSet;
}

string DescribeParameterTemplateAttributesResponse::GetTemplateName() const
{
    return m_templateName;
}

bool DescribeParameterTemplateAttributesResponse::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string DescribeParameterTemplateAttributesResponse::GetDBMajorVersion() const
{
    return m_dBMajorVersion;
}

bool DescribeParameterTemplateAttributesResponse::DBMajorVersionHasBeenSet() const
{
    return m_dBMajorVersionHasBeenSet;
}

string DescribeParameterTemplateAttributesResponse::GetDBEngine() const
{
    return m_dBEngine;
}

bool DescribeParameterTemplateAttributesResponse::DBEngineHasBeenSet() const
{
    return m_dBEngineHasBeenSet;
}

string DescribeParameterTemplateAttributesResponse::GetTemplateDescription() const
{
    return m_templateDescription;
}

bool DescribeParameterTemplateAttributesResponse::TemplateDescriptionHasBeenSet() const
{
    return m_templateDescriptionHasBeenSet;
}


