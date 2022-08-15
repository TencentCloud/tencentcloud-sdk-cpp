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

#include <tencentcloud/irp/v20220805/model/FeedBehaviorInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Irp::V20220805::Model;
using namespace std;

FeedBehaviorInfo::FeedBehaviorInfo() :
    m_userIdHasBeenSet(false),
    m_itemIdHasBeenSet(false),
    m_behaviorTypeHasBeenSet(false),
    m_behaviorValueHasBeenSet(false),
    m_behaviorTimestampHasBeenSet(false),
    m_sceneIdHasBeenSet(false),
    m_itemTraceIdHasBeenSet(false),
    m_itemTypeHasBeenSet(false),
    m_referrerItemIdHasBeenSet(false),
    m_userIdListHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_iPHasBeenSet(false),
    m_networkHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_osVersionHasBeenSet(false),
    m_deviceModelHasBeenSet(false),
    m_extensionHasBeenSet(false)
{
}

CoreInternalOutcome FeedBehaviorInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedBehaviorInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("ItemId") && !value["ItemId"].IsNull())
    {
        if (!value["ItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedBehaviorInfo.ItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemId = string(value["ItemId"].GetString());
        m_itemIdHasBeenSet = true;
    }

    if (value.HasMember("BehaviorType") && !value["BehaviorType"].IsNull())
    {
        if (!value["BehaviorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedBehaviorInfo.BehaviorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_behaviorType = string(value["BehaviorType"].GetString());
        m_behaviorTypeHasBeenSet = true;
    }

    if (value.HasMember("BehaviorValue") && !value["BehaviorValue"].IsNull())
    {
        if (!value["BehaviorValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedBehaviorInfo.BehaviorValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_behaviorValue = string(value["BehaviorValue"].GetString());
        m_behaviorValueHasBeenSet = true;
    }

    if (value.HasMember("BehaviorTimestamp") && !value["BehaviorTimestamp"].IsNull())
    {
        if (!value["BehaviorTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FeedBehaviorInfo.BehaviorTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_behaviorTimestamp = value["BehaviorTimestamp"].GetInt64();
        m_behaviorTimestampHasBeenSet = true;
    }

    if (value.HasMember("SceneId") && !value["SceneId"].IsNull())
    {
        if (!value["SceneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedBehaviorInfo.SceneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneId = string(value["SceneId"].GetString());
        m_sceneIdHasBeenSet = true;
    }

    if (value.HasMember("ItemTraceId") && !value["ItemTraceId"].IsNull())
    {
        if (!value["ItemTraceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedBehaviorInfo.ItemTraceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemTraceId = string(value["ItemTraceId"].GetString());
        m_itemTraceIdHasBeenSet = true;
    }

    if (value.HasMember("ItemType") && !value["ItemType"].IsNull())
    {
        if (!value["ItemType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedBehaviorInfo.ItemType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemType = string(value["ItemType"].GetString());
        m_itemTypeHasBeenSet = true;
    }

    if (value.HasMember("ReferrerItemId") && !value["ReferrerItemId"].IsNull())
    {
        if (!value["ReferrerItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedBehaviorInfo.ReferrerItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referrerItemId = string(value["ReferrerItemId"].GetString());
        m_referrerItemIdHasBeenSet = true;
    }

    if (value.HasMember("UserIdList") && !value["UserIdList"].IsNull())
    {
        if (!value["UserIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FeedBehaviorInfo.UserIdList` is not array type"));

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

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedBehaviorInfo.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedBehaviorInfo.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedBehaviorInfo.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedBehaviorInfo.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedBehaviorInfo.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("Network") && !value["Network"].IsNull())
    {
        if (!value["Network"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedBehaviorInfo.Network` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_network = string(value["Network"].GetString());
        m_networkHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedBehaviorInfo.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("AppVersion") && !value["AppVersion"].IsNull())
    {
        if (!value["AppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedBehaviorInfo.AppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = string(value["AppVersion"].GetString());
        m_appVersionHasBeenSet = true;
    }

    if (value.HasMember("OsVersion") && !value["OsVersion"].IsNull())
    {
        if (!value["OsVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedBehaviorInfo.OsVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osVersion = string(value["OsVersion"].GetString());
        m_osVersionHasBeenSet = true;
    }

    if (value.HasMember("DeviceModel") && !value["DeviceModel"].IsNull())
    {
        if (!value["DeviceModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedBehaviorInfo.DeviceModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceModel = string(value["DeviceModel"].GetString());
        m_deviceModelHasBeenSet = true;
    }

    if (value.HasMember("Extension") && !value["Extension"].IsNull())
    {
        if (!value["Extension"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeedBehaviorInfo.Extension` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extension = string(value["Extension"].GetString());
        m_extensionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FeedBehaviorInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

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
        value.AddMember(iKey, rapidjson::Value(m_behaviorType.c_str(), allocator).Move(), allocator);
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

    if (m_itemTraceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemTraceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemTraceId.c_str(), allocator).Move(), allocator);
    }

    if (m_itemTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemType.c_str(), allocator).Move(), allocator);
    }

    if (m_referrerItemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferrerItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referrerItemId.c_str(), allocator).Move(), allocator);
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

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
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


string FeedBehaviorInfo::GetUserId() const
{
    return m_userId;
}

void FeedBehaviorInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool FeedBehaviorInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string FeedBehaviorInfo::GetItemId() const
{
    return m_itemId;
}

void FeedBehaviorInfo::SetItemId(const string& _itemId)
{
    m_itemId = _itemId;
    m_itemIdHasBeenSet = true;
}

bool FeedBehaviorInfo::ItemIdHasBeenSet() const
{
    return m_itemIdHasBeenSet;
}

string FeedBehaviorInfo::GetBehaviorType() const
{
    return m_behaviorType;
}

void FeedBehaviorInfo::SetBehaviorType(const string& _behaviorType)
{
    m_behaviorType = _behaviorType;
    m_behaviorTypeHasBeenSet = true;
}

bool FeedBehaviorInfo::BehaviorTypeHasBeenSet() const
{
    return m_behaviorTypeHasBeenSet;
}

string FeedBehaviorInfo::GetBehaviorValue() const
{
    return m_behaviorValue;
}

void FeedBehaviorInfo::SetBehaviorValue(const string& _behaviorValue)
{
    m_behaviorValue = _behaviorValue;
    m_behaviorValueHasBeenSet = true;
}

bool FeedBehaviorInfo::BehaviorValueHasBeenSet() const
{
    return m_behaviorValueHasBeenSet;
}

int64_t FeedBehaviorInfo::GetBehaviorTimestamp() const
{
    return m_behaviorTimestamp;
}

void FeedBehaviorInfo::SetBehaviorTimestamp(const int64_t& _behaviorTimestamp)
{
    m_behaviorTimestamp = _behaviorTimestamp;
    m_behaviorTimestampHasBeenSet = true;
}

bool FeedBehaviorInfo::BehaviorTimestampHasBeenSet() const
{
    return m_behaviorTimestampHasBeenSet;
}

string FeedBehaviorInfo::GetSceneId() const
{
    return m_sceneId;
}

void FeedBehaviorInfo::SetSceneId(const string& _sceneId)
{
    m_sceneId = _sceneId;
    m_sceneIdHasBeenSet = true;
}

bool FeedBehaviorInfo::SceneIdHasBeenSet() const
{
    return m_sceneIdHasBeenSet;
}

string FeedBehaviorInfo::GetItemTraceId() const
{
    return m_itemTraceId;
}

void FeedBehaviorInfo::SetItemTraceId(const string& _itemTraceId)
{
    m_itemTraceId = _itemTraceId;
    m_itemTraceIdHasBeenSet = true;
}

bool FeedBehaviorInfo::ItemTraceIdHasBeenSet() const
{
    return m_itemTraceIdHasBeenSet;
}

string FeedBehaviorInfo::GetItemType() const
{
    return m_itemType;
}

void FeedBehaviorInfo::SetItemType(const string& _itemType)
{
    m_itemType = _itemType;
    m_itemTypeHasBeenSet = true;
}

bool FeedBehaviorInfo::ItemTypeHasBeenSet() const
{
    return m_itemTypeHasBeenSet;
}

string FeedBehaviorInfo::GetReferrerItemId() const
{
    return m_referrerItemId;
}

void FeedBehaviorInfo::SetReferrerItemId(const string& _referrerItemId)
{
    m_referrerItemId = _referrerItemId;
    m_referrerItemIdHasBeenSet = true;
}

bool FeedBehaviorInfo::ReferrerItemIdHasBeenSet() const
{
    return m_referrerItemIdHasBeenSet;
}

vector<UserIdInfo> FeedBehaviorInfo::GetUserIdList() const
{
    return m_userIdList;
}

void FeedBehaviorInfo::SetUserIdList(const vector<UserIdInfo>& _userIdList)
{
    m_userIdList = _userIdList;
    m_userIdListHasBeenSet = true;
}

bool FeedBehaviorInfo::UserIdListHasBeenSet() const
{
    return m_userIdListHasBeenSet;
}

string FeedBehaviorInfo::GetSource() const
{
    return m_source;
}

void FeedBehaviorInfo::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool FeedBehaviorInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string FeedBehaviorInfo::GetCountry() const
{
    return m_country;
}

void FeedBehaviorInfo::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool FeedBehaviorInfo::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string FeedBehaviorInfo::GetProvince() const
{
    return m_province;
}

void FeedBehaviorInfo::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool FeedBehaviorInfo::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string FeedBehaviorInfo::GetCity() const
{
    return m_city;
}

void FeedBehaviorInfo::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool FeedBehaviorInfo::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string FeedBehaviorInfo::GetIP() const
{
    return m_iP;
}

void FeedBehaviorInfo::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool FeedBehaviorInfo::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

string FeedBehaviorInfo::GetNetwork() const
{
    return m_network;
}

void FeedBehaviorInfo::SetNetwork(const string& _network)
{
    m_network = _network;
    m_networkHasBeenSet = true;
}

bool FeedBehaviorInfo::NetworkHasBeenSet() const
{
    return m_networkHasBeenSet;
}

string FeedBehaviorInfo::GetPlatform() const
{
    return m_platform;
}

void FeedBehaviorInfo::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool FeedBehaviorInfo::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string FeedBehaviorInfo::GetAppVersion() const
{
    return m_appVersion;
}

void FeedBehaviorInfo::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool FeedBehaviorInfo::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string FeedBehaviorInfo::GetOsVersion() const
{
    return m_osVersion;
}

void FeedBehaviorInfo::SetOsVersion(const string& _osVersion)
{
    m_osVersion = _osVersion;
    m_osVersionHasBeenSet = true;
}

bool FeedBehaviorInfo::OsVersionHasBeenSet() const
{
    return m_osVersionHasBeenSet;
}

string FeedBehaviorInfo::GetDeviceModel() const
{
    return m_deviceModel;
}

void FeedBehaviorInfo::SetDeviceModel(const string& _deviceModel)
{
    m_deviceModel = _deviceModel;
    m_deviceModelHasBeenSet = true;
}

bool FeedBehaviorInfo::DeviceModelHasBeenSet() const
{
    return m_deviceModelHasBeenSet;
}

string FeedBehaviorInfo::GetExtension() const
{
    return m_extension;
}

void FeedBehaviorInfo::SetExtension(const string& _extension)
{
    m_extension = _extension;
    m_extensionHasBeenSet = true;
}

bool FeedBehaviorInfo::ExtensionHasBeenSet() const
{
    return m_extensionHasBeenSet;
}

