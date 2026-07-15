/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/es/v20180416/model/DescribeUpgradeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DescribeUpgradeResponse::DescribeUpgradeResponse() :
    m_esVersionsHasBeenSet(false),
    m_esLicensesHasBeenSet(false),
    m_esSubProductsHasBeenSet(false),
    m_esRealLicensesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUpgradeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EsVersions") && !rsp["EsVersions"].IsNull())
    {
        if (!rsp["EsVersions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EsVersions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["EsVersions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_esVersions.push_back((*itr).GetString());
        }
        m_esVersionsHasBeenSet = true;
    }

    if (rsp.HasMember("EsLicenses") && !rsp["EsLicenses"].IsNull())
    {
        if (!rsp["EsLicenses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EsLicenses` is not array type"));

        const rapidjson::Value &tmpValue = rsp["EsLicenses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_esLicenses.push_back((*itr).GetString());
        }
        m_esLicensesHasBeenSet = true;
    }

    if (rsp.HasMember("EsSubProducts") && !rsp["EsSubProducts"].IsNull())
    {
        if (!rsp["EsSubProducts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EsSubProducts` is not array type"));

        const rapidjson::Value &tmpValue = rsp["EsSubProducts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_esSubProducts.push_back((*itr).GetString());
        }
        m_esSubProductsHasBeenSet = true;
    }

    if (rsp.HasMember("EsRealLicenses") && !rsp["EsRealLicenses"].IsNull())
    {
        if (!rsp["EsRealLicenses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EsRealLicenses` is not array type"));

        const rapidjson::Value &tmpValue = rsp["EsRealLicenses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_esRealLicenses.push_back((*itr).GetString());
        }
        m_esRealLicensesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUpgradeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_esVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsVersions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_esVersions.begin(); itr != m_esVersions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_esLicensesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsLicenses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_esLicenses.begin(); itr != m_esLicenses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_esSubProductsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsSubProducts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_esSubProducts.begin(); itr != m_esSubProducts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_esRealLicensesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsRealLicenses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_esRealLicenses.begin(); itr != m_esRealLicenses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


vector<string> DescribeUpgradeResponse::GetEsVersions() const
{
    return m_esVersions;
}

bool DescribeUpgradeResponse::EsVersionsHasBeenSet() const
{
    return m_esVersionsHasBeenSet;
}

vector<string> DescribeUpgradeResponse::GetEsLicenses() const
{
    return m_esLicenses;
}

bool DescribeUpgradeResponse::EsLicensesHasBeenSet() const
{
    return m_esLicensesHasBeenSet;
}

vector<string> DescribeUpgradeResponse::GetEsSubProducts() const
{
    return m_esSubProducts;
}

bool DescribeUpgradeResponse::EsSubProductsHasBeenSet() const
{
    return m_esSubProductsHasBeenSet;
}

vector<string> DescribeUpgradeResponse::GetEsRealLicenses() const
{
    return m_esRealLicenses;
}

bool DescribeUpgradeResponse::EsRealLicensesHasBeenSet() const
{
    return m_esRealLicensesHasBeenSet;
}


