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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_VPCSUBNETVIEWINFO_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_VPCSUBNETVIEWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * VPC视图子网信息
                */
                class VpcSubnetViewInfo : public AbstractModel
                {
                public:
                    VpcSubnetViewInfo();
                    ~VpcSubnetViewInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取子网名称
                     * @return SubnetName 子网名称
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置子网名称
                     * @param _subnetName 子网名称
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取子网CIDR
                     * @return CidrBlock 子网CIDR
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置子网CIDR
                     * @param _cidrBlock 子网CIDR
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取子网下设备个数
                     * @return CpmNum 子网下设备个数
                     * 
                     */
                    uint64_t GetCpmNum() const;

                    /**
                     * 设置子网下设备个数
                     * @param _cpmNum 子网下设备个数
                     * 
                     */
                    void SetCpmNum(const uint64_t& _cpmNum);

                    /**
                     * 判断参数 CpmNum 是否已赋值
                     * @return CpmNum 是否已赋值
                     * 
                     */
                    bool CpmNumHasBeenSet() const;

                    /**
                     * 获取内网负载均衡个数
                     * @return LbNum 内网负载均衡个数
                     * 
                     */
                    uint64_t GetLbNum() const;

                    /**
                     * 设置内网负载均衡个数
                     * @param _lbNum 内网负载均衡个数
                     * 
                     */
                    void SetLbNum(const uint64_t& _lbNum);

                    /**
                     * 判断参数 LbNum 是否已赋值
                     * @return LbNum 是否已赋值
                     * 
                     */
                    bool LbNumHasBeenSet() const;

                    /**
                     * 获取子网所在可用区
                     * @return Zone 子网所在可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置子网所在可用区
                     * @param _zone 子网所在可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 子网名称
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 子网CIDR
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 子网下设备个数
                     */
                    uint64_t m_cpmNum;
                    bool m_cpmNumHasBeenSet;

                    /**
                     * 内网负载均衡个数
                     */
                    uint64_t m_lbNum;
                    bool m_lbNumHasBeenSet;

                    /**
                     * 子网所在可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_VPCSUBNETVIEWINFO_H_
