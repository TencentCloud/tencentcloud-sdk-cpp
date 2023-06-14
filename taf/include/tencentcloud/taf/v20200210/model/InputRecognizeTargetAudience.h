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

#ifndef TENCENTCLOUD_TAF_V20200210_MODEL_INPUTRECOGNIZETARGETAUDIENCE_H_
#define TENCENTCLOUD_TAF_V20200210_MODEL_INPUTRECOGNIZETARGETAUDIENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/taf/v20200210/model/Device.h>


namespace TencentCloud
{
    namespace Taf
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 流量反欺诈-验准入参
                */
                class InputRecognizeTargetAudience : public AbstractModel
                {
                public:
                    InputRecognizeTargetAudience();
                    ~InputRecognizeTargetAudience() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型ID列表
                     * @return ModelIdList 模型ID列表
                     * 
                     */
                    std::vector<int64_t> GetModelIdList() const;

                    /**
                     * 设置模型ID列表
                     * @param _modelIdList 模型ID列表
                     * 
                     */
                    void SetModelIdList(const std::vector<int64_t>& _modelIdList);

                    /**
                     * 判断参数 ModelIdList 是否已赋值
                     * @return ModelIdList 是否已赋值
                     * 
                     */
                    bool ModelIdListHasBeenSet() const;

                    /**
                     * 获取设备ID，AccountType指定的类型
                     * @return Uid 设备ID，AccountType指定的类型
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置设备ID，AccountType指定的类型
                     * @param _uid 设备ID，AccountType指定的类型
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取设备号类型，1.imei 2.imeiMd5（小写后转MD5转小写）3.idfa， 4.idfaMd5（大写后转MD5转小写），5.手机号,256.其它
                     * @return AccountType 设备号类型，1.imei 2.imeiMd5（小写后转MD5转小写）3.idfa， 4.idfaMd5（大写后转MD5转小写），5.手机号,256.其它
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 设置设备号类型，1.imei 2.imeiMd5（小写后转MD5转小写）3.idfa， 4.idfaMd5（大写后转MD5转小写），5.手机号,256.其它
                     * @param _accountType 设备号类型，1.imei 2.imeiMd5（小写后转MD5转小写）3.idfa， 4.idfaMd5（大写后转MD5转小写），5.手机号,256.其它
                     * 
                     */
                    void SetAccountType(const int64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取用户IP
                     * @return Ip 用户IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置用户IP
                     * @param _ip 用户IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取操作系统类型(unknown，android，ios，windows)
                     * @return Os 操作系统类型(unknown，android，ios，windows)
                     * 
                     */
                    std::string GetOs() const;

                    /**
                     * 设置操作系统类型(unknown，android，ios，windows)
                     * @param _os 操作系统类型(unknown，android，ios，windows)
                     * 
                     */
                    void SetOs(const std::string& _os);

                    /**
                     * 判断参数 Os 是否已赋值
                     * @return Os 是否已赋值
                     * 
                     */
                    bool OsHasBeenSet() const;

                    /**
                     * 获取操作系统版本
                     * @return Osv 操作系统版本
                     * 
                     */
                    std::string GetOsv() const;

                    /**
                     * 设置操作系统版本
                     * @param _osv 操作系统版本
                     * 
                     */
                    void SetOsv(const std::string& _osv);

                    /**
                     * 判断参数 Osv 是否已赋值
                     * @return Osv 是否已赋值
                     * 
                     */
                    bool OsvHasBeenSet() const;

                    /**
                     * 获取纬度
                     * @return Lat 纬度
                     * 
                     */
                    std::string GetLat() const;

                    /**
                     * 设置纬度
                     * @param _lat 纬度
                     * 
                     */
                    void SetLat(const std::string& _lat);

                    /**
                     * 判断参数 Lat 是否已赋值
                     * @return Lat 是否已赋值
                     * 
                     */
                    bool LatHasBeenSet() const;

                    /**
                     * 获取经度
                     * @return Lon 经度
                     * 
                     */
                    std::string GetLon() const;

                    /**
                     * 设置经度
                     * @param _lon 经度
                     * 
                     */
                    void SetLon(const std::string& _lon);

                    /**
                     * 判断参数 Lon 是否已赋值
                     * @return Lon 是否已赋值
                     * 
                     */
                    bool LonHasBeenSet() const;

                    /**
                     * 获取设备型号(MI 6)
                     * @return DeviceModel 设备型号(MI 6)
                     * 
                     */
                    std::string GetDeviceModel() const;

                    /**
                     * 设置设备型号(MI 6)
                     * @param _deviceModel 设备型号(MI 6)
                     * 
                     */
                    void SetDeviceModel(const std::string& _deviceModel);

                    /**
                     * 判断参数 DeviceModel 是否已赋值
                     * @return DeviceModel 是否已赋值
                     * 
                     */
                    bool DeviceModelHasBeenSet() const;

                    /**
                     * 获取竞价底价
                     * @return BidFloor 竞价底价
                     * 
                     */
                    int64_t GetBidFloor() const;

                    /**
                     * 设置竞价底价
                     * @param _bidFloor 竞价底价
                     * 
                     */
                    void SetBidFloor(const int64_t& _bidFloor);

                    /**
                     * 判断参数 BidFloor 是否已赋值
                     * @return BidFloor 是否已赋值
                     * 
                     */
                    bool BidFloorHasBeenSet() const;

                    /**
                     * 获取年龄
                     * @return Age 年龄
                     * 
                     */
                    int64_t GetAge() const;

                    /**
                     * 设置年龄
                     * @param _age 年龄
                     * 
                     */
                    void SetAge(const int64_t& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取性别(1.MALE 2.FEMALE)
                     * @return Gender 性别(1.MALE 2.FEMALE)
                     * 
                     */
                    int64_t GetGender() const;

                    /**
                     * 设置性别(1.MALE 2.FEMALE)
                     * @param _gender 性别(1.MALE 2.FEMALE)
                     * 
                     */
                    void SetGender(const int64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取用户地址
                     * @return Location 用户地址
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置用户地址
                     * @param _location 用户地址
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取投放模式（0=PDB，1=PD，2=RTB，10=其他）
                     * @return DeliveryMode 投放模式（0=PDB，1=PD，2=RTB，10=其他）
                     * 
                     */
                    int64_t GetDeliveryMode() const;

                    /**
                     * 设置投放模式（0=PDB，1=PD，2=RTB，10=其他）
                     * @param _deliveryMode 投放模式（0=PDB，1=PD，2=RTB，10=其他）
                     * 
                     */
                    void SetDeliveryMode(const int64_t& _deliveryMode);

                    /**
                     * 判断参数 DeliveryMode 是否已赋值
                     * @return DeliveryMode 是否已赋值
                     * 
                     */
                    bool DeliveryModeHasBeenSet() const;

                    /**
                     * 获取广告位类型<br />（0=前贴片，1=开屏广告，2=网页头部广告、3=网页中部广告、4=网页底部广告、5=悬浮广告、10=其它）
                     * @return AdvertisingType 广告位类型<br />（0=前贴片，1=开屏广告，2=网页头部广告、3=网页中部广告、4=网页底部广告、5=悬浮广告、10=其它）
                     * 
                     */
                    int64_t GetAdvertisingType() const;

                    /**
                     * 设置广告位类型<br />（0=前贴片，1=开屏广告，2=网页头部广告、3=网页中部广告、4=网页底部广告、5=悬浮广告、10=其它）
                     * @param _advertisingType 广告位类型<br />（0=前贴片，1=开屏广告，2=网页头部广告、3=网页中部广告、4=网页底部广告、5=悬浮广告、10=其它）
                     * 
                     */
                    void SetAdvertisingType(const int64_t& _advertisingType);

                    /**
                     * 判断参数 AdvertisingType 是否已赋值
                     * @return AdvertisingType 是否已赋值
                     * 
                     */
                    bool AdvertisingTypeHasBeenSet() const;

                    /**
                     * 获取mac地址，建议提供
                     * @return Mac mac地址，建议提供
                     * 
                     */
                    std::string GetMac() const;

                    /**
                     * 设置mac地址，建议提供
                     * @param _mac mac地址，建议提供
                     * 
                     */
                    void SetMac(const std::string& _mac);

                    /**
                     * 判断参数 Mac 是否已赋值
                     * @return Mac 是否已赋值
                     * 
                     */
                    bool MacHasBeenSet() const;

                    /**
                     * 获取电话号码
                     * @return Phone 电话号码
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置电话号码
                     * @param _phone 电话号码
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取浏览器类型
                     * @return Ua 浏览器类型
                     * 
                     */
                    std::string GetUa() const;

                    /**
                     * 设置浏览器类型
                     * @param _ua 浏览器类型
                     * 
                     */
                    void SetUa(const std::string& _ua);

                    /**
                     * 判断参数 Ua 是否已赋值
                     * @return Ua 是否已赋值
                     * 
                     */
                    bool UaHasBeenSet() const;

                    /**
                     * 获取客户端应用
                     * @return App 客户端应用
                     * 
                     */
                    std::string GetApp() const;

                    /**
                     * 设置客户端应用
                     * @param _app 客户端应用
                     * 
                     */
                    void SetApp(const std::string& _app);

                    /**
                     * 判断参数 App 是否已赋值
                     * @return App 是否已赋值
                     * 
                     */
                    bool AppHasBeenSet() const;

                    /**
                     * 获取应用包名
                     * @return Package 应用包名
                     * 
                     */
                    std::string GetPackage() const;

                    /**
                     * 设置应用包名
                     * @param _package 应用包名
                     * 
                     */
                    void SetPackage(const std::string& _package);

                    /**
                     * 判断参数 Package 是否已赋值
                     * @return Package 是否已赋值
                     * 
                     */
                    bool PackageHasBeenSet() const;

                    /**
                     * 获取设备制造商
                     * @return Maker 设备制造商
                     * 
                     */
                    std::string GetMaker() const;

                    /**
                     * 设置设备制造商
                     * @param _maker 设备制造商
                     * 
                     */
                    void SetMaker(const std::string& _maker);

                    /**
                     * 判断参数 Maker 是否已赋值
                     * @return Maker 是否已赋值
                     * 
                     */
                    bool MakerHasBeenSet() const;

                    /**
                     * 获取设备类型（PHONE,TABLET）
                     * @return DeviceType 设备类型（PHONE,TABLET）
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型（PHONE,TABLET）
                     * @param _deviceType 设备类型（PHONE,TABLET）
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取入网方式(wifi,4g,3g,2g)
                     * @return AccessMode 入网方式(wifi,4g,3g,2g)
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置入网方式(wifi,4g,3g,2g)
                     * @param _accessMode 入网方式(wifi,4g,3g,2g)
                     * 
                     */
                    void SetAccessMode(const std::string& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     * 
                     */
                    bool AccessModeHasBeenSet() const;

                    /**
                     * 获取运营商(1.移动 2.联通 3.电信等)
                     * @return Sp 运营商(1.移动 2.联通 3.电信等)
                     * 
                     */
                    int64_t GetSp() const;

                    /**
                     * 设置运营商(1.移动 2.联通 3.电信等)
                     * @param _sp 运营商(1.移动 2.联通 3.电信等)
                     * 
                     */
                    void SetSp(const int64_t& _sp);

                    /**
                     * 判断参数 Sp 是否已赋值
                     * @return Sp 是否已赋值
                     * 
                     */
                    bool SpHasBeenSet() const;

                    /**
                     * 获取设备屏幕分辨率宽度像素数
                     * @return DeviceW 设备屏幕分辨率宽度像素数
                     * 
                     */
                    int64_t GetDeviceW() const;

                    /**
                     * 设置设备屏幕分辨率宽度像素数
                     * @param _deviceW 设备屏幕分辨率宽度像素数
                     * 
                     */
                    void SetDeviceW(const int64_t& _deviceW);

                    /**
                     * 判断参数 DeviceW 是否已赋值
                     * @return DeviceW 是否已赋值
                     * 
                     */
                    bool DeviceWHasBeenSet() const;

                    /**
                     * 获取设备屏幕分辨率高度像素数
                     * @return DeviceH 设备屏幕分辨率高度像素数
                     * 
                     */
                    int64_t GetDeviceH() const;

                    /**
                     * 设置设备屏幕分辨率高度像素数
                     * @param _deviceH 设备屏幕分辨率高度像素数
                     * 
                     */
                    void SetDeviceH(const int64_t& _deviceH);

                    /**
                     * 判断参数 DeviceH 是否已赋值
                     * @return DeviceH 是否已赋值
                     * 
                     */
                    bool DeviceHHasBeenSet() const;

                    /**
                     * 获取是否全屏插广告(0-否，1-是)
                     * @return FullScreen 是否全屏插广告(0-否，1-是)
                     * 
                     */
                    int64_t GetFullScreen() const;

                    /**
                     * 设置是否全屏插广告(0-否，1-是)
                     * @param _fullScreen 是否全屏插广告(0-否，1-是)
                     * 
                     */
                    void SetFullScreen(const int64_t& _fullScreen);

                    /**
                     * 判断参数 FullScreen 是否已赋值
                     * @return FullScreen 是否已赋值
                     * 
                     */
                    bool FullScreenHasBeenSet() const;

                    /**
                     * 获取广告位宽度
                     * @return ImpBannerW 广告位宽度
                     * 
                     */
                    int64_t GetImpBannerW() const;

                    /**
                     * 设置广告位宽度
                     * @param _impBannerW 广告位宽度
                     * 
                     */
                    void SetImpBannerW(const int64_t& _impBannerW);

                    /**
                     * 判断参数 ImpBannerW 是否已赋值
                     * @return ImpBannerW 是否已赋值
                     * 
                     */
                    bool ImpBannerWHasBeenSet() const;

                    /**
                     * 获取广告位高度
                     * @return ImpBannerH 广告位高度
                     * 
                     */
                    int64_t GetImpBannerH() const;

                    /**
                     * 设置广告位高度
                     * @param _impBannerH 广告位高度
                     * 
                     */
                    void SetImpBannerH(const int64_t& _impBannerH);

                    /**
                     * 判断参数 ImpBannerH 是否已赋值
                     * @return ImpBannerH 是否已赋值
                     * 
                     */
                    bool ImpBannerHHasBeenSet() const;

                    /**
                     * 获取网址
                     * @return Url 网址
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置网址
                     * @param _url 网址
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取上下文信息
                     * @return Context 上下文信息
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置上下文信息
                     * @param _context 上下文信息
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取渠道
                     * @return Channel 渠道
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置渠道
                     * @param _channel 渠道
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取请求ID
                     * @return ReqId 请求ID
                     * 
                     */
                    std::string GetReqId() const;

                    /**
                     * 设置请求ID
                     * @param _reqId 请求ID
                     * 
                     */
                    void SetReqId(const std::string& _reqId);

                    /**
                     * 判断参数 ReqId 是否已赋值
                     * @return ReqId 是否已赋值
                     * 
                     */
                    bool ReqIdHasBeenSet() const;

                    /**
                     * 获取请求ID的md5值
                     * @return ReqMd5 请求ID的md5值
                     * 
                     */
                    std::string GetReqMd5() const;

                    /**
                     * 设置请求ID的md5值
                     * @param _reqMd5 请求ID的md5值
                     * 
                     */
                    void SetReqMd5(const std::string& _reqMd5);

                    /**
                     * 判断参数 ReqMd5 是否已赋值
                     * @return ReqMd5 是否已赋值
                     * 
                     */
                    bool ReqMd5HasBeenSet() const;

                    /**
                     * 获取ad_type
                     * @return AdType ad_type
                     * 
                     */
                    int64_t GetAdType() const;

                    /**
                     * 设置ad_type
                     * @param _adType ad_type
                     * 
                     */
                    void SetAdType(const int64_t& _adType);

                    /**
                     * 判断参数 AdType 是否已赋值
                     * @return AdType 是否已赋值
                     * 
                     */
                    bool AdTypeHasBeenSet() const;

                    /**
                     * 获取app名称
                     * @return AppName app名称
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置app名称
                     * @param _appName app名称
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取app版本描述
                     * @return AppVer app版本描述
                     * 
                     */
                    std::string GetAppVer() const;

                    /**
                     * 设置app版本描述
                     * @param _appVer app版本描述
                     * 
                     */
                    void SetAppVer(const std::string& _appVer);

                    /**
                     * 判断参数 AppVer 是否已赋值
                     * @return AppVer 是否已赋值
                     * 
                     */
                    bool AppVerHasBeenSet() const;

                    /**
                     * 获取竞价模式1：rtb 2:pd
                     * @return ReqType 竞价模式1：rtb 2:pd
                     * 
                     */
                    int64_t GetReqType() const;

                    /**
                     * 设置竞价模式1：rtb 2:pd
                     * @param _reqType 竞价模式1：rtb 2:pd
                     * 
                     */
                    void SetReqType(const int64_t& _reqType);

                    /**
                     * 判断参数 ReqType 是否已赋值
                     * @return ReqType 是否已赋值
                     * 
                     */
                    bool ReqTypeHasBeenSet() const;

                    /**
                     * 获取用户是否授权,1为授权，0为未授权
                     * @return IsAuthorized 用户是否授权,1为授权，0为未授权
                     * 
                     */
                    uint64_t GetIsAuthorized() const;

                    /**
                     * 设置用户是否授权,1为授权，0为未授权
                     * @param _isAuthorized 用户是否授权,1为授权，0为未授权
                     * 
                     */
                    void SetIsAuthorized(const uint64_t& _isAuthorized);

                    /**
                     * 判断参数 IsAuthorized 是否已赋值
                     * @return IsAuthorized 是否已赋值
                     * 
                     */
                    bool IsAuthorizedHasBeenSet() const;

                    /**
                     * 获取设备信息
                     * @return DeviceList 设备信息
                     * 
                     */
                    std::vector<Device> GetDeviceList() const;

                    /**
                     * 设置设备信息
                     * @param _deviceList 设备信息
                     * 
                     */
                    void SetDeviceList(const std::vector<Device>& _deviceList);

                    /**
                     * 判断参数 DeviceList 是否已赋值
                     * @return DeviceList 是否已赋值
                     * 
                     */
                    bool DeviceListHasBeenSet() const;

                private:

                    /**
                     * 模型ID列表
                     */
                    std::vector<int64_t> m_modelIdList;
                    bool m_modelIdListHasBeenSet;

                    /**
                     * 设备ID，AccountType指定的类型
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 设备号类型，1.imei 2.imeiMd5（小写后转MD5转小写）3.idfa， 4.idfaMd5（大写后转MD5转小写），5.手机号,256.其它
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 用户IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 操作系统类型(unknown，android，ios，windows)
                     */
                    std::string m_os;
                    bool m_osHasBeenSet;

                    /**
                     * 操作系统版本
                     */
                    std::string m_osv;
                    bool m_osvHasBeenSet;

                    /**
                     * 纬度
                     */
                    std::string m_lat;
                    bool m_latHasBeenSet;

                    /**
                     * 经度
                     */
                    std::string m_lon;
                    bool m_lonHasBeenSet;

                    /**
                     * 设备型号(MI 6)
                     */
                    std::string m_deviceModel;
                    bool m_deviceModelHasBeenSet;

                    /**
                     * 竞价底价
                     */
                    int64_t m_bidFloor;
                    bool m_bidFloorHasBeenSet;

                    /**
                     * 年龄
                     */
                    int64_t m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * 性别(1.MALE 2.FEMALE)
                     */
                    int64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 用户地址
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 投放模式（0=PDB，1=PD，2=RTB，10=其他）
                     */
                    int64_t m_deliveryMode;
                    bool m_deliveryModeHasBeenSet;

                    /**
                     * 广告位类型<br />（0=前贴片，1=开屏广告，2=网页头部广告、3=网页中部广告、4=网页底部广告、5=悬浮广告、10=其它）
                     */
                    int64_t m_advertisingType;
                    bool m_advertisingTypeHasBeenSet;

                    /**
                     * mac地址，建议提供
                     */
                    std::string m_mac;
                    bool m_macHasBeenSet;

                    /**
                     * 电话号码
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 浏览器类型
                     */
                    std::string m_ua;
                    bool m_uaHasBeenSet;

                    /**
                     * 客户端应用
                     */
                    std::string m_app;
                    bool m_appHasBeenSet;

                    /**
                     * 应用包名
                     */
                    std::string m_package;
                    bool m_packageHasBeenSet;

                    /**
                     * 设备制造商
                     */
                    std::string m_maker;
                    bool m_makerHasBeenSet;

                    /**
                     * 设备类型（PHONE,TABLET）
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 入网方式(wifi,4g,3g,2g)
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * 运营商(1.移动 2.联通 3.电信等)
                     */
                    int64_t m_sp;
                    bool m_spHasBeenSet;

                    /**
                     * 设备屏幕分辨率宽度像素数
                     */
                    int64_t m_deviceW;
                    bool m_deviceWHasBeenSet;

                    /**
                     * 设备屏幕分辨率高度像素数
                     */
                    int64_t m_deviceH;
                    bool m_deviceHHasBeenSet;

                    /**
                     * 是否全屏插广告(0-否，1-是)
                     */
                    int64_t m_fullScreen;
                    bool m_fullScreenHasBeenSet;

                    /**
                     * 广告位宽度
                     */
                    int64_t m_impBannerW;
                    bool m_impBannerWHasBeenSet;

                    /**
                     * 广告位高度
                     */
                    int64_t m_impBannerH;
                    bool m_impBannerHHasBeenSet;

                    /**
                     * 网址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 上下文信息
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 渠道
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 请求ID
                     */
                    std::string m_reqId;
                    bool m_reqIdHasBeenSet;

                    /**
                     * 请求ID的md5值
                     */
                    std::string m_reqMd5;
                    bool m_reqMd5HasBeenSet;

                    /**
                     * ad_type
                     */
                    int64_t m_adType;
                    bool m_adTypeHasBeenSet;

                    /**
                     * app名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * app版本描述
                     */
                    std::string m_appVer;
                    bool m_appVerHasBeenSet;

                    /**
                     * 竞价模式1：rtb 2:pd
                     */
                    int64_t m_reqType;
                    bool m_reqTypeHasBeenSet;

                    /**
                     * 用户是否授权,1为授权，0为未授权
                     */
                    uint64_t m_isAuthorized;
                    bool m_isAuthorizedHasBeenSet;

                    /**
                     * 设备信息
                     */
                    std::vector<Device> m_deviceList;
                    bool m_deviceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAF_V20200210_MODEL_INPUTRECOGNIZETARGETAUDIENCE_H_
