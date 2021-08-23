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

#include <tencentcloud/cvm/v20170312/model/AccountQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

AccountQuota::AccountQuota() :
    m_postPaidQuotaSetHasBeenSet(false),
    m_prePaidQuotaSetHasBeenSet(false),
    m_spotPaidQuotaSetHasBeenSet(false),
    m_imageQuotaSetHasBeenSet(false),
    m_disasterRecoverGroupQuotaSetHasBeenSet(false)
{
}

CoreInternalOutcome AccountQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PostPaidQuotaSet") && !value["PostPaidQuotaSet"].IsNull())
    {
        if (!value["PostPaidQuotaSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccountQuota.PostPaidQuotaSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PostPaidQuotaSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PostPaidQuota item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_postPaidQuotaSet.push_back(item);
        }
        m_postPaidQuotaSetHasBeenSet = true;
    }

    if (value.HasMember("PrePaidQuotaSet") && !value["PrePaidQuotaSet"].IsNull())
    {
        if (!value["PrePaidQuotaSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccountQuota.PrePaidQuotaSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PrePaidQuotaSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrePaidQuota item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_prePaidQuotaSet.push_back(item);
        }
        m_prePaidQuotaSetHasBeenSet = true;
    }

    if (value.HasMember("SpotPaidQuotaSet") && !value["SpotPaidQuotaSet"].IsNull())
    {
        if (!value["SpotPaidQuotaSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccountQuota.SpotPaidQuotaSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SpotPaidQuotaSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SpotPaidQuota item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_spotPaidQuotaSet.push_back(item);
        }
        m_spotPaidQuotaSetHasBeenSet = true;
    }

    if (value.HasMember("ImageQuotaSet") && !value["ImageQuotaSet"].IsNull())
    {
        if (!value["ImageQuotaSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccountQuota.ImageQuotaSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageQuotaSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ImageQuota item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_imageQuotaSet.push_back(item);
        }
        m_imageQuotaSetHasBeenSet = true;
    }

    if (value.HasMember("DisasterRecoverGroupQuotaSet") && !value["DisasterRecoverGroupQuotaSet"].IsNull())
    {
        if (!value["DisasterRecoverGroupQuotaSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccountQuota.DisasterRecoverGroupQuotaSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DisasterRecoverGroupQuotaSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DisasterRecoverGroupQuota item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_disasterRecoverGroupQuotaSet.push_back(item);
        }
        m_disasterRecoverGroupQuotaSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_postPaidQuotaSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostPaidQuotaSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_postPaidQuotaSet.begin(); itr != m_postPaidQuotaSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_prePaidQuotaSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrePaidQuotaSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_prePaidQuotaSet.begin(); itr != m_prePaidQuotaSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_spotPaidQuotaSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpotPaidQuotaSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_spotPaidQuotaSet.begin(); itr != m_spotPaidQuotaSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_imageQuotaSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageQuotaSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageQuotaSet.begin(); itr != m_imageQuotaSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_disasterRecoverGroupQuotaSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisasterRecoverGroupQuotaSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_disasterRecoverGroupQuotaSet.begin(); itr != m_disasterRecoverGroupQuotaSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<PostPaidQuota> AccountQuota::GetPostPaidQuotaSet() const
{
    return m_postPaidQuotaSet;
}

void AccountQuota::SetPostPaidQuotaSet(const vector<PostPaidQuota>& _postPaidQuotaSet)
{
    m_postPaidQuotaSet = _postPaidQuotaSet;
    m_postPaidQuotaSetHasBeenSet = true;
}

bool AccountQuota::PostPaidQuotaSetHasBeenSet() const
{
    return m_postPaidQuotaSetHasBeenSet;
}

vector<PrePaidQuota> AccountQuota::GetPrePaidQuotaSet() const
{
    return m_prePaidQuotaSet;
}

void AccountQuota::SetPrePaidQuotaSet(const vector<PrePaidQuota>& _prePaidQuotaSet)
{
    m_prePaidQuotaSet = _prePaidQuotaSet;
    m_prePaidQuotaSetHasBeenSet = true;
}

bool AccountQuota::PrePaidQuotaSetHasBeenSet() const
{
    return m_prePaidQuotaSetHasBeenSet;
}

vector<SpotPaidQuota> AccountQuota::GetSpotPaidQuotaSet() const
{
    return m_spotPaidQuotaSet;
}

void AccountQuota::SetSpotPaidQuotaSet(const vector<SpotPaidQuota>& _spotPaidQuotaSet)
{
    m_spotPaidQuotaSet = _spotPaidQuotaSet;
    m_spotPaidQuotaSetHasBeenSet = true;
}

bool AccountQuota::SpotPaidQuotaSetHasBeenSet() const
{
    return m_spotPaidQuotaSetHasBeenSet;
}

vector<ImageQuota> AccountQuota::GetImageQuotaSet() const
{
    return m_imageQuotaSet;
}

void AccountQuota::SetImageQuotaSet(const vector<ImageQuota>& _imageQuotaSet)
{
    m_imageQuotaSet = _imageQuotaSet;
    m_imageQuotaSetHasBeenSet = true;
}

bool AccountQuota::ImageQuotaSetHasBeenSet() const
{
    return m_imageQuotaSetHasBeenSet;
}

vector<DisasterRecoverGroupQuota> AccountQuota::GetDisasterRecoverGroupQuotaSet() const
{
    return m_disasterRecoverGroupQuotaSet;
}

void AccountQuota::SetDisasterRecoverGroupQuotaSet(const vector<DisasterRecoverGroupQuota>& _disasterRecoverGroupQuotaSet)
{
    m_disasterRecoverGroupQuotaSet = _disasterRecoverGroupQuotaSet;
    m_disasterRecoverGroupQuotaSetHasBeenSet = true;
}

bool AccountQuota::DisasterRecoverGroupQuotaSetHasBeenSet() const
{
    return m_disasterRecoverGroupQuotaSetHasBeenSet;
}

