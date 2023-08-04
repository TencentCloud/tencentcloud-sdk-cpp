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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RENEWDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RENEWDBINSTANCEREQUEST_H_

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
                * RenewDBInstance请求参数结构体
                */
                class RenewDBInstanceRequest : public AbstractModel
                {
                public:
                    RenewDBInstanceRequest();
                    ~RenewDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如mssql-j8kv137v
                     * @return InstanceId 实例ID，形如mssql-j8kv137v
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，形如mssql-j8kv137v
                     * @param _instanceId 实例ID，形如mssql-j8kv137v
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
                     * 获取续费多少个月，取值范围为1-48，默认为1
                     * @return Period 续费多少个月，取值范围为1-48，默认为1
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置续费多少个月，取值范围为1-48，默认为1
                     * @param _period 续费多少个月，取值范围为1-48，默认为1
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
                     * 获取是否自动使用代金券，0-不使用；1-使用；默认不使用
                     * @return AutoVoucher 是否自动使用代金券，0-不使用；1-使用；默认不使用
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动使用代金券，0-不使用；1-使用；默认不使用
                     * @param _autoVoucher 是否自动使用代金券，0-不使用；1-使用；默认不使用
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取代金券ID数组，目前只支持使用1张代金券
                     * @return VoucherIds 代金券ID数组，目前只支持使用1张代金券
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置代金券ID数组，目前只支持使用1张代金券
                     * @param _voucherIds 代金券ID数组，目前只支持使用1张代金券
                     * 
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     * 
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取续费标记 0:正常续费 1:自动续费：只用于按量计费转包年包月时有效。
                     * @return AutoRenewFlag 续费标记 0:正常续费 1:自动续费：只用于按量计费转包年包月时有效。
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置续费标记 0:正常续费 1:自动续费：只用于按量计费转包年包月时有效。
                     * @param _autoRenewFlag 续费标记 0:正常续费 1:自动续费：只用于按量计费转包年包月时有效。
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                private:

                    /**
                     * 实例ID，形如mssql-j8kv137v
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 续费多少个月，取值范围为1-48，默认为1
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 是否自动使用代金券，0-不使用；1-使用；默认不使用
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 代金券ID数组，目前只支持使用1张代金券
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * 续费标记 0:正常续费 1:自动续费：只用于按量计费转包年包月时有效。
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RENEWDBINSTANCEREQUEST_H_
