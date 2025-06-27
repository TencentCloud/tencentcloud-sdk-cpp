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

#include <tencentcloud/ctem/v20231128/model/DescribeConfigsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DescribeConfigsResponse::DescribeConfigsResponse() :
    m_totalHasBeenSet(false),
    m_listHasBeenSet(false),
    m_allConfigNumHasBeenSet(false),
    m_highRiskConfigNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeConfigsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("List") && !rsp["List"].IsNull())
    {
        if (!rsp["List"].IsArray())
            return CoreInternalOutcome(Core::Error("response `List` is not array type"));

        const rapidjson::Value &tmpValue = rsp["List"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DisplayConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_list.push_back(item);
        }
        m_listHasBeenSet = true;
    }

    if (rsp.HasMember("AllConfigNum") && !rsp["AllConfigNum"].IsNull())
    {
        if (!rsp["AllConfigNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AllConfigNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allConfigNum = rsp["AllConfigNum"].GetInt64();
        m_allConfigNumHasBeenSet = true;
    }

    if (rsp.HasMember("HighRiskConfigNum") && !rsp["HighRiskConfigNum"].IsNull())
    {
        if (!rsp["HighRiskConfigNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HighRiskConfigNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_highRiskConfigNum = rsp["HighRiskConfigNum"].GetInt64();
        m_highRiskConfigNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeConfigsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_listHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "List";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_list.begin(); itr != m_list.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_allConfigNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllConfigNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allConfigNum, allocator);
    }

    if (m_highRiskConfigNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRiskConfigNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highRiskConfigNum, allocator);
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


int64_t DescribeConfigsResponse::GetTotal() const
{
    return m_total;
}

bool DescribeConfigsResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<DisplayConfig> DescribeConfigsResponse::GetList() const
{
    return m_list;
}

bool DescribeConfigsResponse::ListHasBeenSet() const
{
    return m_listHasBeenSet;
}

int64_t DescribeConfigsResponse::GetAllConfigNum() const
{
    return m_allConfigNum;
}

bool DescribeConfigsResponse::AllConfigNumHasBeenSet() const
{
    return m_allConfigNumHasBeenSet;
}

int64_t DescribeConfigsResponse::GetHighRiskConfigNum() const
{
    return m_highRiskConfigNum;
}

bool DescribeConfigsResponse::HighRiskConfigNumHasBeenSet() const
{
    return m_highRiskConfigNumHasBeenSet;
}


