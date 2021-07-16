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

#include <tencentcloud/redis/v20180412/model/DescribeParamTemplateInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

DescribeParamTemplateInfoResponse::DescribeParamTemplateInfoResponse() :
    m_totalCountHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_productTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeParamTemplateInfoResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("TemplateId") && !rsp["TemplateId"].IsNull())
    {
        if (!rsp["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(rsp["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("ProductType") && !rsp["ProductType"].IsNull())
    {
        if (!rsp["ProductType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ProductType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_productType = rsp["ProductType"].GetUint64();
        m_productTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("Items") && !rsp["Items"].IsNull())
    {
        if (!rsp["Items"].IsArray())
            return CoreInternalOutcome(Error("response `Items` is not array type"));

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


    return CoreInternalOutcome(true);
}


int64_t DescribeParamTemplateInfoResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeParamTemplateInfoResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

string DescribeParamTemplateInfoResponse::GetTemplateId() const
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

uint64_t DescribeParamTemplateInfoResponse::GetProductType() const
{
    return m_productType;
}

bool DescribeParamTemplateInfoResponse::ProductTypeHasBeenSet() const
{
    return m_productTypeHasBeenSet;
}

string DescribeParamTemplateInfoResponse::GetDescription() const
{
    return m_description;
}

bool DescribeParamTemplateInfoResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<ParameterDetail> DescribeParamTemplateInfoResponse::GetItems() const
{
    return m_items;
}

bool DescribeParamTemplateInfoResponse::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}


