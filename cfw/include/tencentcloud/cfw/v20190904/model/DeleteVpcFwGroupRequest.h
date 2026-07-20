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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DELETEVPCFWGROUPREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DELETEVPCFWGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DeleteVpcFwGroup请求参数结构体
                */
                class DeleteVpcFwGroupRequest : public AbstractModel
                {
                public:
                    DeleteVpcFwGroupRequest();
                    ~DeleteVpcFwGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>防火墙(组)Id</p>
                     * @return FwGroupId <p>防火墙(组)Id</p>
                     * 
                     */
                    std::string GetFwGroupId() const;

                    /**
                     * 设置<p>防火墙(组)Id</p>
                     * @param _fwGroupId <p>防火墙(组)Id</p>
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
                     * 获取<p>是否删除整个防火墙(组)<br>0：不删除防火墙(组)，只删除单独实例<br>1：删除整个防火墙(组)</p>
                     * @return DeleteFwGroup <p>是否删除整个防火墙(组)<br>0：不删除防火墙(组)，只删除单独实例<br>1：删除整个防火墙(组)</p>
                     * 
                     */
                    int64_t GetDeleteFwGroup() const;

                    /**
                     * 设置<p>是否删除整个防火墙(组)<br>0：不删除防火墙(组)，只删除单独实例<br>1：删除整个防火墙(组)</p>
                     * @param _deleteFwGroup <p>是否删除整个防火墙(组)<br>0：不删除防火墙(组)，只删除单独实例<br>1：删除整个防火墙(组)</p>
                     * 
                     */
                    void SetDeleteFwGroup(const int64_t& _deleteFwGroup);

                    /**
                     * 判断参数 DeleteFwGroup 是否已赋值
                     * @return DeleteFwGroup 是否已赋值
                     * 
                     */
                    bool DeleteFwGroupHasBeenSet() const;

                    /**
                     * 获取<p>待删除的防火墙实例数组</p>
                     * @return VpcFwInsList <p>待删除的防火墙实例数组</p>
                     * 
                     */
                    std::vector<std::string> GetVpcFwInsList() const;

                    /**
                     * 设置<p>待删除的防火墙实例数组</p>
                     * @param _vpcFwInsList <p>待删除的防火墙实例数组</p>
                     * 
                     */
                    void SetVpcFwInsList(const std::vector<std::string>& _vpcFwInsList);

                    /**
                     * 判断参数 VpcFwInsList 是否已赋值
                     * @return VpcFwInsList 是否已赋值
                     * 
                     */
                    bool VpcFwInsListHasBeenSet() const;

                private:

                    /**
                     * <p>防火墙(组)Id</p>
                     */
                    std::string m_fwGroupId;
                    bool m_fwGroupIdHasBeenSet;

                    /**
                     * <p>是否删除整个防火墙(组)<br>0：不删除防火墙(组)，只删除单独实例<br>1：删除整个防火墙(组)</p>
                     */
                    int64_t m_deleteFwGroup;
                    bool m_deleteFwGroupHasBeenSet;

                    /**
                     * <p>待删除的防火墙实例数组</p>
                     */
                    std::vector<std::string> m_vpcFwInsList;
                    bool m_vpcFwInsListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DELETEVPCFWGROUPREQUEST_H_
