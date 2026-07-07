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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATEMODELROUTERRESOURCEPACKAGEREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATEMODELROUTERRESOURCEPACKAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * CreateModelRouterResourcePackage请求参数结构体
                */
                class CreateModelRouterResourcePackageRequest : public AbstractModel
                {
                public:
                    CreateModelRouterResourcePackageRequest();
                    ~CreateModelRouterResourcePackageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型路由资源包容量</p><p>取值范围：[1000, 10000000]</p><p>单次购买的模型路由资源包容量下限为1000，上限为10000000</p>
                     * @return ModelRouterResourcePackageAmount <p>模型路由资源包容量</p><p>取值范围：[1000, 10000000]</p><p>单次购买的模型路由资源包容量下限为1000，上限为10000000</p>
                     * 
                     */
                    uint64_t GetModelRouterResourcePackageAmount() const;

                    /**
                     * 设置<p>模型路由资源包容量</p><p>取值范围：[1000, 10000000]</p><p>单次购买的模型路由资源包容量下限为1000，上限为10000000</p>
                     * @param _modelRouterResourcePackageAmount <p>模型路由资源包容量</p><p>取值范围：[1000, 10000000]</p><p>单次购买的模型路由资源包容量下限为1000，上限为10000000</p>
                     * 
                     */
                    void SetModelRouterResourcePackageAmount(const uint64_t& _modelRouterResourcePackageAmount);

                    /**
                     * 判断参数 ModelRouterResourcePackageAmount 是否已赋值
                     * @return ModelRouterResourcePackageAmount 是否已赋值
                     * 
                     */
                    bool ModelRouterResourcePackageAmountHasBeenSet() const;

                    /**
                     * 获取<p>是否自动续订。</p><p>0:不自动续订, 1:用尽到期续订</p>
                     * @return AutoPurchaseFlag <p>是否自动续订。</p><p>0:不自动续订, 1:用尽到期续订</p>
                     * 
                     */
                    uint64_t GetAutoPurchaseFlag() const;

                    /**
                     * 设置<p>是否自动续订。</p><p>0:不自动续订, 1:用尽到期续订</p>
                     * @param _autoPurchaseFlag <p>是否自动续订。</p><p>0:不自动续订, 1:用尽到期续订</p>
                     * 
                     */
                    void SetAutoPurchaseFlag(const uint64_t& _autoPurchaseFlag);

                    /**
                     * 判断参数 AutoPurchaseFlag 是否已赋值
                     * @return AutoPurchaseFlag 是否已赋值
                     * 
                     */
                    bool AutoPurchaseFlagHasBeenSet() const;

                    /**
                     * 获取<p>该笔订单是否自动选择代金券</p><p>默认值：false（不自动选择代金券）</p><p>true时会为本笔订单自动匹配满足条件、最优惠的代金券</p>
                     * @return AutoVoucher <p>该笔订单是否自动选择代金券</p><p>默认值：false（不自动选择代金券）</p><p>true时会为本笔订单自动匹配满足条件、最优惠的代金券</p>
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置<p>该笔订单是否自动选择代金券</p><p>默认值：false（不自动选择代金券）</p><p>true时会为本笔订单自动匹配满足条件、最优惠的代金券</p>
                     * @param _autoVoucher <p>该笔订单是否自动选择代金券</p><p>默认值：false（不自动选择代金券）</p><p>true时会为本笔订单自动匹配满足条件、最优惠的代金券</p>
                     * 
                     */
                    void SetAutoVoucher(const bool& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                private:

                    /**
                     * <p>模型路由资源包容量</p><p>取值范围：[1000, 10000000]</p><p>单次购买的模型路由资源包容量下限为1000，上限为10000000</p>
                     */
                    uint64_t m_modelRouterResourcePackageAmount;
                    bool m_modelRouterResourcePackageAmountHasBeenSet;

                    /**
                     * <p>是否自动续订。</p><p>0:不自动续订, 1:用尽到期续订</p>
                     */
                    uint64_t m_autoPurchaseFlag;
                    bool m_autoPurchaseFlagHasBeenSet;

                    /**
                     * <p>该笔订单是否自动选择代金券</p><p>默认值：false（不自动选择代金券）</p><p>true时会为本笔订单自动匹配满足条件、最优惠的代金券</p>
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATEMODELROUTERRESOURCEPACKAGEREQUEST_H_
