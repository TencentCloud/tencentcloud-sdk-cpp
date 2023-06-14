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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_CREATEHOSTEDINTERFACEREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_CREATEHOSTEDINTERFACEREQUEST_H_

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
                * CreateHostedInterface请求参数结构体
                */
                class CreateHostedInterfaceRequest : public AbstractModel
                {
                public:
                    CreateHostedInterfaceRequest();
                    ~CreateHostedInterfaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取托管机器唯一ID 数组
                     * @return InstanceIds 托管机器唯一ID 数组
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置托管机器唯一ID 数组
                     * @param _instanceIds 托管机器唯一ID 数组
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
                     * 获取私有网络ID或者私有网络统一ID，建议使用统一ID
                     * @return VpcId 私有网络ID或者私有网络统一ID，建议使用统一ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID或者私有网络统一ID，建议使用统一ID
                     * @param _vpcId 私有网络ID或者私有网络统一ID，建议使用统一ID
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
                     * 获取子网ID或者子网统一ID，建议使用统一ID
                     * @return SubnetId 子网ID或者子网统一ID，建议使用统一ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID或者子网统一ID，建议使用统一ID
                     * @param _subnetId 子网ID或者子网统一ID，建议使用统一ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                private:

                    /**
                     * 托管机器唯一ID 数组
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 私有网络ID或者私有网络统一ID，建议使用统一ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID或者子网统一ID，建议使用统一ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_CREATEHOSTEDINTERFACEREQUEST_H_
