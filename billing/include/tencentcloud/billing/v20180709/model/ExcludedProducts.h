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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_EXCLUDEDPRODUCTS_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_EXCLUDEDPRODUCTS_H_

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
                * 不适用商品信息
                */
                class ExcludedProducts : public AbstractModel
                {
                public:
                    ExcludedProducts();
                    ~ExcludedProducts() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取不适用商品名称
                     * @return GoodsName 不适用商品名称
                     * 
                     */
                    std::string GetGoodsName() const;

                    /**
                     * 设置不适用商品名称
                     * @param _goodsName 不适用商品名称
                     * 
                     */
                    void SetGoodsName(const std::string& _goodsName);

                    /**
                     * 判断参数 GoodsName 是否已赋值
                     * @return GoodsName 是否已赋值
                     * 
                     */
                    bool GoodsNameHasBeenSet() const;

                    /**
                     * 获取postPay后付费/prePay预付费/riPay预留实例/空字符串或者"*"表示全部模式。
                     * @return PayMode postPay后付费/prePay预付费/riPay预留实例/空字符串或者"*"表示全部模式。
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置postPay后付费/prePay预付费/riPay预留实例/空字符串或者"*"表示全部模式。
                     * @param _payMode postPay后付费/prePay预付费/riPay预留实例/空字符串或者"*"表示全部模式。
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                private:

                    /**
                     * 不适用商品名称
                     */
                    std::string m_goodsName;
                    bool m_goodsNameHasBeenSet;

                    /**
                     * postPay后付费/prePay预付费/riPay预留实例/空字符串或者"*"表示全部模式。
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_EXCLUDEDPRODUCTS_H_
