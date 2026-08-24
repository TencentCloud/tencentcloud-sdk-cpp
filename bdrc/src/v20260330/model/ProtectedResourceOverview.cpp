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

#include <tencentcloud/bdrc/v20260330/model/ProtectedResourceOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

ProtectedResourceOverview::ProtectedResourceOverview() :
    m_totalProtectedCountHasBeenSet(false),
    m_totalResourceCountHasBeenSet(false),
    m_cvmHasBeenSet(false),
    m_cFSHasBeenSet(false)
{
}

CoreInternalOutcome ProtectedResourceOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalProtectedCount") && !value["TotalProtectedCount"].IsNull())
    {
        if (!value["TotalProtectedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectedResourceOverview.TotalProtectedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalProtectedCount = value["TotalProtectedCount"].GetInt64();
        m_totalProtectedCountHasBeenSet = true;
    }

    if (value.HasMember("TotalResourceCount") && !value["TotalResourceCount"].IsNull())
    {
        if (!value["TotalResourceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectedResourceOverview.TotalResourceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalResourceCount = value["TotalResourceCount"].GetInt64();
        m_totalResourceCountHasBeenSet = true;
    }

    if (value.HasMember("Cvm") && !value["Cvm"].IsNull())
    {
        if (!value["Cvm"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectedResourceOverview.Cvm` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cvm.Deserialize(value["Cvm"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cvmHasBeenSet = true;
    }

    if (value.HasMember("CFS") && !value["CFS"].IsNull())
    {
        if (!value["CFS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectedResourceOverview.CFS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cFS.Deserialize(value["CFS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cFSHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProtectedResourceOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalProtectedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalProtectedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalProtectedCount, allocator);
    }

    if (m_totalResourceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalResourceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalResourceCount, allocator);
    }

    if (m_cvmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cvm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cvm.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cFSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cFS.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t ProtectedResourceOverview::GetTotalProtectedCount() const
{
    return m_totalProtectedCount;
}

void ProtectedResourceOverview::SetTotalProtectedCount(const int64_t& _totalProtectedCount)
{
    m_totalProtectedCount = _totalProtectedCount;
    m_totalProtectedCountHasBeenSet = true;
}

bool ProtectedResourceOverview::TotalProtectedCountHasBeenSet() const
{
    return m_totalProtectedCountHasBeenSet;
}

int64_t ProtectedResourceOverview::GetTotalResourceCount() const
{
    return m_totalResourceCount;
}

void ProtectedResourceOverview::SetTotalResourceCount(const int64_t& _totalResourceCount)
{
    m_totalResourceCount = _totalResourceCount;
    m_totalResourceCountHasBeenSet = true;
}

bool ProtectedResourceOverview::TotalResourceCountHasBeenSet() const
{
    return m_totalResourceCountHasBeenSet;
}

ResourceProtectStat ProtectedResourceOverview::GetCvm() const
{
    return m_cvm;
}

void ProtectedResourceOverview::SetCvm(const ResourceProtectStat& _cvm)
{
    m_cvm = _cvm;
    m_cvmHasBeenSet = true;
}

bool ProtectedResourceOverview::CvmHasBeenSet() const
{
    return m_cvmHasBeenSet;
}

ResourceProtectStat ProtectedResourceOverview::GetCFS() const
{
    return m_cFS;
}

void ProtectedResourceOverview::SetCFS(const ResourceProtectStat& _cFS)
{
    m_cFS = _cFS;
    m_cFSHasBeenSet = true;
}

bool ProtectedResourceOverview::CFSHasBeenSet() const
{
    return m_cFSHasBeenSet;
}

