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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYINSTANCESATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYINSTANCESATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
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
                     * 获取一个或多个待操作的实例ID。可通过[`DescribeInstances`](https://cloud.tencent.com/document/api/213/15728) API返回值中的`InstanceId`获取。每次请求允许操作的实例数量上限是100。
                     * @return InstanceIds 一个或多个待操作的实例ID。可通过[`DescribeInstances`](https://cloud.tencent.com/document/api/213/15728) API返回值中的`InstanceId`获取。每次请求允许操作的实例数量上限是100。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置一个或多个待操作的实例ID。可通过[`DescribeInstances`](https://cloud.tencent.com/document/api/213/15728) API返回值中的`InstanceId`获取。每次请求允许操作的实例数量上限是100。
                     * @param _instanceIds 一个或多个待操作的实例ID。可通过[`DescribeInstances`](https://cloud.tencent.com/document/api/213/15728) API返回值中的`InstanceId`获取。每次请求允许操作的实例数量上限是100。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取实例名称。可任意命名，但不得超过60个字符。
<dx-alert infotype="explain" title="">必须指定InstanceName与SecurityGroups的其中一个，但不能同时设置</dx-alert>
                     * @return InstanceName 实例名称。可任意命名，但不得超过60个字符。
<dx-alert infotype="explain" title="">必须指定InstanceName与SecurityGroups的其中一个，但不能同时设置</dx-alert>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。可任意命名，但不得超过60个字符。
<dx-alert infotype="explain" title="">必须指定InstanceName与SecurityGroups的其中一个，但不能同时设置</dx-alert>
                     * @param _instanceName 实例名称。可任意命名，但不得超过60个字符。
<dx-alert infotype="explain" title="">必须指定InstanceName与SecurityGroups的其中一个，但不能同时设置</dx-alert>
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
                     * 获取指定实例的安全组Id列表，子机将重新关联指定列表的安全组，原本关联的安全组会被解绑。<dx-alert infotype="explain" title="">必须指定SecurityGroups与InstanceName的其中一个，但不能同时设置</dx-alert>
                     * @return SecurityGroups 指定实例的安全组Id列表，子机将重新关联指定列表的安全组，原本关联的安全组会被解绑。<dx-alert infotype="explain" title="">必须指定SecurityGroups与InstanceName的其中一个，但不能同时设置</dx-alert>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroups() const;

                    /**
                     * 设置指定实例的安全组Id列表，子机将重新关联指定列表的安全组，原本关联的安全组会被解绑。<dx-alert infotype="explain" title="">必须指定SecurityGroups与InstanceName的其中一个，但不能同时设置</dx-alert>
                     * @param _securityGroups 指定实例的安全组Id列表，子机将重新关联指定列表的安全组，原本关联的安全组会被解绑。<dx-alert infotype="explain" title="">必须指定SecurityGroups与InstanceName的其中一个，但不能同时设置</dx-alert>
                     * 
                     */
                    void SetSecurityGroups(const std::vector<std::string>& _securityGroups);

                    /**
                     * 判断参数 SecurityGroups 是否已赋值
                     * @return SecurityGroups 是否已赋值
                     * 
                     */
                    bool SecurityGroupsHasBeenSet() const;

                    /**
                     * 获取给实例绑定用户角色，传空值为解绑操作
                     * @return CamRoleName 给实例绑定用户角色，传空值为解绑操作
                     * 
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置给实例绑定用户角色，传空值为解绑操作
                     * @param _camRoleName 给实例绑定用户角色，传空值为解绑操作
                     * 
                     */
                    void SetCamRoleName(const std::string& _camRoleName);

                    /**
                     * 判断参数 CamRoleName 是否已赋值
                     * @return CamRoleName 是否已赋值
                     * 
                     */
                    bool CamRoleNameHasBeenSet() const;

                    /**
                     * 获取实例的主机名。<br><li>点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。<br><li>Windows 实例：名字符长度为[2, 15]，允许字母（不限制大小写）、数字和短横线（-）组成，不支持点号（.），不能全是数字。<br><li>其他类型（Linux 等）实例：字符长度为[2, 60]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。
                     * @return HostName 实例的主机名。<br><li>点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。<br><li>Windows 实例：名字符长度为[2, 15]，允许字母（不限制大小写）、数字和短横线（-）组成，不支持点号（.），不能全是数字。<br><li>其他类型（Linux 等）实例：字符长度为[2, 60]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置实例的主机名。<br><li>点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。<br><li>Windows 实例：名字符长度为[2, 15]，允许字母（不限制大小写）、数字和短横线（-）组成，不支持点号（.），不能全是数字。<br><li>其他类型（Linux 等）实例：字符长度为[2, 60]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。
                     * @param _hostName 实例的主机名。<br><li>点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。<br><li>Windows 实例：名字符长度为[2, 15]，允许字母（不限制大小写）、数字和短横线（-）组成，不支持点号（.），不能全是数字。<br><li>其他类型（Linux 等）实例：字符长度为[2, 60]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：<br><li>TRUE：表示开启实例保护，不允许通过api接口删除实例<br><li>FALSE：表示关闭实例保护，允许通过api接口删除实例<br><br>默认取值：FALSE。
                     * @return DisableApiTermination 实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：<br><li>TRUE：表示开启实例保护，不允许通过api接口删除实例<br><li>FALSE：表示关闭实例保护，允许通过api接口删除实例<br><br>默认取值：FALSE。
                     * 
                     */
                    bool GetDisableApiTermination() const;

                    /**
                     * 设置实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：<br><li>TRUE：表示开启实例保护，不允许通过api接口删除实例<br><li>FALSE：表示关闭实例保护，允许通过api接口删除实例<br><br>默认取值：FALSE。
                     * @param _disableApiTermination 实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：<br><li>TRUE：表示开启实例保护，不允许通过api接口删除实例<br><li>FALSE：表示关闭实例保护，允许通过api接口删除实例<br><br>默认取值：FALSE。
                     * 
                     */
                    void SetDisableApiTermination(const bool& _disableApiTermination);

                    /**
                     * 判断参数 DisableApiTermination 是否已赋值
                     * @return DisableApiTermination 是否已赋值
                     * 
                     */
                    bool DisableApiTerminationHasBeenSet() const;

                    /**
                     * 获取角色类别，与CamRoleName搭配使用，该值可从CAM DescribeRoleList, GetRole接口返回RoleType字段获取，当前只接受user、system和service_linked三种类别。
举例：一般CamRoleName中包含“LinkedRoleIn”（如TKE_QCSLinkedRoleInPrometheusService）时，DescribeRoleList和GetRole返回的RoleType为service_linked，则本参数也需要传递service_linked。
该参数默认值为user，若CameRoleName为非service_linked类型，本参数可不传递。
                     * @return CamRoleType 角色类别，与CamRoleName搭配使用，该值可从CAM DescribeRoleList, GetRole接口返回RoleType字段获取，当前只接受user、system和service_linked三种类别。
举例：一般CamRoleName中包含“LinkedRoleIn”（如TKE_QCSLinkedRoleInPrometheusService）时，DescribeRoleList和GetRole返回的RoleType为service_linked，则本参数也需要传递service_linked。
该参数默认值为user，若CameRoleName为非service_linked类型，本参数可不传递。
                     * 
                     */
                    std::string GetCamRoleType() const;

                    /**
                     * 设置角色类别，与CamRoleName搭配使用，该值可从CAM DescribeRoleList, GetRole接口返回RoleType字段获取，当前只接受user、system和service_linked三种类别。
举例：一般CamRoleName中包含“LinkedRoleIn”（如TKE_QCSLinkedRoleInPrometheusService）时，DescribeRoleList和GetRole返回的RoleType为service_linked，则本参数也需要传递service_linked。
该参数默认值为user，若CameRoleName为非service_linked类型，本参数可不传递。
                     * @param _camRoleType 角色类别，与CamRoleName搭配使用，该值可从CAM DescribeRoleList, GetRole接口返回RoleType字段获取，当前只接受user、system和service_linked三种类别。
举例：一般CamRoleName中包含“LinkedRoleIn”（如TKE_QCSLinkedRoleInPrometheusService）时，DescribeRoleList和GetRole返回的RoleType为service_linked，则本参数也需要传递service_linked。
该参数默认值为user，若CameRoleName为非service_linked类型，本参数可不传递。
                     * 
                     */
                    void SetCamRoleType(const std::string& _camRoleType);

                    /**
                     * 判断参数 CamRoleType 是否已赋值
                     * @return CamRoleType 是否已赋值
                     * 
                     */
                    bool CamRoleTypeHasBeenSet() const;

                private:

                    /**
                     * 一个或多个待操作的实例ID。可通过[`DescribeInstances`](https://cloud.tencent.com/document/api/213/15728) API返回值中的`InstanceId`获取。每次请求允许操作的实例数量上限是100。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 实例名称。可任意命名，但不得超过60个字符。
<dx-alert infotype="explain" title="">必须指定InstanceName与SecurityGroups的其中一个，但不能同时设置</dx-alert>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 指定实例的安全组Id列表，子机将重新关联指定列表的安全组，原本关联的安全组会被解绑。<dx-alert infotype="explain" title="">必须指定SecurityGroups与InstanceName的其中一个，但不能同时设置</dx-alert>
                     */
                    std::vector<std::string> m_securityGroups;
                    bool m_securityGroupsHasBeenSet;

                    /**
                     * 给实例绑定用户角色，传空值为解绑操作
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * 实例的主机名。<br><li>点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。<br><li>Windows 实例：名字符长度为[2, 15]，允许字母（不限制大小写）、数字和短横线（-）组成，不支持点号（.），不能全是数字。<br><li>其他类型（Linux 等）实例：字符长度为[2, 60]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：<br><li>TRUE：表示开启实例保护，不允许通过api接口删除实例<br><li>FALSE：表示关闭实例保护，允许通过api接口删除实例<br><br>默认取值：FALSE。
                     */
                    bool m_disableApiTermination;
                    bool m_disableApiTerminationHasBeenSet;

                    /**
                     * 角色类别，与CamRoleName搭配使用，该值可从CAM DescribeRoleList, GetRole接口返回RoleType字段获取，当前只接受user、system和service_linked三种类别。
举例：一般CamRoleName中包含“LinkedRoleIn”（如TKE_QCSLinkedRoleInPrometheusService）时，DescribeRoleList和GetRole返回的RoleType为service_linked，则本参数也需要传递service_linked。
该参数默认值为user，若CameRoleName为非service_linked类型，本参数可不传递。
                     */
                    std::string m_camRoleType;
                    bool m_camRoleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYINSTANCESATTRIBUTEREQUEST_H_
