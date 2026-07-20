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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATEVPCFWGROUPREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATEVPCFWGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/VpcFwInstance.h>
#include <tencentcloud/cfw/v20190904/model/FwCidrInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * CreateVpcFwGroup请求参数结构体
                */
                class CreateVpcFwGroupRequest : public AbstractModel
                {
                public:
                    CreateVpcFwGroupRequest();
                    ~CreateVpcFwGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>VPC防火墙(组)名称</p>
                     * @return Name <p>VPC防火墙(组)名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>VPC防火墙(组)名称</p>
                     * @param _name <p>VPC防火墙(组)名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>模式 1：CCN云联网模式；0：私有网络模式 2: sase 模式 3：ccn 高级模式 4: 私有网络(跨租户单边模式)</p>
                     * @return Mode <p>模式 1：CCN云联网模式；0：私有网络模式 2: sase 模式 3：ccn 高级模式 4: 私有网络(跨租户单边模式)</p>
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置<p>模式 1：CCN云联网模式；0：私有网络模式 2: sase 模式 3：ccn 高级模式 4: 私有网络(跨租户单边模式)</p>
                     * @param _mode <p>模式 1：CCN云联网模式；0：私有网络模式 2: sase 模式 3：ccn 高级模式 4: 私有网络(跨租户单边模式)</p>
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>防火墙(组)下的防火墙实例列表</p>
                     * @return VpcFwInstances <p>防火墙(组)下的防火墙实例列表</p>
                     * 
                     */
                    std::vector<VpcFwInstance> GetVpcFwInstances() const;

                    /**
                     * 设置<p>防火墙(组)下的防火墙实例列表</p>
                     * @param _vpcFwInstances <p>防火墙(组)下的防火墙实例列表</p>
                     * 
                     */
                    void SetVpcFwInstances(const std::vector<VpcFwInstance>& _vpcFwInstances);

                    /**
                     * 判断参数 VpcFwInstances 是否已赋值
                     * @return VpcFwInstances 是否已赋值
                     * 
                     */
                    bool VpcFwInstancesHasBeenSet() const;

                    /**
                     * 获取<p>防火墙实例的开关模式<br>1: 单点互通<br>2: 多点互通<br>3: 全互通<br>4: 自定义路由</p>
                     * @return SwitchMode <p>防火墙实例的开关模式<br>1: 单点互通<br>2: 多点互通<br>3: 全互通<br>4: 自定义路由</p>
                     * 
                     */
                    int64_t GetSwitchMode() const;

                    /**
                     * 设置<p>防火墙实例的开关模式<br>1: 单点互通<br>2: 多点互通<br>3: 全互通<br>4: 自定义路由</p>
                     * @param _switchMode <p>防火墙实例的开关模式<br>1: 单点互通<br>2: 多点互通<br>3: 全互通<br>4: 自定义路由</p>
                     * 
                     */
                    void SetSwitchMode(const int64_t& _switchMode);

                    /**
                     * 判断参数 SwitchMode 是否已赋值
                     * @return SwitchMode 是否已赋值
                     * 
                     */
                    bool SwitchModeHasBeenSet() const;

                    /**
                     * 获取<p>auto 自动选择防火墙网段<br>10.10.10.0/24 用户输入的防火墙网段</p>
                     * @return FwVpcCidr <p>auto 自动选择防火墙网段<br>10.10.10.0/24 用户输入的防火墙网段</p>
                     * 
                     */
                    std::string GetFwVpcCidr() const;

                    /**
                     * 设置<p>auto 自动选择防火墙网段<br>10.10.10.0/24 用户输入的防火墙网段</p>
                     * @param _fwVpcCidr <p>auto 自动选择防火墙网段<br>10.10.10.0/24 用户输入的防火墙网段</p>
                     * 
                     */
                    void SetFwVpcCidr(const std::string& _fwVpcCidr);

                    /**
                     * 判断参数 FwVpcCidr 是否已赋值
                     * @return FwVpcCidr 是否已赋值
                     * 
                     */
                    bool FwVpcCidrHasBeenSet() const;

                    /**
                     * 获取<p>云联网id ，适用于云联网模式</p>
                     * @return CcnId <p>云联网id ，适用于云联网模式</p>
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置<p>云联网id ，适用于云联网模式</p>
                     * @param _ccnId <p>云联网id ，适用于云联网模式</p>
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取<p>指定防火墙使用网段信息</p>
                     * @return FwCidrInfo <p>指定防火墙使用网段信息</p>
                     * 
                     */
                    FwCidrInfo GetFwCidrInfo() const;

                    /**
                     * 设置<p>指定防火墙使用网段信息</p>
                     * @param _fwCidrInfo <p>指定防火墙使用网段信息</p>
                     * 
                     */
                    void SetFwCidrInfo(const FwCidrInfo& _fwCidrInfo);

                    /**
                     * 判断参数 FwCidrInfo 是否已赋值
                     * @return FwCidrInfo 是否已赋值
                     * 
                     */
                    bool FwCidrInfoHasBeenSet() const;

                    /**
                     * 获取<p>跨租户管理员模式  1管理员 2多账号</p>
                     * @return CrossUserMode <p>跨租户管理员模式  1管理员 2多账号</p>
                     * 
                     */
                    std::string GetCrossUserMode() const;

                    /**
                     * 设置<p>跨租户管理员模式  1管理员 2多账号</p>
                     * @param _crossUserMode <p>跨租户管理员模式  1管理员 2多账号</p>
                     * 
                     */
                    void SetCrossUserMode(const std::string& _crossUserMode);

                    /**
                     * 判断参数 CrossUserMode 是否已赋值
                     * @return CrossUserMode 是否已赋值
                     * 
                     */
                    bool CrossUserModeHasBeenSet() const;

                private:

                    /**
                     * <p>VPC防火墙(组)名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>模式 1：CCN云联网模式；0：私有网络模式 2: sase 模式 3：ccn 高级模式 4: 私有网络(跨租户单边模式)</p>
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>防火墙(组)下的防火墙实例列表</p>
                     */
                    std::vector<VpcFwInstance> m_vpcFwInstances;
                    bool m_vpcFwInstancesHasBeenSet;

                    /**
                     * <p>防火墙实例的开关模式<br>1: 单点互通<br>2: 多点互通<br>3: 全互通<br>4: 自定义路由</p>
                     */
                    int64_t m_switchMode;
                    bool m_switchModeHasBeenSet;

                    /**
                     * <p>auto 自动选择防火墙网段<br>10.10.10.0/24 用户输入的防火墙网段</p>
                     */
                    std::string m_fwVpcCidr;
                    bool m_fwVpcCidrHasBeenSet;

                    /**
                     * <p>云联网id ，适用于云联网模式</p>
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * <p>指定防火墙使用网段信息</p>
                     */
                    FwCidrInfo m_fwCidrInfo;
                    bool m_fwCidrInfoHasBeenSet;

                    /**
                     * <p>跨租户管理员模式  1管理员 2多账号</p>
                     */
                    std::string m_crossUserMode;
                    bool m_crossUserModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATEVPCFWGROUPREQUEST_H_
