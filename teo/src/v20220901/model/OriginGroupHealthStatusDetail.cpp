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

#include <tencentcloud/teo/v20220901/model/OriginGroupHealthStatusDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

OriginGroupHealthStatusDetail::OriginGroupHealthStatusDetail() :
    m_originGroupIdHasBeenSet(false),
    m_originHealthStatusHasBeenSet(false),
    m_checkRegionHealthStatusHasBeenSet(false)
{
}

CoreInternalOutcome OriginGroupHealthStatusDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OriginGroupId") && !value["OriginGroupId"].IsNull())
    {
        if (!value["OriginGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginGroupHealthStatusDetail.OriginGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originGroupId = string(value["OriginGroupId"].GetString());
        m_originGroupIdHasBeenSet = true;
    }

    if (value.HasMember("OriginHealthStatus") && !value["OriginHealthStatus"].IsNull())
    {
        if (!value["OriginHealthStatus"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginGroupHealthStatusDetail.OriginHealthStatus` is not array type"));

        const rapidjson::Value &tmpValue = value["OriginHealthStatus"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OriginHealthStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_originHealthStatus.push_back(item);
        }
        m_originHealthStatusHasBeenSet = true;
    }

    if (value.HasMember("CheckRegionHealthStatus") && !value["CheckRegionHealthStatus"].IsNull())
    {
        if (!value["CheckRegionHealthStatus"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginGroupHealthStatusDetail.CheckRegionHealthStatus` is not array type"));

        const rapidjson::Value &tmpValue = value["CheckRegionHealthStatus"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CheckRegionHealthStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_checkRegionHealthStatus.push_back(item);
        }
        m_checkRegionHealthStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OriginGroupHealthStatusDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_originGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_originHealthStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginHealthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_originHealthStatus.begin(); itr != m_originHealthStatus.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_checkRegionHealthStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckRegionHealthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_checkRegionHealthStatus.begin(); itr != m_checkRegionHealthStatus.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string OriginGroupHealthStatusDetail::GetOriginGroupId() const
{
    return m_originGroupId;
}

void OriginGroupHealthStatusDetail::SetOriginGroupId(const string& _originGroupId)
{
    m_originGroupId = _originGroupId;
    m_originGroupIdHasBeenSet = true;
}

bool OriginGroupHealthStatusDetail::OriginGroupIdHasBeenSet() const
{
    return m_originGroupIdHasBeenSet;
}

vector<OriginHealthStatus> OriginGroupHealthStatusDetail::GetOriginHealthStatus() const
{
    return m_originHealthStatus;
}

void OriginGroupHealthStatusDetail::SetOriginHealthStatus(const vector<OriginHealthStatus>& _originHealthStatus)
{
    m_originHealthStatus = _originHealthStatus;
    m_originHealthStatusHasBeenSet = true;
}

bool OriginGroupHealthStatusDetail::OriginHealthStatusHasBeenSet() const
{
    return m_originHealthStatusHasBeenSet;
}

vector<CheckRegionHealthStatus> OriginGroupHealthStatusDetail::GetCheckRegionHealthStatus() const
{
    return m_checkRegionHealthStatus;
}

void OriginGroupHealthStatusDetail::SetCheckRegionHealthStatus(const vector<CheckRegionHealthStatus>& _checkRegionHealthStatus)
{
    m_checkRegionHealthStatus = _checkRegionHealthStatus;
    m_checkRegionHealthStatusHasBeenSet = true;
}

bool OriginGroupHealthStatusDetail::CheckRegionHealthStatusHasBeenSet() const
{
    return m_checkRegionHealthStatusHasBeenSet;
}

