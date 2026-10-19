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

#include <tencentcloud/cfw/v20190904/model/OverviewResourceQuotaDataLite.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

OverviewResourceQuotaDataLite::OverviewResourceQuotaDataLite() :
    m_detailHasBeenSet(false),
    m_volumeUsageDetailHasBeenSet(false)
{
}

CoreInternalOutcome OverviewResourceQuotaDataLite::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewResourceQuotaDataLite.Detail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_detail.Deserialize(value["Detail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_detailHasBeenSet = true;
    }

    if (value.HasMember("VolumeUsageDetail") && !value["VolumeUsageDetail"].IsNull())
    {
        if (!value["VolumeUsageDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewResourceQuotaDataLite.VolumeUsageDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_volumeUsageDetail.Deserialize(value["VolumeUsageDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_volumeUsageDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OverviewResourceQuotaDataLite::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_detail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_volumeUsageDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeUsageDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_volumeUsageDetail.ToJsonObject(value[key.c_str()], allocator);
    }

}


OverviewResourceQuotaDetail OverviewResourceQuotaDataLite::GetDetail() const
{
    return m_detail;
}

void OverviewResourceQuotaDataLite::SetDetail(const OverviewResourceQuotaDetail& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool OverviewResourceQuotaDataLite::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

VolumeUsageDetail OverviewResourceQuotaDataLite::GetVolumeUsageDetail() const
{
    return m_volumeUsageDetail;
}

void OverviewResourceQuotaDataLite::SetVolumeUsageDetail(const VolumeUsageDetail& _volumeUsageDetail)
{
    m_volumeUsageDetail = _volumeUsageDetail;
    m_volumeUsageDetailHasBeenSet = true;
}

bool OverviewResourceQuotaDataLite::VolumeUsageDetailHasBeenSet() const
{
    return m_volumeUsageDetailHasBeenSet;
}

