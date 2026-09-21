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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATECONSOLEGROUPREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATECONSOLEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * CreateConsoleGroup请求参数结构体
                */
                class CreateConsoleGroupRequest : public AbstractModel
                {
                public:
                    CreateConsoleGroupRequest();
                    ~CreateConsoleGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>用户组名称</p>
                     * @return GroupName <p>用户组名称</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>用户组名称</p>
                     * @param _groupName <p>用户组名称</p>
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
                     * 获取<p>用户组别名</p>
                     * @return GroupNickname <p>用户组别名</p>
                     * 
                     */
                    std::string GetGroupNickname() const;

                    /**
                     * 设置<p>用户组别名</p>
                     * @param _groupNickname <p>用户组别名</p>
                     * 
                     */
                    void SetGroupNickname(const std::string& _groupNickname);

                    /**
                     * 判断参数 GroupNickname 是否已赋值
                     * @return GroupNickname 是否已赋值
                     * 
                     */
                    bool GroupNicknameHasBeenSet() const;

                    /**
                     * 获取<p>用户组描述</p>
                     * @return Description <p>用户组描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>用户组描述</p>
                     * @param _description <p>用户组描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>用户组名称</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>用户组别名</p>
                     */
                    std::string m_groupNickname;
                    bool m_groupNicknameHasBeenSet;

                    /**
                     * <p>用户组描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATECONSOLEGROUPREQUEST_H_
