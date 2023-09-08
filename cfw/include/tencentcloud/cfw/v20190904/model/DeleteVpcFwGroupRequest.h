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
                     * 获取防火墙(组)Id
                     * @return FwGroupId 防火墙(组)Id
                     * 
                     */
                    std::string GetFwGroupId() const;

                    /**
                     * 设置防火墙(组)Id
                     * @param _fwGroupId 防火墙(组)Id
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
                     * 获取是否删除整个防火墙(组)
0：不删除防火墙(组)，只删除单独实例
1：删除整个防火墙(组)
                     * @return DeleteFwGroup 是否删除整个防火墙(组)
0：不删除防火墙(组)，只删除单独实例
1：删除整个防火墙(组)
                     * 
                     */
                    int64_t GetDeleteFwGroup() const;

                    /**
                     * 设置是否删除整个防火墙(组)
0：不删除防火墙(组)，只删除单独实例
1：删除整个防火墙(组)
                     * @param _deleteFwGroup 是否删除整个防火墙(组)
0：不删除防火墙(组)，只删除单独实例
1：删除整个防火墙(组)
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
                     * 获取待删除的防火墙实例数组
                     * @return VpcFwInsList 待删除的防火墙实例数组
                     * 
                     */
                    std::vector<std::string> GetVpcFwInsList() const;

                    /**
                     * 设置待删除的防火墙实例数组
                     * @param _vpcFwInsList 待删除的防火墙实例数组
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
                     * 防火墙(组)Id
                     */
                    std::string m_fwGroupId;
                    bool m_fwGroupIdHasBeenSet;

                    /**
                     * 是否删除整个防火墙(组)
0：不删除防火墙(组)，只删除单独实例
1：删除整个防火墙(组)
                     */
                    int64_t m_deleteFwGroup;
                    bool m_deleteFwGroupHasBeenSet;

                    /**
                     * 待删除的防火墙实例数组
                     */
                    std::vector<std::string> m_vpcFwInsList;
                    bool m_vpcFwInsListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DELETEVPCFWGROUPREQUEST_H_
