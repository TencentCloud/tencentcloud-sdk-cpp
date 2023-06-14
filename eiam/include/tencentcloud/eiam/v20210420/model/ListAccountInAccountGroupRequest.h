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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_LISTACCOUNTINACCOUNTGROUPREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_LISTACCOUNTINACCOUNTGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/AccountGroupSearchCriteria.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * ListAccountInAccountGroup请求参数结构体
                */
                class ListAccountInAccountGroupRequest : public AbstractModel
                {
                public:
                    ListAccountInAccountGroupRequest();
                    ~ListAccountInAccountGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取账号组ID。
                     * @return AccountGroupId 账号组ID。
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 设置账号组ID。
                     * @param _accountGroupId 账号组ID。
                     * 
                     */
                    void SetAccountGroupId(const std::string& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                    /**
                     * 获取查询条件，支持多搜索条件组合、多数据范围匹配的搜索。
                     * @return SearchCondition 查询条件，支持多搜索条件组合、多数据范围匹配的搜索。
                     * 
                     */
                    AccountGroupSearchCriteria GetSearchCondition() const;

                    /**
                     * 设置查询条件，支持多搜索条件组合、多数据范围匹配的搜索。
                     * @param _searchCondition 查询条件，支持多搜索条件组合、多数据范围匹配的搜索。
                     * 
                     */
                    void SetSearchCondition(const AccountGroupSearchCriteria& _searchCondition);

                    /**
                     * 判断参数 SearchCondition 是否已赋值
                     * @return SearchCondition 是否已赋值
                     * 
                     */
                    bool SearchConditionHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为 0。
                     * @return Offset 偏移量，默认为 0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为 0。
                     * @param _offset 偏移量，默认为 0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为 20，最大值为 100。
                     * @return Limit 返回数量，默认为 20，最大值为 100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为 20，最大值为 100。
                     * @param _limit 返回数量，默认为 20，最大值为 100。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 账号组ID。
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * 查询条件，支持多搜索条件组合、多数据范围匹配的搜索。
                     */
                    AccountGroupSearchCriteria m_searchCondition;
                    bool m_searchConditionHasBeenSet;

                    /**
                     * 偏移量，默认为 0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为 20，最大值为 100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_LISTACCOUNTINACCOUNTGROUPREQUEST_H_
