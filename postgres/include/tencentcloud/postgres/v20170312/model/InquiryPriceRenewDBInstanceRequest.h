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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICERENEWDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICERENEWDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
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
                     * 获取实例ID，可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)获取。
（此接口仅支持预付费实例的查询）
                     * @return DBInstanceId 实例ID，可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)获取。
（此接口仅支持预付费实例的查询）
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID，可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)获取。
（此接口仅支持预付费实例的查询）
                     * @param _dBInstanceId 实例ID，可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)获取。
（此接口仅支持预付费实例的查询）
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取续费周期，按月计算
                     * @return Period 续费周期，按月计算
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置续费周期，按月计算
                     * @param _period 续费周期，按月计算
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
                     * 实例ID，可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)获取。
（此接口仅支持预付费实例的查询）
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 续费周期，按月计算
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_INQUIRYPRICERENEWDBINSTANCEREQUEST_H_
