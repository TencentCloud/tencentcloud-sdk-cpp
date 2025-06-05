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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATETRAFFICPACKAGESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATETRAFFICPACKAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateTrafficPackages请求参数结构体
                */
                class CreateTrafficPackagesRequest : public AbstractModel
                {
                public:
                    CreateTrafficPackagesRequest();
                    ~CreateTrafficPackagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流量包规格。可选值:
<li>10: 10GB流量，有效期一个月</li>
<li>50: 50GB流量，有效期一个月</li>
<li>512: 512GB流量，有效期一个月</li>
<li>1024: 1TB流量，有效期一个月</li>
<li>5120: 5TB流量，有效期一个月</li>
<li>51200: 50TB流量，有效期一个月</li>
<li>60: 60GB流量，有效期半年</li>
<li>300: 300GB流量，有效期半年</li>
<li>3072: 3TB流量，有效期半年</li>
<li>6144: 6TB流量，有效期半年</li>
<li>30720: 30TB流量，有效期半年</li>
<li>61440: 60TB流量，有效期半年</li>
<li>307200: 300TB流量，有效期半年</li>
                     * @return TrafficAmount 流量包规格。可选值:
<li>10: 10GB流量，有效期一个月</li>
<li>50: 50GB流量，有效期一个月</li>
<li>512: 512GB流量，有效期一个月</li>
<li>1024: 1TB流量，有效期一个月</li>
<li>5120: 5TB流量，有效期一个月</li>
<li>51200: 50TB流量，有效期一个月</li>
<li>60: 60GB流量，有效期半年</li>
<li>300: 300GB流量，有效期半年</li>
<li>3072: 3TB流量，有效期半年</li>
<li>6144: 6TB流量，有效期半年</li>
<li>30720: 30TB流量，有效期半年</li>
<li>61440: 60TB流量，有效期半年</li>
<li>307200: 300TB流量，有效期半年</li>
                     * 
                     */
                    uint64_t GetTrafficAmount() const;

                    /**
                     * 设置流量包规格。可选值:
<li>10: 10GB流量，有效期一个月</li>
<li>50: 50GB流量，有效期一个月</li>
<li>512: 512GB流量，有效期一个月</li>
<li>1024: 1TB流量，有效期一个月</li>
<li>5120: 5TB流量，有效期一个月</li>
<li>51200: 50TB流量，有效期一个月</li>
<li>60: 60GB流量，有效期半年</li>
<li>300: 300GB流量，有效期半年</li>
<li>3072: 3TB流量，有效期半年</li>
<li>6144: 6TB流量，有效期半年</li>
<li>30720: 30TB流量，有效期半年</li>
<li>61440: 60TB流量，有效期半年</li>
<li>307200: 300TB流量，有效期半年</li>
                     * @param _trafficAmount 流量包规格。可选值:
<li>10: 10GB流量，有效期一个月</li>
<li>50: 50GB流量，有效期一个月</li>
<li>512: 512GB流量，有效期一个月</li>
<li>1024: 1TB流量，有效期一个月</li>
<li>5120: 5TB流量，有效期一个月</li>
<li>51200: 50TB流量，有效期一个月</li>
<li>60: 60GB流量，有效期半年</li>
<li>300: 300GB流量，有效期半年</li>
<li>3072: 3TB流量，有效期半年</li>
<li>6144: 6TB流量，有效期半年</li>
<li>30720: 30TB流量，有效期半年</li>
<li>61440: 60TB流量，有效期半年</li>
<li>307200: 300TB流量，有效期半年</li>
                     * 
                     */
                    void SetTrafficAmount(const uint64_t& _trafficAmount);

                    /**
                     * 判断参数 TrafficAmount 是否已赋值
                     * @return TrafficAmount 是否已赋值
                     * 
                     */
                    bool TrafficAmountHasBeenSet() const;

                    /**
                     * 获取流量包数量，可选范围 1~20。
                     * @return TrafficPackageCount 流量包数量，可选范围 1~20。
                     * 
                     */
                    uint64_t GetTrafficPackageCount() const;

                    /**
                     * 设置流量包数量，可选范围 1~20。
                     * @param _trafficPackageCount 流量包数量，可选范围 1~20。
                     * 
                     */
                    void SetTrafficPackageCount(const uint64_t& _trafficPackageCount);

                    /**
                     * 判断参数 TrafficPackageCount 是否已赋值
                     * @return TrafficPackageCount 是否已赋值
                     * 
                     */
                    bool TrafficPackageCountHasBeenSet() const;

                    /**
                     * 获取抵扣类型，默认为 FULL_TIME，可选值: 
<li>FULL_TIME: 全时流量包</li>
<li>IDLE_TIME: 闲时流量包</li>
                     * @return DeductType 抵扣类型，默认为 FULL_TIME，可选值: 
<li>FULL_TIME: 全时流量包</li>
<li>IDLE_TIME: 闲时流量包</li>
                     * 
                     */
                    std::string GetDeductType() const;

                    /**
                     * 设置抵扣类型，默认为 FULL_TIME，可选值: 
<li>FULL_TIME: 全时流量包</li>
<li>IDLE_TIME: 闲时流量包</li>
                     * @param _deductType 抵扣类型，默认为 FULL_TIME，可选值: 
<li>FULL_TIME: 全时流量包</li>
<li>IDLE_TIME: 闲时流量包</li>
                     * 
                     */
                    void SetDeductType(const std::string& _deductType);

                    /**
                     * 判断参数 DeductType 是否已赋值
                     * @return DeductType 是否已赋值
                     * 
                     */
                    bool DeductTypeHasBeenSet() const;

                private:

                    /**
                     * 流量包规格。可选值:
<li>10: 10GB流量，有效期一个月</li>
<li>50: 50GB流量，有效期一个月</li>
<li>512: 512GB流量，有效期一个月</li>
<li>1024: 1TB流量，有效期一个月</li>
<li>5120: 5TB流量，有效期一个月</li>
<li>51200: 50TB流量，有效期一个月</li>
<li>60: 60GB流量，有效期半年</li>
<li>300: 300GB流量，有效期半年</li>
<li>3072: 3TB流量，有效期半年</li>
<li>6144: 6TB流量，有效期半年</li>
<li>30720: 30TB流量，有效期半年</li>
<li>61440: 60TB流量，有效期半年</li>
<li>307200: 300TB流量，有效期半年</li>
                     */
                    uint64_t m_trafficAmount;
                    bool m_trafficAmountHasBeenSet;

                    /**
                     * 流量包数量，可选范围 1~20。
                     */
                    uint64_t m_trafficPackageCount;
                    bool m_trafficPackageCountHasBeenSet;

                    /**
                     * 抵扣类型，默认为 FULL_TIME，可选值: 
<li>FULL_TIME: 全时流量包</li>
<li>IDLE_TIME: 闲时流量包</li>
                     */
                    std::string m_deductType;
                    bool m_deductTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATETRAFFICPACKAGESREQUEST_H_
