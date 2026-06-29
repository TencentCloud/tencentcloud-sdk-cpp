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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_TOOLBILLING_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_TOOLBILLING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/BasicBilling.h>
#include <tencentcloud/adp/v20260520/model/ComplexBilling.h>
#include <tencentcloud/adp/v20260520/model/DuplexBilling.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ToolBilling
                */
                class ToolBilling : public AbstractModel
                {
                public:
                    ToolBilling();
                    ~ToolBilling() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>基础计费信息</p>
                     * @return BasicBilling <p>基础计费信息</p>
                     * 
                     */
                    BasicBilling GetBasicBilling() const;

                    /**
                     * 设置<p>基础计费信息</p>
                     * @param _basicBilling <p>基础计费信息</p>
                     * 
                     */
                    void SetBasicBilling(const BasicBilling& _basicBilling);

                    /**
                     * 判断参数 BasicBilling 是否已赋值
                     * @return BasicBilling 是否已赋值
                     * 
                     */
                    bool BasicBillingHasBeenSet() const;

                    /**
                     * 获取<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>BILLING_TYPE_FREE</td><td>0</td><td>免费</td></tr><tr><td>BILLING_TYPE_LIMITED_FREE</td><td>1</td><td>限时免费</td></tr><tr><td>BILLING_TYPE_OFFICIAL_PAID</td><td>2</td><td>官方收费</td></tr><tr><td>BILLING_TYPE_OFFICIAL_PAID_OLD_FREE</td><td>3</td><td>官方收费（新/升级用户收费，存量老用户限时免费）</td></tr></tbody></table>
                     * @return BillingType <table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>BILLING_TYPE_FREE</td><td>0</td><td>免费</td></tr><tr><td>BILLING_TYPE_LIMITED_FREE</td><td>1</td><td>限时免费</td></tr><tr><td>BILLING_TYPE_OFFICIAL_PAID</td><td>2</td><td>官方收费</td></tr><tr><td>BILLING_TYPE_OFFICIAL_PAID_OLD_FREE</td><td>3</td><td>官方收费（新/升级用户收费，存量老用户限时免费）</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetBillingType() const;

                    /**
                     * 设置<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>BILLING_TYPE_FREE</td><td>0</td><td>免费</td></tr><tr><td>BILLING_TYPE_LIMITED_FREE</td><td>1</td><td>限时免费</td></tr><tr><td>BILLING_TYPE_OFFICIAL_PAID</td><td>2</td><td>官方收费</td></tr><tr><td>BILLING_TYPE_OFFICIAL_PAID_OLD_FREE</td><td>3</td><td>官方收费（新/升级用户收费，存量老用户限时免费）</td></tr></tbody></table>
                     * @param _billingType <table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>BILLING_TYPE_FREE</td><td>0</td><td>免费</td></tr><tr><td>BILLING_TYPE_LIMITED_FREE</td><td>1</td><td>限时免费</td></tr><tr><td>BILLING_TYPE_OFFICIAL_PAID</td><td>2</td><td>官方收费</td></tr><tr><td>BILLING_TYPE_OFFICIAL_PAID_OLD_FREE</td><td>3</td><td>官方收费（新/升级用户收费，存量老用户限时免费）</td></tr></tbody></table>
                     * 
                     */
                    void SetBillingType(const int64_t& _billingType);

                    /**
                     * 判断参数 BillingType 是否已赋值
                     * @return BillingType 是否已赋值
                     * 
                     */
                    bool BillingTypeHasBeenSet() const;

                    /**
                     * 获取<p>复合类型计费信息</p>
                     * @return ComplexBilling <p>复合类型计费信息</p>
                     * 
                     */
                    ComplexBilling GetComplexBilling() const;

                    /**
                     * 设置<p>复合类型计费信息</p>
                     * @param _complexBilling <p>复合类型计费信息</p>
                     * 
                     */
                    void SetComplexBilling(const ComplexBilling& _complexBilling);

                    /**
                     * 判断参数 ComplexBilling 是否已赋值
                     * @return ComplexBilling 是否已赋值
                     * 
                     */
                    bool ComplexBillingHasBeenSet() const;

                    /**
                     * 获取<p>双向计费信息</p>
                     * @return DuplexBilling <p>双向计费信息</p>
                     * 
                     */
                    DuplexBilling GetDuplexBilling() const;

                    /**
                     * 设置<p>双向计费信息</p>
                     * @param _duplexBilling <p>双向计费信息</p>
                     * 
                     */
                    void SetDuplexBilling(const DuplexBilling& _duplexBilling);

                    /**
                     * 判断参数 DuplexBilling 是否已赋值
                     * @return DuplexBilling 是否已赋值
                     * 
                     */
                    bool DuplexBillingHasBeenSet() const;

                private:

                    /**
                     * <p>基础计费信息</p>
                     */
                    BasicBilling m_basicBilling;
                    bool m_basicBillingHasBeenSet;

                    /**
                     * <table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>BILLING_TYPE_FREE</td><td>0</td><td>免费</td></tr><tr><td>BILLING_TYPE_LIMITED_FREE</td><td>1</td><td>限时免费</td></tr><tr><td>BILLING_TYPE_OFFICIAL_PAID</td><td>2</td><td>官方收费</td></tr><tr><td>BILLING_TYPE_OFFICIAL_PAID_OLD_FREE</td><td>3</td><td>官方收费（新/升级用户收费，存量老用户限时免费）</td></tr></tbody></table>
                     */
                    int64_t m_billingType;
                    bool m_billingTypeHasBeenSet;

                    /**
                     * <p>复合类型计费信息</p>
                     */
                    ComplexBilling m_complexBilling;
                    bool m_complexBillingHasBeenSet;

                    /**
                     * <p>双向计费信息</p>
                     */
                    DuplexBilling m_duplexBilling;
                    bool m_duplexBillingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_TOOLBILLING_H_
