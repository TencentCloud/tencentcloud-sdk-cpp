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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENEWINSTANCESREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENEWINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/InstanceChargePrepaid.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * RenewInstances请求参数结构体
                */
                class RenewInstancesRequest : public AbstractModel
                {
                public:
                    RenewInstancesRequest();
                    ~RenewInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID列表。一个或多个待操作的实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。每次请求批量实例的上限为100。
                     * @return InstanceIds 实例ID列表。一个或多个待操作的实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。每次请求批量实例的上限为100。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例ID列表。一个或多个待操作的实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。每次请求批量实例的上限为100。
                     * @param _instanceIds 实例ID列表。一个或多个待操作的实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。每次请求批量实例的上限为100。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * @return InstanceChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * @param _instanceChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * 
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     * 
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取是否续费弹性数据盘。取值范围：
TRUE：表示续费实例同时续费其挂载的数据盘
FALSE：表示续费实例同时不再续费其挂载的数据盘
默认取值：TRUE。
                     * @return RenewDataDisk 是否续费弹性数据盘。取值范围：
TRUE：表示续费实例同时续费其挂载的数据盘
FALSE：表示续费实例同时不再续费其挂载的数据盘
默认取值：TRUE。
                     * 
                     */
                    bool GetRenewDataDisk() const;

                    /**
                     * 设置是否续费弹性数据盘。取值范围：
TRUE：表示续费实例同时续费其挂载的数据盘
FALSE：表示续费实例同时不再续费其挂载的数据盘
默认取值：TRUE。
                     * @param _renewDataDisk 是否续费弹性数据盘。取值范围：
TRUE：表示续费实例同时续费其挂载的数据盘
FALSE：表示续费实例同时不再续费其挂载的数据盘
默认取值：TRUE。
                     * 
                     */
                    void SetRenewDataDisk(const bool& _renewDataDisk);

                    /**
                     * 判断参数 RenewDataDisk 是否已赋值
                     * @return RenewDataDisk 是否已赋值
                     * 
                     */
                    bool RenewDataDiskHasBeenSet() const;

                    /**
                     * 获取是否自动抵扣代金券。取值范围：
TRUE：表示自动抵扣代金券
FALSE：表示不自动抵扣代金券
默认取值：FALSE。
                     * @return AutoVoucher 是否自动抵扣代金券。取值范围：
TRUE：表示自动抵扣代金券
FALSE：表示不自动抵扣代金券
默认取值：FALSE。
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置是否自动抵扣代金券。取值范围：
TRUE：表示自动抵扣代金券
FALSE：表示不自动抵扣代金券
默认取值：FALSE。
                     * @param _autoVoucher 是否自动抵扣代金券。取值范围：
TRUE：表示自动抵扣代金券
FALSE：表示不自动抵扣代金券
默认取值：FALSE。
                     * 
                     */
                    void SetAutoVoucher(const bool& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                private:

                    /**
                     * 实例ID列表。一个或多个待操作的实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。每次请求批量实例的上限为100。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * 是否续费弹性数据盘。取值范围：
TRUE：表示续费实例同时续费其挂载的数据盘
FALSE：表示续费实例同时不再续费其挂载的数据盘
默认取值：TRUE。
                     */
                    bool m_renewDataDisk;
                    bool m_renewDataDiskHasBeenSet;

                    /**
                     * 是否自动抵扣代金券。取值范围：
TRUE：表示自动抵扣代金券
FALSE：表示不自动抵扣代金券
默认取值：FALSE。
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENEWINSTANCESREQUEST_H_
