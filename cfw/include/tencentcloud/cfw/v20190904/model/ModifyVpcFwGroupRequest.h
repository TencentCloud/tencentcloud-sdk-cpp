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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYVPCFWGROUPREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYVPCFWGROUPREQUEST_H_

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
                * ModifyVpcFwGroup请求参数结构体
                */
                class ModifyVpcFwGroupRequest : public AbstractModel
                {
                public:
                    ModifyVpcFwGroupRequest();
                    ~ModifyVpcFwGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>编辑的防火墙(组)ID</p>
                     * @return FwGroupId <p>编辑的防火墙(组)ID</p>
                     * 
                     */
                    std::string GetFwGroupId() const;

                    /**
                     * 设置<p>编辑的防火墙(组)ID</p>
                     * @param _fwGroupId <p>编辑的防火墙(组)ID</p>
                     * 
                     */
                    void SetFwGroupId(const std::string& _fwGroupId);

                    /**
                     * 判断参数 FwGroupId 是否已赋值
                     * @return FwGroupId 是否已赋值
                     * 
                     */
                    bool FwGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>修改防火墙(组)名称</p>
                     * @return Name <p>修改防火墙(组)名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>修改防火墙(组)名称</p>
                     * @param _name <p>修改防火墙(组)名称</p>
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
                     * 获取<p>编辑的防火墙实例列表</p>
                     * @return VpcFwInstances <p>编辑的防火墙实例列表</p>
                     * 
                     */
                    std::vector<VpcFwInstance> GetVpcFwInstances() const;

                    /**
                     * 设置<p>编辑的防火墙实例列表</p>
                     * @param _vpcFwInstances <p>编辑的防火墙实例列表</p>
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

                private:

                    /**
                     * <p>编辑的防火墙(组)ID</p>
                     */
                    std::string m_fwGroupId;
                    bool m_fwGroupIdHasBeenSet;

                    /**
                     * <p>修改防火墙(组)名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>编辑的防火墙实例列表</p>
                     */
                    std::vector<VpcFwInstance> m_vpcFwInstances;
                    bool m_vpcFwInstancesHasBeenSet;

                    /**
                     * <p>指定防火墙使用网段信息</p>
                     */
                    FwCidrInfo m_fwCidrInfo;
                    bool m_fwCidrInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYVPCFWGROUPREQUEST_H_
