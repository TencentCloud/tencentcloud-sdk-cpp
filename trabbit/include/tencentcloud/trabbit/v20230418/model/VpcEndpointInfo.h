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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_VPCENDPOINTINFO_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_VPCENDPOINTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * VPC接入点信息
                */
                class VpcEndpointInfo : public AbstractModel
                {
                public:
                    VpcEndpointInfo();
                    ~VpcEndpointInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取vpc的id
                     * @return VpcId vpc的id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc的id
                     * @param _vpcId vpc的id
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
                     * 获取子网id
                     * @return SubnetId 子网id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网id
                     * @param _subnetId 子网id
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
                     * 获取vpc接入点信息
                     * @return VpcEndpoint vpc接入点信息
                     * 
                     */
                    std::string GetVpcEndpoint() const;

                    /**
                     * 设置vpc接入点信息
                     * @param _vpcEndpoint vpc接入点信息
                     * 
                     */
                    void SetVpcEndpoint(const std::string& _vpcEndpoint);

                    /**
                     * 判断参数 VpcEndpoint 是否已赋值
                     * @return VpcEndpoint 是否已赋值
                     * 
                     */
                    bool VpcEndpointHasBeenSet() const;

                    /**
                     * 获取vpc接入点状态
OFF/ON/CREATING/DELETING
                     * @return VpcDataStreamEndpointStatus vpc接入点状态
OFF/ON/CREATING/DELETING
                     * 
                     */
                    std::string GetVpcDataStreamEndpointStatus() const;

                    /**
                     * 设置vpc接入点状态
OFF/ON/CREATING/DELETING
                     * @param _vpcDataStreamEndpointStatus vpc接入点状态
OFF/ON/CREATING/DELETING
                     * 
                     */
                    void SetVpcDataStreamEndpointStatus(const std::string& _vpcDataStreamEndpointStatus);

                    /**
                     * 判断参数 VpcDataStreamEndpointStatus 是否已赋值
                     * @return VpcDataStreamEndpointStatus 是否已赋值
                     * 
                     */
                    bool VpcDataStreamEndpointStatusHasBeenSet() const;

                private:

                    /**
                     * vpc的id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * vpc接入点信息
                     */
                    std::string m_vpcEndpoint;
                    bool m_vpcEndpointHasBeenSet;

                    /**
                     * vpc接入点状态
OFF/ON/CREATING/DELETING
                     */
                    std::string m_vpcDataStreamEndpointStatus;
                    bool m_vpcDataStreamEndpointStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_VPCENDPOINTINFO_H_
