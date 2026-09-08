/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p>一个或多个待操作的实例ID。可通过<a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> API返回值中的<code>InstanceId</code>获取。每次请求允许操作的实例数量上限是100。</p>
                     * @return InstanceIds <p>一个或多个待操作的实例ID。可通过<a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> API返回值中的<code>InstanceId</code>获取。每次请求允许操作的实例数量上限是100。</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>一个或多个待操作的实例ID。可通过<a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> API返回值中的<code>InstanceId</code>获取。每次请求允许操作的实例数量上限是100。</p>
                     * @param _instanceIds <p>一个或多个待操作的实例ID。可通过<a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> API返回值中的<code>InstanceId</code>获取。每次请求允许操作的实例数量上限是100。</p>
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
                     * 获取<p>修改后实例名称。可任意命名，但不得超过60个字符。</p>
                     * @return InstanceName <p>修改后实例名称。可任意命名，但不得超过60个字符。</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>修改后实例名称。可任意命名，但不得超过60个字符。</p>
                     * @param _instanceName <p>修改后实例名称。可任意命名，但不得超过60个字符。</p>
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
                     * 获取<p>提供给实例使用的用户数据，需要以 base64 方式编码，支持的最大数据大小为 16 KB。关于获取此参数的详细介绍，请参阅 <a href="https://cloud.tencent.com/document/product/213/17526">Windows</a> 和 <a href="https://cloud.tencent.com/document/product/213/17525">Linux</a> 启动时运行命令。</p>
                     * @return UserData <p>提供给实例使用的用户数据，需要以 base64 方式编码，支持的最大数据大小为 16 KB。关于获取此参数的详细介绍，请参阅 <a href="https://cloud.tencent.com/document/product/213/17526">Windows</a> 和 <a href="https://cloud.tencent.com/document/product/213/17525">Linux</a> 启动时运行命令。</p>
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置<p>提供给实例使用的用户数据，需要以 base64 方式编码，支持的最大数据大小为 16 KB。关于获取此参数的详细介绍，请参阅 <a href="https://cloud.tencent.com/document/product/213/17526">Windows</a> 和 <a href="https://cloud.tencent.com/document/product/213/17525">Linux</a> 启动时运行命令。</p>
                     * @param _userData <p>提供给实例使用的用户数据，需要以 base64 方式编码，支持的最大数据大小为 16 KB。关于获取此参数的详细介绍，请参阅 <a href="https://cloud.tencent.com/document/product/213/17526">Windows</a> 和 <a href="https://cloud.tencent.com/document/product/213/17525">Linux</a> 启动时运行命令。</p>
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取<p>指定实例的修改后的安全组Id列表，子机将重新关联指定列表的安全组，原本关联的安全组会被解绑。</p>
                     * @return SecurityGroups <p>指定实例的修改后的安全组Id列表，子机将重新关联指定列表的安全组，原本关联的安全组会被解绑。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroups() const;

                    /**
                     * 设置<p>指定实例的修改后的安全组Id列表，子机将重新关联指定列表的安全组，原本关联的安全组会被解绑。</p>
                     * @param _securityGroups <p>指定实例的修改后的安全组Id列表，子机将重新关联指定列表的安全组，原本关联的安全组会被解绑。</p>
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
                     * 获取<p>给实例绑定用户角色，传空值为解绑操作</p>
                     * @return CamRoleName <p>给实例绑定用户角色，传空值为解绑操作</p>
                     * 
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置<p>给实例绑定用户角色，传空值为解绑操作</p>
                     * @param _camRoleName <p>给实例绑定用户角色，传空值为解绑操作</p>
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
                     * 获取<p>修改后实例的主机名。<li>点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。</li><li>Windows 实例：主机名字符长度为[2, 15]，允许字母（不限制大小写）、数字和短横线（-）组成，不支持点号（.），不能全是数字。</li><li>其他类型（Linux 等）实例：主机名字符长度为[2, 60]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。</li>注意点：修改主机名后实例会立即重启，重启后新的主机名生效。</p>
                     * @return HostName <p>修改后实例的主机名。<li>点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。</li><li>Windows 实例：主机名字符长度为[2, 15]，允许字母（不限制大小写）、数字和短横线（-）组成，不支持点号（.），不能全是数字。</li><li>其他类型（Linux 等）实例：主机名字符长度为[2, 60]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。</li>注意点：修改主机名后实例会立即重启，重启后新的主机名生效。</p>
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置<p>修改后实例的主机名。<li>点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。</li><li>Windows 实例：主机名字符长度为[2, 15]，允许字母（不限制大小写）、数字和短横线（-）组成，不支持点号（.），不能全是数字。</li><li>其他类型（Linux 等）实例：主机名字符长度为[2, 60]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。</li>注意点：修改主机名后实例会立即重启，重启后新的主机名生效。</p>
                     * @param _hostName <p>修改后实例的主机名。<li>点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。</li><li>Windows 实例：主机名字符长度为[2, 15]，允许字母（不限制大小写）、数字和短横线（-）组成，不支持点号（.），不能全是数字。</li><li>其他类型（Linux 等）实例：主机名字符长度为[2, 60]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。</li>注意点：修改主机名后实例会立即重启，重启后新的主机名生效。</p>
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
                     * 获取<p>实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：<li>true：表示开启实例保护，不允许通过api接口删除实例</li><li>false：表示关闭实例保护，允许通过api接口删除实例</li>默认取值：false。</p>
                     * @return DisableApiTermination <p>实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：<li>true：表示开启实例保护，不允许通过api接口删除实例</li><li>false：表示关闭实例保护，允许通过api接口删除实例</li>默认取值：false。</p>
                     * 
                     */
                    bool GetDisableApiTermination() const;

                    /**
                     * 设置<p>实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：<li>true：表示开启实例保护，不允许通过api接口删除实例</li><li>false：表示关闭实例保护，允许通过api接口删除实例</li>默认取值：false。</p>
                     * @param _disableApiTermination <p>实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：<li>true：表示开启实例保护，不允许通过api接口删除实例</li><li>false：表示关闭实例保护，允许通过api接口删除实例</li>默认取值：false。</p>
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
                     * 获取<p>角色类别，与CamRoleName搭配使用，该值可从CAM <a href="https://cloud.tencent.com/document/product/598/36223"> DescribeRoleList </a>或<a href="https://cloud.tencent.com/document/product/598/36221"> GetRole </a>接口返回RoleType字段获取，当前只接受user、system和service_linked三种类别。<br>举例：一般CamRoleName中包含“LinkedRoleIn”（如TKE_QCSLinkedRoleInPrometheusService）时，DescribeRoleList和GetRole返回的RoleType为service_linked，则本参数也需要传递service_linked。<br>该参数默认值为user，若CameRoleName为非service_linked类型，本参数可不传递。</p>
                     * @return CamRoleType <p>角色类别，与CamRoleName搭配使用，该值可从CAM <a href="https://cloud.tencent.com/document/product/598/36223"> DescribeRoleList </a>或<a href="https://cloud.tencent.com/document/product/598/36221"> GetRole </a>接口返回RoleType字段获取，当前只接受user、system和service_linked三种类别。<br>举例：一般CamRoleName中包含“LinkedRoleIn”（如TKE_QCSLinkedRoleInPrometheusService）时，DescribeRoleList和GetRole返回的RoleType为service_linked，则本参数也需要传递service_linked。<br>该参数默认值为user，若CameRoleName为非service_linked类型，本参数可不传递。</p>
                     * 
                     */
                    std::string GetCamRoleType() const;

                    /**
                     * 设置<p>角色类别，与CamRoleName搭配使用，该值可从CAM <a href="https://cloud.tencent.com/document/product/598/36223"> DescribeRoleList </a>或<a href="https://cloud.tencent.com/document/product/598/36221"> GetRole </a>接口返回RoleType字段获取，当前只接受user、system和service_linked三种类别。<br>举例：一般CamRoleName中包含“LinkedRoleIn”（如TKE_QCSLinkedRoleInPrometheusService）时，DescribeRoleList和GetRole返回的RoleType为service_linked，则本参数也需要传递service_linked。<br>该参数默认值为user，若CameRoleName为非service_linked类型，本参数可不传递。</p>
                     * @param _camRoleType <p>角色类别，与CamRoleName搭配使用，该值可从CAM <a href="https://cloud.tencent.com/document/product/598/36223"> DescribeRoleList </a>或<a href="https://cloud.tencent.com/document/product/598/36221"> GetRole </a>接口返回RoleType字段获取，当前只接受user、system和service_linked三种类别。<br>举例：一般CamRoleName中包含“LinkedRoleIn”（如TKE_QCSLinkedRoleInPrometheusService）时，DescribeRoleList和GetRole返回的RoleType为service_linked，则本参数也需要传递service_linked。<br>该参数默认值为user，若CameRoleName为非service_linked类型，本参数可不传递。</p>
                     * 
                     */
                    void SetCamRoleType(const std::string& _camRoleType);

                    /**
                     * 判断参数 CamRoleType 是否已赋值
                     * @return CamRoleType 是否已赋值
                     * 
                     */
                    bool CamRoleTypeHasBeenSet() const;

                    /**
                     * 获取<p>修改实例主机名是否自动重启实例，不传默认自动重启。</p><ul><li>true: 修改主机名，并自动重启实例；</li><li>false: 修改主机名，不自动重启实例，需要手动重启使新主机名生效。<br>注意点：本参数仅对修改主机名生效。</li></ul>
                     * @return AutoReboot <p>修改实例主机名是否自动重启实例，不传默认自动重启。</p><ul><li>true: 修改主机名，并自动重启实例；</li><li>false: 修改主机名，不自动重启实例，需要手动重启使新主机名生效。<br>注意点：本参数仅对修改主机名生效。</li></ul>
                     * 
                     */
                    bool GetAutoReboot() const;

                    /**
                     * 设置<p>修改实例主机名是否自动重启实例，不传默认自动重启。</p><ul><li>true: 修改主机名，并自动重启实例；</li><li>false: 修改主机名，不自动重启实例，需要手动重启使新主机名生效。<br>注意点：本参数仅对修改主机名生效。</li></ul>
                     * @param _autoReboot <p>修改实例主机名是否自动重启实例，不传默认自动重启。</p><ul><li>true: 修改主机名，并自动重启实例；</li><li>false: 修改主机名，不自动重启实例，需要手动重启使新主机名生效。<br>注意点：本参数仅对修改主机名生效。</li></ul>
                     * 
                     */
                    void SetAutoReboot(const bool& _autoReboot);

                    /**
                     * 判断参数 AutoReboot 是否已赋值
                     * @return AutoReboot 是否已赋值
                     * 
                     */
                    bool AutoRebootHasBeenSet() const;

                    /**
                     * 获取<p>实例是否开启巨型帧，取值范围：<br></p><ul><li>true：表示实例开启巨型帧，只有支持巨型帧的机型可设置为true。</li><li>false：表示实例关闭巨型帧，只有支持巨型帧的机型可设置为false。<br><br>支持巨型帧的实例规格： <a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a></li></ul>
                     * @return EnableJumboFrame <p>实例是否开启巨型帧，取值范围：<br></p><ul><li>true：表示实例开启巨型帧，只有支持巨型帧的机型可设置为true。</li><li>false：表示实例关闭巨型帧，只有支持巨型帧的机型可设置为false。<br><br>支持巨型帧的实例规格： <a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a></li></ul>
                     * 
                     */
                    bool GetEnableJumboFrame() const;

                    /**
                     * 设置<p>实例是否开启巨型帧，取值范围：<br></p><ul><li>true：表示实例开启巨型帧，只有支持巨型帧的机型可设置为true。</li><li>false：表示实例关闭巨型帧，只有支持巨型帧的机型可设置为false。<br><br>支持巨型帧的实例规格： <a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a></li></ul>
                     * @param _enableJumboFrame <p>实例是否开启巨型帧，取值范围：<br></p><ul><li>true：表示实例开启巨型帧，只有支持巨型帧的机型可设置为true。</li><li>false：表示实例关闭巨型帧，只有支持巨型帧的机型可设置为false。<br><br>支持巨型帧的实例规格： <a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a></li></ul>
                     * 
                     */
                    void SetEnableJumboFrame(const bool& _enableJumboFrame);

                    /**
                     * 判断参数 EnableJumboFrame 是否已赋值
                     * @return EnableJumboFrame 是否已赋值
                     * 
                     */
                    bool EnableJumboFrameHasBeenSet() const;

                private:

                    /**
                     * <p>一个或多个待操作的实例ID。可通过<a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> API返回值中的<code>InstanceId</code>获取。每次请求允许操作的实例数量上限是100。</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>修改后实例名称。可任意命名，但不得超过60个字符。</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>提供给实例使用的用户数据，需要以 base64 方式编码，支持的最大数据大小为 16 KB。关于获取此参数的详细介绍，请参阅 <a href="https://cloud.tencent.com/document/product/213/17526">Windows</a> 和 <a href="https://cloud.tencent.com/document/product/213/17525">Linux</a> 启动时运行命令。</p>
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * <p>指定实例的修改后的安全组Id列表，子机将重新关联指定列表的安全组，原本关联的安全组会被解绑。</p>
                     */
                    std::vector<std::string> m_securityGroups;
                    bool m_securityGroupsHasBeenSet;

                    /**
                     * <p>给实例绑定用户角色，传空值为解绑操作</p>
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * <p>修改后实例的主机名。<li>点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。</li><li>Windows 实例：主机名字符长度为[2, 15]，允许字母（不限制大小写）、数字和短横线（-）组成，不支持点号（.），不能全是数字。</li><li>其他类型（Linux 等）实例：主机名字符长度为[2, 60]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。</li>注意点：修改主机名后实例会立即重启，重启后新的主机名生效。</p>
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * <p>实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：<li>true：表示开启实例保护，不允许通过api接口删除实例</li><li>false：表示关闭实例保护，允许通过api接口删除实例</li>默认取值：false。</p>
                     */
                    bool m_disableApiTermination;
                    bool m_disableApiTerminationHasBeenSet;

                    /**
                     * <p>角色类别，与CamRoleName搭配使用，该值可从CAM <a href="https://cloud.tencent.com/document/product/598/36223"> DescribeRoleList </a>或<a href="https://cloud.tencent.com/document/product/598/36221"> GetRole </a>接口返回RoleType字段获取，当前只接受user、system和service_linked三种类别。<br>举例：一般CamRoleName中包含“LinkedRoleIn”（如TKE_QCSLinkedRoleInPrometheusService）时，DescribeRoleList和GetRole返回的RoleType为service_linked，则本参数也需要传递service_linked。<br>该参数默认值为user，若CameRoleName为非service_linked类型，本参数可不传递。</p>
                     */
                    std::string m_camRoleType;
                    bool m_camRoleTypeHasBeenSet;

                    /**
                     * <p>修改实例主机名是否自动重启实例，不传默认自动重启。</p><ul><li>true: 修改主机名，并自动重启实例；</li><li>false: 修改主机名，不自动重启实例，需要手动重启使新主机名生效。<br>注意点：本参数仅对修改主机名生效。</li></ul>
                     */
                    bool m_autoReboot;
                    bool m_autoRebootHasBeenSet;

                    /**
                     * <p>实例是否开启巨型帧，取值范围：<br></p><ul><li>true：表示实例开启巨型帧，只有支持巨型帧的机型可设置为true。</li><li>false：表示实例关闭巨型帧，只有支持巨型帧的机型可设置为false。<br><br>支持巨型帧的实例规格： <a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a></li></ul>
                     */
                    bool m_enableJumboFrame;
                    bool m_enableJumboFrameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYINSTANCESATTRIBUTEREQUEST_H_
