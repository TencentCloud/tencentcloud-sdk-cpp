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

#include <tencentcloud/taf/v20200210/model/InputRecognizeTargetAudience.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Taf::V20200210::Model;
using namespace std;

InputRecognizeTargetAudience::InputRecognizeTargetAudience() :
    m_uidHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_modelIdListHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_osHasBeenSet(false),
    m_osvHasBeenSet(false),
    m_latHasBeenSet(false),
    m_lonHasBeenSet(false),
    m_deviceModelHasBeenSet(false),
    m_bidFloorHasBeenSet(false),
    m_ageHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_deliveryModeHasBeenSet(false),
    m_advertisingTypeHasBeenSet(false),
    m_macHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_uaHasBeenSet(false),
    m_appHasBeenSet(false),
    m_packageHasBeenSet(false),
    m_makerHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_accessModeHasBeenSet(false),
    m_spHasBeenSet(false),
    m_deviceWHasBeenSet(false),
    m_deviceHHasBeenSet(false),
    m_fullScreenHasBeenSet(false),
    m_impBannerWHasBeenSet(false),
    m_impBannerHHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_reqIdHasBeenSet(false),
    m_reqMd5HasBeenSet(false),
    m_adTypeHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_appVerHasBeenSet(false),
    m_reqTypeHasBeenSet(false),
    m_isAuthorizedHasBeenSet(false),
    m_deviceListHasBeenSet(false)
{
}

CoreInternalOutcome InputRecognizeTargetAudience::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.Uid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uid = string(value["Uid"].GetString());
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.AccountType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = value["AccountType"].GetInt64();
        m_accountTypeHasBeenSet = true;
    }

    if (value.HasMember("ModelIdList") && !value["ModelIdList"].IsNull())
    {
        if (!value["ModelIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.ModelIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["ModelIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_modelIdList.push_back((*itr).GetInt64());
        }
        m_modelIdListHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Os") && !value["Os"].IsNull())
    {
        if (!value["Os"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.Os` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_os = string(value["Os"].GetString());
        m_osHasBeenSet = true;
    }

    if (value.HasMember("Osv") && !value["Osv"].IsNull())
    {
        if (!value["Osv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.Osv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osv = string(value["Osv"].GetString());
        m_osvHasBeenSet = true;
    }

    if (value.HasMember("Lat") && !value["Lat"].IsNull())
    {
        if (!value["Lat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.Lat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lat = string(value["Lat"].GetString());
        m_latHasBeenSet = true;
    }

    if (value.HasMember("Lon") && !value["Lon"].IsNull())
    {
        if (!value["Lon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.Lon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lon = string(value["Lon"].GetString());
        m_lonHasBeenSet = true;
    }

    if (value.HasMember("DeviceModel") && !value["DeviceModel"].IsNull())
    {
        if (!value["DeviceModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.DeviceModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceModel = string(value["DeviceModel"].GetString());
        m_deviceModelHasBeenSet = true;
    }

    if (value.HasMember("BidFloor") && !value["BidFloor"].IsNull())
    {
        if (!value["BidFloor"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.BidFloor` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bidFloor = value["BidFloor"].GetInt64();
        m_bidFloorHasBeenSet = true;
    }

    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.Age` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_age = value["Age"].GetInt64();
        m_ageHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.Gender` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gender = value["Gender"].GetInt64();
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("DeliveryMode") && !value["DeliveryMode"].IsNull())
    {
        if (!value["DeliveryMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.DeliveryMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deliveryMode = value["DeliveryMode"].GetInt64();
        m_deliveryModeHasBeenSet = true;
    }

    if (value.HasMember("AdvertisingType") && !value["AdvertisingType"].IsNull())
    {
        if (!value["AdvertisingType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.AdvertisingType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_advertisingType = value["AdvertisingType"].GetInt64();
        m_advertisingTypeHasBeenSet = true;
    }

    if (value.HasMember("Mac") && !value["Mac"].IsNull())
    {
        if (!value["Mac"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.Mac` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mac = string(value["Mac"].GetString());
        m_macHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("Ua") && !value["Ua"].IsNull())
    {
        if (!value["Ua"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.Ua` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ua = string(value["Ua"].GetString());
        m_uaHasBeenSet = true;
    }

    if (value.HasMember("App") && !value["App"].IsNull())
    {
        if (!value["App"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.App` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_app = string(value["App"].GetString());
        m_appHasBeenSet = true;
    }

    if (value.HasMember("Package") && !value["Package"].IsNull())
    {
        if (!value["Package"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.Package` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_package = string(value["Package"].GetString());
        m_packageHasBeenSet = true;
    }

    if (value.HasMember("Maker") && !value["Maker"].IsNull())
    {
        if (!value["Maker"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.Maker` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maker = string(value["Maker"].GetString());
        m_makerHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("AccessMode") && !value["AccessMode"].IsNull())
    {
        if (!value["AccessMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.AccessMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessMode = string(value["AccessMode"].GetString());
        m_accessModeHasBeenSet = true;
    }

    if (value.HasMember("Sp") && !value["Sp"].IsNull())
    {
        if (!value["Sp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.Sp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sp = value["Sp"].GetInt64();
        m_spHasBeenSet = true;
    }

    if (value.HasMember("DeviceW") && !value["DeviceW"].IsNull())
    {
        if (!value["DeviceW"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.DeviceW` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceW = value["DeviceW"].GetInt64();
        m_deviceWHasBeenSet = true;
    }

    if (value.HasMember("DeviceH") && !value["DeviceH"].IsNull())
    {
        if (!value["DeviceH"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.DeviceH` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceH = value["DeviceH"].GetInt64();
        m_deviceHHasBeenSet = true;
    }

    if (value.HasMember("FullScreen") && !value["FullScreen"].IsNull())
    {
        if (!value["FullScreen"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.FullScreen` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fullScreen = value["FullScreen"].GetInt64();
        m_fullScreenHasBeenSet = true;
    }

    if (value.HasMember("ImpBannerW") && !value["ImpBannerW"].IsNull())
    {
        if (!value["ImpBannerW"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.ImpBannerW` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_impBannerW = value["ImpBannerW"].GetInt64();
        m_impBannerWHasBeenSet = true;
    }

    if (value.HasMember("ImpBannerH") && !value["ImpBannerH"].IsNull())
    {
        if (!value["ImpBannerH"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.ImpBannerH` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_impBannerH = value["ImpBannerH"].GetInt64();
        m_impBannerHHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Context") && !value["Context"].IsNull())
    {
        if (!value["Context"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.Context` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_context = string(value["Context"].GetString());
        m_contextHasBeenSet = true;
    }

    if (value.HasMember("Channel") && !value["Channel"].IsNull())
    {
        if (!value["Channel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.Channel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channel = string(value["Channel"].GetString());
        m_channelHasBeenSet = true;
    }

    if (value.HasMember("ReqId") && !value["ReqId"].IsNull())
    {
        if (!value["ReqId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.ReqId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reqId = string(value["ReqId"].GetString());
        m_reqIdHasBeenSet = true;
    }

    if (value.HasMember("ReqMd5") && !value["ReqMd5"].IsNull())
    {
        if (!value["ReqMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.ReqMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reqMd5 = string(value["ReqMd5"].GetString());
        m_reqMd5HasBeenSet = true;
    }

    if (value.HasMember("AdType") && !value["AdType"].IsNull())
    {
        if (!value["AdType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.AdType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_adType = value["AdType"].GetInt64();
        m_adTypeHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("AppVer") && !value["AppVer"].IsNull())
    {
        if (!value["AppVer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.AppVer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVer = string(value["AppVer"].GetString());
        m_appVerHasBeenSet = true;
    }

    if (value.HasMember("ReqType") && !value["ReqType"].IsNull())
    {
        if (!value["ReqType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.ReqType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reqType = value["ReqType"].GetInt64();
        m_reqTypeHasBeenSet = true;
    }

    if (value.HasMember("IsAuthorized") && !value["IsAuthorized"].IsNull())
    {
        if (!value["IsAuthorized"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.IsAuthorized` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isAuthorized = value["IsAuthorized"].GetUint64();
        m_isAuthorizedHasBeenSet = true;
    }

    if (value.HasMember("DeviceList") && !value["DeviceList"].IsNull())
    {
        if (!value["DeviceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InputRecognizeTargetAudience.DeviceList` is not array type"));

        const rapidjson::Value &tmpValue = value["DeviceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Device item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deviceList.push_back(item);
        }
        m_deviceListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputRecognizeTargetAudience::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountType, allocator);
    }

    if (m_modelIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_modelIdList.begin(); itr != m_modelIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_osHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Os";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_os.c_str(), allocator).Move(), allocator);
    }

    if (m_osvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Osv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osv.c_str(), allocator).Move(), allocator);
    }

    if (m_latHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lat.c_str(), allocator).Move(), allocator);
    }

    if (m_lonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lon.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceModel.c_str(), allocator).Move(), allocator);
    }

    if (m_bidFloorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BidFloor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bidFloor, allocator);
    }

    if (m_ageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Age";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_age, allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gender, allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_deliveryModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deliveryMode, allocator);
    }

    if (m_advertisingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvertisingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_advertisingType, allocator);
    }

    if (m_macHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mac";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mac.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_uaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ua";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ua.c_str(), allocator).Move(), allocator);
    }

    if (m_appHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "App";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_app.c_str(), allocator).Move(), allocator);
    }

    if (m_packageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Package";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_package.c_str(), allocator).Move(), allocator);
    }

    if (m_makerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Maker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maker.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_accessModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessMode.c_str(), allocator).Move(), allocator);
    }

    if (m_spHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sp, allocator);
    }

    if (m_deviceWHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceW";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceW, allocator);
    }

    if (m_deviceHHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceH";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceH, allocator);
    }

    if (m_fullScreenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullScreen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fullScreen, allocator);
    }

    if (m_impBannerWHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImpBannerW";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_impBannerW, allocator);
    }

    if (m_impBannerHHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImpBannerH";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_impBannerH, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

    if (m_reqIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reqId.c_str(), allocator).Move(), allocator);
    }

    if (m_reqMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reqMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_adTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_adType, allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_appVerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appVer.c_str(), allocator).Move(), allocator);
    }

    if (m_reqTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reqType, allocator);
    }

    if (m_isAuthorizedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAuthorized";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAuthorized, allocator);
    }

    if (m_deviceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deviceList.begin(); itr != m_deviceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string InputRecognizeTargetAudience::GetUid() const
{
    return m_uid;
}

void InputRecognizeTargetAudience::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool InputRecognizeTargetAudience::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

int64_t InputRecognizeTargetAudience::GetAccountType() const
{
    return m_accountType;
}

void InputRecognizeTargetAudience::SetAccountType(const int64_t& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool InputRecognizeTargetAudience::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

vector<int64_t> InputRecognizeTargetAudience::GetModelIdList() const
{
    return m_modelIdList;
}

void InputRecognizeTargetAudience::SetModelIdList(const vector<int64_t>& _modelIdList)
{
    m_modelIdList = _modelIdList;
    m_modelIdListHasBeenSet = true;
}

bool InputRecognizeTargetAudience::ModelIdListHasBeenSet() const
{
    return m_modelIdListHasBeenSet;
}

string InputRecognizeTargetAudience::GetIp() const
{
    return m_ip;
}

void InputRecognizeTargetAudience::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool InputRecognizeTargetAudience::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string InputRecognizeTargetAudience::GetOs() const
{
    return m_os;
}

void InputRecognizeTargetAudience::SetOs(const string& _os)
{
    m_os = _os;
    m_osHasBeenSet = true;
}

bool InputRecognizeTargetAudience::OsHasBeenSet() const
{
    return m_osHasBeenSet;
}

string InputRecognizeTargetAudience::GetOsv() const
{
    return m_osv;
}

void InputRecognizeTargetAudience::SetOsv(const string& _osv)
{
    m_osv = _osv;
    m_osvHasBeenSet = true;
}

bool InputRecognizeTargetAudience::OsvHasBeenSet() const
{
    return m_osvHasBeenSet;
}

string InputRecognizeTargetAudience::GetLat() const
{
    return m_lat;
}

void InputRecognizeTargetAudience::SetLat(const string& _lat)
{
    m_lat = _lat;
    m_latHasBeenSet = true;
}

bool InputRecognizeTargetAudience::LatHasBeenSet() const
{
    return m_latHasBeenSet;
}

string InputRecognizeTargetAudience::GetLon() const
{
    return m_lon;
}

void InputRecognizeTargetAudience::SetLon(const string& _lon)
{
    m_lon = _lon;
    m_lonHasBeenSet = true;
}

bool InputRecognizeTargetAudience::LonHasBeenSet() const
{
    return m_lonHasBeenSet;
}

string InputRecognizeTargetAudience::GetDeviceModel() const
{
    return m_deviceModel;
}

void InputRecognizeTargetAudience::SetDeviceModel(const string& _deviceModel)
{
    m_deviceModel = _deviceModel;
    m_deviceModelHasBeenSet = true;
}

bool InputRecognizeTargetAudience::DeviceModelHasBeenSet() const
{
    return m_deviceModelHasBeenSet;
}

int64_t InputRecognizeTargetAudience::GetBidFloor() const
{
    return m_bidFloor;
}

void InputRecognizeTargetAudience::SetBidFloor(const int64_t& _bidFloor)
{
    m_bidFloor = _bidFloor;
    m_bidFloorHasBeenSet = true;
}

bool InputRecognizeTargetAudience::BidFloorHasBeenSet() const
{
    return m_bidFloorHasBeenSet;
}

int64_t InputRecognizeTargetAudience::GetAge() const
{
    return m_age;
}

void InputRecognizeTargetAudience::SetAge(const int64_t& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool InputRecognizeTargetAudience::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

int64_t InputRecognizeTargetAudience::GetGender() const
{
    return m_gender;
}

void InputRecognizeTargetAudience::SetGender(const int64_t& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool InputRecognizeTargetAudience::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

string InputRecognizeTargetAudience::GetLocation() const
{
    return m_location;
}

void InputRecognizeTargetAudience::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool InputRecognizeTargetAudience::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

int64_t InputRecognizeTargetAudience::GetDeliveryMode() const
{
    return m_deliveryMode;
}

void InputRecognizeTargetAudience::SetDeliveryMode(const int64_t& _deliveryMode)
{
    m_deliveryMode = _deliveryMode;
    m_deliveryModeHasBeenSet = true;
}

bool InputRecognizeTargetAudience::DeliveryModeHasBeenSet() const
{
    return m_deliveryModeHasBeenSet;
}

int64_t InputRecognizeTargetAudience::GetAdvertisingType() const
{
    return m_advertisingType;
}

void InputRecognizeTargetAudience::SetAdvertisingType(const int64_t& _advertisingType)
{
    m_advertisingType = _advertisingType;
    m_advertisingTypeHasBeenSet = true;
}

bool InputRecognizeTargetAudience::AdvertisingTypeHasBeenSet() const
{
    return m_advertisingTypeHasBeenSet;
}

string InputRecognizeTargetAudience::GetMac() const
{
    return m_mac;
}

void InputRecognizeTargetAudience::SetMac(const string& _mac)
{
    m_mac = _mac;
    m_macHasBeenSet = true;
}

bool InputRecognizeTargetAudience::MacHasBeenSet() const
{
    return m_macHasBeenSet;
}

string InputRecognizeTargetAudience::GetPhone() const
{
    return m_phone;
}

void InputRecognizeTargetAudience::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool InputRecognizeTargetAudience::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string InputRecognizeTargetAudience::GetUa() const
{
    return m_ua;
}

void InputRecognizeTargetAudience::SetUa(const string& _ua)
{
    m_ua = _ua;
    m_uaHasBeenSet = true;
}

bool InputRecognizeTargetAudience::UaHasBeenSet() const
{
    return m_uaHasBeenSet;
}

string InputRecognizeTargetAudience::GetApp() const
{
    return m_app;
}

void InputRecognizeTargetAudience::SetApp(const string& _app)
{
    m_app = _app;
    m_appHasBeenSet = true;
}

bool InputRecognizeTargetAudience::AppHasBeenSet() const
{
    return m_appHasBeenSet;
}

string InputRecognizeTargetAudience::GetPackage() const
{
    return m_package;
}

void InputRecognizeTargetAudience::SetPackage(const string& _package)
{
    m_package = _package;
    m_packageHasBeenSet = true;
}

bool InputRecognizeTargetAudience::PackageHasBeenSet() const
{
    return m_packageHasBeenSet;
}

string InputRecognizeTargetAudience::GetMaker() const
{
    return m_maker;
}

void InputRecognizeTargetAudience::SetMaker(const string& _maker)
{
    m_maker = _maker;
    m_makerHasBeenSet = true;
}

bool InputRecognizeTargetAudience::MakerHasBeenSet() const
{
    return m_makerHasBeenSet;
}

string InputRecognizeTargetAudience::GetDeviceType() const
{
    return m_deviceType;
}

void InputRecognizeTargetAudience::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool InputRecognizeTargetAudience::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string InputRecognizeTargetAudience::GetAccessMode() const
{
    return m_accessMode;
}

void InputRecognizeTargetAudience::SetAccessMode(const string& _accessMode)
{
    m_accessMode = _accessMode;
    m_accessModeHasBeenSet = true;
}

bool InputRecognizeTargetAudience::AccessModeHasBeenSet() const
{
    return m_accessModeHasBeenSet;
}

int64_t InputRecognizeTargetAudience::GetSp() const
{
    return m_sp;
}

void InputRecognizeTargetAudience::SetSp(const int64_t& _sp)
{
    m_sp = _sp;
    m_spHasBeenSet = true;
}

bool InputRecognizeTargetAudience::SpHasBeenSet() const
{
    return m_spHasBeenSet;
}

int64_t InputRecognizeTargetAudience::GetDeviceW() const
{
    return m_deviceW;
}

void InputRecognizeTargetAudience::SetDeviceW(const int64_t& _deviceW)
{
    m_deviceW = _deviceW;
    m_deviceWHasBeenSet = true;
}

bool InputRecognizeTargetAudience::DeviceWHasBeenSet() const
{
    return m_deviceWHasBeenSet;
}

int64_t InputRecognizeTargetAudience::GetDeviceH() const
{
    return m_deviceH;
}

void InputRecognizeTargetAudience::SetDeviceH(const int64_t& _deviceH)
{
    m_deviceH = _deviceH;
    m_deviceHHasBeenSet = true;
}

bool InputRecognizeTargetAudience::DeviceHHasBeenSet() const
{
    return m_deviceHHasBeenSet;
}

int64_t InputRecognizeTargetAudience::GetFullScreen() const
{
    return m_fullScreen;
}

void InputRecognizeTargetAudience::SetFullScreen(const int64_t& _fullScreen)
{
    m_fullScreen = _fullScreen;
    m_fullScreenHasBeenSet = true;
}

bool InputRecognizeTargetAudience::FullScreenHasBeenSet() const
{
    return m_fullScreenHasBeenSet;
}

int64_t InputRecognizeTargetAudience::GetImpBannerW() const
{
    return m_impBannerW;
}

void InputRecognizeTargetAudience::SetImpBannerW(const int64_t& _impBannerW)
{
    m_impBannerW = _impBannerW;
    m_impBannerWHasBeenSet = true;
}

bool InputRecognizeTargetAudience::ImpBannerWHasBeenSet() const
{
    return m_impBannerWHasBeenSet;
}

int64_t InputRecognizeTargetAudience::GetImpBannerH() const
{
    return m_impBannerH;
}

void InputRecognizeTargetAudience::SetImpBannerH(const int64_t& _impBannerH)
{
    m_impBannerH = _impBannerH;
    m_impBannerHHasBeenSet = true;
}

bool InputRecognizeTargetAudience::ImpBannerHHasBeenSet() const
{
    return m_impBannerHHasBeenSet;
}

string InputRecognizeTargetAudience::GetUrl() const
{
    return m_url;
}

void InputRecognizeTargetAudience::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool InputRecognizeTargetAudience::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string InputRecognizeTargetAudience::GetContext() const
{
    return m_context;
}

void InputRecognizeTargetAudience::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool InputRecognizeTargetAudience::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

string InputRecognizeTargetAudience::GetChannel() const
{
    return m_channel;
}

void InputRecognizeTargetAudience::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool InputRecognizeTargetAudience::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string InputRecognizeTargetAudience::GetReqId() const
{
    return m_reqId;
}

void InputRecognizeTargetAudience::SetReqId(const string& _reqId)
{
    m_reqId = _reqId;
    m_reqIdHasBeenSet = true;
}

bool InputRecognizeTargetAudience::ReqIdHasBeenSet() const
{
    return m_reqIdHasBeenSet;
}

string InputRecognizeTargetAudience::GetReqMd5() const
{
    return m_reqMd5;
}

void InputRecognizeTargetAudience::SetReqMd5(const string& _reqMd5)
{
    m_reqMd5 = _reqMd5;
    m_reqMd5HasBeenSet = true;
}

bool InputRecognizeTargetAudience::ReqMd5HasBeenSet() const
{
    return m_reqMd5HasBeenSet;
}

int64_t InputRecognizeTargetAudience::GetAdType() const
{
    return m_adType;
}

void InputRecognizeTargetAudience::SetAdType(const int64_t& _adType)
{
    m_adType = _adType;
    m_adTypeHasBeenSet = true;
}

bool InputRecognizeTargetAudience::AdTypeHasBeenSet() const
{
    return m_adTypeHasBeenSet;
}

string InputRecognizeTargetAudience::GetAppName() const
{
    return m_appName;
}

void InputRecognizeTargetAudience::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool InputRecognizeTargetAudience::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string InputRecognizeTargetAudience::GetAppVer() const
{
    return m_appVer;
}

void InputRecognizeTargetAudience::SetAppVer(const string& _appVer)
{
    m_appVer = _appVer;
    m_appVerHasBeenSet = true;
}

bool InputRecognizeTargetAudience::AppVerHasBeenSet() const
{
    return m_appVerHasBeenSet;
}

int64_t InputRecognizeTargetAudience::GetReqType() const
{
    return m_reqType;
}

void InputRecognizeTargetAudience::SetReqType(const int64_t& _reqType)
{
    m_reqType = _reqType;
    m_reqTypeHasBeenSet = true;
}

bool InputRecognizeTargetAudience::ReqTypeHasBeenSet() const
{
    return m_reqTypeHasBeenSet;
}

uint64_t InputRecognizeTargetAudience::GetIsAuthorized() const
{
    return m_isAuthorized;
}

void InputRecognizeTargetAudience::SetIsAuthorized(const uint64_t& _isAuthorized)
{
    m_isAuthorized = _isAuthorized;
    m_isAuthorizedHasBeenSet = true;
}

bool InputRecognizeTargetAudience::IsAuthorizedHasBeenSet() const
{
    return m_isAuthorizedHasBeenSet;
}

vector<Device> InputRecognizeTargetAudience::GetDeviceList() const
{
    return m_deviceList;
}

void InputRecognizeTargetAudience::SetDeviceList(const vector<Device>& _deviceList)
{
    m_deviceList = _deviceList;
    m_deviceListHasBeenSet = true;
}

bool InputRecognizeTargetAudience::DeviceListHasBeenSet() const
{
    return m_deviceListHasBeenSet;
}

