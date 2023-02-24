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

#include <tencentcloud/cdc/v20201214/model/VpngwBandwidthData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

VpngwBandwidthData::VpngwBandwidthData() :
    m_outBandwidthHasBeenSet(false),
    m_inBandwidthHasBeenSet(false)
{
}

CoreInternalOutcome VpngwBandwidthData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutBandwidth") && !value["OutBandwidth"].IsNull())
    {
        if (!value["OutBandwidth"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VpngwBandwidthData.OutBandwidth` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outBandwidth.Deserialize(value["OutBandwidth"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outBandwidthHasBeenSet = true;
    }

    if (value.HasMember("InBandwidth") && !value["InBandwidth"].IsNull())
    {
        if (!value["InBandwidth"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VpngwBandwidthData.InBandwidth` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inBandwidth.Deserialize(value["InBandwidth"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inBandwidthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpngwBandwidthData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outBandwidth.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_inBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inBandwidth.ToJsonObject(value[key.c_str()], allocator);
    }

}


OutBandwidth VpngwBandwidthData::GetOutBandwidth() const
{
    return m_outBandwidth;
}

void VpngwBandwidthData::SetOutBandwidth(const OutBandwidth& _outBandwidth)
{
    m_outBandwidth = _outBandwidth;
    m_outBandwidthHasBeenSet = true;
}

bool VpngwBandwidthData::OutBandwidthHasBeenSet() const
{
    return m_outBandwidthHasBeenSet;
}

InBandwidth VpngwBandwidthData::GetInBandwidth() const
{
    return m_inBandwidth;
}

void VpngwBandwidthData::SetInBandwidth(const InBandwidth& _inBandwidth)
{
    m_inBandwidth = _inBandwidth;
    m_inBandwidthHasBeenSet = true;
}

bool VpngwBandwidthData::InBandwidthHasBeenSet() const
{
    return m_inBandwidthHasBeenSet;
}

