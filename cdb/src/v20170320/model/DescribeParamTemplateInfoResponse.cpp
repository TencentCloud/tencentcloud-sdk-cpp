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
using namespace rapidjson;
using namespace std;

DescribeParamTemplateInfoResponse::DescribeParamTemplateInfoResponse() :
    m_templateIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeParamTemplateInfoResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
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


    if (rsp.HasMember("TemplateId") && !rsp["TemplateId"].IsNull())
    {
        if (!rsp["TemplateId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TemplateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = rsp["TemplateId"].GetInt64();
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

    if (rsp.HasMember("EngineVersion") && !rsp["EngineVersion"].IsNull())
    {
        if (!rsp["EngineVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `EngineVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineVersion = string(rsp["EngineVersion"].GetString());
        m_engineVersionHasBeenSet = true;
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

    if (rsp.HasMember("Items") && !rsp["Items"].IsNull())
    {
        if (!rsp["Items"].IsArray())
            return CoreInternalOutcome(Error("response `Items` is not array type"));

        const Value &tmpValue = rsp["Items"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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


