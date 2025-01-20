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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCENDPOINTATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCENDPOINTATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyVpcEndPointAttribute请求参数结构体
                */
                class ModifyVpcEndPointAttributeRequest : public AbstractModel
                {
                public:
                    ModifyVpcEndPointAttributeRequest();
                    ~ModifyVpcEndPointAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取终端节点ID。
                     * @return EndPointId 终端节点ID。
                     * 
                     */
                    std::string GetEndPointId() const;

                    /**
                     * 设置终端节点ID。
                     * @param _endPointId 终端节点ID。
                     * 
                     */
                    void SetEndPointId(const std::string& _endPointId);

                    /**
                     * 判断参数 EndPointId 是否已赋值
                     * @return EndPointId 是否已赋值
                     * 
                     */
                    bool EndPointIdHasBeenSet() const;

                    /**
                     * 获取终端节点名称。
                     * @return EndPointName 终端节点名称。
                     * 
                     */
                    std::string GetEndPointName() const;

                    /**
                     * 设置终端节点名称。
                     * @param _endPointName 终端节点名称。
                     * 
                     */
                    void SetEndPointName(const std::string& _endPointName);

                    /**
                     * 判断参数 EndPointName 是否已赋值
                     * @return EndPointName 是否已赋值
                     * 
                     */
                    bool EndPointNameHasBeenSet() const;

                    /**
                     * 获取安全组ID列表。
                     * @return SecurityGroupIds 安全组ID列表。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组ID列表。
                     * @param _securityGroupIds 安全组ID列表。
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 终端节点ID。
                     */
                    std::string m_endPointId;
                    bool m_endPointIdHasBeenSet;

                    /**
                     * 终端节点名称。
                     */
                    std::string m_endPointName;
                    bool m_endPointNameHasBeenSet;

                    /**
                     * 安全组ID列表。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCENDPOINTATTRIBUTEREQUEST_H_
