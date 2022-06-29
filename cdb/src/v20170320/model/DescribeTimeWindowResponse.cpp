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
using namespace std;

DescribeTimeWindowResponse::DescribeTimeWindowResponse() :
    m_mondayHasBeenSet(false),
    m_tuesdayHasBeenSet(false),
    m_wednesdayHasBeenSet(false),
    m_thursdayHasBeenSet(false),
    m_fridayHasBeenSet(false),
    m_saturdayHasBeenSet(false),
    m_sundayHasBeenSet(false),
    m_maxDelayTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTimeWindowResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Monday") && !rsp["Monday"].IsNull())
    {
        if (!rsp["Monday"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Monday` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Monday"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_monday.push_back((*itr).GetString());
        }
        m_mondayHasBeenSet = true;
    }

    if (rsp.HasMember("Tuesday") && !rsp["Tuesday"].IsNull())
    {
        if (!rsp["Tuesday"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tuesday` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tuesday"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tuesday.push_back((*itr).GetString());
        }
        m_tuesdayHasBeenSet = true;
    }

    if (rsp.HasMember("Wednesday") && !rsp["Wednesday"].IsNull())
    {
        if (!rsp["Wednesday"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Wednesday` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Wednesday"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_wednesday.push_back((*itr).GetString());
        }
        m_wednesdayHasBeenSet = true;
    }

    if (rsp.HasMember("Thursday") && !rsp["Thursday"].IsNull())
    {
        if (!rsp["Thursday"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Thursday` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Thursday"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_thursday.push_back((*itr).GetString());
        }
        m_thursdayHasBeenSet = true;
    }

    if (rsp.HasMember("Friday") && !rsp["Friday"].IsNull())
    {
        if (!rsp["Friday"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Friday` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Friday"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_friday.push_back((*itr).GetString());
        }
        m_fridayHasBeenSet = true;
    }

    if (rsp.HasMember("Saturday") && !rsp["Saturday"].IsNull())
    {
        if (!rsp["Saturday"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Saturday` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Saturday"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_saturday.push_back((*itr).GetString());
        }
        m_saturdayHasBeenSet = true;
    }

    if (rsp.HasMember("Sunday") && !rsp["Sunday"].IsNull())
    {
        if (!rsp["Sunday"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Sunday` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Sunday"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sunday.push_back((*itr).GetString());
        }
        m_sundayHasBeenSet = true;
    }

    if (rsp.HasMember("MaxDelayTime") && !rsp["MaxDelayTime"].IsNull())
    {
        if (!rsp["MaxDelayTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxDelayTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDelayTime = rsp["MaxDelayTime"].GetUint64();
        m_maxDelayTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTimeWindowResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_mondayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Monday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_monday.begin(); itr != m_monday.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tuesdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tuesday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tuesday.begin(); itr != m_tuesday.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_wednesdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Wednesday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_wednesday.begin(); itr != m_wednesday.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_thursdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Thursday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_thursday.begin(); itr != m_thursday.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fridayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Friday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_friday.begin(); itr != m_friday.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_saturdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Saturday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_saturday.begin(); itr != m_saturday.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sundayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sunday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sunday.begin(); itr != m_sunday.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maxDelayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDelayTime, allocator);
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

uint64_t DescribeTimeWindowResponse::GetMaxDelayTime() const
{
    return m_maxDelayTime;
}

bool DescribeTimeWindowResponse::MaxDelayTimeHasBeenSet() const
{
    return m_maxDelayTimeHasBeenSet;
}


