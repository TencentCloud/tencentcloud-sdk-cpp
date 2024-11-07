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
                     * 获取查询条件：过滤或排序
1、UserName，string类型，姓名
是否必填：否
过滤支持：是，支持eq、like、ilike
排序支持：否
2、UserId，string类型，账户
是否必填：否
过滤支持：是，支持eq、like、ilike
排序支持：否
3、Phone，string类型，手机号
是否必填：否
过滤支持：是，支持eq、like、ilike
排序支持：否
                     * @return Condition 查询条件：过滤或排序
1、UserName，string类型，姓名
是否必填：否
过滤支持：是，支持eq、like、ilike
排序支持：否
2、UserId，string类型，账户
是否必填：否
过滤支持：是，支持eq、like、ilike
排序支持：否
3、Phone，string类型，手机号
是否必填：否
过滤支持：是，支持eq、like、ilike
排序支持：否
                     * 
                     */
                    Condition GetCondition() const;

                    /**
                     * 设置查询条件：过滤或排序
1、UserName，string类型，姓名
是否必填：否
过滤支持：是，支持eq、like、ilike
排序支持：否
2、UserId，string类型，账户
是否必填：否
过滤支持：是，支持eq、like、ilike
排序支持：否
3、Phone，string类型，手机号
是否必填：否
过滤支持：是，支持eq、like、ilike
排序支持：否
                     * @param _condition 查询条件：过滤或排序
1、UserName，string类型，姓名
是否必填：否
过滤支持：是，支持eq、like、ilike
排序支持：否
2、UserId，string类型，账户
是否必填：否
过滤支持：是，支持eq、like、ilike
排序支持：否
3、Phone，string类型，手机号
是否必填：否
过滤支持：是，支持eq、like、ilike
排序支持：否
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
                     * 获取获取账号的分组ID，不传默认获取全网根账号组
                     * @return AccountGroupId 获取账号的分组ID，不传默认获取全网根账号组
                     * 
                     */
                    int64_t GetAccountGroupId() const;

                    /**
                     * 设置获取账号的分组ID，不传默认获取全网根账号组
                     * @param _accountGroupId 获取账号的分组ID，不传默认获取全网根账号组
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
                     * 获取是否仅展示当前目录下用户 1： 递归显示 2：仅显示当前目录下用户
                     * @return ShowFlag 是否仅展示当前目录下用户 1： 递归显示 2：仅显示当前目录下用户
                     * 
                     */
                    int64_t GetShowFlag() const;

                    /**
                     * 设置是否仅展示当前目录下用户 1： 递归显示 2：仅显示当前目录下用户
                     * @param _showFlag 是否仅展示当前目录下用户 1： 递归显示 2：仅显示当前目录下用户
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
                     * 查询条件：过滤或排序
1、UserName，string类型，姓名
是否必填：否
过滤支持：是，支持eq、like、ilike
排序支持：否
2、UserId，string类型，账户
是否必填：否
过滤支持：是，支持eq、like、ilike
排序支持：否
3、Phone，string类型，手机号
是否必填：否
过滤支持：是，支持eq、like、ilike
排序支持：否
                     */
                    Condition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 获取账号的分组ID，不传默认获取全网根账号组
                     */
                    int64_t m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * 是否仅展示当前目录下用户 1： 递归显示 2：仅显示当前目录下用户
                     */
                    int64_t m_showFlag;
                    bool m_showFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBELOCALACCOUNTSREQUEST_H_
