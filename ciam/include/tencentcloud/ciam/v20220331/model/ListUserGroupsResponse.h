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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERGROUPSRESPONSE_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/UserGroup.h>
#include <tencentcloud/ciam/v20220331/model/Pageable.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * ListUserGroups返回参数结构体
                */
                class ListUserGroupsResponse : public AbstractModel
                {
                public:
                    ListUserGroupsResponse();
                    ~ListUserGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户组列表
                     * @return Content 用户组列表
                     * 
                     */
                    std::vector<UserGroup> GetContent() const;

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取总条数
                     * @return Total 总条数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取分页
                     * @return Pageable 分页
                     * 
                     */
                    Pageable GetPageable() const;

                    /**
                     * 判断参数 Pageable 是否已赋值
                     * @return Pageable 是否已赋值
                     * 
                     */
                    bool PageableHasBeenSet() const;

                private:

                    /**
                     * 用户组列表
                     */
                    std::vector<UserGroup> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 总条数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 分页
                     */
                    Pageable m_pageable;
                    bool m_pageableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERGROUPSRESPONSE_H_
