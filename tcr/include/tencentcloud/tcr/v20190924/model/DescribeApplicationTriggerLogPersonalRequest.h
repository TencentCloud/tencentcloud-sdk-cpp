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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEAPPLICATIONTRIGGERLOGPERSONALREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEAPPLICATIONTRIGGERLOGPERSONALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeApplicationTriggerLogPersonal请求参数结构体
                */
                class DescribeApplicationTriggerLogPersonalRequest : public AbstractModel
                {
                public:
                    DescribeApplicationTriggerLogPersonalRequest();
                    ~DescribeApplicationTriggerLogPersonalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取仓库名称
                     * @return RepoName 仓库名称
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置仓库名称
                     * @param _repoName 仓库名称
                     * 
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     * 
                     */
                    bool RepoNameHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
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
                     * 获取返回最大数量，默认 20, 最大值 100
                     * @return Limit 返回最大数量，默认 20, 最大值 100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回最大数量，默认 20, 最大值 100
                     * @param _limit 返回最大数量，默认 20, 最大值 100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取升序或降序
                     * @return Order 升序或降序
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置升序或降序
                     * @param _order 升序或降序
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取按某列排序
                     * @return OrderBy 按某列排序
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置按某列排序
                     * @param _orderBy 按某列排序
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                private:

                    /**
                     * 仓库名称
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回最大数量，默认 20, 最大值 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 升序或降序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 按某列排序
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEAPPLICATIONTRIGGERLOGPERSONALREQUEST_H_
