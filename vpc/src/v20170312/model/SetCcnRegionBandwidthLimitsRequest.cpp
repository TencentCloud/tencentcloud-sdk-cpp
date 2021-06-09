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

#include <tencentcloud/vpc/v20170312/model/SetCcnRegionBandwidthLimitsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

SetCcnRegionBandwidthLimitsRequest::SetCcnRegionBandwidthLimitsRequest() :
    m_ccnIdHasBeenSet(false),
    m_ccnRegionBandwidthLimitsHasBeenSet(false),
    m_setDefaultLimitFlagHasBeenSet(false)
{
}

string SetCcnRegionBandwidthLimitsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnRegionBandwidthLimitsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnRegionBandwidthLimits";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ccnRegionBandwidthLimits.begin(); itr != m_ccnRegionBandwidthLimits.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_setDefaultLimitFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetDefaultLimitFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_setDefaultLimitFlag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetCcnRegionBandwidthLimitsRequest::GetCcnId() const
{
    return m_ccnId;
}

void SetCcnRegionBandwidthLimitsRequest::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool SetCcnRegionBandwidthLimitsRequest::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

vector<CcnRegionBandwidthLimit> SetCcnRegionBandwidthLimitsRequest::GetCcnRegionBandwidthLimits() const
{
    return m_ccnRegionBandwidthLimits;
}

void SetCcnRegionBandwidthLimitsRequest::SetCcnRegionBandwidthLimits(const vector<CcnRegionBandwidthLimit>& _ccnRegionBandwidthLimits)
{
    m_ccnRegionBandwidthLimits = _ccnRegionBandwidthLimits;
    m_ccnRegionBandwidthLimitsHasBeenSet = true;
}

bool SetCcnRegionBandwidthLimitsRequest::CcnRegionBandwidthLimitsHasBeenSet() const
{
    return m_ccnRegionBandwidthLimitsHasBeenSet;
}

bool SetCcnRegionBandwidthLimitsRequest::GetSetDefaultLimitFlag() const
{
    return m_setDefaultLimitFlag;
}

void SetCcnRegionBandwidthLimitsRequest::SetSetDefaultLimitFlag(const bool& _setDefaultLimitFlag)
{
    m_setDefaultLimitFlag = _setDefaultLimitFlag;
    m_setDefaultLimitFlagHasBeenSet = true;
}

bool SetCcnRegionBandwidthLimitsRequest::SetDefaultLimitFlagHasBeenSet() const
{
    return m_setDefaultLimitFlagHasBeenSet;
}


