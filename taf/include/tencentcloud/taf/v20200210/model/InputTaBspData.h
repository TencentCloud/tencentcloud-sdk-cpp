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

#ifndef TENCENTCLOUD_TAF_V20200210_MODEL_INPUTTABSPDATA_H_
#define TENCENTCLOUD_TAF_V20200210_MODEL_INPUTTABSPDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Taf
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 流量反欺诈-虚假TA识别
                */
                class InputTaBspData : public AbstractModel
                {
                public:
                    InputTaBspData();
                    ~InputTaBspData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取请求序列号
                     * @return Seq 请求序列号
                     */
                    int64_t GetSeq() const;

                    /**
                     * 设置请求序列号
                     * @param Seq 请求序列号
                     */
                    void SetSeq(const int64_t& _seq);

                    /**
                     * 判断参数 Seq 是否已赋值
                     * @return Seq 是否已赋值
                     */
                    bool SeqHasBeenSet() const;

                    /**
                     * 获取操作系统类型[0：未知；1：android；2：ios；3：windows]
                     * @return OsType 操作系统类型[0：未知；1：android；2：ios；3：windows]
                     */
                    std::string GetOsType() const;

                    /**
                     * 设置操作系统类型[0：未知；1：android；2：ios；3：windows]
                     * @param OsType 操作系统类型[0：未知；1：android；2：ios；3：windows]
                     */
                    void SetOsType(const std::string& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取年龄下限
                     * @return AgeFloor 年龄下限
                     */
                    int64_t GetAgeFloor() const;

                    /**
                     * 设置年龄下限
                     * @param AgeFloor 年龄下限
                     */
                    void SetAgeFloor(const int64_t& _ageFloor);

                    /**
                     * 判断参数 AgeFloor 是否已赋值
                     * @return AgeFloor 是否已赋值
                     */
                    bool AgeFloorHasBeenSet() const;

                    /**
                     * 获取年龄上限
                     * @return AgeCeil 年龄上限
                     */
                    int64_t GetAgeCeil() const;

                    /**
                     * 设置年龄上限
                     * @param AgeCeil 年龄上限
                     */
                    void SetAgeCeil(const int64_t& _ageCeil);

                    /**
                     * 判断参数 AgeCeil 是否已赋值
                     * @return AgeCeil 是否已赋值
                     */
                    bool AgeCeilHasBeenSet() const;

                    /**
                     * 获取性别[1：男；2：女]
                     * @return Gender 性别[1：男；2：女]
                     */
                    int64_t GetGender() const;

                    /**
                     * 设置性别[1：男；2：女]
                     * @param Gender 性别[1：男；2：女]
                     */
                    void SetGender(const int64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取用户操作时间
                     * @return UserTime 用户操作时间
                     */
                    int64_t GetUserTime() const;

                    /**
                     * 设置用户操作时间
                     * @param UserTime 用户操作时间
                     */
                    void SetUserTime(const int64_t& _userTime);

                    /**
                     * 判断参数 UserTime 是否已赋值
                     * @return UserTime 是否已赋值
                     */
                    bool UserTimeHasBeenSet() const;

                    /**
                     * 获取Imei [在(Imei|ImeiMd5|Idfa|IdfaMd5)里面4选1]
                     * @return Imei Imei [在(Imei|ImeiMd5|Idfa|IdfaMd5)里面4选1]
                     */
                    std::string GetImei() const;

                    /**
                     * 设置Imei [在(Imei|ImeiMd5|Idfa|IdfaMd5)里面4选1]
                     * @param Imei Imei [在(Imei|ImeiMd5|Idfa|IdfaMd5)里面4选1]
                     */
                    void SetImei(const std::string& _imei);

                    /**
                     * 判断参数 Imei 是否已赋值
                     * @return Imei 是否已赋值
                     */
                    bool ImeiHasBeenSet() const;

                    /**
                     * 获取Imei小写后加密Md5 [在(Imei|ImeiMd5|Idfa|IdfaMd5)里面4选1]
                     * @return ImeiMd5 Imei小写后加密Md5 [在(Imei|ImeiMd5|Idfa|IdfaMd5)里面4选1]
                     */
                    std::string GetImeiMd5() const;

                    /**
                     * 设置Imei小写后加密Md5 [在(Imei|ImeiMd5|Idfa|IdfaMd5)里面4选1]
                     * @param ImeiMd5 Imei小写后加密Md5 [在(Imei|ImeiMd5|Idfa|IdfaMd5)里面4选1]
                     */
                    void SetImeiMd5(const std::string& _imeiMd5);

                    /**
                     * 判断参数 ImeiMd5 是否已赋值
                     * @return ImeiMd5 是否已赋值
                     */
                    bool ImeiMd5HasBeenSet() const;

                    /**
                     * 获取Idfa [在(Imei|ImeiMd5|Idfa|IdfaMd5)里面4选1]
                     * @return Idfa Idfa [在(Imei|ImeiMd5|Idfa|IdfaMd5)里面4选1]
                     */
                    std::string GetIdfa() const;

                    /**
                     * 设置Idfa [在(Imei|ImeiMd5|Idfa|IdfaMd5)里面4选1]
                     * @param Idfa Idfa [在(Imei|ImeiMd5|Idfa|IdfaMd5)里面4选1]
                     */
                    void SetIdfa(const std::string& _idfa);

                    /**
                     * 判断参数 Idfa 是否已赋值
                     * @return Idfa 是否已赋值
                     */
                    bool IdfaHasBeenSet() const;

                    /**
                     * 获取Idfa大写后加密Md5 [在(Imei|ImeiMd5|Idfa|IdfaMd5)里面4选1]
                     * @return IdfaMd5 Idfa大写后加密Md5 [在(Imei|ImeiMd5|Idfa|IdfaMd5)里面4选1]
                     */
                    std::string GetIdfaMd5() const;

                    /**
                     * 设置Idfa大写后加密Md5 [在(Imei|ImeiMd5|Idfa|IdfaMd5)里面4选1]
                     * @param IdfaMd5 Idfa大写后加密Md5 [在(Imei|ImeiMd5|Idfa|IdfaMd5)里面4选1]
                     */
                    void SetIdfaMd5(const std::string& _idfaMd5);

                    /**
                     * 判断参数 IdfaMd5 是否已赋值
                     * @return IdfaMd5 是否已赋值
                     */
                    bool IdfaMd5HasBeenSet() const;

                    /**
                     * 获取用户IP
                     * @return UserIp 用户IP
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置用户IP
                     * @param UserIp 用户IP
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取MAC地址[建议提供]
                     * @return Mac MAC地址[建议提供]
                     */
                    std::string GetMac() const;

                    /**
                     * 设置MAC地址[建议提供]
                     * @param Mac MAC地址[建议提供]
                     */
                    void SetMac(const std::string& _mac);

                    /**
                     * 判断参数 Mac 是否已赋值
                     * @return Mac 是否已赋值
                     */
                    bool MacHasBeenSet() const;

                    /**
                     * 获取手机号码[中国大陆]
                     * @return PhoneNum 手机号码[中国大陆]
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 设置手机号码[中国大陆]
                     * @param PhoneNum 手机号码[中国大陆]
                     */
                    void SetPhoneNum(const std::string& _phoneNum);

                    /**
                     * 判断参数 PhoneNum 是否已赋值
                     * @return PhoneNum 是否已赋值
                     */
                    bool PhoneNumHasBeenSet() const;

                    /**
                     * 获取浏览器
                     * @return UserAgent 浏览器
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置浏览器
                     * @param UserAgent 浏览器
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     */
                    bool UserAgentHasBeenSet() const;

                    /**
                     * 获取APP名称
                     * @return App APP名称
                     */
                    std::string GetApp() const;

                    /**
                     * 设置APP名称
                     * @param App APP名称
                     */
                    void SetApp(const std::string& _app);

                    /**
                     * 判断参数 App 是否已赋值
                     * @return App 是否已赋值
                     */
                    bool AppHasBeenSet() const;

                    /**
                     * 获取应用安装包名称
                     * @return Package 应用安装包名称
                     */
                    std::string GetPackage() const;

                    /**
                     * 设置应用安装包名称
                     * @param Package 应用安装包名称
                     */
                    void SetPackage(const std::string& _package);

                    /**
                     * 判断参数 Package 是否已赋值
                     * @return Package 是否已赋值
                     */
                    bool PackageHasBeenSet() const;

                    /**
                     * 获取设备制造商
                     * @return DeviceMaker 设备制造商
                     */
                    std::string GetDeviceMaker() const;

                    /**
                     * 设置设备制造商
                     * @param DeviceMaker 设备制造商
                     */
                    void SetDeviceMaker(const std::string& _deviceMaker);

                    /**
                     * 判断参数 DeviceMaker 是否已赋值
                     * @return DeviceMaker 是否已赋值
                     */
                    bool DeviceMakerHasBeenSet() const;

                    /**
                     * 获取设备型号
                     * @return DeviceModule 设备型号
                     */
                    std::string GetDeviceModule() const;

                    /**
                     * 设置设备型号
                     * @param DeviceModule 设备型号
                     */
                    void SetDeviceModule(const std::string& _deviceModule);

                    /**
                     * 判断参数 DeviceModule 是否已赋值
                     * @return DeviceModule 是否已赋值
                     */
                    bool DeviceModuleHasBeenSet() const;

                    /**
                     * 获取入网方式[1：WIFI；2：4G；3：3G；4：2G；5：其它]
                     * @return AccessMode 入网方式[1：WIFI；2：4G；3：3G；4：2G；5：其它]
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置入网方式[1：WIFI；2：4G；3：3G；4：2G；5：其它]
                     * @param AccessMode 入网方式[1：WIFI；2：4G；3：3G；4：2G；5：其它]
                     */
                    void SetAccessMode(const std::string& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     */
                    bool AccessModeHasBeenSet() const;

                    /**
                     * 获取运营商[1：移动；2：联通；3：电信；4：其它]
                     * @return Sp 运营商[1：移动；2：联通；3：电信；4：其它]
                     */
                    std::string GetSp() const;

                    /**
                     * 设置运营商[1：移动；2：联通；3：电信；4：其它]
                     * @param Sp 运营商[1：移动；2：联通；3：电信；4：其它]
                     */
                    void SetSp(const std::string& _sp);

                    /**
                     * 判断参数 Sp 是否已赋值
                     * @return Sp 是否已赋值
                     */
                    bool SpHasBeenSet() const;

                    /**
                     * 获取网址
                     * @return Url 网址
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置网址
                     * @param Url 网址
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取用户地址
                     * @return Location 用户地址
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置用户地址
                     * @param Location 用户地址
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取纬度
                     * @return Latitude 纬度
                     */
                    std::string GetLatitude() const;

                    /**
                     * 设置纬度
                     * @param Latitude 纬度
                     */
                    void SetLatitude(const std::string& _latitude);

                    /**
                     * 判断参数 Latitude 是否已赋值
                     * @return Latitude 是否已赋值
                     */
                    bool LatitudeHasBeenSet() const;

                    /**
                     * 获取精度
                     * @return Longitude 精度
                     */
                    std::string GetLongitude() const;

                    /**
                     * 设置精度
                     * @param Longitude 精度
                     */
                    void SetLongitude(const std::string& _longitude);

                    /**
                     * 判断参数 Longitude 是否已赋值
                     * @return Longitude 是否已赋值
                     */
                    bool LongitudeHasBeenSet() const;

                    /**
                     * 获取辅助区分信息
                     * @return Context 辅助区分信息
                     */
                    std::string GetContext() const;

                    /**
                     * 设置辅助区分信息
                     * @param Context 辅助区分信息
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     */
                    bool ContextHasBeenSet() const;

                private:

                    /**
                     * 请求序列号
                     */
                    int64_t m_seq;
                    bool m_seqHasBeenSet;

                    /**
                     * 操作系统类型[0：未知；1：android；2：ios；3：windows]
                     */
                    std::string m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * 年龄下限
                     */
                    int64_t m_ageFloor;
                    bool m_ageFloorHasBeenSet;

                    /**
                     * 年龄上限
                     */
                    int64_t m_ageCeil;
                    bool m_ageCeilHasBeenSet;

                    /**
                     * 性别[1：男；2：女]
                     */
                    int64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 用户操作时间
                     */
                    int64_t m_userTime;
                    bool m_userTimeHasBeenSet;

                    /**
                     * Imei [在(Imei|ImeiMd5|Idfa|IdfaMd5)里面4选1]
                     */
                    std::string m_imei;
                    bool m_imeiHasBeenSet;

                    /**
                     * Imei小写后加密Md5 [在(Imei|ImeiMd5|Idfa|IdfaMd5)里面4选1]
                     */
                    std::string m_imeiMd5;
                    bool m_imeiMd5HasBeenSet;

                    /**
                     * Idfa [在(Imei|ImeiMd5|Idfa|IdfaMd5)里面4选1]
                     */
                    std::string m_idfa;
                    bool m_idfaHasBeenSet;

                    /**
                     * Idfa大写后加密Md5 [在(Imei|ImeiMd5|Idfa|IdfaMd5)里面4选1]
                     */
                    std::string m_idfaMd5;
                    bool m_idfaMd5HasBeenSet;

                    /**
                     * 用户IP
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * MAC地址[建议提供]
                     */
                    std::string m_mac;
                    bool m_macHasBeenSet;

                    /**
                     * 手机号码[中国大陆]
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                    /**
                     * 浏览器
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * APP名称
                     */
                    std::string m_app;
                    bool m_appHasBeenSet;

                    /**
                     * 应用安装包名称
                     */
                    std::string m_package;
                    bool m_packageHasBeenSet;

                    /**
                     * 设备制造商
                     */
                    std::string m_deviceMaker;
                    bool m_deviceMakerHasBeenSet;

                    /**
                     * 设备型号
                     */
                    std::string m_deviceModule;
                    bool m_deviceModuleHasBeenSet;

                    /**
                     * 入网方式[1：WIFI；2：4G；3：3G；4：2G；5：其它]
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * 运营商[1：移动；2：联通；3：电信；4：其它]
                     */
                    std::string m_sp;
                    bool m_spHasBeenSet;

                    /**
                     * 网址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 用户地址
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 纬度
                     */
                    std::string m_latitude;
                    bool m_latitudeHasBeenSet;

                    /**
                     * 精度
                     */
                    std::string m_longitude;
                    bool m_longitudeHasBeenSet;

                    /**
                     * 辅助区分信息
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAF_V20200210_MODEL_INPUTTABSPDATA_H_
