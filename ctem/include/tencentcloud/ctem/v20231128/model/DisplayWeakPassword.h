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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYWEAKPASSWORD_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYWEAKPASSWORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctem/v20231128/model/DisplayToolCommon.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * 弱口令详情
                */
                class DisplayWeakPassword : public AbstractModel
                {
                public:
                    DisplayWeakPassword();
                    ~DisplayWeakPassword() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主键ID
                     * @return Id 主键ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置主键ID
                     * @param _id 主键ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取公共字段
                     * @return DisplayToolCommon 公共字段
                     * 
                     */
                    DisplayToolCommon GetDisplayToolCommon() const;

                    /**
                     * 设置公共字段
                     * @param _displayToolCommon 公共字段
                     * 
                     */
                    void SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon);

                    /**
                     * 判断参数 DisplayToolCommon 是否已赋值
                     * @return DisplayToolCommon 是否已赋值
                     * 
                     */
                    bool DisplayToolCommonHasBeenSet() const;

                    /**
                     * 获取解析的IP
                     * @return Ip 解析的IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置解析的IP
                     * @param _ip 解析的IP
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
                     * 获取端口
                     * @return Port 端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置端口
                     * @param _port 端口
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Url地址
                     * @return Url Url地址
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Url地址
                     * @param _url Url地址
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
                     * 获取弱口令类型
                     * @return Type 弱口令类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置弱口令类型
                     * @param _type 弱口令类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取弱口令账号
                     * @return Account 弱口令账号
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置弱口令账号
                     * @param _account 弱口令账号
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取弱口令密码
                     * @return Password 弱口令密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置弱口令密码
                     * @param _password 弱口令密码
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取是否蜜罐
                     * @return IsHoneypot 是否蜜罐
                     * 
                     */
                    bool GetIsHoneypot() const;

                    /**
                     * 设置是否蜜罐
                     * @param _isHoneypot 是否蜜罐
                     * 
                     */
                    void SetIsHoneypot(const bool& _isHoneypot);

                    /**
                     * 判断参数 IsHoneypot 是否已赋值
                     * @return IsHoneypot 是否已赋值
                     * 
                     */
                    bool IsHoneypotHasBeenSet() const;

                    /**
                     * 获取截图
                     * @return ScreenshotUrl 截图
                     * 
                     */
                    std::string GetScreenshotUrl() const;

                    /**
                     * 设置截图
                     * @param _screenshotUrl 截图
                     * 
                     */
                    void SetScreenshotUrl(const std::string& _screenshotUrl);

                    /**
                     * 判断参数 ScreenshotUrl 是否已赋值
                     * @return ScreenshotUrl 是否已赋值
                     * 
                     */
                    bool ScreenshotUrlHasBeenSet() const;

                private:

                    /**
                     * 主键ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 公共字段
                     */
                    DisplayToolCommon m_displayToolCommon;
                    bool m_displayToolCommonHasBeenSet;

                    /**
                     * 解析的IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Url地址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 弱口令类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 弱口令账号
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 弱口令密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 是否蜜罐
                     */
                    bool m_isHoneypot;
                    bool m_isHoneypotHasBeenSet;

                    /**
                     * 截图
                     */
                    std::string m_screenshotUrl;
                    bool m_screenshotUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYWEAKPASSWORD_H_
