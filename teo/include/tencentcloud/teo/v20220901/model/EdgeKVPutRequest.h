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
                     * 获取键名，长度为 1-512 个字符，允许的字符为字母、数字、中划线和下划线。
                     * @return Key 键名，长度为 1-512 个字符，允许的字符为字母、数字、中划线和下划线。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置键名，长度为 1-512 个字符，允许的字符为字母、数字、中划线和下划线。
                     * @param _key 键名，长度为 1-512 个字符，允许的字符为字母、数字、中划线和下划线。
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
                     * 获取过期时间，绝对时间。表示从 1970 年 1 月 1 日（UTC/GMT 的午夜）开始所经过的秒数，不能小于当前时间。若 Expiration 和 ExpirationTTL 都填写，以 ExpirationTTL 为准。若 Expiration 和 ExpirationTTL 都不填写，则该键值对永不过期。
                     * @return Expiration 过期时间，绝对时间。表示从 1970 年 1 月 1 日（UTC/GMT 的午夜）开始所经过的秒数，不能小于当前时间。若 Expiration 和 ExpirationTTL 都填写，以 ExpirationTTL 为准。若 Expiration 和 ExpirationTTL 都不填写，则该键值对永不过期。
                     * 
                     */
                    int64_t GetExpiration() const;

                    /**
                     * 设置过期时间，绝对时间。表示从 1970 年 1 月 1 日（UTC/GMT 的午夜）开始所经过的秒数，不能小于当前时间。若 Expiration 和 ExpirationTTL 都填写，以 ExpirationTTL 为准。若 Expiration 和 ExpirationTTL 都不填写，则该键值对永不过期。
                     * @param _expiration 过期时间，绝对时间。表示从 1970 年 1 月 1 日（UTC/GMT 的午夜）开始所经过的秒数，不能小于当前时间。若 Expiration 和 ExpirationTTL 都填写，以 ExpirationTTL 为准。若 Expiration 和 ExpirationTTL 都不填写，则该键值对永不过期。
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
                     * 获取过期时间，相对时间，单位为秒。表示数据将在指定秒数后过期，必须大于 0。若 Expiration 和 ExpirationTTL 都填写，以 ExpirationTTL 为准。若 Expiration 和 ExpirationTTL 都不填写，则该键值对永不过期。
                     * @return ExpirationTTL 过期时间，相对时间，单位为秒。表示数据将在指定秒数后过期，必须大于 0。若 Expiration 和 ExpirationTTL 都填写，以 ExpirationTTL 为准。若 Expiration 和 ExpirationTTL 都不填写，则该键值对永不过期。
                     * 
                     */
                    int64_t GetExpirationTTL() const;

                    /**
                     * 设置过期时间，相对时间，单位为秒。表示数据将在指定秒数后过期，必须大于 0。若 Expiration 和 ExpirationTTL 都填写，以 ExpirationTTL 为准。若 Expiration 和 ExpirationTTL 都不填写，则该键值对永不过期。
                     * @param _expirationTTL 过期时间，相对时间，单位为秒。表示数据将在指定秒数后过期，必须大于 0。若 Expiration 和 ExpirationTTL 都填写，以 ExpirationTTL 为准。若 Expiration 和 ExpirationTTL 都不填写，则该键值对永不过期。
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
                     * 键名，长度为 1-512 个字符，允许的字符为字母、数字、中划线和下划线。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 键值。不能为空，最大支持 1 MB。支持存储字符串数据。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 过期时间，绝对时间。表示从 1970 年 1 月 1 日（UTC/GMT 的午夜）开始所经过的秒数，不能小于当前时间。若 Expiration 和 ExpirationTTL 都填写，以 ExpirationTTL 为准。若 Expiration 和 ExpirationTTL 都不填写，则该键值对永不过期。
                     */
                    int64_t m_expiration;
                    bool m_expirationHasBeenSet;

                    /**
                     * 过期时间，相对时间，单位为秒。表示数据将在指定秒数后过期，必须大于 0。若 Expiration 和 ExpirationTTL 都填写，以 ExpirationTTL 为准。若 Expiration 和 ExpirationTTL 都不填写，则该键值对永不过期。
                     */
                    int64_t m_expirationTTL;
                    bool m_expirationTTLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVPUTREQUEST_H_
