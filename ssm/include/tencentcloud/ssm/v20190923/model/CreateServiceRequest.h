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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_CREATESERVICEREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_CREATESERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * CreateService请求参数结构体
                */
                class CreateServiceRequest : public AbstractModel
                {
                public:
                    CreateServiceRequest();
                    ~CreateServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>仅支持 PostPay，区分大小写</p><p>枚举值：</p><ul><li>PostPay： 后付费 按量计费模式</li></ul><p>仅支持 PostPay，区分大小写</p>
                     * @return PayMode <p>仅支持 PostPay，区分大小写</p><p>枚举值：</p><ul><li>PostPay： 后付费 按量计费模式</li></ul><p>仅支持 PostPay，区分大小写</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>仅支持 PostPay，区分大小写</p><p>枚举值：</p><ul><li>PostPay： 后付费 按量计费模式</li></ul><p>仅支持 PostPay，区分大小写</p>
                     * @param _payMode <p>仅支持 PostPay，区分大小写</p><p>枚举值：</p><ul><li>PostPay： 后付费 按量计费模式</li></ul><p>仅支持 PostPay，区分大小写</p>
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>客户端生成的创建请求标识。同一次逻辑创建发生重试时，须使用相同的值。</p><p>参数格式：1～64 个可见 ASCII 字符（! 至 ~）。</p><p>入参限制：必填；不能含空格、中文或控制字符。建议使用 ssm-&lt;UUID&gt;，不要包含密钥或个人信息。</p><p>默认值：留空，由调用方生成；不要设置固定默认值。</p><p>SSM 将其透传给计费侧，不存储或返回。订单状态不明时先核单，再决定是否用原值重试。</p>
                     * @return ClientToken <p>客户端生成的创建请求标识。同一次逻辑创建发生重试时，须使用相同的值。</p><p>参数格式：1～64 个可见 ASCII 字符（! 至 ~）。</p><p>入参限制：必填；不能含空格、中文或控制字符。建议使用 ssm-&lt;UUID&gt;，不要包含密钥或个人信息。</p><p>默认值：留空，由调用方生成；不要设置固定默认值。</p><p>SSM 将其透传给计费侧，不存储或返回。订单状态不明时先核单，再决定是否用原值重试。</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>客户端生成的创建请求标识。同一次逻辑创建发生重试时，须使用相同的值。</p><p>参数格式：1～64 个可见 ASCII 字符（! 至 ~）。</p><p>入参限制：必填；不能含空格、中文或控制字符。建议使用 ssm-&lt;UUID&gt;，不要包含密钥或个人信息。</p><p>默认值：留空，由调用方生成；不要设置固定默认值。</p><p>SSM 将其透传给计费侧，不存储或返回。订单状态不明时先核单，再决定是否用原值重试。</p>
                     * @param _clientToken <p>客户端生成的创建请求标识。同一次逻辑创建发生重试时，须使用相同的值。</p><p>参数格式：1～64 个可见 ASCII 字符（! 至 ~）。</p><p>入参限制：必填；不能含空格、中文或控制字符。建议使用 ssm-&lt;UUID&gt;，不要包含密钥或个人信息。</p><p>默认值：留空，由调用方生成；不要设置固定默认值。</p><p>SSM 将其透传给计费侧，不存储或返回。订单状态不明时先核单，再决定是否用原值重试。</p>
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * <p>仅支持 PostPay，区分大小写</p><p>枚举值：</p><ul><li>PostPay： 后付费 按量计费模式</li></ul><p>仅支持 PostPay，区分大小写</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>客户端生成的创建请求标识。同一次逻辑创建发生重试时，须使用相同的值。</p><p>参数格式：1～64 个可见 ASCII 字符（! 至 ~）。</p><p>入参限制：必填；不能含空格、中文或控制字符。建议使用 ssm-&lt;UUID&gt;，不要包含密钥或个人信息。</p><p>默认值：留空，由调用方生成；不要设置固定默认值。</p><p>SSM 将其透传给计费侧，不存储或返回。订单状态不明时先核单，再决定是否用原值重试。</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_CREATESERVICEREQUEST_H_
