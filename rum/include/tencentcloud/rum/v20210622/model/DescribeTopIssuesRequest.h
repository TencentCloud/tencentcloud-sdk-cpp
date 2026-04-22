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
                     * 获取<p>产品Id</p>
                     * @return ProductId <p>产品Id</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>产品Id</p>
                     * @param _productId <p>产品Id</p>
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
                     * 获取<p>需要对比的查询条件，没有则不填</p>
                     * @return Compare <p>需要对比的查询条件，没有则不填</p>
                     * 
                     */
                    CompareCondition GetCompare() const;

                    /**
                     * 设置<p>需要对比的查询条件，没有则不填</p>
                     * @param _compare <p>需要对比的查询条件，没有则不填</p>
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
                     * 获取<p>查询条件</p>
                     * @return Condition <p>查询条件</p>
                     * 
                     */
                    CompareCondition GetCondition() const;

                    /**
                     * 设置<p>查询条件</p>
                     * @param _condition <p>查询条件</p>
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
                     * 获取<p>问题类型</p>
                     * @return IssueType <p>问题类型</p>
                     * 
                     */
                    int64_t GetIssueType() const;

                    /**
                     * 设置<p>问题类型</p>
                     * @param _issueType <p>问题类型</p>
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
                     * 获取<p>排序字段</p>
                     * @return SortField <p>排序字段</p>
                     * 
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置<p>排序字段</p>
                     * @param _sortField <p>排序字段</p>
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
                     * 获取<p>排序方式</p>
                     * @return SortType <p>排序方式</p>
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置<p>排序方式</p>
                     * @param _sortType <p>排序方式</p>
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
                     * 获取<p>topN</p>
                     * @return TopNum <p>topN</p>
                     * 
                     */
                    int64_t GetTopNum() const;

                    /**
                     * 设置<p>topN</p>
                     * @param _topNum <p>topN</p>
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
                     * 获取<p>拓展字段</p>
                     * @return ExtraData <p>拓展字段</p>
                     * 
                     */
                    std::string GetExtraData() const;

                    /**
                     * 设置<p>拓展字段</p>
                     * @param _extraData <p>拓展字段</p>
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
                     * 获取<p>请求头</p>
                     * @return RequestHeader <p>请求头</p>
                     * 
                     */
                    std::string GetRequestHeader() const;

                    /**
                     * 设置<p>请求头</p>
                     * @param _requestHeader <p>请求头</p>
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
                     * <p>产品Id</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>需要对比的查询条件，没有则不填</p>
                     */
                    CompareCondition m_compare;
                    bool m_compareHasBeenSet;

                    /**
                     * <p>查询条件</p>
                     */
                    CompareCondition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p>问题类型</p>
                     */
                    int64_t m_issueType;
                    bool m_issueTypeHasBeenSet;

                    /**
                     * <p>排序字段</p>
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * <p>排序方式</p>
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * <p>topN</p>
                     */
                    int64_t m_topNum;
                    bool m_topNumHasBeenSet;

                    /**
                     * <p>拓展字段</p>
                     */
                    std::string m_extraData;
                    bool m_extraDataHasBeenSet;

                    /**
                     * <p>请求头</p>
                     */
                    std::string m_requestHeader;
                    bool m_requestHeaderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETOPISSUESREQUEST_H_
