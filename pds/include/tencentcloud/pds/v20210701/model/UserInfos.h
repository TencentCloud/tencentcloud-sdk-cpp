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

#ifndef TENCENTCLOUD_PDS_V20210701_MODEL_USERINFOS_H_
#define TENCENTCLOUD_PDS_V20210701_MODEL_USERINFOS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pds
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 用户信息
                */
                class UserInfos : public AbstractModel
                {
                public:
                    UserInfos();
                    ~UserInfos() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户的手机号
                     * @return PhoneNum 用户的手机号
                     * 
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 设置用户的手机号
                     * @param _phoneNum 用户的手机号
                     * 
                     */
                    void SetPhoneNum(const std::string& _phoneNum);

                    /**
                     * 判断参数 PhoneNum 是否已赋值
                     * @return PhoneNum 是否已赋值
                     * 
                     */
                    bool PhoneNumHasBeenSet() const;

                    /**
                     * 获取用户的微信OpenID
                     * @return Openid 用户的微信OpenID
                     * 
                     */
                    std::string GetOpenid() const;

                    /**
                     * 设置用户的微信OpenID
                     * @param _openid 用户的微信OpenID
                     * 
                     */
                    void SetOpenid(const std::string& _openid);

                    /**
                     * 判断参数 Openid 是否已赋值
                     * @return Openid 是否已赋值
                     * 
                     */
                    bool OpenidHasBeenSet() const;

                    /**
                     * 获取用户移动设备的客户端IP
                     * @return IP 用户移动设备的客户端IP
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置用户移动设备的客户端IP
                     * @param _iP 用户移动设备的客户端IP
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取用户WiFi的BSSID
                     * @return WiFiBssid 用户WiFi的BSSID
                     * 
                     */
                    std::string GetWiFiBssid() const;

                    /**
                     * 设置用户WiFi的BSSID
                     * @param _wiFiBssid 用户WiFi的BSSID
                     * 
                     */
                    void SetWiFiBssid(const std::string& _wiFiBssid);

                    /**
                     * 判断参数 WiFiBssid 是否已赋值
                     * @return WiFiBssid 是否已赋值
                     * 
                     */
                    bool WiFiBssidHasBeenSet() const;

                    /**
                     * 获取用户Android设备的IMEI
                     * @return IMEI 用户Android设备的IMEI
                     * 
                     */
                    std::string GetIMEI() const;

                    /**
                     * 设置用户Android设备的IMEI
                     * @param _iMEI 用户Android设备的IMEI
                     * 
                     */
                    void SetIMEI(const std::string& _iMEI);

                    /**
                     * 判断参数 IMEI 是否已赋值
                     * @return IMEI 是否已赋值
                     * 
                     */
                    bool IMEIHasBeenSet() const;

                    /**
                     * 获取用户Android设备的OAID
                     * @return OAID 用户Android设备的OAID
                     * 
                     */
                    std::string GetOAID() const;

                    /**
                     * 设置用户Android设备的OAID
                     * @param _oAID 用户Android设备的OAID
                     * 
                     */
                    void SetOAID(const std::string& _oAID);

                    /**
                     * 判断参数 OAID 是否已赋值
                     * @return OAID 是否已赋值
                     * 
                     */
                    bool OAIDHasBeenSet() const;

                    /**
                     * 获取用户iOS设备的IDFA
                     * @return IDFA 用户iOS设备的IDFA
                     * 
                     */
                    std::string GetIDFA() const;

                    /**
                     * 设置用户iOS设备的IDFA
                     * @param _iDFA 用户iOS设备的IDFA
                     * 
                     */
                    void SetIDFA(const std::string& _iDFA);

                    /**
                     * 判断参数 IDFA 是否已赋值
                     * @return IDFA 是否已赋值
                     * 
                     */
                    bool IDFAHasBeenSet() const;

                private:

                    /**
                     * 用户的手机号
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                    /**
                     * 用户的微信OpenID
                     */
                    std::string m_openid;
                    bool m_openidHasBeenSet;

                    /**
                     * 用户移动设备的客户端IP
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 用户WiFi的BSSID
                     */
                    std::string m_wiFiBssid;
                    bool m_wiFiBssidHasBeenSet;

                    /**
                     * 用户Android设备的IMEI
                     */
                    std::string m_iMEI;
                    bool m_iMEIHasBeenSet;

                    /**
                     * 用户Android设备的OAID
                     */
                    std::string m_oAID;
                    bool m_oAIDHasBeenSet;

                    /**
                     * 用户iOS设备的IDFA
                     */
                    std::string m_iDFA;
                    bool m_iDFAHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PDS_V20210701_MODEL_USERINFOS_H_
