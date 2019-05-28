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

#include <tencentcloud/cdb/v20170320/model/DescribeTimeWindowResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

DescribeTimeWindowResponse::DescribeTimeWindowResponse() :
    m_mondayHasBeenSet(false),
    m_tuesdayHasBeenSet(false),
    m_wednesdayHasBeenSet(false),
    m_thursdayHasBeenSet(false),
    m_fridayHasBeenSet(false),
    m_saturdayHasBeenSet(false),
    m_sundayHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTimeWindowResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Monday") && !rsp["Monday"].IsNull())
    {
        if (!rsp["Monday"].IsArray())
            return CoreInternalOutcome(Error("response `Monday` is not array type"));

        const Value &tmpValue = rsp["Monday"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_monday.push_back((*itr).GetString());
        }
        m_mondayHasBeenSet = true;
    }

    if (rsp.HasMember("Tuesday") && !rsp["Tuesday"].IsNull())
    {
        if (!rsp["Tuesday"].IsArray())
            return CoreInternalOutcome(Error("response `Tuesday` is not array type"));

        const Value &tmpValue = rsp["Tuesday"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tuesday.push_back((*itr).GetString());
        }
        m_tuesdayHasBeenSet = true;
    }

    if (rsp.HasMember("Wednesday") && !rsp["Wednesday"].IsNull())
    {
        if (!rsp["Wednesday"].IsArray())
            return CoreInternalOutcome(Error("response `Wednesday` is not array type"));

        const Value &tmpValue = rsp["Wednesday"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_wednesday.push_back((*itr).GetString());
        }
        m_wednesdayHasBeenSet = true;
    }

    if (rsp.HasMember("Thursday") && !rsp["Thursday"].IsNull())
    {
        if (!rsp["Thursday"].IsArray())
            return CoreInternalOutcome(Error("response `Thursday` is not array type"));

        const Value &tmpValue = rsp["Thursday"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_thursday.push_back((*itr).GetString());
        }
        m_thursdayHasBeenSet = true;
    }

    if (rsp.HasMember("Friday") && !rsp["Friday"].IsNull())
    {
        if (!rsp["Friday"].IsArray())
            return CoreInternalOutcome(Error("response `Friday` is not array type"));

        const Value &tmpValue = rsp["Friday"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_friday.push_back((*itr).GetString());
        }
        m_fridayHasBeenSet = true;
    }

    if (rsp.HasMember("Saturday") && !rsp["Saturday"].IsNull())
    {
        if (!rsp["Saturday"].IsArray())
            return CoreInternalOutcome(Error("response `Saturday` is not array type"));

        const Value &tmpValue = rsp["Saturday"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_saturday.push_back((*itr).GetString());
        }
        m_saturdayHasBeenSet = true;
    }

    if (rsp.HasMember("Sunday") && !rsp["Sunday"].IsNull())
    {
        if (!rsp["Sunday"].IsArray())
            return CoreInternalOutcome(Error("response `Sunday` is not array type"));

        const Value &tmpValue = rsp["Sunday"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sunday.push_back((*itr).GetString());
        }
        m_sundayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<string> DescribeTimeWindowResponse::GetMonday() const
{
    return m_monday;
}

bool DescribeTimeWindowResponse::MondayHasBeenSet() const
{
    return m_mondayHasBeenSet;
}

vector<string> DescribeTimeWindowResponse::GetTuesday() const
{
    return m_tuesday;
}

bool DescribeTimeWindowResponse::TuesdayHasBeenSet() const
{
    return m_tuesdayHasBeenSet;
}

vector<string> DescribeTimeWindowResponse::GetWednesday() const
{
    return m_wednesday;
}

bool DescribeTimeWindowResponse::WednesdayHasBeenSet() const
{
    return m_wednesdayHasBeenSet;
}

vector<string> DescribeTimeWindowResponse::GetThursday() const
{
    return m_thursday;
}

bool DescribeTimeWindowResponse::ThursdayHasBeenSet() const
{
    return m_thursdayHasBeenSet;
}

vector<string> DescribeTimeWindowResponse::GetFriday() const
{
    return m_friday;
}

bool DescribeTimeWindowResponse::FridayHasBeenSet() const
{
    return m_fridayHasBeenSet;
}

vector<string> DescribeTimeWindowResponse::GetSaturday() const
{
    return m_saturday;
}

bool DescribeTimeWindowResponse::SaturdayHasBeenSet() const
{
    return m_saturdayHasBeenSet;
}

vector<string> DescribeTimeWindowResponse::GetSunday() const
{
    return m_sunday;
}

bool DescribeTimeWindowResponse::SundayHasBeenSet() const
{
    return m_sundayHasBeenSet;
}


