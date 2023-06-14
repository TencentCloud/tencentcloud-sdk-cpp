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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPED_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 时间戳防盗链高级版模式D配置。
                */
                class AdvancedAuthenticationTypeD : public AbstractModel
                {
                public:
                    AdvancedAuthenticationTypeD();
                    ~AdvancedAuthenticationTypeD() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用于计算签名的密钥，只允许字母和数字，长度6-32字节。
                     * @return SecretKey 用于计算签名的密钥，只允许字母和数字，长度6-32字节。
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置用于计算签名的密钥，只允许字母和数字，长度6-32字节。
                     * @param _secretKey 用于计算签名的密钥，只允许字母和数字，长度6-32字节。
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取备份密钥，当使用SecretKey鉴权失败时会使用该密钥重新鉴权。
                     * @return BackupSecretKey 备份密钥，当使用SecretKey鉴权失败时会使用该密钥重新鉴权。
                     * 
                     */
                    std::string GetBackupSecretKey() const;

                    /**
                     * 设置备份密钥，当使用SecretKey鉴权失败时会使用该密钥重新鉴权。
                     * @param _backupSecretKey 备份密钥，当使用SecretKey鉴权失败时会使用该密钥重新鉴权。
                     * 
                     */
                    void SetBackupSecretKey(const std::string& _backupSecretKey);

                    /**
                     * 判断参数 BackupSecretKey 是否已赋值
                     * @return BackupSecretKey 是否已赋值
                     * 
                     */
                    bool BackupSecretKeyHasBeenSet() const;

                    /**
                     * 获取uri串中签名的字段名，字母，数字或下划线构成，同时必须以字母开头。
                     * @return SignParam uri串中签名的字段名，字母，数字或下划线构成，同时必须以字母开头。
                     * 
                     */
                    std::string GetSignParam() const;

                    /**
                     * 设置uri串中签名的字段名，字母，数字或下划线构成，同时必须以字母开头。
                     * @param _signParam uri串中签名的字段名，字母，数字或下划线构成，同时必须以字母开头。
                     * 
                     */
                    void SetSignParam(const std::string& _signParam);

                    /**
                     * 判断参数 SignParam 是否已赋值
                     * @return SignParam 是否已赋值
                     * 
                     */
                    bool SignParamHasBeenSet() const;

                    /**
                     * 获取uri串中时间的字段名，字母，数字或下划线构成，同时必须以字母开头。
                     * @return TimeParam uri串中时间的字段名，字母，数字或下划线构成，同时必须以字母开头。
                     * 
                     */
                    std::string GetTimeParam() const;

                    /**
                     * 设置uri串中时间的字段名，字母，数字或下划线构成，同时必须以字母开头。
                     * @param _timeParam uri串中时间的字段名，字母，数字或下划线构成，同时必须以字母开头。
                     * 
                     */
                    void SetTimeParam(const std::string& _timeParam);

                    /**
                     * 判断参数 TimeParam 是否已赋值
                     * @return TimeParam 是否已赋值
                     * 
                     */
                    bool TimeParamHasBeenSet() const;

                    /**
                     * 获取过期时间，单位秒。
                     * @return ExpireTime 过期时间，单位秒。
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置过期时间，单位秒。
                     * @param _expireTime 过期时间，单位秒。
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取时间格式，dec，hex分别表示十进制，十六进制。
                     * @return TimeFormat 时间格式，dec，hex分别表示十进制，十六进制。
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置时间格式，dec，hex分别表示十进制，十六进制。
                     * @param _timeFormat 时间格式，dec，hex分别表示十进制，十六进制。
                     * 
                     */
                    void SetTimeFormat(const std::string& _timeFormat);

                    /**
                     * 判断参数 TimeFormat 是否已赋值
                     * @return TimeFormat 是否已赋值
                     * 
                     */
                    bool TimeFormatHasBeenSet() const;

                private:

                    /**
                     * 用于计算签名的密钥，只允许字母和数字，长度6-32字节。
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * 备份密钥，当使用SecretKey鉴权失败时会使用该密钥重新鉴权。
                     */
                    std::string m_backupSecretKey;
                    bool m_backupSecretKeyHasBeenSet;

                    /**
                     * uri串中签名的字段名，字母，数字或下划线构成，同时必须以字母开头。
                     */
                    std::string m_signParam;
                    bool m_signParamHasBeenSet;

                    /**
                     * uri串中时间的字段名，字母，数字或下划线构成，同时必须以字母开头。
                     */
                    std::string m_timeParam;
                    bool m_timeParamHasBeenSet;

                    /**
                     * 过期时间，单位秒。
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 时间格式，dec，hex分别表示十进制，十六进制。
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPED_H_
