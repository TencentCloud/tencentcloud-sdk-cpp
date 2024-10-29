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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYRESOURCEGROUPREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYRESOURCEGROUPREQUEST_H_

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
                * ModifyResourceGroup请求参数结构体
                */
                class ModifyResourceGroupRequest : public AbstractModel
                {
                public:
                    ModifyResourceGroupRequest();
                    ~ModifyResourceGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资产组id
                     * @return GroupId 资产组id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置资产组id
                     * @param _groupId 资产组id
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取组名称
                     * @return GroupName 组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置组名称
                     * @param _groupName 组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取上级组资产组id
                     * @return ParentId 上级组资产组id
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置上级组资产组id
                     * @param _parentId 上级组资产组id
                     * 
                     */
                    void SetParentId(const std::string& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                private:

                    /**
                     * 资产组id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 上级组资产组id
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYRESOURCEGROUPREQUEST_H_
