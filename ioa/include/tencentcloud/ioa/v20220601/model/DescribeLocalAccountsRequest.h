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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBELOCALACCOUNTSREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBELOCALACCOUNTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/Condition.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * DescribeLocalAccounts请求参数结构体
                */
                class DescribeLocalAccountsRequest : public AbstractModel
                {
                public:
                    DescribeLocalAccountsRequest();
                    ~DescribeLocalAccountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取滤条件、分页参数
<li>UserName - String - 是否必填：否 - 操作符: eq,like  - 排序支持：否- 按账号UserName过滤。</li>
<li>UserId - string - 是否必填：否 - 操作符: eq,like  - 排序支持：否 - 按账号UserNd过滤。</li>
<li>Phone - string - 是否必填：否 - 操作符: eq,like - 排序支持：否 - 按手机号过滤。</li>
                     * @return Condition 滤条件、分页参数
<li>UserName - String - 是否必填：否 - 操作符: eq,like  - 排序支持：否- 按账号UserName过滤。</li>
<li>UserId - string - 是否必填：否 - 操作符: eq,like  - 排序支持：否 - 按账号UserNd过滤。</li>
<li>Phone - string - 是否必填：否 - 操作符: eq,like - 排序支持：否 - 按手机号过滤。</li>
                     * 
                     */
                    Condition GetCondition() const;

                    /**
                     * 设置滤条件、分页参数
<li>UserName - String - 是否必填：否 - 操作符: eq,like  - 排序支持：否- 按账号UserName过滤。</li>
<li>UserId - string - 是否必填：否 - 操作符: eq,like  - 排序支持：否 - 按账号UserNd过滤。</li>
<li>Phone - string - 是否必填：否 - 操作符: eq,like - 排序支持：否 - 按手机号过滤。</li>
                     * @param _condition 滤条件、分页参数
<li>UserName - String - 是否必填：否 - 操作符: eq,like  - 排序支持：否- 按账号UserName过滤。</li>
<li>UserId - string - 是否必填：否 - 操作符: eq,like  - 排序支持：否 - 按账号UserNd过滤。</li>
<li>Phone - string - 是否必填：否 - 操作符: eq,like - 排序支持：否 - 按手机号过滤。</li>
                     * 
                     */
                    void SetCondition(const Condition& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取获取账号的分组Id，不传默认获取全部(只支持32位)
                     * @return AccountGroupId 获取账号的分组Id，不传默认获取全部(只支持32位)
                     * 
                     */
                    int64_t GetAccountGroupId() const;

                    /**
                     * 设置获取账号的分组Id，不传默认获取全部(只支持32位)
                     * @param _accountGroupId 获取账号的分组Id，不传默认获取全部(只支持32位)
                     * 
                     */
                    void SetAccountGroupId(const int64_t& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                    /**
                     * 获取是否仅展示当前目录下用户 1： 递归显示 2：仅显示当前目录下用户(只支持32位)
                     * @return ShowFlag 是否仅展示当前目录下用户 1： 递归显示 2：仅显示当前目录下用户(只支持32位)
                     * 
                     */
                    int64_t GetShowFlag() const;

                    /**
                     * 设置是否仅展示当前目录下用户 1： 递归显示 2：仅显示当前目录下用户(只支持32位)
                     * @param _showFlag 是否仅展示当前目录下用户 1： 递归显示 2：仅显示当前目录下用户(只支持32位)
                     * 
                     */
                    void SetShowFlag(const int64_t& _showFlag);

                    /**
                     * 判断参数 ShowFlag 是否已赋值
                     * @return ShowFlag 是否已赋值
                     * 
                     */
                    bool ShowFlagHasBeenSet() const;

                private:

                    /**
                     * 滤条件、分页参数
<li>UserName - String - 是否必填：否 - 操作符: eq,like  - 排序支持：否- 按账号UserName过滤。</li>
<li>UserId - string - 是否必填：否 - 操作符: eq,like  - 排序支持：否 - 按账号UserNd过滤。</li>
<li>Phone - string - 是否必填：否 - 操作符: eq,like - 排序支持：否 - 按手机号过滤。</li>
                     */
                    Condition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 获取账号的分组Id，不传默认获取全部(只支持32位)
                     */
                    int64_t m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * 是否仅展示当前目录下用户 1： 递归显示 2：仅显示当前目录下用户(只支持32位)
                     */
                    int64_t m_showFlag;
                    bool m_showFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBELOCALACCOUNTSREQUEST_H_
