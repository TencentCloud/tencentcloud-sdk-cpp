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

#include <tencentcloud/vpc/v20170312/model/CrossBorderFlowMonitorData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CrossBorderFlowMonitorData::CrossBorderFlowMonitorData() :
    m_inBandwidthHasBeenSet(false),
    m_outBandwidthHasBeenSet(false),
    m_inPkgHasBeenSet(false),
    m_outPkgHasBeenSet(false)
{
}

CoreInternalOutcome CrossBorderFlowMonitorData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InBandwidth") && !value["InBandwidth"].IsNull())
    {
        if (!value["InBandwidth"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CrossBorderFlowMonitorData.InBandwidth` is not array type"));

        const rapidjson::Value &tmpValue = value["InBandwidth"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_inBandwidth.push_back((*itr).GetInt64());
        }
        m_inBandwidthHasBeenSet = true;
    }

    if (value.HasMember("OutBandwidth") && !value["OutBandwidth"].IsNull())
    {
        if (!value["OutBandwidth"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CrossBorderFlowMonitorData.OutBandwidth` is not array type"));

        const rapidjson::Value &tmpValue = value["OutBandwidth"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_outBandwidth.push_back((*itr).GetInt64());
        }
        m_outBandwidthHasBeenSet = true;
    }

    if (value.HasMember("InPkg") && !value["InPkg"].IsNull())
    {
        if (!value["InPkg"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CrossBorderFlowMonitorData.InPkg` is not array type"));

        const rapidjson::Value &tmpValue = value["InPkg"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_inPkg.push_back((*itr).GetInt64());
        }
        m_inPkgHasBeenSet = true;
    }

    if (value.HasMember("OutPkg") && !value["OutPkg"].IsNull())
    {
        if (!value["OutPkg"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CrossBorderFlowMonitorData.OutPkg` is not array type"));

        const rapidjson::Value &tmpValue = value["OutPkg"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_outPkg.push_back((*itr).GetInt64());
        }
        m_outPkgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CrossBorderFlowMonitorData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_inBandwidth.begin(); itr != m_inBandwidth.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_outBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_outBandwidth.begin(); itr != m_outBandwidth.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_inPkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_inPkg.begin(); itr != m_inPkg.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_outPkgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutPkg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_outPkg.begin(); itr != m_outPkg.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


vector<int64_t> CrossBorderFlowMonitorData::GetInBandwidth() const
{
    return m_inBandwidth;
}

void CrossBorderFlowMonitorData::SetInBandwidth(const vector<int64_t>& _inBandwidth)
{
    m_inBandwidth = _inBandwidth;
    m_inBandwidthHasBeenSet = true;
}

bool CrossBorderFlowMonitorData::InBandwidthHasBeenSet() const
{
    return m_inBandwidthHasBeenSet;
}

vector<int64_t> CrossBorderFlowMonitorData::GetOutBandwidth() const
{
    return m_outBandwidth;
}

void CrossBorderFlowMonitorData::SetOutBandwidth(const vector<int64_t>& _outBandwidth)
{
    m_outBandwidth = _outBandwidth;
    m_outBandwidthHasBeenSet = true;
}

bool CrossBorderFlowMonitorData::OutBandwidthHasBeenSet() const
{
    return m_outBandwidthHasBeenSet;
}

vector<int64_t> CrossBorderFlowMonitorData::GetInPkg() const
{
    return m_inPkg;
}

void CrossBorderFlowMonitorData::SetInPkg(const vector<int64_t>& _inPkg)
{
    m_inPkg = _inPkg;
    m_inPkgHasBeenSet = true;
}

bool CrossBorderFlowMonitorData::InPkgHasBeenSet() const
{
    return m_inPkgHasBeenSet;
}

vector<int64_t> CrossBorderFlowMonitorData::GetOutPkg() const
{
    return m_outPkg;
}

void CrossBorderFlowMonitorData::SetOutPkg(const vector<int64_t>& _outPkg)
{
    m_outPkg = _outPkg;
    m_outPkgHasBeenSet = true;
}

bool CrossBorderFlowMonitorData::OutPkgHasBeenSet() const
{
    return m_outPkgHasBeenSet;
}

