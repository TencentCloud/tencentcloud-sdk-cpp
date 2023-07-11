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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNIPV6CIDRBLOCKSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNIPV6CIDRBLOCKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/ISPTypeItem.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * AssignIpv6CidrBlocks请求参数结构体
                */
                class AssignIpv6CidrBlocksRequest : public AbstractModel
                {
                public:
                    AssignIpv6CidrBlocksRequest();
                    ~AssignIpv6CidrBlocksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取`VPC`实例`ID`，形如：`vpc-f49l6u0z`。	
                     * @return VpcId `VPC`实例`ID`，形如：`vpc-f49l6u0z`。	
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置`VPC`实例`ID`，形如：`vpc-f49l6u0z`。	
                     * @param _vpcId `VPC`实例`ID`，形如：`vpc-f49l6u0z`。	
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
                     * 获取网络运营商类型 取值范围:'CMCC'-中国移动, 'CTCC'-中国电信, 'CUCC'-中国联调	
                     * @return ISPTypes 网络运营商类型 取值范围:'CMCC'-中国移动, 'CTCC'-中国电信, 'CUCC'-中国联调	
                     * 
                     */
                    std::vector<ISPTypeItem> GetISPTypes() const;

                    /**
                     * 设置网络运营商类型 取值范围:'CMCC'-中国移动, 'CTCC'-中国电信, 'CUCC'-中国联调	
                     * @param _iSPTypes 网络运营商类型 取值范围:'CMCC'-中国移动, 'CTCC'-中国电信, 'CUCC'-中国联调	
                     * 
                     */
                    void SetISPTypes(const std::vector<ISPTypeItem>& _iSPTypes);

                    /**
                     * 判断参数 ISPTypes 是否已赋值
                     * @return ISPTypes 是否已赋值
                     * 
                     */
                    bool ISPTypesHasBeenSet() const;

                    /**
                     * 获取ECM地域。
                     * @return EcmRegion ECM地域。
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM地域。
                     * @param _ecmRegion ECM地域。
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
                     * `VPC`实例`ID`，形如：`vpc-f49l6u0z`。	
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 网络运营商类型 取值范围:'CMCC'-中国移动, 'CTCC'-中国电信, 'CUCC'-中国联调	
                     */
                    std::vector<ISPTypeItem> m_iSPTypes;
                    bool m_iSPTypesHasBeenSet;

                    /**
                     * ECM地域。
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNIPV6CIDRBLOCKSREQUEST_H_
