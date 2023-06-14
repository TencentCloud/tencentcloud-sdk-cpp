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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEIOTDEVICERESPONSE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEIOTDEVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeIotDevice返回参数结构体
                */
                class DescribeIotDeviceResponse : public AbstractModel
                {
                public:
                    DescribeIotDeviceResponse();
                    ~DescribeIotDeviceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备id
                     * @return Id 设备id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取设备名称
                     * @return Name 设备名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取版本号
                     * @return Version 版本号
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取ssl证书
                     * @return Cert ssl证书
                     * 
                     */
                    std::string GetCert() const;

                    /**
                     * 判断参数 Cert 是否已赋值
                     * @return Cert 是否已赋值
                     * 
                     */
                    bool CertHasBeenSet() const;

                    /**
                     * 获取ssl私钥
                     * @return PrivateKey ssl私钥
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                    /**
                     * 获取psk认证密钥
                     * @return Psk psk认证密钥
                     * 
                     */
                    std::string GetPsk() const;

                    /**
                     * 判断参数 Psk 是否已赋值
                     * @return Psk 是否已赋值
                     * 
                     */
                    bool PskHasBeenSet() const;

                    /**
                     * 获取设备是否打开
                     * @return Disabled 设备是否打开
                     * 
                     */
                    bool GetDisabled() const;

                    /**
                     * 判断参数 Disabled 是否已赋值
                     * @return Disabled 是否已赋值
                     * 
                     */
                    bool DisabledHasBeenSet() const;

                    /**
                     * 获取设备日志
                     * @return LogSetting 设备日志
                     * 
                     */
                    int64_t GetLogSetting() const;

                    /**
                     * 判断参数 LogSetting 是否已赋值
                     * @return LogSetting 是否已赋值
                     * 
                     */
                    bool LogSettingHasBeenSet() const;

                    /**
                     * 获取设备日志级别
                     * @return LogLevel 设备日志级别
                     * 
                     */
                    int64_t GetLogLevel() const;

                    /**
                     * 判断参数 LogLevel 是否已赋值
                     * @return LogLevel 是否已赋值
                     * 
                     */
                    bool LogLevelHasBeenSet() const;

                    /**
                     * 获取mqtt参数
                     * @return UserName mqtt参数
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取mqtt参数
                     * @return Password mqtt参数
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取mqtt参数
                     * @return ClientID mqtt参数
                     * 
                     */
                    std::string GetClientID() const;

                    /**
                     * 判断参数 ClientID 是否已赋值
                     * @return ClientID 是否已赋值
                     * 
                     */
                    bool ClientIDHasBeenSet() const;

                    /**
                     * 获取16进制的psk格式
                     * @return PskHex 16进制的psk格式
                     * 
                     */
                    std::string GetPskHex() const;

                    /**
                     * 判断参数 PskHex 是否已赋值
                     * @return PskHex 是否已赋值
                     * 
                     */
                    bool PskHexHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取设备在线状态
                     * @return Status 设备在线状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取无
                     * @return Region 无
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取无
                     * @return UnitID 无
                     * 
                     */
                    int64_t GetUnitID() const;

                    /**
                     * 判断参数 UnitID 是否已赋值
                     * @return UnitID 是否已赋值
                     * 
                     */
                    bool UnitIDHasBeenSet() const;

                    /**
                     * 获取无
                     * @return UnitName 无
                     * 
                     */
                    std::string GetUnitName() const;

                    /**
                     * 判断参数 UnitName 是否已赋值
                     * @return UnitName 是否已赋值
                     * 
                     */
                    bool UnitNameHasBeenSet() const;

                private:

                    /**
                     * 设备id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 版本号
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * ssl证书
                     */
                    std::string m_cert;
                    bool m_certHasBeenSet;

                    /**
                     * ssl私钥
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * psk认证密钥
                     */
                    std::string m_psk;
                    bool m_pskHasBeenSet;

                    /**
                     * 设备是否打开
                     */
                    bool m_disabled;
                    bool m_disabledHasBeenSet;

                    /**
                     * 设备日志
                     */
                    int64_t m_logSetting;
                    bool m_logSettingHasBeenSet;

                    /**
                     * 设备日志级别
                     */
                    int64_t m_logLevel;
                    bool m_logLevelHasBeenSet;

                    /**
                     * mqtt参数
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * mqtt参数
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * mqtt参数
                     */
                    std::string m_clientID;
                    bool m_clientIDHasBeenSet;

                    /**
                     * 16进制的psk格式
                     */
                    std::string m_pskHex;
                    bool m_pskHexHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 设备在线状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 无
                     */
                    int64_t m_unitID;
                    bool m_unitIDHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_unitName;
                    bool m_unitNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEIOTDEVICERESPONSE_H_
