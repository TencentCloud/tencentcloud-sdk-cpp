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

#include <tencentcloud/cynosdb/v20190107/model/DescribeParamTemplateDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeParamTemplateDetailResponse::DescribeParamTemplateDetailResponse() :
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_templateDescriptionHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_dbModeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeParamTemplateDetailResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("TemplateName") && !rsp["TemplateName"].IsNull())
    {
        if (!rsp["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(rsp["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
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
            ParamDetail item;
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

    if (rsp.HasMember("DbMode") && !rsp["DbMode"].IsNull())
    {
        if (!rsp["DbMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbMode = string(rsp["DbMode"].GetString());
        m_dbModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeParamTemplateDetailResponse::ToJsonString() const
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

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_templateDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateDescription.c_str(), allocator).Move(), allocator);
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

    if (m_dbModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbMode.c_str(), allocator).Move(), allocator);
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


int64_t DescribeParamTemplateDetailResponse::GetTemplateId() const
{
    return m_templateId;
}

bool DescribeParamTemplateDetailResponse::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string DescribeParamTemplateDetailResponse::GetTemplateName() const
{
    return m_templateName;
}

bool DescribeParamTemplateDetailResponse::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string DescribeParamTemplateDetailResponse::GetTemplateDescription() const
{
    return m_templateDescription;
}

bool DescribeParamTemplateDetailResponse::TemplateDescriptionHasBeenSet() const
{
    return m_templateDescriptionHasBeenSet;
}

string DescribeParamTemplateDetailResponse::GetEngineVersion() const
{
    return m_engineVersion;
}

bool DescribeParamTemplateDetailResponse::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

int64_t DescribeParamTemplateDetailResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeParamTemplateDetailResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<ParamDetail> DescribeParamTemplateDetailResponse::GetItems() const
{
    return m_items;
}

bool DescribeParamTemplateDetailResponse::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

string DescribeParamTemplateDetailResponse::GetDbMode() const
{
    return m_dbMode;
}

bool DescribeParamTemplateDetailResponse::DbModeHasBeenSet() const
{
    return m_dbModeHasBeenSet;
}


