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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_LISTSECRETSREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_LISTSECRETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssm/v20190923/model/TagFilter.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * ListSecrets请求参数结构体
                */
                class ListSecretsRequest : public AbstractModel
                {
                public:
                    ListSecretsRequest();
                    ~ListSecretsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询列表的起始位置，以0开始，不设置默认为0。
                     * @return Offset 查询列表的起始位置，以0开始，不设置默认为0。
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询列表的起始位置，以0开始，不设置默认为0。
                     * @param Offset 查询列表的起始位置，以0开始，不设置默认为0。
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取单次查询返回的最大数量，0或不设置则使用默认值 20。
                     * @return Limit 单次查询返回的最大数量，0或不设置则使用默认值 20。
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置单次查询返回的最大数量，0或不设置则使用默认值 20。
                     * @param Limit 单次查询返回的最大数量，0或不设置则使用默认值 20。
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取根据创建时间的排序方式，0或者不设置则使用降序排序， 1 表示升序排序。
                     * @return OrderType 根据创建时间的排序方式，0或者不设置则使用降序排序， 1 表示升序排序。
                     */
                    uint64_t GetOrderType() const;

                    /**
                     * 设置根据创建时间的排序方式，0或者不设置则使用降序排序， 1 表示升序排序。
                     * @param OrderType 根据创建时间的排序方式，0或者不设置则使用降序排序， 1 表示升序排序。
                     */
                    void SetOrderType(const uint64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取根据凭据状态进行过滤。
默认为0表示查询全部。
1 --  表示查询Enabled 凭据列表。
2 --  表示查询Disabled 凭据列表。
3 --  表示查询PendingDelete 凭据列表。
4 --  表示PendingCreate。
5 --  表示CreateFailed。
其中状态PendingCreate和CreateFailed只有在SecretType为云产品凭据时生效
                     * @return State 根据凭据状态进行过滤。
默认为0表示查询全部。
1 --  表示查询Enabled 凭据列表。
2 --  表示查询Disabled 凭据列表。
3 --  表示查询PendingDelete 凭据列表。
4 --  表示PendingCreate。
5 --  表示CreateFailed。
其中状态PendingCreate和CreateFailed只有在SecretType为云产品凭据时生效
                     */
                    uint64_t GetState() const;

                    /**
                     * 设置根据凭据状态进行过滤。
默认为0表示查询全部。
1 --  表示查询Enabled 凭据列表。
2 --  表示查询Disabled 凭据列表。
3 --  表示查询PendingDelete 凭据列表。
4 --  表示PendingCreate。
5 --  表示CreateFailed。
其中状态PendingCreate和CreateFailed只有在SecretType为云产品凭据时生效
                     * @param State 根据凭据状态进行过滤。
默认为0表示查询全部。
1 --  表示查询Enabled 凭据列表。
2 --  表示查询Disabled 凭据列表。
3 --  表示查询PendingDelete 凭据列表。
4 --  表示PendingCreate。
5 --  表示CreateFailed。
其中状态PendingCreate和CreateFailed只有在SecretType为云产品凭据时生效
                     */
                    void SetState(const uint64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取根据凭据名称进行过滤，为空表示不过滤。
                     * @return SearchSecretName 根据凭据名称进行过滤，为空表示不过滤。
                     */
                    std::string GetSearchSecretName() const;

                    /**
                     * 设置根据凭据名称进行过滤，为空表示不过滤。
                     * @param SearchSecretName 根据凭据名称进行过滤，为空表示不过滤。
                     */
                    void SetSearchSecretName(const std::string& _searchSecretName);

                    /**
                     * 判断参数 SearchSecretName 是否已赋值
                     * @return SearchSecretName 是否已赋值
                     */
                    bool SearchSecretNameHasBeenSet() const;

                    /**
                     * 获取标签过滤条件。
                     * @return TagFilters 标签过滤条件。
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置标签过滤条件。
                     * @param TagFilters 标签过滤条件。
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     */
                    bool TagFiltersHasBeenSet() const;

                    /**
                     * 获取0  -- 表示用户自定义凭据，默认为0。
1  -- 表示用户云产品凭据。
这个参数只能在云产品凭据(1)和用户自定义凭据(0)中二选一。
                     * @return SecretType 0  -- 表示用户自定义凭据，默认为0。
1  -- 表示用户云产品凭据。
这个参数只能在云产品凭据(1)和用户自定义凭据(0)中二选一。
                     */
                    uint64_t GetSecretType() const;

                    /**
                     * 设置0  -- 表示用户自定义凭据，默认为0。
1  -- 表示用户云产品凭据。
这个参数只能在云产品凭据(1)和用户自定义凭据(0)中二选一。
                     * @param SecretType 0  -- 表示用户自定义凭据，默认为0。
1  -- 表示用户云产品凭据。
这个参数只能在云产品凭据(1)和用户自定义凭据(0)中二选一。
                     */
                    void SetSecretType(const uint64_t& _secretType);

                    /**
                     * 判断参数 SecretType 是否已赋值
                     * @return SecretType 是否已赋值
                     */
                    bool SecretTypeHasBeenSet() const;

                private:

                    /**
                     * 查询列表的起始位置，以0开始，不设置默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 单次查询返回的最大数量，0或不设置则使用默认值 20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 根据创建时间的排序方式，0或者不设置则使用降序排序， 1 表示升序排序。
                     */
                    uint64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 根据凭据状态进行过滤。
默认为0表示查询全部。
1 --  表示查询Enabled 凭据列表。
2 --  表示查询Disabled 凭据列表。
3 --  表示查询PendingDelete 凭据列表。
4 --  表示PendingCreate。
5 --  表示CreateFailed。
其中状态PendingCreate和CreateFailed只有在SecretType为云产品凭据时生效
                     */
                    uint64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 根据凭据名称进行过滤，为空表示不过滤。
                     */
                    std::string m_searchSecretName;
                    bool m_searchSecretNameHasBeenSet;

                    /**
                     * 标签过滤条件。
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * 0  -- 表示用户自定义凭据，默认为0。
1  -- 表示用户云产品凭据。
这个参数只能在云产品凭据(1)和用户自定义凭据(0)中二选一。
                     */
                    uint64_t m_secretType;
                    bool m_secretTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_LISTSECRETSREQUEST_H_
