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

#include <tencentcloud/cdb/v20170320/model/DescribeParamTemplateInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeParamTemplateInfoResponse::DescribeParamTemplateInfoResponse() :
    m_templateIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_templateTypeHasBeenSet(false),
    m_engineTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeParamTemplateInfoResponse::Deserialize(const string &payload)
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
        if (!rsp["TemplateId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = rsp["TemplateId"].GetInt64();
        m_templateIdHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("EngineVersion") && !rsp["EngineVersion"].IsNull())
    {
        if (!rsp["EngineVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EngineVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineVersion = string(rsp["EngineVersion"].GetString());
        m_engineVersionHasBeenSet = true;
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

    if (rsp.HasMember("Items") && !rsp["Items"].IsNull())
    {
        if (!rsp["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Items` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParameterDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_items.push_back(item);
        }
        m_itemsHasBeenSet = true;
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

    if (rsp.HasMember("TemplateType") && !rsp["TemplateType"].IsNull())
    {
        if (!rsp["TemplateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateType = string(rsp["TemplateType"].GetString());
        m_templateTypeHasBeenSet = true;
    }

    if (rsp.HasMember("EngineType") && !rsp["EngineType"].IsNull())
    {
        if (!rsp["EngineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EngineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineType = string(rsp["EngineType"].GetString());
        m_engineTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeParamTemplateInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_engineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_templateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateType.c_str(), allocator).Move(), allocator);
    }

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
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


int64_t DescribeParamTemplateInfoResponse::GetTemplateId() const
{
    return m_templateId;
}

bool DescribeParamTemplateInfoResponse::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string DescribeParamTemplateInfoResponse::GetName() const
{
    return m_name;
}

bool DescribeParamTemplateInfoResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeParamTemplateInfoResponse::GetEngineVersion() const
{
    return m_engineVersion;
}

bool DescribeParamTemplateInfoResponse::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

int64_t DescribeParamTemplateInfoResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeParamTemplateInfoResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<ParameterDetail> DescribeParamTemplateInfoResponse::GetItems() const
{
    return m_items;
}

bool DescribeParamTemplateInfoResponse::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

string DescribeParamTemplateInfoResponse::GetDescription() const
{
    return m_description;
}

bool DescribeParamTemplateInfoResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeParamTemplateInfoResponse::GetTemplateType() const
{
    return m_templateType;
}

bool DescribeParamTemplateInfoResponse::TemplateTypeHasBeenSet() const
{
    return m_templateTypeHasBeenSet;
}

string DescribeParamTemplateInfoResponse::GetEngineType() const
{
    return m_engineType;
}

bool DescribeParamTemplateInfoResponse::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}


