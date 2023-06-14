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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DELETEVPCREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DELETEVPCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DeleteVpc请求参数结构体
                */
                class DeleteVpcRequest : public AbstractModel
                {
                public:
                    DeleteVpcRequest();
                    ~DeleteVpcRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     * @return VpcId VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     * @param _vpcId VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
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
                     * 获取ECM 地域
                     * @return EcmRegion ECM 地域
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM 地域
                     * @param _ecmRegion ECM 地域
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                private:

                    /**
                     * VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * ECM 地域
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DELETEVPCREQUEST_H_
