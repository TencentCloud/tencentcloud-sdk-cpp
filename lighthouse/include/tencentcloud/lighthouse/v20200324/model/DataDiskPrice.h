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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DATADISKPRICE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DATADISKPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 数据盘价格
                */
                class DataDiskPrice : public AbstractModel
                {
                public:
                    DataDiskPrice();
                    ~DataDiskPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>云硬盘ID。</p>
                     * @return DiskId <p>云硬盘ID。</p>
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置<p>云硬盘ID。</p>
                     * @param _diskId <p>云硬盘ID。</p>
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取<p>云硬盘单价。</p><p>单位：元</p>
                     * @return OriginalDiskPrice <p>云硬盘单价。</p><p>单位：元</p>
                     * 
                     */
                    double GetOriginalDiskPrice() const;

                    /**
                     * 设置<p>云硬盘单价。</p><p>单位：元</p>
                     * @param _originalDiskPrice <p>云硬盘单价。</p><p>单位：元</p>
                     * 
                     */
                    void SetOriginalDiskPrice(const double& _originalDiskPrice);

                    /**
                     * 判断参数 OriginalDiskPrice 是否已赋值
                     * @return OriginalDiskPrice 是否已赋值
                     * 
                     */
                    bool OriginalDiskPriceHasBeenSet() const;

                    /**
                     * 获取<p>云硬盘总价。</p><p>单位：元</p>
                     * @return OriginalPrice <p>云硬盘总价。</p><p>单位：元</p>
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置<p>云硬盘总价。</p><p>单位：元</p>
                     * @param _originalPrice <p>云硬盘总价。</p><p>单位：元</p>
                     * 
                     */
                    void SetOriginalPrice(const double& _originalPrice);

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     * 
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取<p>折扣。</p>
                     * @return Discount <p>折扣。</p>
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置<p>折扣。</p>
                     * @param _discount <p>折扣。</p>
                     * 
                     */
                    void SetDiscount(const double& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     * 
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取<p>折后总价。</p><p>单位：元</p>
                     * @return DiscountPrice <p>折后总价。</p><p>单位：元</p>
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置<p>折后总价。</p><p>单位：元</p>
                     * @param _discountPrice <p>折后总价。</p><p>单位：元</p>
                     * 
                     */
                    void SetDiscountPrice(const double& _discountPrice);

                    /**
                     * 判断参数 DiscountPrice 是否已赋值
                     * @return DiscountPrice 是否已赋值
                     * 
                     */
                    bool DiscountPriceHasBeenSet() const;

                    /**
                     * 获取<p>数据盘挂载的实例ID。</p>
                     * @return InstanceId <p>数据盘挂载的实例ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>数据盘挂载的实例ID。</p>
                     * @param _instanceId <p>数据盘挂载的实例ID。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * <p>云硬盘ID。</p>
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * <p>云硬盘单价。</p><p>单位：元</p>
                     */
                    double m_originalDiskPrice;
                    bool m_originalDiskPriceHasBeenSet;

                    /**
                     * <p>云硬盘总价。</p><p>单位：元</p>
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * <p>折扣。</p>
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * <p>折后总价。</p><p>单位：元</p>
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * <p>数据盘挂载的实例ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DATADISKPRICE_H_
