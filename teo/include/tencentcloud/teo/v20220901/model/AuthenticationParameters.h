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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_AUTHENTICATIONPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_AUTHENTICATIONPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Token 鉴权 配置参数。
                */
                class AuthenticationParameters : public AbstractModel
                {
                public:
                    AuthenticationParameters();
                    ~AuthenticationParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取鉴权类型。取值有：

<li>TypeA：鉴权方式 A 类型，具体含义请参考 [鉴权方式 A](https://cloud.tencent.com/document/product/1552/109329)；</li>
<li>TypeB：鉴权方式 B 类型，具体含义请参考 [鉴权方式 B](https://cloud.tencent.com/document/product/1552/109330)；</li>
<li>TypeC：鉴权方式 C 类型，具体含义请参考 [鉴权方式 C](https://cloud.tencent.com/document/product/1552/109331)；</li>
<li>TypeD：鉴权方式 D 类型，具体含义请参考 [鉴权方式 D](https://cloud.tencent.com/document/product/1552/109332)；</li>
<li>TypeVOD：鉴权方式 V 类型，具体含义请参考 [鉴权方式 V](https://cloud.tencent.com/document/product/1552/109333)。</li>
                     * @return AuthType 鉴权类型。取值有：

<li>TypeA：鉴权方式 A 类型，具体含义请参考 [鉴权方式 A](https://cloud.tencent.com/document/product/1552/109329)；</li>
<li>TypeB：鉴权方式 B 类型，具体含义请参考 [鉴权方式 B](https://cloud.tencent.com/document/product/1552/109330)；</li>
<li>TypeC：鉴权方式 C 类型，具体含义请参考 [鉴权方式 C](https://cloud.tencent.com/document/product/1552/109331)；</li>
<li>TypeD：鉴权方式 D 类型，具体含义请参考 [鉴权方式 D](https://cloud.tencent.com/document/product/1552/109332)；</li>
<li>TypeVOD：鉴权方式 V 类型，具体含义请参考 [鉴权方式 V](https://cloud.tencent.com/document/product/1552/109333)。</li>
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置鉴权类型。取值有：

<li>TypeA：鉴权方式 A 类型，具体含义请参考 [鉴权方式 A](https://cloud.tencent.com/document/product/1552/109329)；</li>
<li>TypeB：鉴权方式 B 类型，具体含义请参考 [鉴权方式 B](https://cloud.tencent.com/document/product/1552/109330)；</li>
<li>TypeC：鉴权方式 C 类型，具体含义请参考 [鉴权方式 C](https://cloud.tencent.com/document/product/1552/109331)；</li>
<li>TypeD：鉴权方式 D 类型，具体含义请参考 [鉴权方式 D](https://cloud.tencent.com/document/product/1552/109332)；</li>
<li>TypeVOD：鉴权方式 V 类型，具体含义请参考 [鉴权方式 V](https://cloud.tencent.com/document/product/1552/109333)。</li>
                     * @param _authType 鉴权类型。取值有：

<li>TypeA：鉴权方式 A 类型，具体含义请参考 [鉴权方式 A](https://cloud.tencent.com/document/product/1552/109329)；</li>
<li>TypeB：鉴权方式 B 类型，具体含义请参考 [鉴权方式 B](https://cloud.tencent.com/document/product/1552/109330)；</li>
<li>TypeC：鉴权方式 C 类型，具体含义请参考 [鉴权方式 C](https://cloud.tencent.com/document/product/1552/109331)；</li>
<li>TypeD：鉴权方式 D 类型，具体含义请参考 [鉴权方式 D](https://cloud.tencent.com/document/product/1552/109332)；</li>
<li>TypeVOD：鉴权方式 V 类型，具体含义请参考 [鉴权方式 V](https://cloud.tencent.com/document/product/1552/109333)。</li>
                     * 
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取主鉴权密钥，由 6～40 位大小写英文字母或数字组成，不能包含 " 和 $。
                     * @return SecretKey 主鉴权密钥，由 6～40 位大小写英文字母或数字组成，不能包含 " 和 $。
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置主鉴权密钥，由 6～40 位大小写英文字母或数字组成，不能包含 " 和 $。
                     * @param _secretKey 主鉴权密钥，由 6～40 位大小写英文字母或数字组成，不能包含 " 和 $。
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
                     * 获取鉴权 URL 的有效时长，单位为秒，取值：1～630720000。用于判断客户端访问请求是否过期：
<li>若当前时间超过 “timestamp + 有效时长” 时间，则为过期请求，直接返回 403。</li>
<li>若当前时间未超过 “timestamp + 有效时长” 时间，则请求未过期，继续校验 md5 字符串。</li>注意：当 AuthType 为 TypeA、TypeB、TypeC、TypeD 之一时，此字段必填。
                     * @return Timeout 鉴权 URL 的有效时长，单位为秒，取值：1～630720000。用于判断客户端访问请求是否过期：
<li>若当前时间超过 “timestamp + 有效时长” 时间，则为过期请求，直接返回 403。</li>
<li>若当前时间未超过 “timestamp + 有效时长” 时间，则请求未过期，继续校验 md5 字符串。</li>注意：当 AuthType 为 TypeA、TypeB、TypeC、TypeD 之一时，此字段必填。
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置鉴权 URL 的有效时长，单位为秒，取值：1～630720000。用于判断客户端访问请求是否过期：
<li>若当前时间超过 “timestamp + 有效时长” 时间，则为过期请求，直接返回 403。</li>
<li>若当前时间未超过 “timestamp + 有效时长” 时间，则请求未过期，继续校验 md5 字符串。</li>注意：当 AuthType 为 TypeA、TypeB、TypeC、TypeD 之一时，此字段必填。
                     * @param _timeout 鉴权 URL 的有效时长，单位为秒，取值：1～630720000。用于判断客户端访问请求是否过期：
<li>若当前时间超过 “timestamp + 有效时长” 时间，则为过期请求，直接返回 403。</li>
<li>若当前时间未超过 “timestamp + 有效时长” 时间，则请求未过期，继续校验 md5 字符串。</li>注意：当 AuthType 为 TypeA、TypeB、TypeC、TypeD 之一时，此字段必填。
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取备鉴权密钥，由 6～40 位大小写英文字母或数字组成，不能包含 " 和 $。
                     * @return BackupSecretKey 备鉴权密钥，由 6～40 位大小写英文字母或数字组成，不能包含 " 和 $。
                     * 
                     */
                    std::string GetBackupSecretKey() const;

                    /**
                     * 设置备鉴权密钥，由 6～40 位大小写英文字母或数字组成，不能包含 " 和 $。
                     * @param _backupSecretKey 备鉴权密钥，由 6～40 位大小写英文字母或数字组成，不能包含 " 和 $。
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
                     * 获取鉴权参数名称，节点将校验此参数名对应的值。由 1～100 位大小写字母、数字或下划线组成。<br>注意：当 AuthType 为 TypeA、TypeD 之一时，此字段必填。
                     * @return AuthParam 鉴权参数名称，节点将校验此参数名对应的值。由 1～100 位大小写字母、数字或下划线组成。<br>注意：当 AuthType 为 TypeA、TypeD 之一时，此字段必填。
                     * 
                     */
                    std::string GetAuthParam() const;

                    /**
                     * 设置鉴权参数名称，节点将校验此参数名对应的值。由 1～100 位大小写字母、数字或下划线组成。<br>注意：当 AuthType 为 TypeA、TypeD 之一时，此字段必填。
                     * @param _authParam 鉴权参数名称，节点将校验此参数名对应的值。由 1～100 位大小写字母、数字或下划线组成。<br>注意：当 AuthType 为 TypeA、TypeD 之一时，此字段必填。
                     * 
                     */
                    void SetAuthParam(const std::string& _authParam);

                    /**
                     * 判断参数 AuthParam 是否已赋值
                     * @return AuthParam 是否已赋值
                     * 
                     */
                    bool AuthParamHasBeenSet() const;

                    /**
                     * 获取鉴权时间戳，和 AuthParam 字段的值不能相同。<br>注意：当 AuthType 为 TypeD 时，此字段必填。
                     * @return TimeParam 鉴权时间戳，和 AuthParam 字段的值不能相同。<br>注意：当 AuthType 为 TypeD 时，此字段必填。
                     * 
                     */
                    std::string GetTimeParam() const;

                    /**
                     * 设置鉴权时间戳，和 AuthParam 字段的值不能相同。<br>注意：当 AuthType 为 TypeD 时，此字段必填。
                     * @param _timeParam 鉴权时间戳，和 AuthParam 字段的值不能相同。<br>注意：当 AuthType 为 TypeD 时，此字段必填。
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
                     * 获取鉴权时间格式，取值有：
<li>dec：十进制；</li>
<li>hex：十六进制。</li>注意：当 AuthType 为 TypeD 时，此字段必填。默认为 hex。
                     * @return TimeFormat 鉴权时间格式，取值有：
<li>dec：十进制；</li>
<li>hex：十六进制。</li>注意：当 AuthType 为 TypeD 时，此字段必填。默认为 hex。
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置鉴权时间格式，取值有：
<li>dec：十进制；</li>
<li>hex：十六进制。</li>注意：当 AuthType 为 TypeD 时，此字段必填。默认为 hex。
                     * @param _timeFormat 鉴权时间格式，取值有：
<li>dec：十进制；</li>
<li>hex：十六进制。</li>注意：当 AuthType 为 TypeD 时，此字段必填。默认为 hex。
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
                     * 鉴权类型。取值有：

<li>TypeA：鉴权方式 A 类型，具体含义请参考 [鉴权方式 A](https://cloud.tencent.com/document/product/1552/109329)；</li>
<li>TypeB：鉴权方式 B 类型，具体含义请参考 [鉴权方式 B](https://cloud.tencent.com/document/product/1552/109330)；</li>
<li>TypeC：鉴权方式 C 类型，具体含义请参考 [鉴权方式 C](https://cloud.tencent.com/document/product/1552/109331)；</li>
<li>TypeD：鉴权方式 D 类型，具体含义请参考 [鉴权方式 D](https://cloud.tencent.com/document/product/1552/109332)；</li>
<li>TypeVOD：鉴权方式 V 类型，具体含义请参考 [鉴权方式 V](https://cloud.tencent.com/document/product/1552/109333)。</li>
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 主鉴权密钥，由 6～40 位大小写英文字母或数字组成，不能包含 " 和 $。
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * 鉴权 URL 的有效时长，单位为秒，取值：1～630720000。用于判断客户端访问请求是否过期：
<li>若当前时间超过 “timestamp + 有效时长” 时间，则为过期请求，直接返回 403。</li>
<li>若当前时间未超过 “timestamp + 有效时长” 时间，则请求未过期，继续校验 md5 字符串。</li>注意：当 AuthType 为 TypeA、TypeB、TypeC、TypeD 之一时，此字段必填。
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 备鉴权密钥，由 6～40 位大小写英文字母或数字组成，不能包含 " 和 $。
                     */
                    std::string m_backupSecretKey;
                    bool m_backupSecretKeyHasBeenSet;

                    /**
                     * 鉴权参数名称，节点将校验此参数名对应的值。由 1～100 位大小写字母、数字或下划线组成。<br>注意：当 AuthType 为 TypeA、TypeD 之一时，此字段必填。
                     */
                    std::string m_authParam;
                    bool m_authParamHasBeenSet;

                    /**
                     * 鉴权时间戳，和 AuthParam 字段的值不能相同。<br>注意：当 AuthType 为 TypeD 时，此字段必填。
                     */
                    std::string m_timeParam;
                    bool m_timeParamHasBeenSet;

                    /**
                     * 鉴权时间格式，取值有：
<li>dec：十进制；</li>
<li>hex：十六进制。</li>注意：当 AuthType 为 TypeD 时，此字段必填。默认为 hex。
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_AUTHENTICATIONPARAMETERS_H_
