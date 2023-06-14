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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBRENEWALPRICEREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBRENEWALPRICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeDCDBRenewalPrice请求参数结构体
                */
                class DescribeDCDBRenewalPriceRequest : public AbstractModel
                {
                public:
                    DescribeDCDBRenewalPriceRequest();
                    ~DescribeDCDBRenewalPriceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待续费的实例ID。形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     * @return InstanceId 待续费的实例ID。形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置待续费的实例ID。形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     * @param _instanceId 待续费的实例ID。形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取续费时长，单位：月。不传则默认为1个月。
                     * @return Period 续费时长，单位：月。不传则默认为1个月。
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置续费时长，单位：月。不传则默认为1个月。
                     * @param _period 续费时长，单位：月。不传则默认为1个月。
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取价格金额单位，不传默认单位为分，取值：  
* pent：分
* microPent：微分
                     * @return AmountUnit 价格金额单位，不传默认单位为分，取值：  
* pent：分
* microPent：微分
                     * 
                     */
                    std::string GetAmountUnit() const;

                    /**
                     * 设置价格金额单位，不传默认单位为分，取值：  
* pent：分
* microPent：微分
                     * @param _amountUnit 价格金额单位，不传默认单位为分，取值：  
* pent：分
* microPent：微分
                     * 
                     */
                    void SetAmountUnit(const std::string& _amountUnit);

                    /**
                     * 判断参数 AmountUnit 是否已赋值
                     * @return AmountUnit 是否已赋值
                     * 
                     */
                    bool AmountUnitHasBeenSet() const;

                private:

                    /**
                     * 待续费的实例ID。形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 续费时长，单位：月。不传则默认为1个月。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 价格金额单位，不传默认单位为分，取值：  
* pent：分
* microPent：微分
                     */
                    std::string m_amountUnit;
                    bool m_amountUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBRENEWALPRICEREQUEST_H_
