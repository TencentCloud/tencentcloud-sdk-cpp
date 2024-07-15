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

#include <tencentcloud/cdz/v20221123/model/CloudDedicatedZoneResourceSummaryInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdz::V20221123::Model;
using namespace std;

CloudDedicatedZoneResourceSummaryInfo::CloudDedicatedZoneResourceSummaryInfo() :
    m_productNameHasBeenSet(false),
    m_subProductNameHasBeenSet(false),
    m_statisticsHasBeenSet(false)
{
}

CoreInternalOutcome CloudDedicatedZoneResourceSummaryInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudDedicatedZoneResourceSummaryInfo.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("SubProductName") && !value["SubProductName"].IsNull())
    {
        if (!value["SubProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudDedicatedZoneResourceSummaryInfo.SubProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductName = string(value["SubProductName"].GetString());
        m_subProductNameHasBeenSet = true;
    }

    if (value.HasMember("Statistics") && !value["Statistics"].IsNull())
    {
        if (!value["Statistics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudDedicatedZoneResourceSummaryInfo.Statistics` is not array type"));

        const rapidjson::Value &tmpValue = value["Statistics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudDedicatedZoneResourceStatisticsInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_statistics.push_back(item);
        }
        m_statisticsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudDedicatedZoneResourceSummaryInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProductName.c_str(), allocator).Move(), allocator);
    }

    if (m_statisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Statistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_statistics.begin(); itr != m_statistics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CloudDedicatedZoneResourceSummaryInfo::GetProductName() const
{
    return m_productName;
}

void CloudDedicatedZoneResourceSummaryInfo::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool CloudDedicatedZoneResourceSummaryInfo::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string CloudDedicatedZoneResourceSummaryInfo::GetSubProductName() const
{
    return m_subProductName;
}

void CloudDedicatedZoneResourceSummaryInfo::SetSubProductName(const string& _subProductName)
{
    m_subProductName = _subProductName;
    m_subProductNameHasBeenSet = true;
}

bool CloudDedicatedZoneResourceSummaryInfo::SubProductNameHasBeenSet() const
{
    return m_subProductNameHasBeenSet;
}

vector<CloudDedicatedZoneResourceStatisticsInfo> CloudDedicatedZoneResourceSummaryInfo::GetStatistics() const
{
    return m_statistics;
}

void CloudDedicatedZoneResourceSummaryInfo::SetStatistics(const vector<CloudDedicatedZoneResourceStatisticsInfo>& _statistics)
{
    m_statistics = _statistics;
    m_statisticsHasBeenSet = true;
}

bool CloudDedicatedZoneResourceSummaryInfo::StatisticsHasBeenSet() const
{
    return m_statisticsHasBeenSet;
}

