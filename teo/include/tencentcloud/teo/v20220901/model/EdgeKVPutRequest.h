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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVPUTREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVPUTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * EdgeKVPut请求参数结构体
                */
                class EdgeKVPutRequest : public AbstractModel
                {
                public:
                    EdgeKVPutRequest();
                    ~EdgeKVPutRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取命名空间名称。
                     * @return Namespace 命名空间名称。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间名称。
                     * @param _namespace 命名空间名称。
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取键名，长度为 1-512 个字符，支持合法 UTF-8 字符。
                     * @return Key 键名，长度为 1-512 个字符，支持合法 UTF-8 字符。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置键名，长度为 1-512 个字符，支持合法 UTF-8 字符。
                     * @param _key 键名，长度为 1-512 个字符，支持合法 UTF-8 字符。
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取键值。不能为空，最大支持 1 MB。支持存储字符串数据。
                     * @return Value 键值。不能为空，最大支持 1 MB。支持存储字符串数据。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置键值。不能为空，最大支持 1 MB。支持存储字符串数据。
                     * @param _value 键值。不能为空，最大支持 1 MB。支持存储字符串数据。
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取键值对的过期时间，绝对时间，单位为秒，表示从 1970 年 1 月 1 日 00:00:00（UTC）起经过的秒数（即 Unix 时间戳）。取值必须大于等于当前时间 + 60，即过期时间距当前至少 60 秒。当 Expiration 与 ExpirationTTL 同时填写时，以 ExpirationTTL 为准；当两者均不填写时，键值对永不过期。
                     * @return Expiration 键值对的过期时间，绝对时间，单位为秒，表示从 1970 年 1 月 1 日 00:00:00（UTC）起经过的秒数（即 Unix 时间戳）。取值必须大于等于当前时间 + 60，即过期时间距当前至少 60 秒。当 Expiration 与 ExpirationTTL 同时填写时，以 ExpirationTTL 为准；当两者均不填写时，键值对永不过期。
                     * 
                     */
                    int64_t GetExpiration() const;

                    /**
                     * 设置键值对的过期时间，绝对时间，单位为秒，表示从 1970 年 1 月 1 日 00:00:00（UTC）起经过的秒数（即 Unix 时间戳）。取值必须大于等于当前时间 + 60，即过期时间距当前至少 60 秒。当 Expiration 与 ExpirationTTL 同时填写时，以 ExpirationTTL 为准；当两者均不填写时，键值对永不过期。
                     * @param _expiration 键值对的过期时间，绝对时间，单位为秒，表示从 1970 年 1 月 1 日 00:00:00（UTC）起经过的秒数（即 Unix 时间戳）。取值必须大于等于当前时间 + 60，即过期时间距当前至少 60 秒。当 Expiration 与 ExpirationTTL 同时填写时，以 ExpirationTTL 为准；当两者均不填写时，键值对永不过期。
                     * 
                     */
                    void SetExpiration(const int64_t& _expiration);

                    /**
                     * 判断参数 Expiration 是否已赋值
                     * @return Expiration 是否已赋值
                     * 
                     */
                    bool ExpirationHasBeenSet() const;

                    /**
                     * 获取键值对的存活时长，相对时间，单位为秒，表示数据将在写入后经过指定秒数过期。取值范围：大于等于 60。当 Expiration 与 ExpirationTTL 同时填写时，以 ExpirationTTL 为准；当两者均不填写时，键值对永不过期。
                     * @return ExpirationTTL 键值对的存活时长，相对时间，单位为秒，表示数据将在写入后经过指定秒数过期。取值范围：大于等于 60。当 Expiration 与 ExpirationTTL 同时填写时，以 ExpirationTTL 为准；当两者均不填写时，键值对永不过期。
                     * 
                     */
                    int64_t GetExpirationTTL() const;

                    /**
                     * 设置键值对的存活时长，相对时间，单位为秒，表示数据将在写入后经过指定秒数过期。取值范围：大于等于 60。当 Expiration 与 ExpirationTTL 同时填写时，以 ExpirationTTL 为准；当两者均不填写时，键值对永不过期。
                     * @param _expirationTTL 键值对的存活时长，相对时间，单位为秒，表示数据将在写入后经过指定秒数过期。取值范围：大于等于 60。当 Expiration 与 ExpirationTTL 同时填写时，以 ExpirationTTL 为准；当两者均不填写时，键值对永不过期。
                     * 
                     */
                    void SetExpirationTTL(const int64_t& _expirationTTL);

                    /**
                     * 判断参数 ExpirationTTL 是否已赋值
                     * @return ExpirationTTL 是否已赋值
                     * 
                     */
                    bool ExpirationTTLHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 命名空间名称。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 键名，长度为 1-512 个字符，支持合法 UTF-8 字符。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 键值。不能为空，最大支持 1 MB。支持存储字符串数据。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 键值对的过期时间，绝对时间，单位为秒，表示从 1970 年 1 月 1 日 00:00:00（UTC）起经过的秒数（即 Unix 时间戳）。取值必须大于等于当前时间 + 60，即过期时间距当前至少 60 秒。当 Expiration 与 ExpirationTTL 同时填写时，以 ExpirationTTL 为准；当两者均不填写时，键值对永不过期。
                     */
                    int64_t m_expiration;
                    bool m_expirationHasBeenSet;

                    /**
                     * 键值对的存活时长，相对时间，单位为秒，表示数据将在写入后经过指定秒数过期。取值范围：大于等于 60。当 Expiration 与 ExpirationTTL 同时填写时，以 ExpirationTTL 为准；当两者均不填写时，键值对永不过期。
                     */
                    int64_t m_expirationTTL;
                    bool m_expirationTTLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVPUTREQUEST_H_
