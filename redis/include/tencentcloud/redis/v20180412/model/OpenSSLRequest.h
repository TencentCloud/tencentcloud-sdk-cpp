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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_OPENSSLREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_OPENSSLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * OpenSSL请求参数结构体
                */
                class OpenSSLRequest : public AbstractModel
                {
                public:
                    OpenSSLRequest();
                    ~OpenSSLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID，请登录<a href="https://console.cloud.tencent.com/redis/instance/list">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>实例 ID，请登录<a href="https://console.cloud.tencent.com/redis/instance/list">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID，请登录<a href="https://console.cloud.tencent.com/redis/instance/list">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>实例 ID，请登录<a href="https://console.cloud.tencent.com/redis/instance/list">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>SSL地址类型。</p><p>枚举值：</p><ul><li>0： 不限。</li><li>1： 内网IPv4。</li><li>2： 内网IPv6。</li><li>3： 外网。</li><li>-1： 未指定。</li></ul><p>默认值：0</p>
                     * @return AddressType <p>SSL地址类型。</p><p>枚举值：</p><ul><li>0： 不限。</li><li>1： 内网IPv4。</li><li>2： 内网IPv6。</li><li>3： 外网。</li><li>-1： 未指定。</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetAddressType() const;

                    /**
                     * 设置<p>SSL地址类型。</p><p>枚举值：</p><ul><li>0： 不限。</li><li>1： 内网IPv4。</li><li>2： 内网IPv6。</li><li>3： 外网。</li><li>-1： 未指定。</li></ul><p>默认值：0</p>
                     * @param _addressType <p>SSL地址类型。</p><p>枚举值：</p><ul><li>0： 不限。</li><li>1： 内网IPv4。</li><li>2： 内网IPv6。</li><li>3： 外网。</li><li>-1： 未指定。</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetAddressType(const int64_t& _addressType);

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     * 
                     */
                    bool AddressTypeHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID，请登录<a href="https://console.cloud.tencent.com/redis/instance/list">Redis控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>SSL地址类型。</p><p>枚举值：</p><ul><li>0： 不限。</li><li>1： 内网IPv4。</li><li>2： 内网IPv6。</li><li>3： 外网。</li><li>-1： 未指定。</li></ul><p>默认值：0</p>
                     */
                    int64_t m_addressType;
                    bool m_addressTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_OPENSSLREQUEST_H_
