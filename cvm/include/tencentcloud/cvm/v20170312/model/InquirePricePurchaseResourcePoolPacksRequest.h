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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_INQUIREPRICEPURCHASERESOURCEPOOLPACKSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_INQUIREPRICEPURCHASERESOURCEPOOLPACKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * InquirePricePurchaseResourcePoolPacks请求参数结构体
                */
                class InquirePricePurchaseResourcePoolPacksRequest : public AbstractModel
                {
                public:
                    InquirePricePurchaseResourcePoolPacksRequest();
                    ~InquirePricePurchaseResourcePoolPacksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例资源池预扣包所在可用区。形如：ap-guangzhou-6。可通过[DescribeZones](https://cloud.tencent.com/document/product/213/15707)接口获取可用区列表。
                     * @return Zone 实例资源池预扣包所在可用区。形如：ap-guangzhou-6。可通过[DescribeZones](https://cloud.tencent.com/document/product/213/15707)接口获取可用区列表。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例资源池预扣包所在可用区。形如：ap-guangzhou-6。可通过[DescribeZones](https://cloud.tencent.com/document/product/213/15707)接口获取可用区列表。
                     * @param _zone 实例资源池预扣包所在可用区。形如：ap-guangzhou-6。可通过[DescribeZones](https://cloud.tencent.com/document/product/213/15707)接口获取可用区列表。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取实例资源池的规格，仅支持整机/半整机规格。形如：SA9.96XLARGE1152。
                     * @return InstanceType 实例资源池的规格，仅支持整机/半整机规格。形如：SA9.96XLARGE1152。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例资源池的规格，仅支持整机/半整机规格。形如：SA9.96XLARGE1152。
                     * @param _instanceType 实例资源池的规格，仅支持整机/半整机规格。形如：SA9.96XLARGE1152。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取实例资源池的数量。1个数量代表1个半整机/整机资源池。
                     * @return InstanceCount 实例资源池的数量。1个数量代表1个半整机/整机资源池。
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置实例资源池的数量。1个数量代表1个半整机/整机资源池。
                     * @param _instanceCount 实例资源池的数量。1个数量代表1个半整机/整机资源池。
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取实例资源池的时长，单位：月。取值范围：1-60。
                     * @return Period 实例资源池的时长，单位：月。取值范围：1-60。
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置实例资源池的时长，单位：月。取值范围：1-60。
                     * @param _period 实例资源池的时长，单位：月。取值范围：1-60。
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * 实例资源池预扣包所在可用区。形如：ap-guangzhou-6。可通过[DescribeZones](https://cloud.tencent.com/document/product/213/15707)接口获取可用区列表。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例资源池的规格，仅支持整机/半整机规格。形如：SA9.96XLARGE1152。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例资源池的数量。1个数量代表1个半整机/整机资源池。
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 实例资源池的时长，单位：月。取值范围：1-60。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_INQUIREPRICEPURCHASERESOURCEPOOLPACKSREQUEST_H_
