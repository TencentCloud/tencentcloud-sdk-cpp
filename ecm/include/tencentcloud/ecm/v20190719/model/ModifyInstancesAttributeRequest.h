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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYINSTANCESATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYINSTANCESATTRIBUTEREQUEST_H_

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
                * ModifyInstancesAttribute请求参数结构体
                */
                class ModifyInstancesAttributeRequest : public AbstractModel
                {
                public:
                    ModifyInstancesAttributeRequest();
                    ~ModifyInstancesAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待修改的实例ID列表。在单次请求的过程中，请求实例数上限为100。
                     * @return InstanceIdSet 待修改的实例ID列表。在单次请求的过程中，请求实例数上限为100。
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置待修改的实例ID列表。在单次请求的过程中，请求实例数上限为100。
                     * @param _instanceIdSet 待修改的实例ID列表。在单次请求的过程中，请求实例数上限为100。
                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取修改成功后显示的实例名称，不得超过60个字符，不传则名称显示为空。
                     * @return InstanceName 修改成功后显示的实例名称，不得超过60个字符，不传则名称显示为空。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置修改成功后显示的实例名称，不得超过60个字符，不传则名称显示为空。
                     * @param _instanceName 修改成功后显示的实例名称，不得超过60个字符，不传则名称显示为空。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取指定实例的安全组Id列表，子机将重新关联指定列表的安全组，原本关联的安全组会被解绑。限制不超过5个。
                     * @return SecurityGroups 指定实例的安全组Id列表，子机将重新关联指定列表的安全组，原本关联的安全组会被解绑。限制不超过5个。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroups() const;

                    /**
                     * 设置指定实例的安全组Id列表，子机将重新关联指定列表的安全组，原本关联的安全组会被解绑。限制不超过5个。
                     * @param _securityGroups 指定实例的安全组Id列表，子机将重新关联指定列表的安全组，原本关联的安全组会被解绑。限制不超过5个。
                     * 
                     */
                    void SetSecurityGroups(const std::vector<std::string>& _securityGroups);

                    /**
                     * 判断参数 SecurityGroups 是否已赋值
                     * @return SecurityGroups 是否已赋值
                     * 
                     */
                    bool SecurityGroupsHasBeenSet() const;

                private:

                    /**
                     * 待修改的实例ID列表。在单次请求的过程中，请求实例数上限为100。
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * 修改成功后显示的实例名称，不得超过60个字符，不传则名称显示为空。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 指定实例的安全组Id列表，子机将重新关联指定列表的安全组，原本关联的安全组会被解绑。限制不超过5个。
                     */
                    std::vector<std::string> m_securityGroups;
                    bool m_securityGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYINSTANCESATTRIBUTEREQUEST_H_
