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

#include <tencentcloud/yunjing/v20180228/model/DescribeSecurityTrendsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace rapidjson;
using namespace std;

DescribeSecurityTrendsResponse::DescribeSecurityTrendsResponse() :
    m_malwaresHasBeenSet(false),
    m_nonLocalLoginPlacesHasBeenSet(false),
    m_bruteAttacksHasBeenSet(false),
    m_vulsHasBeenSet(false),
    m_baseLinesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSecurityTrendsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Malwares") && !rsp["Malwares"].IsNull())
    {
        if (!rsp["Malwares"].IsArray())
            return CoreInternalOutcome(Error("response `Malwares` is not array type"));

        const Value &tmpValue = rsp["Malwares"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityTrend item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_malwares.push_back(item);
        }
        m_malwaresHasBeenSet = true;
    }

    if (rsp.HasMember("NonLocalLoginPlaces") && !rsp["NonLocalLoginPlaces"].IsNull())
    {
        if (!rsp["NonLocalLoginPlaces"].IsArray())
            return CoreInternalOutcome(Error("response `NonLocalLoginPlaces` is not array type"));

        const Value &tmpValue = rsp["NonLocalLoginPlaces"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityTrend item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nonLocalLoginPlaces.push_back(item);
        }
        m_nonLocalLoginPlacesHasBeenSet = true;
    }

    if (rsp.HasMember("BruteAttacks") && !rsp["BruteAttacks"].IsNull())
    {
        if (!rsp["BruteAttacks"].IsArray())
            return CoreInternalOutcome(Error("response `BruteAttacks` is not array type"));

        const Value &tmpValue = rsp["BruteAttacks"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityTrend item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bruteAttacks.push_back(item);
        }
        m_bruteAttacksHasBeenSet = true;
    }

    if (rsp.HasMember("Vuls") && !rsp["Vuls"].IsNull())
    {
        if (!rsp["Vuls"].IsArray())
            return CoreInternalOutcome(Error("response `Vuls` is not array type"));

        const Value &tmpValue = rsp["Vuls"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityTrend item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vuls.push_back(item);
        }
        m_vulsHasBeenSet = true;
    }

    if (rsp.HasMember("BaseLines") && !rsp["BaseLines"].IsNull())
    {
        if (!rsp["BaseLines"].IsArray())
            return CoreInternalOutcome(Error("response `BaseLines` is not array type"));

        const Value &tmpValue = rsp["BaseLines"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityTrend item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_baseLines.push_back(item);
        }
        m_baseLinesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<SecurityTrend> DescribeSecurityTrendsResponse::GetMalwares() const
{
    return m_malwares;
}

bool DescribeSecurityTrendsResponse::MalwaresHasBeenSet() const
{
    return m_malwaresHasBeenSet;
}

vector<SecurityTrend> DescribeSecurityTrendsResponse::GetNonLocalLoginPlaces() const
{
    return m_nonLocalLoginPlaces;
}

bool DescribeSecurityTrendsResponse::NonLocalLoginPlacesHasBeenSet() const
{
    return m_nonLocalLoginPlacesHasBeenSet;
}

vector<SecurityTrend> DescribeSecurityTrendsResponse::GetBruteAttacks() const
{
    return m_bruteAttacks;
}

bool DescribeSecurityTrendsResponse::BruteAttacksHasBeenSet() const
{
    return m_bruteAttacksHasBeenSet;
}

vector<SecurityTrend> DescribeSecurityTrendsResponse::GetVuls() const
{
    return m_vuls;
}

bool DescribeSecurityTrendsResponse::VulsHasBeenSet() const
{
    return m_vulsHasBeenSet;
}

vector<SecurityTrend> DescribeSecurityTrendsResponse::GetBaseLines() const
{
    return m_baseLines;
}

bool DescribeSecurityTrendsResponse::BaseLinesHasBeenSet() const
{
    return m_baseLinesHasBeenSet;
}


