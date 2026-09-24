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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_ACCOUNTUSERIDITEM_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_ACCOUNTUSERIDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 账户标识项(目录MenuId+登录账号UserId)，用于以(菜单目录、登录账号)代替账号Id标识账户
                */
                class AccountUserIdItem : public AbstractModel
                {
                public:
                    AccountUserIdItem();
                    ~AccountUserIdItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Comment: 账号所在目录ID(MenuId)，与accounts表menu_id一致，用于同一登录账号在不同目录下去重;Required:true</p>
                     * @return MenuId <p>Comment: 账号所在目录ID(MenuId)，与accounts表menu_id一致，用于同一登录账号在不同目录下去重;Required:true</p>
                     * 
                     */
                    uint64_t GetMenuId() const;

                    /**
                     * 设置<p>Comment: 账号所在目录ID(MenuId)，与accounts表menu_id一致，用于同一登录账号在不同目录下去重;Required:true</p>
                     * @param _menuId <p>Comment: 账号所在目录ID(MenuId)，与accounts表menu_id一致，用于同一登录账号在不同目录下去重;Required:true</p>
                     * 
                     */
                    void SetMenuId(const uint64_t& _menuId);

                    /**
                     * 判断参数 MenuId 是否已赋值
                     * @return MenuId 是否已赋值
                     * 
                     */
                    bool MenuIdHasBeenSet() const;

                    /**
                     * 获取<p>Comment: 登录账号(UserId)，对应DescribeLocalAccount -&gt; UserId;Required:true</p>
                     * @return UserId <p>Comment: 登录账号(UserId)，对应DescribeLocalAccount -&gt; UserId;Required:true</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>Comment: 登录账号(UserId)，对应DescribeLocalAccount -&gt; UserId;Required:true</p>
                     * @param _userId <p>Comment: 登录账号(UserId)，对应DescribeLocalAccount -&gt; UserId;Required:true</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * <p>Comment: 账号所在目录ID(MenuId)，与accounts表menu_id一致，用于同一登录账号在不同目录下去重;Required:true</p>
                     */
                    uint64_t m_menuId;
                    bool m_menuIdHasBeenSet;

                    /**
                     * <p>Comment: 登录账号(UserId)，对应DescribeLocalAccount -&gt; UserId;Required:true</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_ACCOUNTUSERIDITEM_H_
