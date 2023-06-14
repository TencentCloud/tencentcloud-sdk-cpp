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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_RENEWDCDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_RENEWDCDBINSTANCEREQUEST_H_

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
                * RenewDCDBInstance请求参数结构体
                */
                class RenewDCDBInstanceRequest : public AbstractModel
                {
                public:
                    RenewDCDBInstanceRequest();
                    ~RenewDCDBInstanceRequest() = default;
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
                     * 获取续费时长，单位：月。
                     * @return Period 续费时长，单位：月。
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置续费时长，单位：月。
                     * @param _period 续费时长，单位：月。
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
                     * 获取是否自动使用代金券进行支付，默认不使用。
                     * @return AutoVoucher 是否自动使用代金券进行支付，默认不使用。
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置是否自动使用代金券进行支付，默认不使用。
                     * @param _autoVoucher 是否自动使用代金券进行支付，默认不使用。
                     * 
                     */
                    void SetAutoVoucher(const bool& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取代金券ID列表，目前仅支持指定一张代金券。
                     * @return VoucherIds 代金券ID列表，目前仅支持指定一张代金券。
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置代金券ID列表，目前仅支持指定一张代金券。
                     * @param _voucherIds 代金券ID列表，目前仅支持指定一张代金券。
                     * 
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     * 
                     */
                    bool VoucherIdsHasBeenSet() const;

                private:

                    /**
                     * 待续费的实例ID。形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 续费时长，单位：月。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 是否自动使用代金券进行支付，默认不使用。
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 代金券ID列表，目前仅支持指定一张代金券。
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_RENEWDCDBINSTANCEREQUEST_H_
