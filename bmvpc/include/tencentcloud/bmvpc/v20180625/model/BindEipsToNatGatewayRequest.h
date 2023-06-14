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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_BINDEIPSTONATGATEWAYREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_BINDEIPSTONATGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * BindEipsToNatGateway请求参数结构体
                */
                class BindEipsToNatGatewayRequest : public AbstractModel
                {
                public:
                    BindEipsToNatGatewayRequest();
                    ~BindEipsToNatGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取NAT网关ID，例如：nat-kdm476mp
                     * @return NatId NAT网关ID，例如：nat-kdm476mp
                     * 
                     */
                    std::string GetNatId() const;

                    /**
                     * 设置NAT网关ID，例如：nat-kdm476mp
                     * @param _natId NAT网关ID，例如：nat-kdm476mp
                     * 
                     */
                    void SetNatId(const std::string& _natId);

                    /**
                     * 判断参数 NatId 是否已赋值
                     * @return NatId 是否已赋值
                     * 
                     */
                    bool NatIdHasBeenSet() const;

                    /**
                     * 获取私有网络ID，例如：vpc-kd7d06of
                     * @return VpcId 私有网络ID，例如：vpc-kd7d06of
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID，例如：vpc-kd7d06of
                     * @param _vpcId 私有网络ID，例如：vpc-kd7d06of
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取已分配的EIP列表；AssignedEips和AutoAllocEipNum至少输入一个
                     * @return AssignedEips 已分配的EIP列表；AssignedEips和AutoAllocEipNum至少输入一个
                     * 
                     */
                    std::vector<std::string> GetAssignedEips() const;

                    /**
                     * 设置已分配的EIP列表；AssignedEips和AutoAllocEipNum至少输入一个
                     * @param _assignedEips 已分配的EIP列表；AssignedEips和AutoAllocEipNum至少输入一个
                     * 
                     */
                    void SetAssignedEips(const std::vector<std::string>& _assignedEips);

                    /**
                     * 判断参数 AssignedEips 是否已赋值
                     * @return AssignedEips 是否已赋值
                     * 
                     */
                    bool AssignedEipsHasBeenSet() const;

                    /**
                     * 获取新建EIP数目，系统将会按您的要求生产该数目个数EIP；AssignedEips和AutoAllocEipNum至少输入一个
                     * @return AutoAllocEipNum 新建EIP数目，系统将会按您的要求生产该数目个数EIP；AssignedEips和AutoAllocEipNum至少输入一个
                     * 
                     */
                    uint64_t GetAutoAllocEipNum() const;

                    /**
                     * 设置新建EIP数目，系统将会按您的要求生产该数目个数EIP；AssignedEips和AutoAllocEipNum至少输入一个
                     * @param _autoAllocEipNum 新建EIP数目，系统将会按您的要求生产该数目个数EIP；AssignedEips和AutoAllocEipNum至少输入一个
                     * 
                     */
                    void SetAutoAllocEipNum(const uint64_t& _autoAllocEipNum);

                    /**
                     * 判断参数 AutoAllocEipNum 是否已赋值
                     * @return AutoAllocEipNum 是否已赋值
                     * 
                     */
                    bool AutoAllocEipNumHasBeenSet() const;

                private:

                    /**
                     * NAT网关ID，例如：nat-kdm476mp
                     */
                    std::string m_natId;
                    bool m_natIdHasBeenSet;

                    /**
                     * 私有网络ID，例如：vpc-kd7d06of
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 已分配的EIP列表；AssignedEips和AutoAllocEipNum至少输入一个
                     */
                    std::vector<std::string> m_assignedEips;
                    bool m_assignedEipsHasBeenSet;

                    /**
                     * 新建EIP数目，系统将会按您的要求生产该数目个数EIP；AssignedEips和AutoAllocEipNum至少输入一个
                     */
                    uint64_t m_autoAllocEipNum;
                    bool m_autoAllocEipNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_BINDEIPSTONATGATEWAYREQUEST_H_
