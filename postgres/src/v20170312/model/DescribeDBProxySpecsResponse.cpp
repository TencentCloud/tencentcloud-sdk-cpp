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

#include <tencentcloud/postgres/v20170312/model/DescribeDBProxySpecsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

DescribeDBProxySpecsResponse::DescribeDBProxySpecsResponse() :
    m_specSetHasBeenSet(false),
    m_supportProxyHasBeenSet(false),
    m_availableZonesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBProxySpecsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SpecSet") && !rsp["SpecSet"].IsNull())
    {
        if (!rsp["SpecSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SpecSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SpecSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProxySpecItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_specSet.push_back(item);
        }
        m_specSetHasBeenSet = true;
    }

    if (rsp.HasMember("SupportProxy") && !rsp["SupportProxy"].IsNull())
    {
        if (!rsp["SupportProxy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SupportProxy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportProxy = rsp["SupportProxy"].GetBool();
        m_supportProxyHasBeenSet = true;
    }

    if (rsp.HasMember("AvailableZones") && !rsp["AvailableZones"].IsNull())
    {
        if (!rsp["AvailableZones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AvailableZones` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AvailableZones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_availableZones.push_back((*itr).GetString());
        }
        m_availableZonesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBProxySpecsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_specSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_specSet.begin(); itr != m_specSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_supportProxyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportProxy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportProxy, allocator);
    }

    if (m_availableZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableZones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_availableZones.begin(); itr != m_availableZones.end(); ++itr)
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


vector<ProxySpecItem> DescribeDBProxySpecsResponse::GetSpecSet() const
{
    return m_specSet;
}

bool DescribeDBProxySpecsResponse::SpecSetHasBeenSet() const
{
    return m_specSetHasBeenSet;
}

bool DescribeDBProxySpecsResponse::GetSupportProxy() const
{
    return m_supportProxy;
}

bool DescribeDBProxySpecsResponse::SupportProxyHasBeenSet() const
{
    return m_supportProxyHasBeenSet;
}

vector<string> DescribeDBProxySpecsResponse::GetAvailableZones() const
{
    return m_availableZones;
}

bool DescribeDBProxySpecsResponse::AvailableZonesHasBeenSet() const
{
    return m_availableZonesHasBeenSet;
}


