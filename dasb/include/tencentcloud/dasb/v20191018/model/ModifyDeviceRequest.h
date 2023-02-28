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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_MODIFYDEVICEREQUEST_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_MODIFYDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * ModifyDevice请求参数结构体
                */
                class ModifyDeviceRequest : public AbstractModel
                {
                public:
                    ModifyDeviceRequest();
                    ~ModifyDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资产记录ID
                     * @return Id 资产记录ID
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置资产记录ID
                     * @param Id 资产记录ID
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取管理端口
                     * @return Port 管理端口
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置管理端口
                     * @param Port 管理端口
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取资产所属组ID集合
                     * @return GroupIdSet 资产所属组ID集合
                     */
                    std::vector<uint64_t> GetGroupIdSet() const;

                    /**
                     * 设置资产所属组ID集合
                     * @param GroupIdSet 资产所属组ID集合
                     */
                    void SetGroupIdSet(const std::vector<uint64_t>& _groupIdSet);

                    /**
                     * 判断参数 GroupIdSet 是否已赋值
                     * @return GroupIdSet 是否已赋值
                     */
                    bool GroupIdSetHasBeenSet() const;

                    /**
                     * 获取资产所属部门ID
                     * @return DepartmentId 资产所属部门ID
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置资产所属部门ID
                     * @param DepartmentId 资产所属部门ID
                     */
                    void SetDepartmentId(const std::string& _departmentId);

                    /**
                     * 判断参数 DepartmentId 是否已赋值
                     * @return DepartmentId 是否已赋值
                     */
                    bool DepartmentIdHasBeenSet() const;

                private:

                    /**
                     * 资产记录ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 管理端口
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 资产所属组ID集合
                     */
                    std::vector<uint64_t> m_groupIdSet;
                    bool m_groupIdSetHasBeenSet;

                    /**
                     * 资产所属部门ID
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_MODIFYDEVICEREQUEST_H_
