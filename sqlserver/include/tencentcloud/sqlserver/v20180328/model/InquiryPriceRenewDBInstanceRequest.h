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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICERENEWDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICERENEWDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * InquiryPriceRenewDBInstance请求参数结构体
                */
                class InquiryPriceRenewDBInstanceRequest : public AbstractModel
                {
                public:
                    InquiryPriceRenewDBInstanceRequest();
                    ~InquiryPriceRenewDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取续费周期。按月续费最多48个月。默认查询续费一个月的价格
                     * @return Period 续费周期。按月续费最多48个月。默认查询续费一个月的价格
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置续费周期。按月续费最多48个月。默认查询续费一个月的价格
                     * @param _period 续费周期。按月续费最多48个月。默认查询续费一个月的价格
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取续费周期单位。month表示按月续费，当前只支持按月付费查询价格
                     * @return TimeUnit 续费周期单位。month表示按月续费，当前只支持按月付费查询价格
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置续费周期单位。month表示按月续费，当前只支持按月付费查询价格
                     * @param _timeUnit 续费周期单位。month表示按月续费，当前只支持按月付费查询价格
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 续费周期。按月续费最多48个月。默认查询续费一个月的价格
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 续费周期单位。month表示按月续费，当前只支持按月付费查询价格
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICERENEWDBINSTANCEREQUEST_H_
