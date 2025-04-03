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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_VPCINFO_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_VPCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 私有网络信息
                */
                class VpcInfo : public AbstractModel
                {
                public:
                    VpcInfo();
                    ~VpcInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vpc Id
                     * @return VpcId Vpc Id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Vpc Id
                     * @param _vpcId Vpc Id
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
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
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
                     * 获取内网访问地址
                     * @return IntranetAddress 内网访问地址
                     * 
                     */
                    std::string GetIntranetAddress() const;

                    /**
                     * 设置内网访问地址
                     * @param _intranetAddress 内网访问地址
                     * 
                     */
                    void SetIntranetAddress(const std::string& _intranetAddress);

                    /**
                     * 判断参数 IntranetAddress 是否已赋值
                     * @return IntranetAddress 是否已赋值
                     * 
                     */
                    bool IntranetAddressHasBeenSet() const;

                    /**
                     * 获取负载均衡均衡接入点子网ID
                     * @return LbSubnetId 负载均衡均衡接入点子网ID
                     * 
                     */
                    std::string GetLbSubnetId() const;

                    /**
                     * 设置负载均衡均衡接入点子网ID
                     * @param _lbSubnetId 负载均衡均衡接入点子网ID
                     * 
                     */
                    void SetLbSubnetId(const std::string& _lbSubnetId);

                    /**
                     * 判断参数 LbSubnetId 是否已赋值
                     * @return LbSubnetId 是否已赋值
                     * 
                     */
                    bool LbSubnetIdHasBeenSet() const;

                private:

                    /**
                     * Vpc Id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 内网访问地址
                     */
                    std::string m_intranetAddress;
                    bool m_intranetAddressHasBeenSet;

                    /**
                     * 负载均衡均衡接入点子网ID
                     */
                    std::string m_lbSubnetId;
                    bool m_lbSubnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_VPCINFO_H_
