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

#include <tencentcloud/gme/v20180711/model/ApplicationDataStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace rapidjson;
using namespace std;

ApplicationDataStatistics::ApplicationDataStatistics() :
    m_bizIdHasBeenSet(false),
    m_dauDataNumHasBeenSet(false),
    m_dauDataMainlandHasBeenSet(false),
    m_dauDataOverseaHasBeenSet(false),
    m_dauDataSumHasBeenSet(false),
    m_durationDataNumHasBeenSet(false),
    m_durationDataMainlandHasBeenSet(false),
    m_durationDataOverseaHasBeenSet(false),
    m_durationDataSumHasBeenSet(false),
    m_pcuDataNumHasBeenSet(false),
    m_pcuDataMainlandHasBeenSet(false),
    m_pcuDataOverseaHasBeenSet(false),
    m_pcuDataSumHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationDataStatistics::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("BizId") && !value["BizId"].IsNull())
    {
        if (!value["BizId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ApplicationDataStatistics.BizId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bizId = value["BizId"].GetUint64();
        m_bizIdHasBeenSet = true;
    }

    if (value.HasMember("DauDataNum") && !value["DauDataNum"].IsNull())
    {
        if (!value["DauDataNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ApplicationDataStatistics.DauDataNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dauDataNum = value["DauDataNum"].GetUint64();
        m_dauDataNumHasBeenSet = true;
    }

    if (value.HasMember("DauDataMainland") && !value["DauDataMainland"].IsNull())
    {
        if (!value["DauDataMainland"].IsArray())
            return CoreInternalOutcome(Error("response `ApplicationDataStatistics.DauDataMainland` is not array type"));

        const Value &tmpValue = value["DauDataMainland"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StatisticsItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dauDataMainland.push_back(item);
        }
        m_dauDataMainlandHasBeenSet = true;
    }

    if (value.HasMember("DauDataOversea") && !value["DauDataOversea"].IsNull())
    {
        if (!value["DauDataOversea"].IsArray())
            return CoreInternalOutcome(Error("response `ApplicationDataStatistics.DauDataOversea` is not array type"));

        const Value &tmpValue = value["DauDataOversea"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StatisticsItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dauDataOversea.push_back(item);
        }
        m_dauDataOverseaHasBeenSet = true;
    }

    if (value.HasMember("DauDataSum") && !value["DauDataSum"].IsNull())
    {
        if (!value["DauDataSum"].IsArray())
            return CoreInternalOutcome(Error("response `ApplicationDataStatistics.DauDataSum` is not array type"));

        const Value &tmpValue = value["DauDataSum"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StatisticsItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dauDataSum.push_back(item);
        }
        m_dauDataSumHasBeenSet = true;
    }

    if (value.HasMember("DurationDataNum") && !value["DurationDataNum"].IsNull())
    {
        if (!value["DurationDataNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ApplicationDataStatistics.DurationDataNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_durationDataNum = value["DurationDataNum"].GetUint64();
        m_durationDataNumHasBeenSet = true;
    }

    if (value.HasMember("DurationDataMainland") && !value["DurationDataMainland"].IsNull())
    {
        if (!value["DurationDataMainland"].IsArray())
            return CoreInternalOutcome(Error("response `ApplicationDataStatistics.DurationDataMainland` is not array type"));

        const Value &tmpValue = value["DurationDataMainland"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StatisticsItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_durationDataMainland.push_back(item);
        }
        m_durationDataMainlandHasBeenSet = true;
    }

    if (value.HasMember("DurationDataOversea") && !value["DurationDataOversea"].IsNull())
    {
        if (!value["DurationDataOversea"].IsArray())
            return CoreInternalOutcome(Error("response `ApplicationDataStatistics.DurationDataOversea` is not array type"));

        const Value &tmpValue = value["DurationDataOversea"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StatisticsItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_durationDataOversea.push_back(item);
        }
        m_durationDataOverseaHasBeenSet = true;
    }

    if (value.HasMember("DurationDataSum") && !value["DurationDataSum"].IsNull())
    {
        if (!value["DurationDataSum"].IsArray())
            return CoreInternalOutcome(Error("response `ApplicationDataStatistics.DurationDataSum` is not array type"));

        const Value &tmpValue = value["DurationDataSum"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StatisticsItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_durationDataSum.push_back(item);
        }
        m_durationDataSumHasBeenSet = true;
    }

    if (value.HasMember("PcuDataNum") && !value["PcuDataNum"].IsNull())
    {
        if (!value["PcuDataNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ApplicationDataStatistics.PcuDataNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pcuDataNum = value["PcuDataNum"].GetUint64();
        m_pcuDataNumHasBeenSet = true;
    }

    if (value.HasMember("PcuDataMainland") && !value["PcuDataMainland"].IsNull())
    {
        if (!value["PcuDataMainland"].IsArray())
            return CoreInternalOutcome(Error("response `ApplicationDataStatistics.PcuDataMainland` is not array type"));

        const Value &tmpValue = value["PcuDataMainland"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StatisticsItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pcuDataMainland.push_back(item);
        }
        m_pcuDataMainlandHasBeenSet = true;
    }

    if (value.HasMember("PcuDataOversea") && !value["PcuDataOversea"].IsNull())
    {
        if (!value["PcuDataOversea"].IsArray())
            return CoreInternalOutcome(Error("response `ApplicationDataStatistics.PcuDataOversea` is not array type"));

        const Value &tmpValue = value["PcuDataOversea"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StatisticsItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pcuDataOversea.push_back(item);
        }
        m_pcuDataOverseaHasBeenSet = true;
    }

    if (value.HasMember("PcuDataSum") && !value["PcuDataSum"].IsNull())
    {
        if (!value["PcuDataSum"].IsArray())
            return CoreInternalOutcome(Error("response `ApplicationDataStatistics.PcuDataSum` is not array type"));

        const Value &tmpValue = value["PcuDataSum"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StatisticsItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pcuDataSum.push_back(item);
        }
        m_pcuDataSumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationDataStatistics::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_bizIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bizId, allocator);
    }

    if (m_dauDataNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DauDataNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dauDataNum, allocator);
    }

    if (m_dauDataMainlandHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DauDataMainland";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dauDataMainland.begin(); itr != m_dauDataMainland.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dauDataOverseaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DauDataOversea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dauDataOversea.begin(); itr != m_dauDataOversea.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dauDataSumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DauDataSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dauDataSum.begin(); itr != m_dauDataSum.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_durationDataNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DurationDataNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durationDataNum, allocator);
    }

    if (m_durationDataMainlandHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DurationDataMainland";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_durationDataMainland.begin(); itr != m_durationDataMainland.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_durationDataOverseaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DurationDataOversea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_durationDataOversea.begin(); itr != m_durationDataOversea.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_durationDataSumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DurationDataSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_durationDataSum.begin(); itr != m_durationDataSum.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pcuDataNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PcuDataNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pcuDataNum, allocator);
    }

    if (m_pcuDataMainlandHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PcuDataMainland";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pcuDataMainland.begin(); itr != m_pcuDataMainland.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pcuDataOverseaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PcuDataOversea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pcuDataOversea.begin(); itr != m_pcuDataOversea.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pcuDataSumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PcuDataSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pcuDataSum.begin(); itr != m_pcuDataSum.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t ApplicationDataStatistics::GetBizId() const
{
    return m_bizId;
}

void ApplicationDataStatistics::SetBizId(const uint64_t& _bizId)
{
    m_bizId = _bizId;
    m_bizIdHasBeenSet = true;
}

bool ApplicationDataStatistics::BizIdHasBeenSet() const
{
    return m_bizIdHasBeenSet;
}

uint64_t ApplicationDataStatistics::GetDauDataNum() const
{
    return m_dauDataNum;
}

void ApplicationDataStatistics::SetDauDataNum(const uint64_t& _dauDataNum)
{
    m_dauDataNum = _dauDataNum;
    m_dauDataNumHasBeenSet = true;
}

bool ApplicationDataStatistics::DauDataNumHasBeenSet() const
{
    return m_dauDataNumHasBeenSet;
}

vector<StatisticsItem> ApplicationDataStatistics::GetDauDataMainland() const
{
    return m_dauDataMainland;
}

void ApplicationDataStatistics::SetDauDataMainland(const vector<StatisticsItem>& _dauDataMainland)
{
    m_dauDataMainland = _dauDataMainland;
    m_dauDataMainlandHasBeenSet = true;
}

bool ApplicationDataStatistics::DauDataMainlandHasBeenSet() const
{
    return m_dauDataMainlandHasBeenSet;
}

vector<StatisticsItem> ApplicationDataStatistics::GetDauDataOversea() const
{
    return m_dauDataOversea;
}

void ApplicationDataStatistics::SetDauDataOversea(const vector<StatisticsItem>& _dauDataOversea)
{
    m_dauDataOversea = _dauDataOversea;
    m_dauDataOverseaHasBeenSet = true;
}

bool ApplicationDataStatistics::DauDataOverseaHasBeenSet() const
{
    return m_dauDataOverseaHasBeenSet;
}

vector<StatisticsItem> ApplicationDataStatistics::GetDauDataSum() const
{
    return m_dauDataSum;
}

void ApplicationDataStatistics::SetDauDataSum(const vector<StatisticsItem>& _dauDataSum)
{
    m_dauDataSum = _dauDataSum;
    m_dauDataSumHasBeenSet = true;
}

bool ApplicationDataStatistics::DauDataSumHasBeenSet() const
{
    return m_dauDataSumHasBeenSet;
}

uint64_t ApplicationDataStatistics::GetDurationDataNum() const
{
    return m_durationDataNum;
}

void ApplicationDataStatistics::SetDurationDataNum(const uint64_t& _durationDataNum)
{
    m_durationDataNum = _durationDataNum;
    m_durationDataNumHasBeenSet = true;
}

bool ApplicationDataStatistics::DurationDataNumHasBeenSet() const
{
    return m_durationDataNumHasBeenSet;
}

vector<StatisticsItem> ApplicationDataStatistics::GetDurationDataMainland() const
{
    return m_durationDataMainland;
}

void ApplicationDataStatistics::SetDurationDataMainland(const vector<StatisticsItem>& _durationDataMainland)
{
    m_durationDataMainland = _durationDataMainland;
    m_durationDataMainlandHasBeenSet = true;
}

bool ApplicationDataStatistics::DurationDataMainlandHasBeenSet() const
{
    return m_durationDataMainlandHasBeenSet;
}

vector<StatisticsItem> ApplicationDataStatistics::GetDurationDataOversea() const
{
    return m_durationDataOversea;
}

void ApplicationDataStatistics::SetDurationDataOversea(const vector<StatisticsItem>& _durationDataOversea)
{
    m_durationDataOversea = _durationDataOversea;
    m_durationDataOverseaHasBeenSet = true;
}

bool ApplicationDataStatistics::DurationDataOverseaHasBeenSet() const
{
    return m_durationDataOverseaHasBeenSet;
}

vector<StatisticsItem> ApplicationDataStatistics::GetDurationDataSum() const
{
    return m_durationDataSum;
}

void ApplicationDataStatistics::SetDurationDataSum(const vector<StatisticsItem>& _durationDataSum)
{
    m_durationDataSum = _durationDataSum;
    m_durationDataSumHasBeenSet = true;
}

bool ApplicationDataStatistics::DurationDataSumHasBeenSet() const
{
    return m_durationDataSumHasBeenSet;
}

uint64_t ApplicationDataStatistics::GetPcuDataNum() const
{
    return m_pcuDataNum;
}

void ApplicationDataStatistics::SetPcuDataNum(const uint64_t& _pcuDataNum)
{
    m_pcuDataNum = _pcuDataNum;
    m_pcuDataNumHasBeenSet = true;
}

bool ApplicationDataStatistics::PcuDataNumHasBeenSet() const
{
    return m_pcuDataNumHasBeenSet;
}

vector<StatisticsItem> ApplicationDataStatistics::GetPcuDataMainland() const
{
    return m_pcuDataMainland;
}

void ApplicationDataStatistics::SetPcuDataMainland(const vector<StatisticsItem>& _pcuDataMainland)
{
    m_pcuDataMainland = _pcuDataMainland;
    m_pcuDataMainlandHasBeenSet = true;
}

bool ApplicationDataStatistics::PcuDataMainlandHasBeenSet() const
{
    return m_pcuDataMainlandHasBeenSet;
}

vector<StatisticsItem> ApplicationDataStatistics::GetPcuDataOversea() const
{
    return m_pcuDataOversea;
}

void ApplicationDataStatistics::SetPcuDataOversea(const vector<StatisticsItem>& _pcuDataOversea)
{
    m_pcuDataOversea = _pcuDataOversea;
    m_pcuDataOverseaHasBeenSet = true;
}

bool ApplicationDataStatistics::PcuDataOverseaHasBeenSet() const
{
    return m_pcuDataOverseaHasBeenSet;
}

vector<StatisticsItem> ApplicationDataStatistics::GetPcuDataSum() const
{
    return m_pcuDataSum;
}

void ApplicationDataStatistics::SetPcuDataSum(const vector<StatisticsItem>& _pcuDataSum)
{
    m_pcuDataSum = _pcuDataSum;
    m_pcuDataSumHasBeenSet = true;
}

bool ApplicationDataStatistics::PcuDataSumHasBeenSet() const
{
    return m_pcuDataSumHasBeenSet;
}

