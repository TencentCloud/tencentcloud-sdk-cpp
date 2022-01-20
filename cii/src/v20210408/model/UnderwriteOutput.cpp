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

#include <tencentcloud/cii/v20210408/model/UnderwriteOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cii::V20210408::Model;
using namespace std;

UnderwriteOutput::UnderwriteOutput() :
    m_customerIdHasBeenSet(false),
    m_customerNameHasBeenSet(false),
    m_resultsHasBeenSet(false),
    m_reviewTimeHasBeenSet(false),
    m_manualDetailHasBeenSet(false)
{
}

CoreInternalOutcome UnderwriteOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomerId") && !value["CustomerId"].IsNull())
    {
        if (!value["CustomerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnderwriteOutput.CustomerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerId = string(value["CustomerId"].GetString());
        m_customerIdHasBeenSet = true;
    }

    if (value.HasMember("CustomerName") && !value["CustomerName"].IsNull())
    {
        if (!value["CustomerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnderwriteOutput.CustomerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerName = string(value["CustomerName"].GetString());
        m_customerNameHasBeenSet = true;
    }

    if (value.HasMember("Results") && !value["Results"].IsNull())
    {
        if (!value["Results"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UnderwriteOutput.Results` is not array type"));

        const rapidjson::Value &tmpValue = value["Results"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InsuranceResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_results.push_back(item);
        }
        m_resultsHasBeenSet = true;
    }

    if (value.HasMember("ReviewTime") && !value["ReviewTime"].IsNull())
    {
        if (!value["ReviewTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnderwriteOutput.ReviewTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reviewTime = string(value["ReviewTime"].GetString());
        m_reviewTimeHasBeenSet = true;
    }

    if (value.HasMember("ManualDetail") && !value["ManualDetail"].IsNull())
    {
        if (!value["ManualDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UnderwriteOutput.ManualDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["ManualDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UnderwriteConclusion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_manualDetail.push_back(item);
        }
        m_manualDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UnderwriteOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerId.c_str(), allocator).Move(), allocator);
    }

    if (m_customerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerName.c_str(), allocator).Move(), allocator);
    }

    if (m_resultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Results";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_results.begin(); itr != m_results.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_reviewTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reviewTime.c_str(), allocator).Move(), allocator);
    }

    if (m_manualDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_manualDetail.begin(); itr != m_manualDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string UnderwriteOutput::GetCustomerId() const
{
    return m_customerId;
}

void UnderwriteOutput::SetCustomerId(const string& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool UnderwriteOutput::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

string UnderwriteOutput::GetCustomerName() const
{
    return m_customerName;
}

void UnderwriteOutput::SetCustomerName(const string& _customerName)
{
    m_customerName = _customerName;
    m_customerNameHasBeenSet = true;
}

bool UnderwriteOutput::CustomerNameHasBeenSet() const
{
    return m_customerNameHasBeenSet;
}

vector<InsuranceResult> UnderwriteOutput::GetResults() const
{
    return m_results;
}

void UnderwriteOutput::SetResults(const vector<InsuranceResult>& _results)
{
    m_results = _results;
    m_resultsHasBeenSet = true;
}

bool UnderwriteOutput::ResultsHasBeenSet() const
{
    return m_resultsHasBeenSet;
}

string UnderwriteOutput::GetReviewTime() const
{
    return m_reviewTime;
}

void UnderwriteOutput::SetReviewTime(const string& _reviewTime)
{
    m_reviewTime = _reviewTime;
    m_reviewTimeHasBeenSet = true;
}

bool UnderwriteOutput::ReviewTimeHasBeenSet() const
{
    return m_reviewTimeHasBeenSet;
}

vector<UnderwriteConclusion> UnderwriteOutput::GetManualDetail() const
{
    return m_manualDetail;
}

void UnderwriteOutput::SetManualDetail(const vector<UnderwriteConclusion>& _manualDetail)
{
    m_manualDetail = _manualDetail;
    m_manualDetailHasBeenSet = true;
}

bool UnderwriteOutput::ManualDetailHasBeenSet() const
{
    return m_manualDetailHasBeenSet;
}

