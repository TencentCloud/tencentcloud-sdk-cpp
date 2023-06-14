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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_VPCINFO_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_VPCINFO_H_

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
                * VPC信息
                */
                class VpcInfo : public AbstractModel
                {
                public:
                    VpcInfo();
                    ~VpcInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取私有网络的唯一ID。
                     * @return VpcId 私有网络的唯一ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络的唯一ID。
                     * @param _vpcId 私有网络的唯一ID。
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
                     * 获取VPC的名称。
                     * @return VpcName VPC的名称。
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC的名称。
                     * @param _vpcName VPC的名称。
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取VPC的CIDR。
                     * @return CidrBlock VPC的CIDR。
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置VPC的CIDR。
                     * @param _cidrBlock VPC的CIDR。
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
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取VPC状态
                     * @return State VPC状态
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置VPC状态
                     * @param _state VPC状态
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取整型私有网络ID。
                     * @return IntVpcId 整型私有网络ID。
                     * 
                     */
                    uint64_t GetIntVpcId() const;

                    /**
                     * 设置整型私有网络ID。
                     * @param _intVpcId 整型私有网络ID。
                     * 
                     */
                    void SetIntVpcId(const uint64_t& _intVpcId);

                    /**
                     * 判断参数 IntVpcId 是否已赋值
                     * @return IntVpcId 是否已赋值
                     * 
                     */
                    bool IntVpcIdHasBeenSet() const;

                private:

                    /**
                     * 私有网络的唯一ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC的名称。
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * VPC的CIDR。
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * VPC状态
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 整型私有网络ID。
                     */
                    uint64_t m_intVpcId;
                    bool m_intVpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_VPCINFO_H_
