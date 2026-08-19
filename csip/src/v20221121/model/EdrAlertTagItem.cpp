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

#include <tencentcloud/csip/v20221121/model/EdrAlertTagItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

EdrAlertTagItem::EdrAlertTagItem() :
    m_alertIdHasBeenSet(false),
    m_cloudTagsHasBeenSet(false),
    m_cSIPTagsHasBeenSet(false),
    m_threatTagsHasBeenSet(false),
    m_iPIntelHasBeenSet(false)
{
}

CoreInternalOutcome EdrAlertTagItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlertId") && !value["AlertId"].IsNull())
    {
        if (!value["AlertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertTagItem.AlertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alertId = string(value["AlertId"].GetString());
        m_alertIdHasBeenSet = true;
    }

    if (value.HasMember("CloudTags") && !value["CloudTags"].IsNull())
    {
        if (!value["CloudTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EdrAlertTagItem.CloudTags` is not array type"));

        const rapidjson::Value &tmpValue = value["CloudTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cloudTags.push_back(item);
        }
        m_cloudTagsHasBeenSet = true;
    }

    if (value.HasMember("CSIPTags") && !value["CSIPTags"].IsNull())
    {
        if (!value["CSIPTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EdrAlertTagItem.CSIPTags` is not array type"));

        const rapidjson::Value &tmpValue = value["CSIPTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CSIPTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cSIPTags.push_back(item);
        }
        m_cSIPTagsHasBeenSet = true;
    }

    if (value.HasMember("ThreatTags") && !value["ThreatTags"].IsNull())
    {
        if (!value["ThreatTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EdrAlertTagItem.ThreatTags` is not array type"));

        const rapidjson::Value &tmpValue = value["ThreatTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_threatTags.push_back((*itr).GetString());
        }
        m_threatTagsHasBeenSet = true;
    }

    if (value.HasMember("IPIntel") && !value["IPIntel"].IsNull())
    {
        if (!value["IPIntel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EdrAlertTagItem.IPIntel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_iPIntel.Deserialize(value["IPIntel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_iPIntelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdrAlertTagItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alertId.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cloudTags.begin(); itr != m_cloudTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cSIPTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CSIPTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cSIPTags.begin(); itr != m_cSIPTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_threatTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreatTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_threatTags.begin(); itr != m_threatTags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_iPIntelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPIntel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iPIntel.ToJsonObject(value[key.c_str()], allocator);
    }

}


string EdrAlertTagItem::GetAlertId() const
{
    return m_alertId;
}

void EdrAlertTagItem::SetAlertId(const string& _alertId)
{
    m_alertId = _alertId;
    m_alertIdHasBeenSet = true;
}

bool EdrAlertTagItem::AlertIdHasBeenSet() const
{
    return m_alertIdHasBeenSet;
}

vector<TagItem> EdrAlertTagItem::GetCloudTags() const
{
    return m_cloudTags;
}

void EdrAlertTagItem::SetCloudTags(const vector<TagItem>& _cloudTags)
{
    m_cloudTags = _cloudTags;
    m_cloudTagsHasBeenSet = true;
}

bool EdrAlertTagItem::CloudTagsHasBeenSet() const
{
    return m_cloudTagsHasBeenSet;
}

vector<CSIPTag> EdrAlertTagItem::GetCSIPTags() const
{
    return m_cSIPTags;
}

void EdrAlertTagItem::SetCSIPTags(const vector<CSIPTag>& _cSIPTags)
{
    m_cSIPTags = _cSIPTags;
    m_cSIPTagsHasBeenSet = true;
}

bool EdrAlertTagItem::CSIPTagsHasBeenSet() const
{
    return m_cSIPTagsHasBeenSet;
}

vector<string> EdrAlertTagItem::GetThreatTags() const
{
    return m_threatTags;
}

void EdrAlertTagItem::SetThreatTags(const vector<string>& _threatTags)
{
    m_threatTags = _threatTags;
    m_threatTagsHasBeenSet = true;
}

bool EdrAlertTagItem::ThreatTagsHasBeenSet() const
{
    return m_threatTagsHasBeenSet;
}

IPIntelInfo EdrAlertTagItem::GetIPIntel() const
{
    return m_iPIntel;
}

void EdrAlertTagItem::SetIPIntel(const IPIntelInfo& _iPIntel)
{
    m_iPIntel = _iPIntel;
    m_iPIntelHasBeenSet = true;
}

bool EdrAlertTagItem::IPIntelHasBeenSet() const
{
    return m_iPIntelHasBeenSet;
}

