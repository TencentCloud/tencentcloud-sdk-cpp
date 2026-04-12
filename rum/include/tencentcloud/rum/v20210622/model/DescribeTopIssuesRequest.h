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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETOPISSUESREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETOPISSUESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/CompareCondition.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTopIssues请求参数结构体
                */
                class DescribeTopIssuesRequest : public AbstractModel
                {
                public:
                    DescribeTopIssuesRequest();
                    ~DescribeTopIssuesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品Id
                     * @return ProductId 产品Id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品Id
                     * @param _productId 产品Id
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取需要对比的查询条件，没有则不填
                     * @return Compare 需要对比的查询条件，没有则不填
                     * 
                     */
                    CompareCondition GetCompare() const;

                    /**
                     * 设置需要对比的查询条件，没有则不填
                     * @param _compare 需要对比的查询条件，没有则不填
                     * 
                     */
                    void SetCompare(const CompareCondition& _compare);

                    /**
                     * 判断参数 Compare 是否已赋值
                     * @return Compare 是否已赋值
                     * 
                     */
                    bool CompareHasBeenSet() const;

                    /**
                     * 获取查询条件
                     * @return Condition 查询条件
                     * 
                     */
                    CompareCondition GetCondition() const;

                    /**
                     * 设置查询条件
                     * @param _condition 查询条件
                     * 
                     */
                    void SetCondition(const CompareCondition& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取问题类型
                     * @return IssueType 问题类型
                     * 
                     */
                    int64_t GetIssueType() const;

                    /**
                     * 设置问题类型
                     * @param _issueType 问题类型
                     * 
                     */
                    void SetIssueType(const int64_t& _issueType);

                    /**
                     * 判断参数 IssueType 是否已赋值
                     * @return IssueType 是否已赋值
                     * 
                     */
                    bool IssueTypeHasBeenSet() const;

                    /**
                     * 获取排序字段
                     * @return SortField 排序字段
                     * 
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置排序字段
                     * @param _sortField 排序字段
                     * 
                     */
                    void SetSortField(const std::string& _sortField);

                    /**
                     * 判断参数 SortField 是否已赋值
                     * @return SortField 是否已赋值
                     * 
                     */
                    bool SortFieldHasBeenSet() const;

                    /**
                     * 获取排序方式
                     * @return SortType 排序方式
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置排序方式
                     * @param _sortType 排序方式
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取topN
                     * @return TopNum topN
                     * 
                     */
                    int64_t GetTopNum() const;

                    /**
                     * 设置topN
                     * @param _topNum topN
                     * 
                     */
                    void SetTopNum(const int64_t& _topNum);

                    /**
                     * 判断参数 TopNum 是否已赋值
                     * @return TopNum 是否已赋值
                     * 
                     */
                    bool TopNumHasBeenSet() const;

                    /**
                     * 获取拓展字段
                     * @return ExtraData 拓展字段
                     * 
                     */
                    std::string GetExtraData() const;

                    /**
                     * 设置拓展字段
                     * @param _extraData 拓展字段
                     * 
                     */
                    void SetExtraData(const std::string& _extraData);

                    /**
                     * 判断参数 ExtraData 是否已赋值
                     * @return ExtraData 是否已赋值
                     * 
                     */
                    bool ExtraDataHasBeenSet() const;

                    /**
                     * 获取请求头
                     * @return RequestHeader 请求头
                     * 
                     */
                    std::string GetRequestHeader() const;

                    /**
                     * 设置请求头
                     * @param _requestHeader 请求头
                     * 
                     */
                    void SetRequestHeader(const std::string& _requestHeader);

                    /**
                     * 判断参数 RequestHeader 是否已赋值
                     * @return RequestHeader 是否已赋值
                     * 
                     */
                    bool RequestHeaderHasBeenSet() const;

                private:

                    /**
                     * 产品Id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 需要对比的查询条件，没有则不填
                     */
                    CompareCondition m_compare;
                    bool m_compareHasBeenSet;

                    /**
                     * 查询条件
                     */
                    CompareCondition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 问题类型
                     */
                    int64_t m_issueType;
                    bool m_issueTypeHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * 排序方式
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * topN
                     */
                    int64_t m_topNum;
                    bool m_topNumHasBeenSet;

                    /**
                     * 拓展字段
                     */
                    std::string m_extraData;
                    bool m_extraDataHasBeenSet;

                    /**
                     * 请求头
                     */
                    std::string m_requestHeader;
                    bool m_requestHeaderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETOPISSUESREQUEST_H_
