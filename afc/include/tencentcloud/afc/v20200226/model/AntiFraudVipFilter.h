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

#ifndef TENCENTCLOUD_AFC_V20200226_MODEL_ANTIFRAUDVIPFILTER_H_
#define TENCENTCLOUD_AFC_V20200226_MODEL_ANTIFRAUDVIPFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Afc
    {
        namespace V20200226
        {
            namespace Model
            {
                /**
                * AntiFraudVipFilter– 业务入参
                */
                class AntiFraudVipFilter : public AbstractModel
                {
                public:
                    AntiFraudVipFilter();
                    ~AntiFraudVipFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取业务方账号 ID
                     * @return CustomerUin 业务方账号 ID
                     * 
                     */
                    std::string GetCustomerUin() const;

                    /**
                     * 设置业务方账号 ID
                     * @param _customerUin 业务方账号 ID
                     * 
                     */
                    void SetCustomerUin(const std::string& _customerUin);

                    /**
                     * 判断参数 CustomerUin 是否已赋值
                     * @return CustomerUin 是否已赋值
                     * 
                     */
                    bool CustomerUinHasBeenSet() const;

                    /**
                     * 获取业务方APPID
                     * @return CustomerAppid 业务方APPID
                     * 
                     */
                    std::string GetCustomerAppid() const;

                    /**
                     * 设置业务方APPID
                     * @param _customerAppid 业务方APPID
                     * 
                     */
                    void SetCustomerAppid(const std::string& _customerAppid);

                    /**
                     * 判断参数 CustomerAppid 是否已赋值
                     * @return CustomerAppid 是否已赋值
                     * 
                     */
                    bool CustomerAppidHasBeenSet() const;

                    /**
                     * 获取身份证号
注 1：下方 idCryptoType 为指定
加密方式
注 2：若 idNumber 加密则必传加
密方式
                     * @return IdNumber 身份证号
注 1：下方 idCryptoType 为指定
加密方式
注 2：若 idNumber 加密则必传加
密方式
                     * 
                     */
                    std::string GetIdNumber() const;

                    /**
                     * 设置身份证号
注 1：下方 idCryptoType 为指定
加密方式
注 2：若 idNumber 加密则必传加
密方式
                     * @param _idNumber 身份证号
注 1：下方 idCryptoType 为指定
加密方式
注 2：若 idNumber 加密则必传加
密方式
                     * 
                     */
                    void SetIdNumber(const std::string& _idNumber);

                    /**
                     * 判断参数 IdNumber 是否已赋值
                     * @return IdNumber 是否已赋值
                     * 
                     */
                    bool IdNumberHasBeenSet() const;

                    /**
                     * 获取手机号码（注：不需要带国家代码
例如：13430421011）
注 1：下方 phoneCryptoType 为
指定加密方式:
注 2：若 phoneNumber 加密则必
传加密方式
                     * @return PhoneNumber 手机号码（注：不需要带国家代码
例如：13430421011）
注 1：下方 phoneCryptoType 为
指定加密方式:
注 2：若 phoneNumber 加密则必
传加密方式
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置手机号码（注：不需要带国家代码
例如：13430421011）
注 1：下方 phoneCryptoType 为
指定加密方式:
注 2：若 phoneNumber 加密则必
传加密方式
                     * @param _phoneNumber 手机号码（注：不需要带国家代码
例如：13430421011）
注 1：下方 phoneCryptoType 为
指定加密方式:
注 2：若 phoneNumber 加密则必
传加密方式
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取业务场景 ID
                     * @return Scene 业务场景 ID
                     * 
                     */
                    std::string GetScene() const;

                    /**
                     * 设置业务场景 ID
                     * @param _scene 业务场景 ID
                     * 
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取默认不使用，业务方子
账号，若接口使用密钥对应是子账
号则必填
                     * @return CustomerSubUin 默认不使用，业务方子
账号，若接口使用密钥对应是子账
号则必填
                     * 
                     */
                    std::string GetCustomerSubUin() const;

                    /**
                     * 设置默认不使用，业务方子
账号，若接口使用密钥对应是子账
号则必填
                     * @param _customerSubUin 默认不使用，业务方子
账号，若接口使用密钥对应是子账
号则必填
                     * 
                     */
                    void SetCustomerSubUin(const std::string& _customerSubUin);

                    /**
                     * 判断参数 CustomerSubUin 是否已赋值
                     * @return CustomerSubUin 是否已赋值
                     * 
                     */
                    bool CustomerSubUinHasBeenSet() const;

                    /**
                     * 获取已获取约定标识则传 1；
用于基于特定需求而传的标识字段
注：有约定则是必传，若未传则查
询接口失败
                     * @return Authorization 已获取约定标识则传 1；
用于基于特定需求而传的标识字段
注：有约定则是必传，若未传则查
询接口失败
                     * 
                     */
                    std::string GetAuthorization() const;

                    /**
                     * 设置已获取约定标识则传 1；
用于基于特定需求而传的标识字段
注：有约定则是必传，若未传则查
询接口失败
                     * @param _authorization 已获取约定标识则传 1；
用于基于特定需求而传的标识字段
注：有约定则是必传，若未传则查
询接口失败
                     * 
                     */
                    void SetAuthorization(const std::string& _authorization);

                    /**
                     * 判断参数 Authorization 是否已赋值
                     * @return Authorization 是否已赋值
                     * 
                     */
                    bool AuthorizationHasBeenSet() const;

                    /**
                     * 获取姓名
注 ：不支持加密
                     * @return Name 姓名
注 ：不支持加密
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名
注 ：不支持加密
                     * @param _name 姓名
注 ：不支持加密
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取银行卡号
                     * @return BankCardNumber 银行卡号
                     * 
                     */
                    std::string GetBankCardNumber() const;

                    /**
                     * 设置银行卡号
                     * @param _bankCardNumber 银行卡号
                     * 
                     */
                    void SetBankCardNumber(const std::string& _bankCardNumber);

                    /**
                     * 判断参数 BankCardNumber 是否已赋值
                     * @return BankCardNumber 是否已赋值
                     * 
                     */
                    bool BankCardNumberHasBeenSet() const;

                    /**
                     * 获取用户请求来源 IP
                     * @return UserIp 用户请求来源 IP
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置用户请求来源 IP
                     * @param _userIp 用户请求来源 IP
                     * 
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     * 
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取国际移动设备识别码
                     * @return Imei 国际移动设备识别码
                     * 
                     */
                    std::string GetImei() const;

                    /**
                     * 设置国际移动设备识别码
                     * @param _imei 国际移动设备识别码
                     * 
                     */
                    void SetImei(const std::string& _imei);

                    /**
                     * 判断参数 Imei 是否已赋值
                     * @return Imei 是否已赋值
                     * 
                     */
                    bool ImeiHasBeenSet() const;

                    /**
                     * 获取ios 系统广告标示符
                     * @return Idfa ios 系统广告标示符
                     * 
                     */
                    std::string GetIdfa() const;

                    /**
                     * 设置ios 系统广告标示符
                     * @param _idfa ios 系统广告标示符
                     * 
                     */
                    void SetIdfa(const std::string& _idfa);

                    /**
                     * 判断参数 Idfa 是否已赋值
                     * @return Idfa 是否已赋值
                     * 
                     */
                    bool IdfaHasBeenSet() const;

                    /**
                     * 获取用户邮箱地址
                     * @return EmailAddress 用户邮箱地址
                     * 
                     */
                    std::string GetEmailAddress() const;

                    /**
                     * 设置用户邮箱地址
                     * @param _emailAddress 用户邮箱地址
                     * 
                     */
                    void SetEmailAddress(const std::string& _emailAddress);

                    /**
                     * 判断参数 EmailAddress 是否已赋值
                     * @return EmailAddress 是否已赋值
                     * 
                     */
                    bool EmailAddressHasBeenSet() const;

                    /**
                     * 获取用户住址
                     * @return Address 用户住址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置用户住址
                     * @param _address 用户住址
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取MAC 地址
                     * @return Mac MAC 地址
                     * 
                     */
                    std::string GetMac() const;

                    /**
                     * 设置MAC 地址
                     * @param _mac MAC 地址
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
                     * 获取国际移动用户识别码
                     * @return Imsi 国际移动用户识别码
                     * 
                     */
                    std::string GetImsi() const;

                    /**
                     * 设置国际移动用户识别码
                     * @param _imsi 国际移动用户识别码
                     * 
                     */
                    void SetImsi(const std::string& _imsi);

                    /**
                     * 判断参数 Imsi 是否已赋值
                     * @return Imsi 是否已赋值
                     * 
                     */
                    bool ImsiHasBeenSet() const;

                    /**
                     * 获取关联的腾讯帐号 QQ：1；
开放帐号微信： 2；
                     * @return AccountType 关联的腾讯帐号 QQ：1；
开放帐号微信： 2；
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置关联的腾讯帐号 QQ：1；
开放帐号微信： 2；
                     * @param _accountType 关联的腾讯帐号 QQ：1；
开放帐号微信： 2；
                     * 
                     */
                    void SetAccountType(const std::string& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取可选的 QQ 或微信 openid
                     * @return Uid 可选的 QQ 或微信 openid
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置可选的 QQ 或微信 openid
                     * @param _uid 可选的 QQ 或微信 openid
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
                     * 获取qq 或微信分配给网站或应用的
appid，用来唯一标识网站或应用
                     * @return AppIdU qq 或微信分配给网站或应用的
appid，用来唯一标识网站或应用
                     * 
                     */
                    std::string GetAppIdU() const;

                    /**
                     * 设置qq 或微信分配给网站或应用的
appid，用来唯一标识网站或应用
                     * @param _appIdU qq 或微信分配给网站或应用的
appid，用来唯一标识网站或应用
                     * 
                     */
                    void SetAppIdU(const std::string& _appIdU);

                    /**
                     * 判断参数 AppIdU 是否已赋值
                     * @return AppIdU 是否已赋值
                     * 
                     */
                    bool AppIdUHasBeenSet() const;

                    /**
                     * 获取ＷＩＦＩＭＡＣ
                     * @return WifiMac ＷＩＦＩＭＡＣ
                     * 
                     */
                    std::string GetWifiMac() const;

                    /**
                     * 设置ＷＩＦＩＭＡＣ
                     * @param _wifiMac ＷＩＦＩＭＡＣ
                     * 
                     */
                    void SetWifiMac(const std::string& _wifiMac);

                    /**
                     * 判断参数 WifiMac 是否已赋值
                     * @return WifiMac 是否已赋值
                     * 
                     */
                    bool WifiMacHasBeenSet() const;

                    /**
                     * 获取WIFI 服务集标识
                     * @return WifiSSID WIFI 服务集标识
                     * 
                     */
                    std::string GetWifiSSID() const;

                    /**
                     * 设置WIFI 服务集标识
                     * @param _wifiSSID WIFI 服务集标识
                     * 
                     */
                    void SetWifiSSID(const std::string& _wifiSSID);

                    /**
                     * 判断参数 WifiSSID 是否已赋值
                     * @return WifiSSID 是否已赋值
                     * 
                     */
                    bool WifiSSIDHasBeenSet() const;

                    /**
                     * 获取WIFI-BSSID
                     * @return WifiBSSID WIFI-BSSID
                     * 
                     */
                    std::string GetWifiBSSID() const;

                    /**
                     * 设置WIFI-BSSID
                     * @param _wifiBSSID WIFI-BSSID
                     * 
                     */
                    void SetWifiBSSID(const std::string& _wifiBSSID);

                    /**
                     * 判断参数 WifiBSSID 是否已赋值
                     * @return WifiBSSID 是否已赋值
                     * 
                     */
                    bool WifiBSSIDHasBeenSet() const;

                    /**
                     * 获取拓展字段类型 ID
注：默认不填写，需要时天御侧将
提供
                     * @return ExtensionId 拓展字段类型 ID
注：默认不填写，需要时天御侧将
提供
                     * 
                     */
                    std::string GetExtensionId() const;

                    /**
                     * 设置拓展字段类型 ID
注：默认不填写，需要时天御侧将
提供
                     * @param _extensionId 拓展字段类型 ID
注：默认不填写，需要时天御侧将
提供
                     * 
                     */
                    void SetExtensionId(const std::string& _extensionId);

                    /**
                     * 判断参数 ExtensionId 是否已赋值
                     * @return ExtensionId 是否已赋值
                     * 
                     */
                    bool ExtensionIdHasBeenSet() const;

                    /**
                     * 获取拓展字段内容
注：默认不填，需要时天御侧将提
供
                     * @return ExtensionIn 拓展字段内容
注：默认不填，需要时天御侧将提
供
                     * 
                     */
                    std::string GetExtensionIn() const;

                    /**
                     * 设置拓展字段内容
注：默认不填，需要时天御侧将提
供
                     * @param _extensionIn 拓展字段内容
注：默认不填，需要时天御侧将提
供
                     * 
                     */
                    void SetExtensionIn(const std::string& _extensionIn);

                    /**
                     * 判断参数 ExtensionIn 是否已赋值
                     * @return ExtensionIn 是否已赋值
                     * 
                     */
                    bool ExtensionInHasBeenSet() const;

                    /**
                     * 获取业务 ID，默认不传
                     * @return BusinessId 业务 ID，默认不传
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 设置业务 ID，默认不传
                     * @param _businessId 业务 ID，默认不传
                     * 
                     */
                    void SetBusinessId(const std::string& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取身份证加密类型
0：不加密（默认值）
1：md5
2：sha256
3：SM3
注：若 idNumber 加密则必传加密
方式
                     * @return IdCryptoType 身份证加密类型
0：不加密（默认值）
1：md5
2：sha256
3：SM3
注：若 idNumber 加密则必传加密
方式
                     * 
                     */
                    std::string GetIdCryptoType() const;

                    /**
                     * 设置身份证加密类型
0：不加密（默认值）
1：md5
2：sha256
3：SM3
注：若 idNumber 加密则必传加密
方式
                     * @param _idCryptoType 身份证加密类型
0：不加密（默认值）
1：md5
2：sha256
3：SM3
注：若 idNumber 加密则必传加密
方式
                     * 
                     */
                    void SetIdCryptoType(const std::string& _idCryptoType);

                    /**
                     * 判断参数 IdCryptoType 是否已赋值
                     * @return IdCryptoType 是否已赋值
                     * 
                     */
                    bool IdCryptoTypeHasBeenSet() const;

                    /**
                     * 获取手机号加密类型
0：不加密（默认值）
1：md5,
2：sha256
3：SM3
注：若 phoneNumber 加密则必传
加密方式
                     * @return PhoneCryptoType 手机号加密类型
0：不加密（默认值）
1：md5,
2：sha256
3：SM3
注：若 phoneNumber 加密则必传
加密方式
                     * 
                     */
                    std::string GetPhoneCryptoType() const;

                    /**
                     * 设置手机号加密类型
0：不加密（默认值）
1：md5,
2：sha256
3：SM3
注：若 phoneNumber 加密则必传
加密方式
                     * @param _phoneCryptoType 手机号加密类型
0：不加密（默认值）
1：md5,
2：sha256
3：SM3
注：若 phoneNumber 加密则必传
加密方式
                     * 
                     */
                    void SetPhoneCryptoType(const std::string& _phoneCryptoType);

                    /**
                     * 判断参数 PhoneCryptoType 是否已赋值
                     * @return PhoneCryptoType 是否已赋值
                     * 
                     */
                    bool PhoneCryptoTypeHasBeenSet() const;

                    /**
                     * 获取姓名加密类型：——注：已经不支持加
密，该字段存在是为了兼容可能历史客户
版本；
0：不加密（默认值）
1：md5
                     * @return NameCryptoType 姓名加密类型：——注：已经不支持加
密，该字段存在是为了兼容可能历史客户
版本；
0：不加密（默认值）
1：md5
                     * 
                     */
                    std::string GetNameCryptoType() const;

                    /**
                     * 设置姓名加密类型：——注：已经不支持加
密，该字段存在是为了兼容可能历史客户
版本；
0：不加密（默认值）
1：md5
                     * @param _nameCryptoType 姓名加密类型：——注：已经不支持加
密，该字段存在是为了兼容可能历史客户
版本；
0：不加密（默认值）
1：md5
                     * 
                     */
                    void SetNameCryptoType(const std::string& _nameCryptoType);

                    /**
                     * 判断参数 NameCryptoType 是否已赋值
                     * @return NameCryptoType 是否已赋值
                     * 
                     */
                    bool NameCryptoTypeHasBeenSet() const;

                private:

                    /**
                     * 业务方账号 ID
                     */
                    std::string m_customerUin;
                    bool m_customerUinHasBeenSet;

                    /**
                     * 业务方APPID
                     */
                    std::string m_customerAppid;
                    bool m_customerAppidHasBeenSet;

                    /**
                     * 身份证号
注 1：下方 idCryptoType 为指定
加密方式
注 2：若 idNumber 加密则必传加
密方式
                     */
                    std::string m_idNumber;
                    bool m_idNumberHasBeenSet;

                    /**
                     * 手机号码（注：不需要带国家代码
例如：13430421011）
注 1：下方 phoneCryptoType 为
指定加密方式:
注 2：若 phoneNumber 加密则必
传加密方式
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 业务场景 ID
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * 默认不使用，业务方子
账号，若接口使用密钥对应是子账
号则必填
                     */
                    std::string m_customerSubUin;
                    bool m_customerSubUinHasBeenSet;

                    /**
                     * 已获取约定标识则传 1；
用于基于特定需求而传的标识字段
注：有约定则是必传，若未传则查
询接口失败
                     */
                    std::string m_authorization;
                    bool m_authorizationHasBeenSet;

                    /**
                     * 姓名
注 ：不支持加密
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 银行卡号
                     */
                    std::string m_bankCardNumber;
                    bool m_bankCardNumberHasBeenSet;

                    /**
                     * 用户请求来源 IP
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * 国际移动设备识别码
                     */
                    std::string m_imei;
                    bool m_imeiHasBeenSet;

                    /**
                     * ios 系统广告标示符
                     */
                    std::string m_idfa;
                    bool m_idfaHasBeenSet;

                    /**
                     * 用户邮箱地址
                     */
                    std::string m_emailAddress;
                    bool m_emailAddressHasBeenSet;

                    /**
                     * 用户住址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * MAC 地址
                     */
                    std::string m_mac;
                    bool m_macHasBeenSet;

                    /**
                     * 国际移动用户识别码
                     */
                    std::string m_imsi;
                    bool m_imsiHasBeenSet;

                    /**
                     * 关联的腾讯帐号 QQ：1；
开放帐号微信： 2；
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 可选的 QQ 或微信 openid
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * qq 或微信分配给网站或应用的
appid，用来唯一标识网站或应用
                     */
                    std::string m_appIdU;
                    bool m_appIdUHasBeenSet;

                    /**
                     * ＷＩＦＩＭＡＣ
                     */
                    std::string m_wifiMac;
                    bool m_wifiMacHasBeenSet;

                    /**
                     * WIFI 服务集标识
                     */
                    std::string m_wifiSSID;
                    bool m_wifiSSIDHasBeenSet;

                    /**
                     * WIFI-BSSID
                     */
                    std::string m_wifiBSSID;
                    bool m_wifiBSSIDHasBeenSet;

                    /**
                     * 拓展字段类型 ID
注：默认不填写，需要时天御侧将
提供
                     */
                    std::string m_extensionId;
                    bool m_extensionIdHasBeenSet;

                    /**
                     * 拓展字段内容
注：默认不填，需要时天御侧将提
供
                     */
                    std::string m_extensionIn;
                    bool m_extensionInHasBeenSet;

                    /**
                     * 业务 ID，默认不传
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * 身份证加密类型
0：不加密（默认值）
1：md5
2：sha256
3：SM3
注：若 idNumber 加密则必传加密
方式
                     */
                    std::string m_idCryptoType;
                    bool m_idCryptoTypeHasBeenSet;

                    /**
                     * 手机号加密类型
0：不加密（默认值）
1：md5,
2：sha256
3：SM3
注：若 phoneNumber 加密则必传
加密方式
                     */
                    std::string m_phoneCryptoType;
                    bool m_phoneCryptoTypeHasBeenSet;

                    /**
                     * 姓名加密类型：——注：已经不支持加
密，该字段存在是为了兼容可能历史客户
版本；
0：不加密（默认值）
1：md5
                     */
                    std::string m_nameCryptoType;
                    bool m_nameCryptoTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AFC_V20200226_MODEL_ANTIFRAUDVIPFILTER_H_
