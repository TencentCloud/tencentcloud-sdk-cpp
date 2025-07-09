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

#include <tencentcloud/cfw/v20190904/model/StorageHistogramShow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

StorageHistogramShow::StorageHistogramShow() :
    m_storageTypeHasBeenSet(false),
    m_datesHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome StorageHistogramShow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StorageHistogramShow.StorageType` is not array type"));

        const rapidjson::Value &tmpValue = value["StorageType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_storageType.push_back((*itr).GetString());
        }
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("Dates") && !value["Dates"].IsNull())
    {
        if (!value["Dates"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StorageHistogramShow.Dates` is not array type"));

        const rapidjson::Value &tmpValue = value["Dates"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dates.push_back((*itr).GetString());
        }
        m_datesHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StorageHistogramShow.Data` is not array type"));

        const rapidjson::Value &tmpValue = value["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IntArray item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_data.push_back(item);
        }
        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageHistogramShow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_storageType.begin(); itr != m_storageType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_datesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dates.begin(); itr != m_dates.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<string> StorageHistogramShow::GetStorageType() const
{
    return m_storageType;
}

void StorageHistogramShow::SetStorageType(const vector<string>& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool StorageHistogramShow::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

vector<string> StorageHistogramShow::GetDates() const
{
    return m_dates;
}

void StorageHistogramShow::SetDates(const vector<string>& _dates)
{
    m_dates = _dates;
    m_datesHasBeenSet = true;
}

bool StorageHistogramShow::DatesHasBeenSet() const
{
    return m_datesHasBeenSet;
}

vector<IntArray> StorageHistogramShow::GetData() const
{
    return m_data;
}

void StorageHistogramShow::SetData(const vector<IntArray>& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool StorageHistogramShow::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

