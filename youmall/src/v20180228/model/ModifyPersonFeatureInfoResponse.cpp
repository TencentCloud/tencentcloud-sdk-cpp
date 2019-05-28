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

#include <tencentcloud/youmall/v20180228/model/ModifyPersonFeatureInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace rapidjson;
using namespace std;

ModifyPersonFeatureInfoResponse::ModifyPersonFeatureInfoResponse() :
    m_companyIdHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_personIdBindHasBeenSet(false),
    m_personTypeHasBeenSet(false),
    m_similarPersonIdsHasBeenSet(false)
{
}

CoreInternalOutcome ModifyPersonFeatureInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CompanyId") && !rsp["CompanyId"].IsNull())
    {
        if (!rsp["CompanyId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CompanyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyId = string(rsp["CompanyId"].GetString());
        m_companyIdHasBeenSet = true;
    }

    if (rsp.HasMember("ShopId") && !rsp["ShopId"].IsNull())
    {
        if (!rsp["ShopId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ShopId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shopId = rsp["ShopId"].GetInt64();
        m_shopIdHasBeenSet = true;
    }

    if (rsp.HasMember("PersonId") && !rsp["PersonId"].IsNull())
    {
        if (!rsp["PersonId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PersonId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_personId = rsp["PersonId"].GetInt64();
        m_personIdHasBeenSet = true;
    }

    if (rsp.HasMember("PersonIdBind") && !rsp["PersonIdBind"].IsNull())
    {
        if (!rsp["PersonIdBind"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PersonIdBind` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_personIdBind = rsp["PersonIdBind"].GetInt64();
        m_personIdBindHasBeenSet = true;
    }

    if (rsp.HasMember("PersonType") && !rsp["PersonType"].IsNull())
    {
        if (!rsp["PersonType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PersonType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_personType = rsp["PersonType"].GetInt64();
        m_personTypeHasBeenSet = true;
    }

    if (rsp.HasMember("SimilarPersonIds") && !rsp["SimilarPersonIds"].IsNull())
    {
        if (!rsp["SimilarPersonIds"].IsArray())
            return CoreInternalOutcome(Error("response `SimilarPersonIds` is not array type"));

        const Value &tmpValue = rsp["SimilarPersonIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_similarPersonIds.push_back((*itr).GetInt64());
        }
        m_similarPersonIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string ModifyPersonFeatureInfoResponse::GetCompanyId() const
{
    return m_companyId;
}

bool ModifyPersonFeatureInfoResponse::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

int64_t ModifyPersonFeatureInfoResponse::GetShopId() const
{
    return m_shopId;
}

bool ModifyPersonFeatureInfoResponse::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

int64_t ModifyPersonFeatureInfoResponse::GetPersonId() const
{
    return m_personId;
}

bool ModifyPersonFeatureInfoResponse::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

int64_t ModifyPersonFeatureInfoResponse::GetPersonIdBind() const
{
    return m_personIdBind;
}

bool ModifyPersonFeatureInfoResponse::PersonIdBindHasBeenSet() const
{
    return m_personIdBindHasBeenSet;
}

int64_t ModifyPersonFeatureInfoResponse::GetPersonType() const
{
    return m_personType;
}

bool ModifyPersonFeatureInfoResponse::PersonTypeHasBeenSet() const
{
    return m_personTypeHasBeenSet;
}

vector<int64_t> ModifyPersonFeatureInfoResponse::GetSimilarPersonIds() const
{
    return m_similarPersonIds;
}

bool ModifyPersonFeatureInfoResponse::SimilarPersonIdsHasBeenSet() const
{
    return m_similarPersonIdsHasBeenSet;
}


