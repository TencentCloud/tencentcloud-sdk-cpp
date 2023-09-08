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
                     * 获取编辑的防火墙(组)ID
                     * @return FwGroupId 编辑的防火墙(组)ID
                     * 
                     */
                    std::string GetFwGroupId() const;

                    /**
                     * 设置编辑的防火墙(组)ID
                     * @param _fwGroupId 编辑的防火墙(组)ID
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
                     * 获取修改防火墙(组)名称
                     * @return Name 修改防火墙(组)名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置修改防火墙(组)名称
                     * @param _name 修改防火墙(组)名称
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
                     * 获取编辑的防火墙实例列表
                     * @return VpcFwInstances 编辑的防火墙实例列表
                     * 
                     */
                    std::vector<VpcFwInstance> GetVpcFwInstances() const;

                    /**
                     * 设置编辑的防火墙实例列表
                     * @param _vpcFwInstances 编辑的防火墙实例列表
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

                private:

                    /**
                     * 编辑的防火墙(组)ID
                     */
                    std::string m_fwGroupId;
                    bool m_fwGroupIdHasBeenSet;

                    /**
                     * 修改防火墙(组)名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 编辑的防火墙实例列表
                     */
                    std::vector<VpcFwInstance> m_vpcFwInstances;
                    bool m_vpcFwInstancesHasBeenSet;

                    /**
                     * 指定防火墙使用网段信息
                     */
                    FwCidrInfo m_fwCidrInfo;
                    bool m_fwCidrInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYVPCFWGROUPREQUEST_H_
