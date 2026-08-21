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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EXPIRINGPRODUCT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EXPIRINGPRODUCT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 即将到期产品
                */
                class ExpiringProduct : public AbstractModel
                {
                public:
                    ExpiringProduct();
                    ~ExpiringProduct() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>产品ID</p>
                     * @return ProductId <p>产品ID</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>产品ID</p>
                     * @param _productId <p>产品ID</p>
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取<p>产品名称</p>
                     * @return ProductName <p>产品名称</p>
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置<p>产品名称</p>
                     * @param _productName <p>产品名称</p>
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取<p>距到期天数<br>单位：天</p>
                     * @return DaysToExpire <p>距到期天数<br>单位：天</p>
                     * 
                     */
                    int64_t GetDaysToExpire() const;

                    /**
                     * 设置<p>距到期天数<br>单位：天</p>
                     * @param _daysToExpire <p>距到期天数<br>单位：天</p>
                     * 
                     */
                    void SetDaysToExpire(const int64_t& _daysToExpire);

                    /**
                     * 判断参数 DaysToExpire 是否已赋值
                     * @return DaysToExpire 是否已赋值
                     * 
                     */
                    bool DaysToExpireHasBeenSet() const;

                    /**
                     * 获取<p>到期时间</p>
                     * @return ExpireTime <p>到期时间</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>到期时间</p>
                     * @param _expireTime <p>到期时间</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * <p>产品ID</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>产品名称</p>
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * <p>距到期天数<br>单位：天</p>
                     */
                    int64_t m_daysToExpire;
                    bool m_daysToExpireHasBeenSet;

                    /**
                     * <p>到期时间</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EXPIRINGPRODUCT_H_
