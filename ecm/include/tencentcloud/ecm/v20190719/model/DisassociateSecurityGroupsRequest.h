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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_

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
                * DisassociateSecurityGroups请求参数结构体
                */
                class DisassociateSecurityGroupsRequest : public AbstractModel
                {
                public:
                    DisassociateSecurityGroupsRequest();
                    ~DisassociateSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要解绑的安全组ID，类似esg-efil73jd，只支持解绑单个安全组。
                     * @return SecurityGroupIds 要解绑的安全组ID，类似esg-efil73jd，只支持解绑单个安全组。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置要解绑的安全组ID，类似esg-efil73jd，只支持解绑单个安全组。
                     * @param _securityGroupIds 要解绑的安全组ID，类似esg-efil73jd，只支持解绑单个安全组。
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取被解绑的实例ID，类似ein-lesecurk，支持指定多个实例 。
                     * @return InstanceIds 被解绑的实例ID，类似ein-lesecurk，支持指定多个实例 。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置被解绑的实例ID，类似ein-lesecurk，支持指定多个实例 。
                     * @param _instanceIds 被解绑的实例ID，类似ein-lesecurk，支持指定多个实例 。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 要解绑的安全组ID，类似esg-efil73jd，只支持解绑单个安全组。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 被解绑的实例ID，类似ein-lesecurk，支持指定多个实例 。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DISASSOCIATESECURITYGROUPSREQUEST_H_
