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

#include <tencentcloud/cfw/v20190904/model/OverviewResourceQuotaDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

OverviewResourceQuotaDetail::OverviewResourceQuotaDetail() :
    m_northSouthDetailHasBeenSet(false),
    m_eastWestDetailHasBeenSet(false),
    m_nDRDetailHasBeenSet(false),
    m_quotaDetailHasBeenSet(false),
    m_logStorageDetailHasBeenSet(false)
{
}

CoreInternalOutcome OverviewResourceQuotaDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NorthSouthDetail") && !value["NorthSouthDetail"].IsNull())
    {
        if (!value["NorthSouthDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewResourceQuotaDetail.NorthSouthDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_northSouthDetail.Deserialize(value["NorthSouthDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_northSouthDetailHasBeenSet = true;
    }

    if (value.HasMember("EastWestDetail") && !value["EastWestDetail"].IsNull())
    {
        if (!value["EastWestDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewResourceQuotaDetail.EastWestDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eastWestDetail.Deserialize(value["EastWestDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eastWestDetailHasBeenSet = true;
    }

    if (value.HasMember("NDRDetail") && !value["NDRDetail"].IsNull())
    {
        if (!value["NDRDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewResourceQuotaDetail.NDRDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nDRDetail.Deserialize(value["NDRDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nDRDetailHasBeenSet = true;
    }

    if (value.HasMember("QuotaDetail") && !value["QuotaDetail"].IsNull())
    {
        if (!value["QuotaDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewResourceQuotaDetail.QuotaDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_quotaDetail.Deserialize(value["QuotaDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_quotaDetailHasBeenSet = true;
    }

    if (value.HasMember("LogStorageDetail") && !value["LogStorageDetail"].IsNull())
    {
        if (!value["LogStorageDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewResourceQuotaDetail.LogStorageDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_logStorageDetail.Deserialize(value["LogStorageDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_logStorageDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OverviewResourceQuotaDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_northSouthDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NorthSouthDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_northSouthDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eastWestDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EastWestDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eastWestDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nDRDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NDRDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nDRDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_quotaDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_quotaDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_logStorageDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogStorageDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logStorageDetail.ToJsonObject(value[key.c_str()], allocator);
    }

}


OverviewNorthSouthDetail OverviewResourceQuotaDetail::GetNorthSouthDetail() const
{
    return m_northSouthDetail;
}

void OverviewResourceQuotaDetail::SetNorthSouthDetail(const OverviewNorthSouthDetail& _northSouthDetail)
{
    m_northSouthDetail = _northSouthDetail;
    m_northSouthDetailHasBeenSet = true;
}

bool OverviewResourceQuotaDetail::NorthSouthDetailHasBeenSet() const
{
    return m_northSouthDetailHasBeenSet;
}

OverviewEastWestDetail OverviewResourceQuotaDetail::GetEastWestDetail() const
{
    return m_eastWestDetail;
}

void OverviewResourceQuotaDetail::SetEastWestDetail(const OverviewEastWestDetail& _eastWestDetail)
{
    m_eastWestDetail = _eastWestDetail;
    m_eastWestDetailHasBeenSet = true;
}

bool OverviewResourceQuotaDetail::EastWestDetailHasBeenSet() const
{
    return m_eastWestDetailHasBeenSet;
}

OverviewNDRDetail OverviewResourceQuotaDetail::GetNDRDetail() const
{
    return m_nDRDetail;
}

void OverviewResourceQuotaDetail::SetNDRDetail(const OverviewNDRDetail& _nDRDetail)
{
    m_nDRDetail = _nDRDetail;
    m_nDRDetailHasBeenSet = true;
}

bool OverviewResourceQuotaDetail::NDRDetailHasBeenSet() const
{
    return m_nDRDetailHasBeenSet;
}

OverviewQuotaDetail OverviewResourceQuotaDetail::GetQuotaDetail() const
{
    return m_quotaDetail;
}

void OverviewResourceQuotaDetail::SetQuotaDetail(const OverviewQuotaDetail& _quotaDetail)
{
    m_quotaDetail = _quotaDetail;
    m_quotaDetailHasBeenSet = true;
}

bool OverviewResourceQuotaDetail::QuotaDetailHasBeenSet() const
{
    return m_quotaDetailHasBeenSet;
}

OverviewLogStorageDetail OverviewResourceQuotaDetail::GetLogStorageDetail() const
{
    return m_logStorageDetail;
}

void OverviewResourceQuotaDetail::SetLogStorageDetail(const OverviewLogStorageDetail& _logStorageDetail)
{
    m_logStorageDetail = _logStorageDetail;
    m_logStorageDetailHasBeenSet = true;
}

bool OverviewResourceQuotaDetail::LogStorageDetailHasBeenSet() const
{
    return m_logStorageDetailHasBeenSet;
}

