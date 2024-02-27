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

#include <tencentcloud/billing/v20180709/model/AnalyseHeaderDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

AnalyseHeaderDetail::AnalyseHeaderDetail() :
    m_headDetailHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_totalHasBeenSet(false)
{
}

CoreInternalOutcome AnalyseHeaderDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HeadDetail") && !value["HeadDetail"].IsNull())
    {
        if (!value["HeadDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AnalyseHeaderDetail.HeadDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["HeadDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnalyseHeaderTimeDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headDetail.push_back(item);
        }
        m_headDetailHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseHeaderDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseHeaderDetail.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnalyseHeaderDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_headDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headDetail.begin(); itr != m_headDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

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

}


vector<AnalyseHeaderTimeDetail> AnalyseHeaderDetail::GetHeadDetail() const
{
    return m_headDetail;
}

void AnalyseHeaderDetail::SetHeadDetail(const vector<AnalyseHeaderTimeDetail>& _headDetail)
{
    m_headDetail = _headDetail;
    m_headDetailHasBeenSet = true;
}

bool AnalyseHeaderDetail::HeadDetailHasBeenSet() const
{
    return m_headDetailHasBeenSet;
}

string AnalyseHeaderDetail::GetName() const
{
    return m_name;
}

void AnalyseHeaderDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AnalyseHeaderDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AnalyseHeaderDetail::GetTotal() const
{
    return m_total;
}

void AnalyseHeaderDetail::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool AnalyseHeaderDetail::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

