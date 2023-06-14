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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_RENEWHOSTSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_RENEWHOSTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/ChargePrepaid.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * RenewHosts请求参数结构体
                */
                class RenewHostsRequest : public AbstractModel
                {
                public:
                    RenewHostsRequest();
                    ~RenewHostsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取一个或多个待操作的CDH实例ID。每次请求的CDH实例的上限为100。
                     * @return HostIds 一个或多个待操作的CDH实例ID。每次请求的CDH实例的上限为100。
                     * 
                     */
                    std::vector<std::string> GetHostIds() const;

                    /**
                     * 设置一个或多个待操作的CDH实例ID。每次请求的CDH实例的上限为100。
                     * @param _hostIds 一个或多个待操作的CDH实例ID。每次请求的CDH实例的上限为100。
                     * 
                     */
                    void SetHostIds(const std::vector<std::string>& _hostIds);

                    /**
                     * 判断参数 HostIds 是否已赋值
                     * @return HostIds 是否已赋值
                     * 
                     */
                    bool HostIdsHasBeenSet() const;

                    /**
                     * 获取预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * @return HostChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * 
                     */
                    ChargePrepaid GetHostChargePrepaid() const;

                    /**
                     * 设置预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * @param _hostChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * 
                     */
                    void SetHostChargePrepaid(const ChargePrepaid& _hostChargePrepaid);

                    /**
                     * 判断参数 HostChargePrepaid 是否已赋值
                     * @return HostChargePrepaid 是否已赋值
                     * 
                     */
                    bool HostChargePrepaidHasBeenSet() const;

                private:

                    /**
                     * 一个或多个待操作的CDH实例ID。每次请求的CDH实例的上限为100。
                     */
                    std::vector<std::string> m_hostIds;
                    bool m_hostIdsHasBeenSet;

                    /**
                     * 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     */
                    ChargePrepaid m_hostChargePrepaid;
                    bool m_hostChargePrepaidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RENEWHOSTSREQUEST_H_
