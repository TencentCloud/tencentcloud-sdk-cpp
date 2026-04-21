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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEPAYMODEDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEPAYMODEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 成本分析支付方式复杂类型
                */
                class AnalysePayModeDetail : public AbstractModel
                {
                public:
                    AnalysePayModeDetail();
                    ~AnalysePayModeDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>计费模式code</p><p>枚举值：</p><ul><li>prePay： 包年包月</li><li>postPay： 按量计费</li></ul>
                     * @return PayMode <p>计费模式code</p><p>枚举值：</p><ul><li>prePay： 包年包月</li><li>postPay： 按量计费</li></ul>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>计费模式code</p><p>枚举值：</p><ul><li>prePay： 包年包月</li><li>postPay： 按量计费</li></ul>
                     * @param _payMode <p>计费模式code</p><p>枚举值：</p><ul><li>prePay： 包年包月</li><li>postPay： 按量计费</li></ul>
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
                     * 获取<p>计费模式Name</p>
                     * @return PayModeName <p>计费模式Name</p>
                     * 
                     */
                    std::string GetPayModeName() const;

                    /**
                     * 设置<p>计费模式Name</p>
                     * @param _payModeName <p>计费模式Name</p>
                     * 
                     */
                    void SetPayModeName(const std::string& _payModeName);

                    /**
                     * 判断参数 PayModeName 是否已赋值
                     * @return PayModeName 是否已赋值
                     * 
                     */
                    bool PayModeNameHasBeenSet() const;

                private:

                    /**
                     * <p>计费模式code</p><p>枚举值：</p><ul><li>prePay： 包年包月</li><li>postPay： 按量计费</li></ul>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>计费模式Name</p>
                     */
                    std::string m_payModeName;
                    bool m_payModeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEPAYMODEDETAIL_H_
