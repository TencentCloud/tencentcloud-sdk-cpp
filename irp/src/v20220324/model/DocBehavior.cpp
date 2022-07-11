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

#include <tencentcloud/irp/v20220324/model/DocBehavior.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Irp::V20220324::Model;
using namespace std;

DocBehavior::DocBehavior() :
    m_itemIdHasBeenSet(false),
    m_behaviorTypeHasBeenSet(false),
    m_behaviorValueHasBeenSet(false),
    m_behaviorTimestampHasBeenSet(false),
    m_sceneIdHasBeenSet(false),
    m_userIdListHasBeenSet(false),
    m_recTraceIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_itemTypeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_videoPlayDurationHasBeenSet(false),
    m_referrerItemIdHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_districtHasBeenSet(false),
    m_iPHasBeenSet(false),
    m_networkHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_osVersionHasBeenSet(false),
    m_deviceModelHasBeenSet(false),
    m_extensionHasBeenSet(false)
{
}

CoreInternalOutcome DocBehavior::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemId") && !value["ItemId"].IsNull())
    {
        if (!value["ItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocBehavior.ItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemId = string(value["ItemId"].GetString());
        m_itemIdHasBeenSet = true;
    }

    if (value.HasMember("BehaviorType") && !value["BehaviorType"].IsNull())
    {
        if (!value["BehaviorType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocBehavior.BehaviorType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_behaviorType = value["BehaviorType"].GetInt64();
        m_behaviorTypeHasBeenSet = true;
    }

    if (value.HasMember("BehaviorValue") && !value["BehaviorValue"].IsNull())
    {
        if (!value["BehaviorValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocBehavior.BehaviorValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_behaviorValue = string(value["BehaviorValue"].GetString());
        m_behaviorValueHasBeenSet = true;
    }

    if (value.HasMember("BehaviorTimestamp") && !value["BehaviorTimestamp"].IsNull())
    {
        if (!value["BehaviorTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocBehavior.BehaviorTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_behaviorTimestamp = value["BehaviorTimestamp"].GetInt64();
        m_behaviorTimestampHasBeenSet = true;
    }

    if (value.HasMember("SceneId") && !value["SceneId"].IsNull())
    {
        if (!value["SceneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocBehavior.SceneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneId = string(value["SceneId"].GetString());
        m_sceneIdHasBeenSet = true;
    }

    if (value.HasMember("UserIdList") && !value["UserIdList"].IsNull())
    {
        if (!value["UserIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DocBehavior.UserIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["UserIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserIdInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_userIdList.push_back(item);
        }
        m_userIdListHasBeenSet = true;
    }

    if (value.HasMember("RecTraceId") && !value["RecTraceId"].IsNull())
    {
        if (!value["RecTraceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocBehavior.RecTraceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recTraceId = string(value["RecTraceId"].GetString());
        m_recTraceIdHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocBehavior.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("ItemType") && !value["ItemType"].IsNull())
    {
        if (!value["ItemType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocBehavior.ItemType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_itemType = value["ItemType"].GetInt64();
        m_itemTypeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocBehavior.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("VideoPlayDuration") && !value["VideoPlayDuration"].IsNull())
    {
        if (!value["VideoPlayDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocBehavior.VideoPlayDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_videoPlayDuration = value["VideoPlayDuration"].GetInt64();
        m_videoPlayDurationHasBeenSet = true;
    }

    if (value.HasMember("ReferrerItemId") && !value["ReferrerItemId"].IsNull())
    {
        if (!value["ReferrerItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocBehavior.ReferrerItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referrerItemId = string(value["ReferrerItemId"].GetString());
        m_referrerItemIdHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocBehavior.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocBehavior.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocBehavior.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("District") && !value["District"].IsNull())
    {
        if (!value["District"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocBehavior.District` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_district = string(value["District"].GetString());
        m_districtHasBeenSet = true;
    }

    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocBehavior.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("Network") && !value["Network"].IsNull())
    {
        if (!value["Network"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocBehavior.Network` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_network = string(value["Network"].GetString());
        m_networkHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocBehavior.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("AppVersion") && !value["AppVersion"].IsNull())
    {
        if (!value["AppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocBehavior.AppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = string(value["AppVersion"].GetString());
        m_appVersionHasBeenSet = true;
    }

    if (value.HasMember("OsVersion") && !value["OsVersion"].IsNull())
    {
        if (!value["OsVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocBehavior.OsVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osVersion = string(value["OsVersion"].GetString());
        m_osVersionHasBeenSet = true;
    }

    if (value.HasMember("DeviceModel") && !value["DeviceModel"].IsNull())
    {
        if (!value["DeviceModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocBehavior.DeviceModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceModel = string(value["DeviceModel"].GetString());
        m_deviceModelHasBeenSet = true;
    }

    if (value.HasMember("Extension") && !value["Extension"].IsNull())
    {
        if (!value["Extension"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocBehavior.Extension` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extension = string(value["Extension"].GetString());
        m_extensionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocBehavior::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemId.c_str(), allocator).Move(), allocator);
    }

    if (m_behaviorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BehaviorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_behaviorType, allocator);
    }

    if (m_behaviorValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BehaviorValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_behaviorValue.c_str(), allocator).Move(), allocator);
    }

    if (m_behaviorTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BehaviorTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_behaviorTimestamp, allocator);
    }

    if (m_sceneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userIdList.begin(); itr != m_userIdList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_recTraceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecTraceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recTraceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_itemTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_itemType, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_videoPlayDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoPlayDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoPlayDuration, allocator);
    }

    if (m_referrerItemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferrerItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referrerItemId.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_districtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "District";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_district.c_str(), allocator).Move(), allocator);
    }

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_networkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Network";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_network.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_osVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceModel.c_str(), allocator).Move(), allocator);
    }

    if (m_extensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extension.c_str(), allocator).Move(), allocator);
    }

}


string DocBehavior::GetItemId() const
{
    return m_itemId;
}

void DocBehavior::SetItemId(const string& _itemId)
{
    m_itemId = _itemId;
    m_itemIdHasBeenSet = true;
}

bool DocBehavior::ItemIdHasBeenSet() const
{
    return m_itemIdHasBeenSet;
}

int64_t DocBehavior::GetBehaviorType() const
{
    return m_behaviorType;
}

void DocBehavior::SetBehaviorType(const int64_t& _behaviorType)
{
    m_behaviorType = _behaviorType;
    m_behaviorTypeHasBeenSet = true;
}

bool DocBehavior::BehaviorTypeHasBeenSet() const
{
    return m_behaviorTypeHasBeenSet;
}

string DocBehavior::GetBehaviorValue() const
{
    return m_behaviorValue;
}

void DocBehavior::SetBehaviorValue(const string& _behaviorValue)
{
    m_behaviorValue = _behaviorValue;
    m_behaviorValueHasBeenSet = true;
}

bool DocBehavior::BehaviorValueHasBeenSet() const
{
    return m_behaviorValueHasBeenSet;
}

int64_t DocBehavior::GetBehaviorTimestamp() const
{
    return m_behaviorTimestamp;
}

void DocBehavior::SetBehaviorTimestamp(const int64_t& _behaviorTimestamp)
{
    m_behaviorTimestamp = _behaviorTimestamp;
    m_behaviorTimestampHasBeenSet = true;
}

bool DocBehavior::BehaviorTimestampHasBeenSet() const
{
    return m_behaviorTimestampHasBeenSet;
}

string DocBehavior::GetSceneId() const
{
    return m_sceneId;
}

void DocBehavior::SetSceneId(const string& _sceneId)
{
    m_sceneId = _sceneId;
    m_sceneIdHasBeenSet = true;
}

bool DocBehavior::SceneIdHasBeenSet() const
{
    return m_sceneIdHasBeenSet;
}

vector<UserIdInfo> DocBehavior::GetUserIdList() const
{
    return m_userIdList;
}

void DocBehavior::SetUserIdList(const vector<UserIdInfo>& _userIdList)
{
    m_userIdList = _userIdList;
    m_userIdListHasBeenSet = true;
}

bool DocBehavior::UserIdListHasBeenSet() const
{
    return m_userIdListHasBeenSet;
}

string DocBehavior::GetRecTraceId() const
{
    return m_recTraceId;
}

void DocBehavior::SetRecTraceId(const string& _recTraceId)
{
    m_recTraceId = _recTraceId;
    m_recTraceIdHasBeenSet = true;
}

bool DocBehavior::RecTraceIdHasBeenSet() const
{
    return m_recTraceIdHasBeenSet;
}

string DocBehavior::GetSource() const
{
    return m_source;
}

void DocBehavior::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DocBehavior::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

int64_t DocBehavior::GetItemType() const
{
    return m_itemType;
}

void DocBehavior::SetItemType(const int64_t& _itemType)
{
    m_itemType = _itemType;
    m_itemTypeHasBeenSet = true;
}

bool DocBehavior::ItemTypeHasBeenSet() const
{
    return m_itemTypeHasBeenSet;
}

string DocBehavior::GetAppId() const
{
    return m_appId;
}

void DocBehavior::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DocBehavior::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DocBehavior::GetVideoPlayDuration() const
{
    return m_videoPlayDuration;
}

void DocBehavior::SetVideoPlayDuration(const int64_t& _videoPlayDuration)
{
    m_videoPlayDuration = _videoPlayDuration;
    m_videoPlayDurationHasBeenSet = true;
}

bool DocBehavior::VideoPlayDurationHasBeenSet() const
{
    return m_videoPlayDurationHasBeenSet;
}

string DocBehavior::GetReferrerItemId() const
{
    return m_referrerItemId;
}

void DocBehavior::SetReferrerItemId(const string& _referrerItemId)
{
    m_referrerItemId = _referrerItemId;
    m_referrerItemIdHasBeenSet = true;
}

bool DocBehavior::ReferrerItemIdHasBeenSet() const
{
    return m_referrerItemIdHasBeenSet;
}

string DocBehavior::GetCountry() const
{
    return m_country;
}

void DocBehavior::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool DocBehavior::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string DocBehavior::GetProvince() const
{
    return m_province;
}

void DocBehavior::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool DocBehavior::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string DocBehavior::GetCity() const
{
    return m_city;
}

void DocBehavior::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool DocBehavior::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string DocBehavior::GetDistrict() const
{
    return m_district;
}

void DocBehavior::SetDistrict(const string& _district)
{
    m_district = _district;
    m_districtHasBeenSet = true;
}

bool DocBehavior::DistrictHasBeenSet() const
{
    return m_districtHasBeenSet;
}

string DocBehavior::GetIP() const
{
    return m_iP;
}

void DocBehavior::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool DocBehavior::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

string DocBehavior::GetNetwork() const
{
    return m_network;
}

void DocBehavior::SetNetwork(const string& _network)
{
    m_network = _network;
    m_networkHasBeenSet = true;
}

bool DocBehavior::NetworkHasBeenSet() const
{
    return m_networkHasBeenSet;
}

string DocBehavior::GetPlatform() const
{
    return m_platform;
}

void DocBehavior::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DocBehavior::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DocBehavior::GetAppVersion() const
{
    return m_appVersion;
}

void DocBehavior::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool DocBehavior::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string DocBehavior::GetOsVersion() const
{
    return m_osVersion;
}

void DocBehavior::SetOsVersion(const string& _osVersion)
{
    m_osVersion = _osVersion;
    m_osVersionHasBeenSet = true;
}

bool DocBehavior::OsVersionHasBeenSet() const
{
    return m_osVersionHasBeenSet;
}

string DocBehavior::GetDeviceModel() const
{
    return m_deviceModel;
}

void DocBehavior::SetDeviceModel(const string& _deviceModel)
{
    m_deviceModel = _deviceModel;
    m_deviceModelHasBeenSet = true;
}

bool DocBehavior::DeviceModelHasBeenSet() const
{
    return m_deviceModelHasBeenSet;
}

string DocBehavior::GetExtension() const
{
    return m_extension;
}

void DocBehavior::SetExtension(const string& _extension)
{
    m_extension = _extension;
    m_extensionHasBeenSet = true;
}

bool DocBehavior::ExtensionHasBeenSet() const
{
    return m_extensionHasBeenSet;
}

