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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_NETWORK_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_NETWORK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 网络配置信息
                */
                class NetWork : public AbstractModel
                {
                public:
                    NetWork();
                    ~NetWork() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务clbip
                     * @return ClbIp 服务clbip
                     * 
                     */
                    std::string GetClbIp() const;

                    /**
                     * 设置服务clbip
                     * @param _clbIp 服务clbip
                     * 
                     */
                    void SetClbIp(const std::string& _clbIp);

                    /**
                     * 判断参数 ClbIp 是否已赋值
                     * @return ClbIp 是否已赋值
                     * 
                     */
                    bool ClbIpHasBeenSet() const;

                    /**
                     * 获取服务clbPort
                     * @return ClbPort 服务clbPort
                     * 
                     */
                    std::string GetClbPort() const;

                    /**
                     * 设置服务clbPort
                     * @param _clbPort 服务clbPort
                     * 
                     */
                    void SetClbPort(const std::string& _clbPort);

                    /**
                     * 判断参数 ClbPort 是否已赋值
                     * @return ClbPort 是否已赋值
                     * 
                     */
                    bool ClbPortHasBeenSet() const;

                    /**
                     * 获取vpc实例id
                     * @return VpcId vpc实例id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc实例id
                     * @param _vpcId vpc实例id
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
                     * 获取vpc网段
                     * @return VpcCidrBlock vpc网段
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置vpc网段
                     * @param _vpcCidrBlock vpc网段
                     * 
                     */
                    void SetVpcCidrBlock(const std::string& _vpcCidrBlock);

                    /**
                     * 判断参数 VpcCidrBlock 是否已赋值
                     * @return VpcCidrBlock 是否已赋值
                     * 
                     */
                    bool VpcCidrBlockHasBeenSet() const;

                    /**
                     * 获取子网实例id
                     * @return SubnetId 子网实例id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网实例id
                     * @param _subnetId 子网实例id
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取子网网段
                     * @return SubnetCidrBlock 子网网段
                     * 
                     */
                    std::string GetSubnetCidrBlock() const;

                    /**
                     * 设置子网网段
                     * @param _subnetCidrBlock 子网网段
                     * 
                     */
                    void SetSubnetCidrBlock(const std::string& _subnetCidrBlock);

                    /**
                     * 判断参数 SubnetCidrBlock 是否已赋值
                     * @return SubnetCidrBlock 是否已赋值
                     * 
                     */
                    bool SubnetCidrBlockHasBeenSet() const;

                private:

                    /**
                     * 服务clbip
                     */
                    std::string m_clbIp;
                    bool m_clbIpHasBeenSet;

                    /**
                     * 服务clbPort
                     */
                    std::string m_clbPort;
                    bool m_clbPortHasBeenSet;

                    /**
                     * vpc实例id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * vpc网段
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * 子网实例id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 子网网段
                     */
                    std::string m_subnetCidrBlock;
                    bool m_subnetCidrBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_NETWORK_H_
