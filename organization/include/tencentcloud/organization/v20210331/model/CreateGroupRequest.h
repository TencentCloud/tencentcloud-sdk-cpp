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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEGROUPREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * CreateGroup请求参数结构体
                */
                class CreateGroupRequest : public AbstractModel
                {
                public:
                    CreateGroupRequest();
                    ~CreateGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间 ID。
                     * @return ZoneId 空间 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置空间 ID。
                     * @param _zoneId 空间 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取用户组的名称。  格式：允许英文字母、数字和特殊字符-。 长度：最大 128 个字符。
                     * @return GroupName 用户组的名称。  格式：允许英文字母、数字和特殊字符-。 长度：最大 128 个字符。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置用户组的名称。  格式：允许英文字母、数字和特殊字符-。 长度：最大 128 个字符。
                     * @param _groupName 用户组的名称。  格式：允许英文字母、数字和特殊字符-。 长度：最大 128 个字符。
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
                     * 获取用户组的描述。  长度：最大 1024 个字符。
                     * @return Description 用户组的描述。  长度：最大 1024 个字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置用户组的描述。  长度：最大 1024 个字符。
                     * @param _description 用户组的描述。  长度：最大 1024 个字符。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取用户组类型  Manual：手动创建，Synchronized：外部导入
                     * @return GroupType 用户组类型  Manual：手动创建，Synchronized：外部导入
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置用户组类型  Manual：手动创建，Synchronized：外部导入
                     * @param _groupType 用户组类型  Manual：手动创建，Synchronized：外部导入
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                private:

                    /**
                     * 空间 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 用户组的名称。  格式：允许英文字母、数字和特殊字符-。 长度：最大 128 个字符。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 用户组的描述。  长度：最大 1024 个字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 用户组类型  Manual：手动创建，Synchronized：外部导入
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEGROUPREQUEST_H_
