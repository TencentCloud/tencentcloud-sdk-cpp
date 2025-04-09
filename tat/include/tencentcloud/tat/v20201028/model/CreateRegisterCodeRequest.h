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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_CREATEREGISTERCODEREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_CREATEREGISTERCODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * CreateRegisterCode请求参数结构体
                */
                class CreateRegisterCodeRequest : public AbstractModel
                {
                public:
                    CreateRegisterCodeRequest();
                    ~CreateRegisterCodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取注册码描述。最大长度为 128 字符。
                     * @return Description 注册码描述。最大长度为 128 字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置注册码描述。最大长度为 128 字符。
                     * @param _description 注册码描述。最大长度为 128 字符。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取注册实例名称前缀。最大长度为 32 字符。
                     * @return InstanceNamePrefix 注册实例名称前缀。最大长度为 32 字符。
                     * 
                     */
                    std::string GetInstanceNamePrefix() const;

                    /**
                     * 设置注册实例名称前缀。最大长度为 32 字符。
                     * @param _instanceNamePrefix 注册实例名称前缀。最大长度为 32 字符。
                     * 
                     */
                    void SetInstanceNamePrefix(const std::string& _instanceNamePrefix);

                    /**
                     * 判断参数 InstanceNamePrefix 是否已赋值
                     * @return InstanceNamePrefix 是否已赋值
                     * 
                     */
                    bool InstanceNamePrefixHasBeenSet() const;

                    /**
                     * 获取该注册码允许注册的实例数目。默认值为 10，最小值为 1，最大值为 10000。
                     * @return RegisterLimit 该注册码允许注册的实例数目。默认值为 10，最小值为 1，最大值为 10000。
                     * 
                     */
                    int64_t GetRegisterLimit() const;

                    /**
                     * 设置该注册码允许注册的实例数目。默认值为 10，最小值为 1，最大值为 10000。
                     * @param _registerLimit 该注册码允许注册的实例数目。默认值为 10，最小值为 1，最大值为 10000。
                     * 
                     */
                    void SetRegisterLimit(const int64_t& _registerLimit);

                    /**
                     * 判断参数 RegisterLimit 是否已赋值
                     * @return RegisterLimit 是否已赋值
                     * 
                     */
                    bool RegisterLimitHasBeenSet() const;

                    /**
                     * 获取该注册码的有效时间，单位为小时。默认值为 4。

- 若传入值小于等于 99999，则以小时为单位设置有效时间。
- 若传入值大于 99999，则设置为长期有效。
                     * @return EffectiveTime 该注册码的有效时间，单位为小时。默认值为 4。

- 若传入值小于等于 99999，则以小时为单位设置有效时间。
- 若传入值大于 99999，则设置为长期有效。
                     * 
                     */
                    int64_t GetEffectiveTime() const;

                    /**
                     * 设置该注册码的有效时间，单位为小时。默认值为 4。

- 若传入值小于等于 99999，则以小时为单位设置有效时间。
- 若传入值大于 99999，则设置为长期有效。
                     * @param _effectiveTime 该注册码的有效时间，单位为小时。默认值为 4。

- 若传入值小于等于 99999，则以小时为单位设置有效时间。
- 若传入值大于 99999，则设置为长期有效。
                     * 
                     */
                    void SetEffectiveTime(const int64_t& _effectiveTime);

                    /**
                     * 判断参数 EffectiveTime 是否已赋值
                     * @return EffectiveTime 是否已赋值
                     * 
                     */
                    bool EffectiveTimeHasBeenSet() const;

                    /**
                     * 获取限制注册码只能从 IpAddressRange 所描述公网出口进行注册。

默认为空，即无任何限制。

取值应为标准 IPv4 或 CIDRv4 格式。例如 192.168.1.1 或 192.168.0.0/16。
                     * @return IpAddressRange 限制注册码只能从 IpAddressRange 所描述公网出口进行注册。

默认为空，即无任何限制。

取值应为标准 IPv4 或 CIDRv4 格式。例如 192.168.1.1 或 192.168.0.0/16。
                     * 
                     */
                    std::string GetIpAddressRange() const;

                    /**
                     * 设置限制注册码只能从 IpAddressRange 所描述公网出口进行注册。

默认为空，即无任何限制。

取值应为标准 IPv4 或 CIDRv4 格式。例如 192.168.1.1 或 192.168.0.0/16。
                     * @param _ipAddressRange 限制注册码只能从 IpAddressRange 所描述公网出口进行注册。

默认为空，即无任何限制。

取值应为标准 IPv4 或 CIDRv4 格式。例如 192.168.1.1 或 192.168.0.0/16。
                     * 
                     */
                    void SetIpAddressRange(const std::string& _ipAddressRange);

                    /**
                     * 判断参数 IpAddressRange 是否已赋值
                     * @return IpAddressRange 是否已赋值
                     * 
                     */
                    bool IpAddressRangeHasBeenSet() const;

                private:

                    /**
                     * 注册码描述。最大长度为 128 字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 注册实例名称前缀。最大长度为 32 字符。
                     */
                    std::string m_instanceNamePrefix;
                    bool m_instanceNamePrefixHasBeenSet;

                    /**
                     * 该注册码允许注册的实例数目。默认值为 10，最小值为 1，最大值为 10000。
                     */
                    int64_t m_registerLimit;
                    bool m_registerLimitHasBeenSet;

                    /**
                     * 该注册码的有效时间，单位为小时。默认值为 4。

- 若传入值小于等于 99999，则以小时为单位设置有效时间。
- 若传入值大于 99999，则设置为长期有效。
                     */
                    int64_t m_effectiveTime;
                    bool m_effectiveTimeHasBeenSet;

                    /**
                     * 限制注册码只能从 IpAddressRange 所描述公网出口进行注册。

默认为空，即无任何限制。

取值应为标准 IPv4 或 CIDRv4 格式。例如 192.168.1.1 或 192.168.0.0/16。
                     */
                    std::string m_ipAddressRange;
                    bool m_ipAddressRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_CREATEREGISTERCODEREQUEST_H_
