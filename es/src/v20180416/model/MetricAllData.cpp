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

#include <tencentcloud/es/v20180416/model/MetricAllData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

MetricAllData::MetricAllData() :
    m_indexTrafficHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_readReqTimesHasBeenSet(false),
    m_writeReqTimesHasBeenSet(false),
    m_docCountHasBeenSet(false)
{
}

CoreInternalOutcome MetricAllData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IndexTraffic") && !value["IndexTraffic"].IsNull())
    {
        if (!value["IndexTraffic"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricAllData.IndexTraffic` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_indexTraffic = value["IndexTraffic"].GetDouble();
        m_indexTrafficHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricAllData.Storage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_storage = value["Storage"].GetDouble();
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("ReadReqTimes") && !value["ReadReqTimes"].IsNull())
    {
        if (!value["ReadReqTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricAllData.ReadReqTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readReqTimes = value["ReadReqTimes"].GetInt64();
        m_readReqTimesHasBeenSet = true;
    }

    if (value.HasMember("WriteReqTimes") && !value["WriteReqTimes"].IsNull())
    {
        if (!value["WriteReqTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricAllData.WriteReqTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_writeReqTimes = value["WriteReqTimes"].GetInt64();
        m_writeReqTimesHasBeenSet = true;
    }

    if (value.HasMember("DocCount") && !value["DocCount"].IsNull())
    {
        if (!value["DocCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricAllData.DocCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_docCount = value["DocCount"].GetInt64();
        m_docCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricAllData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexTrafficHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexTraffic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indexTraffic, allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storage, allocator);
    }

    if (m_readReqTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadReqTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readReqTimes, allocator);
    }

    if (m_writeReqTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteReqTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_writeReqTimes, allocator);
    }

    if (m_docCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_docCount, allocator);
    }

}


double MetricAllData::GetIndexTraffic() const
{
    return m_indexTraffic;
}

void MetricAllData::SetIndexTraffic(const double& _indexTraffic)
{
    m_indexTraffic = _indexTraffic;
    m_indexTrafficHasBeenSet = true;
}

bool MetricAllData::IndexTrafficHasBeenSet() const
{
    return m_indexTrafficHasBeenSet;
}

double MetricAllData::GetStorage() const
{
    return m_storage;
}

void MetricAllData::SetStorage(const double& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool MetricAllData::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

int64_t MetricAllData::GetReadReqTimes() const
{
    return m_readReqTimes;
}

void MetricAllData::SetReadReqTimes(const int64_t& _readReqTimes)
{
    m_readReqTimes = _readReqTimes;
    m_readReqTimesHasBeenSet = true;
}

bool MetricAllData::ReadReqTimesHasBeenSet() const
{
    return m_readReqTimesHasBeenSet;
}

int64_t MetricAllData::GetWriteReqTimes() const
{
    return m_writeReqTimes;
}

void MetricAllData::SetWriteReqTimes(const int64_t& _writeReqTimes)
{
    m_writeReqTimes = _writeReqTimes;
    m_writeReqTimesHasBeenSet = true;
}

bool MetricAllData::WriteReqTimesHasBeenSet() const
{
    return m_writeReqTimesHasBeenSet;
}

int64_t MetricAllData::GetDocCount() const
{
    return m_docCount;
}

void MetricAllData::SetDocCount(const int64_t& _docCount)
{
    m_docCount = _docCount;
    m_docCountHasBeenSet = true;
}

bool MetricAllData::DocCountHasBeenSet() const
{
    return m_docCountHasBeenSet;
}

