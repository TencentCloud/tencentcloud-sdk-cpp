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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_ALLOCATEHOSTSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_ALLOCATEHOSTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Placement.h>
#include <tencentcloud/cvm/v20170312/model/ChargePrepaid.h>
#include <tencentcloud/cvm/v20170312/model/TagSpecification.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * AllocateHosts请求参数结构体
                */
                class AllocateHostsRequest : public AbstractModel
                {
                public:
                    AllocateHostsRequest();
                    ~AllocateHostsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * @return Placement 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * @param _placement 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取用于保证请求幂等性的字符串。
                     * @return ClientToken 用于保证请求幂等性的字符串。
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置用于保证请求幂等性的字符串。
                     * @param _clientToken 用于保证请求幂等性的字符串。
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

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

                    /**
                     * 获取实例计费类型。目前仅支持：PREPAID（预付费，即包年包月模式），默认为：'PREPAID'。
                     * @return HostChargeType 实例计费类型。目前仅支持：PREPAID（预付费，即包年包月模式），默认为：'PREPAID'。
                     * 
                     */
                    std::string GetHostChargeType() const;

                    /**
                     * 设置实例计费类型。目前仅支持：PREPAID（预付费，即包年包月模式），默认为：'PREPAID'。
                     * @param _hostChargeType 实例计费类型。目前仅支持：PREPAID（预付费，即包年包月模式），默认为：'PREPAID'。
                     * 
                     */
                    void SetHostChargeType(const std::string& _hostChargeType);

                    /**
                     * 判断参数 HostChargeType 是否已赋值
                     * @return HostChargeType 是否已赋值
                     * 
                     */
                    bool HostChargeTypeHasBeenSet() const;

                    /**
                     * 获取CDH实例机型，默认为：'HS1'。
                     * @return HostType CDH实例机型，默认为：'HS1'。
                     * 
                     */
                    std::string GetHostType() const;

                    /**
                     * 设置CDH实例机型，默认为：'HS1'。
                     * @param _hostType CDH实例机型，默认为：'HS1'。
                     * 
                     */
                    void SetHostType(const std::string& _hostType);

                    /**
                     * 判断参数 HostType 是否已赋值
                     * @return HostType 是否已赋值
                     * 
                     */
                    bool HostTypeHasBeenSet() const;

                    /**
                     * 获取购买CDH实例数量，默认为：1。
                     * @return HostCount 购买CDH实例数量，默认为：1。
                     * 
                     */
                    uint64_t GetHostCount() const;

                    /**
                     * 设置购买CDH实例数量，默认为：1。
                     * @param _hostCount 购买CDH实例数量，默认为：1。
                     * 
                     */
                    void SetHostCount(const uint64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取标签描述列表。通过指定该参数可以同时绑定标签到相应的资源实例。
                     * @return TagSpecification 标签描述列表。通过指定该参数可以同时绑定标签到相应的资源实例。
                     * 
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置标签描述列表。通过指定该参数可以同时绑定标签到相应的资源实例。
                     * @param _tagSpecification 标签描述列表。通过指定该参数可以同时绑定标签到相应的资源实例。
                     * 
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                private:

                    /**
                     * 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 用于保证请求幂等性的字符串。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     */
                    ChargePrepaid m_hostChargePrepaid;
                    bool m_hostChargePrepaidHasBeenSet;

                    /**
                     * 实例计费类型。目前仅支持：PREPAID（预付费，即包年包月模式），默认为：'PREPAID'。
                     */
                    std::string m_hostChargeType;
                    bool m_hostChargeTypeHasBeenSet;

                    /**
                     * CDH实例机型，默认为：'HS1'。
                     */
                    std::string m_hostType;
                    bool m_hostTypeHasBeenSet;

                    /**
                     * 购买CDH实例数量，默认为：1。
                     */
                    uint64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * 标签描述列表。通过指定该参数可以同时绑定标签到相应的资源实例。
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_ALLOCATEHOSTSREQUEST_H_
