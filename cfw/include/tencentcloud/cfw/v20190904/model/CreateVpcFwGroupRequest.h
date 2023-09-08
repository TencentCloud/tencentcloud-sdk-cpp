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
                     * 获取VPC防火墙(组)名称
                     * @return Name VPC防火墙(组)名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置VPC防火墙(组)名称
                     * @param _name VPC防火墙(组)名称
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
                     * 获取模式 1：CCN云联网模式；0：私有网络模式 2: sase 模式 3：ccn 高级模式 4: 私有网络(跨租户单边模式)
                     * @return Mode 模式 1：CCN云联网模式；0：私有网络模式 2: sase 模式 3：ccn 高级模式 4: 私有网络(跨租户单边模式)
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置模式 1：CCN云联网模式；0：私有网络模式 2: sase 模式 3：ccn 高级模式 4: 私有网络(跨租户单边模式)
                     * @param _mode 模式 1：CCN云联网模式；0：私有网络模式 2: sase 模式 3：ccn 高级模式 4: 私有网络(跨租户单边模式)
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
                     * 获取防火墙(组)下的防火墙实例列表
                     * @return VpcFwInstances 防火墙(组)下的防火墙实例列表
                     * 
                     */
                    std::vector<VpcFwInstance> GetVpcFwInstances() const;

                    /**
                     * 设置防火墙(组)下的防火墙实例列表
                     * @param _vpcFwInstances 防火墙(组)下的防火墙实例列表
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
                     * 获取防火墙实例的开关模式
1: 单点互通
2: 多点互通
3: 全互通
4: 自定义路由
                     * @return SwitchMode 防火墙实例的开关模式
1: 单点互通
2: 多点互通
3: 全互通
4: 自定义路由
                     * 
                     */
                    int64_t GetSwitchMode() const;

                    /**
                     * 设置防火墙实例的开关模式
1: 单点互通
2: 多点互通
3: 全互通
4: 自定义路由
                     * @param _switchMode 防火墙实例的开关模式
1: 单点互通
2: 多点互通
3: 全互通
4: 自定义路由
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
                     * 获取auto 自动选择防火墙网段
10.10.10.0/24 用户输入的防火墙网段
                     * @return FwVpcCidr auto 自动选择防火墙网段
10.10.10.0/24 用户输入的防火墙网段
                     * 
                     */
                    std::string GetFwVpcCidr() const;

                    /**
                     * 设置auto 自动选择防火墙网段
10.10.10.0/24 用户输入的防火墙网段
                     * @param _fwVpcCidr auto 自动选择防火墙网段
10.10.10.0/24 用户输入的防火墙网段
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
                     * 获取云联网id ，适用于云联网模式
                     * @return CcnId 云联网id ，适用于云联网模式
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置云联网id ，适用于云联网模式
                     * @param _ccnId 云联网id ，适用于云联网模式
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
                     * 获取指定防火墙使用网段信息
                     * @return FwCidrInfo 指定防火墙使用网段信息
                     * 
                     */
                    FwCidrInfo GetFwCidrInfo() const;

                    /**
                     * 设置指定防火墙使用网段信息
                     * @param _fwCidrInfo 指定防火墙使用网段信息
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
                     * 获取跨租户管理员模式  1管理员 2多账号
                     * @return CrossUserMode 跨租户管理员模式  1管理员 2多账号
                     * 
                     */
                    std::string GetCrossUserMode() const;

                    /**
                     * 设置跨租户管理员模式  1管理员 2多账号
                     * @param _crossUserMode 跨租户管理员模式  1管理员 2多账号
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
                     * VPC防火墙(组)名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 模式 1：CCN云联网模式；0：私有网络模式 2: sase 模式 3：ccn 高级模式 4: 私有网络(跨租户单边模式)
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 防火墙(组)下的防火墙实例列表
                     */
                    std::vector<VpcFwInstance> m_vpcFwInstances;
                    bool m_vpcFwInstancesHasBeenSet;

                    /**
                     * 防火墙实例的开关模式
1: 单点互通
2: 多点互通
3: 全互通
4: 自定义路由
                     */
                    int64_t m_switchMode;
                    bool m_switchModeHasBeenSet;

                    /**
                     * auto 自动选择防火墙网段
10.10.10.0/24 用户输入的防火墙网段
                     */
                    std::string m_fwVpcCidr;
                    bool m_fwVpcCidrHasBeenSet;

                    /**
                     * 云联网id ，适用于云联网模式
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 指定防火墙使用网段信息
                     */
                    FwCidrInfo m_fwCidrInfo;
                    bool m_fwCidrInfoHasBeenSet;

                    /**
                     * 跨租户管理员模式  1管理员 2多账号
                     */
                    std::string m_crossUserMode;
                    bool m_crossUserModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATEVPCFWGROUPREQUEST_H_
