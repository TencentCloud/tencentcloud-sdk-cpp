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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DISISOLATEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DISISOLATEDBINSTANCESREQUEST_H_

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
                * DisIsolateDBInstances请求参数结构体
                */
                class DisIsolateDBInstancesRequest : public AbstractModel
                {
                public:
                    DisIsolateDBInstancesRequest();
                    ~DisIsolateDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源ID列表
                     * @return DBInstanceIdSet 资源ID列表
                     */
                    std::vector<std::string> GetDBInstanceIdSet() const;

                    /**
                     * 设置资源ID列表
                     * @param DBInstanceIdSet 资源ID列表
                     */
                    void SetDBInstanceIdSet(const std::vector<std::string>& _dBInstanceIdSet);

                    /**
                     * 判断参数 DBInstanceIdSet 是否已赋值
                     * @return DBInstanceIdSet 是否已赋值
                     */
                    bool DBInstanceIdSetHasBeenSet() const;

                    /**
                     * 获取包年包月实例解隔离时购买时常 以月为单位
                     * @return Period 包年包月实例解隔离时购买时常 以月为单位
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置包年包月实例解隔离时购买时常 以月为单位
                     * @param Period 包年包月实例解隔离时购买时常 以月为单位
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取是否使用代金券
                     * @return AutoVoucher 是否使用代金券
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置是否使用代金券
                     * @param AutoVoucher 是否使用代金券
                     */
                    void SetAutoVoucher(const bool& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取代金券id列表
                     * @return VoucherIds 代金券id列表
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置代金券id列表
                     * @param VoucherIds 代金券id列表
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     */
                    bool VoucherIdsHasBeenSet() const;

                private:

                    /**
                     * 资源ID列表
                     */
                    std::vector<std::string> m_dBInstanceIdSet;
                    bool m_dBInstanceIdSetHasBeenSet;

                    /**
                     * 包年包月实例解隔离时购买时常 以月为单位
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 是否使用代金券
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 代金券id列表
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DISISOLATEDBINSTANCESREQUEST_H_
