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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCECHARGETYPEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCECHARGETYPEREQUEST_H_

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
                * ModifyDBInstanceChargeType请求参数结构体
                */
                class ModifyDBInstanceChargeTypeRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceChargeTypeRequest();
                    ~ModifyDBInstanceChargeTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如postgres-6fego161
                     * @return DBInstanceId 实例ID，形如postgres-6fego161
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID，形如postgres-6fego161
                     * @param _dBInstanceId 实例ID，形如postgres-6fego161
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
                     * 获取实例计费类型，目前支持：
<li>PREPAID：预付费，即包年包月</li>
<li>POSTPAID_BY_HOUR：后付费，即按量计费</li>
默认值：PREPAID
                     * @return InstanceChargeType 实例计费类型，目前支持：
<li>PREPAID：预付费，即包年包月</li>
<li>POSTPAID_BY_HOUR：后付费，即按量计费</li>
默认值：PREPAID
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置实例计费类型，目前支持：
<li>PREPAID：预付费，即包年包月</li>
<li>POSTPAID_BY_HOUR：后付费，即按量计费</li>
默认值：PREPAID
                     * @param _instanceChargeType 实例计费类型，目前支持：
<li>PREPAID：预付费，即包年包月</li>
<li>POSTPAID_BY_HOUR：后付费，即按量计费</li>
默认值：PREPAID
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取购买时长，单位：月。
<li>预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36</li>
<li>后付费：只支持1</li>
                     * @return Period 购买时长，单位：月。
<li>预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36</li>
<li>后付费：只支持1</li>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置购买时长，单位：月。
<li>预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36</li>
<li>后付费：只支持1</li>
                     * @param _period 购买时长，单位：月。
<li>预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36</li>
<li>后付费：只支持1</li>
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
                     * 获取续费标记：
<li>0：手动续费</li>
<li>1：自动续费</li>
默认值：0
                     * @return AutoRenewFlag 续费标记：
<li>0：手动续费</li>
<li>1：自动续费</li>
默认值：0
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置续费标记：
<li>0：手动续费</li>
<li>1：自动续费</li>
默认值：0
                     * @param _autoRenewFlag 续费标记：
<li>0：手动续费</li>
<li>1：自动续费</li>
默认值：0
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取是否自动使用代金券：
<li>0：否</li>
<li>1：是</li>
默认值：0
                     * @return AutoVoucher 是否自动使用代金券：
<li>0：否</li>
<li>1：是</li>
默认值：0
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动使用代金券：
<li>0：否</li>
<li>1：是</li>
默认值：0
                     * @param _autoVoucher 是否自动使用代金券：
<li>0：否</li>
<li>1：是</li>
默认值：0
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                private:

                    /**
                     * 实例ID，形如postgres-6fego161
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 实例计费类型，目前支持：
<li>PREPAID：预付费，即包年包月</li>
<li>POSTPAID_BY_HOUR：后付费，即按量计费</li>
默认值：PREPAID
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 购买时长，单位：月。
<li>预付费：支持1,2,3,4,5,6,7,8,9,10,11,12,24,36</li>
<li>后付费：只支持1</li>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 续费标记：
<li>0：手动续费</li>
<li>1：自动续费</li>
默认值：0
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 是否自动使用代金券：
<li>0：否</li>
<li>1：是</li>
默认值：0
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCECHARGETYPEREQUEST_H_
