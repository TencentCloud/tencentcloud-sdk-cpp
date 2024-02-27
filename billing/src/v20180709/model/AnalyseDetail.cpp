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

#include <tencentcloud/billing/v20180709/model/AnalyseDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

AnalyseDetail::AnalyseDetail() :
    m_nameHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_timeDetailHasBeenSet(false)
{
}

CoreInternalOutcome AnalyseDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseDetail.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("TimeDetail") && !value["TimeDetail"].IsNull())
    {
        if (!value["TimeDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AnalyseDetail.TimeDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["TimeDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnalyseTimeDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_timeDetail.push_back(item);
        }
        m_timeDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnalyseDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_total.c_str(), allocator).Move(), allocator);
    }

    if (m_timeDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_timeDetail.begin(); itr != m_timeDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AnalyseDetail::GetName() const
{
    return m_name;
}

void AnalyseDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AnalyseDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AnalyseDetail::GetTotal() const
{
    return m_total;
}

void AnalyseDetail::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool AnalyseDetail::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<AnalyseTimeDetail> AnalyseDetail::GetTimeDetail() const
{
    return m_timeDetail;
}

void AnalyseDetail::SetTimeDetail(const vector<AnalyseTimeDetail>& _timeDetail)
{
    m_timeDetail = _timeDetail;
    m_timeDetailHasBeenSet = true;
}

bool AnalyseDetail::TimeDetailHasBeenSet() const
{
    return m_timeDetailHasBeenSet;
}

