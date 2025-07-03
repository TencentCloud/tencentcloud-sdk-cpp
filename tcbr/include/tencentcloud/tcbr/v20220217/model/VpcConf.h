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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_VPCCONF_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_VPCCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * 云托管服务 Vpc 配置
                */
                class VpcConf : public AbstractModel
                {
                public:
                    VpcConf();
                    ~VpcConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取vpc id
                     * @return VpcId vpc id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc id
                     * @param _vpcId vpc id
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
                     * 获取vpc 网段
                     * @return VpcCIDR vpc 网段
                     * 
                     */
                    std::string GetVpcCIDR() const;

                    /**
                     * 设置vpc 网段
                     * @param _vpcCIDR vpc 网段
                     * 
                     */
                    void SetVpcCIDR(const std::string& _vpcCIDR);

                    /**
                     * 判断参数 VpcCIDR 是否已赋值
                     * @return VpcCIDR 是否已赋值
                     * 
                     */
                    bool VpcCIDRHasBeenSet() const;

                    /**
                     * 获取subnet id
                     * @return SubnetId subnet id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置subnet id
                     * @param _subnetId subnet id
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
                     * 获取subnet 网段
                     * @return SubnetCIDR subnet 网段
                     * 
                     */
                    std::string GetSubnetCIDR() const;

                    /**
                     * 设置subnet 网段
                     * @param _subnetCIDR subnet 网段
                     * 
                     */
                    void SetSubnetCIDR(const std::string& _subnetCIDR);

                    /**
                     * 判断参数 SubnetCIDR 是否已赋值
                     * @return SubnetCIDR 是否已赋值
                     * 
                     */
                    bool SubnetCIDRHasBeenSet() const;

                private:

                    /**
                     * vpc id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * vpc 网段
                     */
                    std::string m_vpcCIDR;
                    bool m_vpcCIDRHasBeenSet;

                    /**
                     * subnet id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * subnet 网段
                     */
                    std::string m_subnetCIDR;
                    bool m_subnetCIDRHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_VPCCONF_H_
