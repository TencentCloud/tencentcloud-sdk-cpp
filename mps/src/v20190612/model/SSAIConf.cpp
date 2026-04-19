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

#include <tencentcloud/mps/v20190612/model/SSAIConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SSAIConf::SSAIConf() :
    m_adsUrlHasBeenSet(false),
    m_adsUrlsHasBeenSet(false),
    m_configAliasesHasBeenSet(false),
    m_adMarkerPassthroughHasBeenSet(false),
    m_sCTE35AdTypeHasBeenSet(false),
    m_slateAdHasBeenSet(false),
    m_thresholdHasBeenSet(false),
    m_dashMPDLocationHasBeenSet(false),
    m_adTriggersHasBeenSet(false),
    m_deliveryRestrictionsHasBeenSet(false),
    m_sourceCDNPrefixHasBeenSet(false),
    m_adCDNPrefixHasBeenSet(false),
    m_preRollAdsUrlHasBeenSet(false),
    m_preRollAdsUrlsHasBeenSet(false),
    m_preRollMaxAllowedDurationHasBeenSet(false),
    m_multiRequestHasBeenSet(false)
{
}

CoreInternalOutcome SSAIConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AdsUrl") && !value["AdsUrl"].IsNull())
    {
        if (!value["AdsUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIConf.AdsUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adsUrl = string(value["AdsUrl"].GetString());
        m_adsUrlHasBeenSet = true;
    }

    if (value.HasMember("AdsUrls") && !value["AdsUrls"].IsNull())
    {
        if (!value["AdsUrls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SSAIConf.AdsUrls` is not array type"));

        const rapidjson::Value &tmpValue = value["AdsUrls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_adsUrls.push_back((*itr).GetString());
        }
        m_adsUrlsHasBeenSet = true;
    }

    if (value.HasMember("ConfigAliases") && !value["ConfigAliases"].IsNull())
    {
        if (!value["ConfigAliases"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SSAIConf.ConfigAliases` is not array type"));

        const rapidjson::Value &tmpValue = value["ConfigAliases"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConfigAliasesInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_configAliases.push_back(item);
        }
        m_configAliasesHasBeenSet = true;
    }

    if (value.HasMember("AdMarkerPassthrough") && !value["AdMarkerPassthrough"].IsNull())
    {
        if (!value["AdMarkerPassthrough"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIConf.AdMarkerPassthrough` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_adMarkerPassthrough = value["AdMarkerPassthrough"].GetBool();
        m_adMarkerPassthroughHasBeenSet = true;
    }

    if (value.HasMember("SCTE35AdType") && !value["SCTE35AdType"].IsNull())
    {
        if (!value["SCTE35AdType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIConf.SCTE35AdType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sCTE35AdType = value["SCTE35AdType"].GetUint64();
        m_sCTE35AdTypeHasBeenSet = true;
    }

    if (value.HasMember("SlateAd") && !value["SlateAd"].IsNull())
    {
        if (!value["SlateAd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIConf.SlateAd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slateAd = string(value["SlateAd"].GetString());
        m_slateAdHasBeenSet = true;
    }

    if (value.HasMember("Threshold") && !value["Threshold"].IsNull())
    {
        if (!value["Threshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIConf.Threshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_threshold = value["Threshold"].GetUint64();
        m_thresholdHasBeenSet = true;
    }

    if (value.HasMember("DashMPDLocation") && !value["DashMPDLocation"].IsNull())
    {
        if (!value["DashMPDLocation"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIConf.DashMPDLocation` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dashMPDLocation = value["DashMPDLocation"].GetBool();
        m_dashMPDLocationHasBeenSet = true;
    }

    if (value.HasMember("AdTriggers") && !value["AdTriggers"].IsNull())
    {
        if (!value["AdTriggers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SSAIConf.AdTriggers` is not array type"));

        const rapidjson::Value &tmpValue = value["AdTriggers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_adTriggers.push_back((*itr).GetUint64());
        }
        m_adTriggersHasBeenSet = true;
    }

    if (value.HasMember("DeliveryRestrictions") && !value["DeliveryRestrictions"].IsNull())
    {
        if (!value["DeliveryRestrictions"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIConf.DeliveryRestrictions` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deliveryRestrictions = value["DeliveryRestrictions"].GetUint64();
        m_deliveryRestrictionsHasBeenSet = true;
    }

    if (value.HasMember("SourceCDNPrefix") && !value["SourceCDNPrefix"].IsNull())
    {
        if (!value["SourceCDNPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIConf.SourceCDNPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceCDNPrefix = string(value["SourceCDNPrefix"].GetString());
        m_sourceCDNPrefixHasBeenSet = true;
    }

    if (value.HasMember("AdCDNPrefix") && !value["AdCDNPrefix"].IsNull())
    {
        if (!value["AdCDNPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIConf.AdCDNPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adCDNPrefix = string(value["AdCDNPrefix"].GetString());
        m_adCDNPrefixHasBeenSet = true;
    }

    if (value.HasMember("PreRollAdsUrl") && !value["PreRollAdsUrl"].IsNull())
    {
        if (!value["PreRollAdsUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIConf.PreRollAdsUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preRollAdsUrl = string(value["PreRollAdsUrl"].GetString());
        m_preRollAdsUrlHasBeenSet = true;
    }

    if (value.HasMember("PreRollAdsUrls") && !value["PreRollAdsUrls"].IsNull())
    {
        if (!value["PreRollAdsUrls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SSAIConf.PreRollAdsUrls` is not array type"));

        const rapidjson::Value &tmpValue = value["PreRollAdsUrls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_preRollAdsUrls.push_back((*itr).GetString());
        }
        m_preRollAdsUrlsHasBeenSet = true;
    }

    if (value.HasMember("PreRollMaxAllowedDuration") && !value["PreRollMaxAllowedDuration"].IsNull())
    {
        if (!value["PreRollMaxAllowedDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIConf.PreRollMaxAllowedDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_preRollMaxAllowedDuration = value["PreRollMaxAllowedDuration"].GetInt64();
        m_preRollMaxAllowedDurationHasBeenSet = true;
    }

    if (value.HasMember("MultiRequest") && !value["MultiRequest"].IsNull())
    {
        if (!value["MultiRequest"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIConf.MultiRequest` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_multiRequest = value["MultiRequest"].GetBool();
        m_multiRequestHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SSAIConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_adsUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdsUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adsUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_adsUrlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdsUrls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_adsUrls.begin(); itr != m_adsUrls.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_configAliasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigAliases";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configAliases.begin(); itr != m_configAliases.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_adMarkerPassthroughHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdMarkerPassthrough";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_adMarkerPassthrough, allocator);
    }

    if (m_sCTE35AdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SCTE35AdType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sCTE35AdType, allocator);
    }

    if (m_slateAdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlateAd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slateAd.c_str(), allocator).Move(), allocator);
    }

    if (m_thresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Threshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_threshold, allocator);
    }

    if (m_dashMPDLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DashMPDLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dashMPDLocation, allocator);
    }

    if (m_adTriggersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdTriggers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_adTriggers.begin(); itr != m_adTriggers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_deliveryRestrictionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryRestrictions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deliveryRestrictions, allocator);
    }

    if (m_sourceCDNPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceCDNPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceCDNPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_adCDNPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdCDNPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adCDNPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_preRollAdsUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreRollAdsUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preRollAdsUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_preRollAdsUrlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreRollAdsUrls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_preRollAdsUrls.begin(); itr != m_preRollAdsUrls.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_preRollMaxAllowedDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreRollMaxAllowedDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preRollMaxAllowedDuration, allocator);
    }

    if (m_multiRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_multiRequest, allocator);
    }

}


string SSAIConf::GetAdsUrl() const
{
    return m_adsUrl;
}

void SSAIConf::SetAdsUrl(const string& _adsUrl)
{
    m_adsUrl = _adsUrl;
    m_adsUrlHasBeenSet = true;
}

bool SSAIConf::AdsUrlHasBeenSet() const
{
    return m_adsUrlHasBeenSet;
}

vector<string> SSAIConf::GetAdsUrls() const
{
    return m_adsUrls;
}

void SSAIConf::SetAdsUrls(const vector<string>& _adsUrls)
{
    m_adsUrls = _adsUrls;
    m_adsUrlsHasBeenSet = true;
}

bool SSAIConf::AdsUrlsHasBeenSet() const
{
    return m_adsUrlsHasBeenSet;
}

vector<ConfigAliasesInfo> SSAIConf::GetConfigAliases() const
{
    return m_configAliases;
}

void SSAIConf::SetConfigAliases(const vector<ConfigAliasesInfo>& _configAliases)
{
    m_configAliases = _configAliases;
    m_configAliasesHasBeenSet = true;
}

bool SSAIConf::ConfigAliasesHasBeenSet() const
{
    return m_configAliasesHasBeenSet;
}

bool SSAIConf::GetAdMarkerPassthrough() const
{
    return m_adMarkerPassthrough;
}

void SSAIConf::SetAdMarkerPassthrough(const bool& _adMarkerPassthrough)
{
    m_adMarkerPassthrough = _adMarkerPassthrough;
    m_adMarkerPassthroughHasBeenSet = true;
}

bool SSAIConf::AdMarkerPassthroughHasBeenSet() const
{
    return m_adMarkerPassthroughHasBeenSet;
}

uint64_t SSAIConf::GetSCTE35AdType() const
{
    return m_sCTE35AdType;
}

void SSAIConf::SetSCTE35AdType(const uint64_t& _sCTE35AdType)
{
    m_sCTE35AdType = _sCTE35AdType;
    m_sCTE35AdTypeHasBeenSet = true;
}

bool SSAIConf::SCTE35AdTypeHasBeenSet() const
{
    return m_sCTE35AdTypeHasBeenSet;
}

string SSAIConf::GetSlateAd() const
{
    return m_slateAd;
}

void SSAIConf::SetSlateAd(const string& _slateAd)
{
    m_slateAd = _slateAd;
    m_slateAdHasBeenSet = true;
}

bool SSAIConf::SlateAdHasBeenSet() const
{
    return m_slateAdHasBeenSet;
}

uint64_t SSAIConf::GetThreshold() const
{
    return m_threshold;
}

void SSAIConf::SetThreshold(const uint64_t& _threshold)
{
    m_threshold = _threshold;
    m_thresholdHasBeenSet = true;
}

bool SSAIConf::ThresholdHasBeenSet() const
{
    return m_thresholdHasBeenSet;
}

bool SSAIConf::GetDashMPDLocation() const
{
    return m_dashMPDLocation;
}

void SSAIConf::SetDashMPDLocation(const bool& _dashMPDLocation)
{
    m_dashMPDLocation = _dashMPDLocation;
    m_dashMPDLocationHasBeenSet = true;
}

bool SSAIConf::DashMPDLocationHasBeenSet() const
{
    return m_dashMPDLocationHasBeenSet;
}

vector<uint64_t> SSAIConf::GetAdTriggers() const
{
    return m_adTriggers;
}

void SSAIConf::SetAdTriggers(const vector<uint64_t>& _adTriggers)
{
    m_adTriggers = _adTriggers;
    m_adTriggersHasBeenSet = true;
}

bool SSAIConf::AdTriggersHasBeenSet() const
{
    return m_adTriggersHasBeenSet;
}

uint64_t SSAIConf::GetDeliveryRestrictions() const
{
    return m_deliveryRestrictions;
}

void SSAIConf::SetDeliveryRestrictions(const uint64_t& _deliveryRestrictions)
{
    m_deliveryRestrictions = _deliveryRestrictions;
    m_deliveryRestrictionsHasBeenSet = true;
}

bool SSAIConf::DeliveryRestrictionsHasBeenSet() const
{
    return m_deliveryRestrictionsHasBeenSet;
}

string SSAIConf::GetSourceCDNPrefix() const
{
    return m_sourceCDNPrefix;
}

void SSAIConf::SetSourceCDNPrefix(const string& _sourceCDNPrefix)
{
    m_sourceCDNPrefix = _sourceCDNPrefix;
    m_sourceCDNPrefixHasBeenSet = true;
}

bool SSAIConf::SourceCDNPrefixHasBeenSet() const
{
    return m_sourceCDNPrefixHasBeenSet;
}

string SSAIConf::GetAdCDNPrefix() const
{
    return m_adCDNPrefix;
}

void SSAIConf::SetAdCDNPrefix(const string& _adCDNPrefix)
{
    m_adCDNPrefix = _adCDNPrefix;
    m_adCDNPrefixHasBeenSet = true;
}

bool SSAIConf::AdCDNPrefixHasBeenSet() const
{
    return m_adCDNPrefixHasBeenSet;
}

string SSAIConf::GetPreRollAdsUrl() const
{
    return m_preRollAdsUrl;
}

void SSAIConf::SetPreRollAdsUrl(const string& _preRollAdsUrl)
{
    m_preRollAdsUrl = _preRollAdsUrl;
    m_preRollAdsUrlHasBeenSet = true;
}

bool SSAIConf::PreRollAdsUrlHasBeenSet() const
{
    return m_preRollAdsUrlHasBeenSet;
}

vector<string> SSAIConf::GetPreRollAdsUrls() const
{
    return m_preRollAdsUrls;
}

void SSAIConf::SetPreRollAdsUrls(const vector<string>& _preRollAdsUrls)
{
    m_preRollAdsUrls = _preRollAdsUrls;
    m_preRollAdsUrlsHasBeenSet = true;
}

bool SSAIConf::PreRollAdsUrlsHasBeenSet() const
{
    return m_preRollAdsUrlsHasBeenSet;
}

int64_t SSAIConf::GetPreRollMaxAllowedDuration() const
{
    return m_preRollMaxAllowedDuration;
}

void SSAIConf::SetPreRollMaxAllowedDuration(const int64_t& _preRollMaxAllowedDuration)
{
    m_preRollMaxAllowedDuration = _preRollMaxAllowedDuration;
    m_preRollMaxAllowedDurationHasBeenSet = true;
}

bool SSAIConf::PreRollMaxAllowedDurationHasBeenSet() const
{
    return m_preRollMaxAllowedDurationHasBeenSet;
}

bool SSAIConf::GetMultiRequest() const
{
    return m_multiRequest;
}

void SSAIConf::SetMultiRequest(const bool& _multiRequest)
{
    m_multiRequest = _multiRequest;
    m_multiRequestHasBeenSet = true;
}

bool SSAIConf::MultiRequestHasBeenSet() const
{
    return m_multiRequestHasBeenSet;
}

