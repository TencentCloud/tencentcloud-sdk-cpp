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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBETRACECODESREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBETRACECODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * DescribeTraceCodes请求参数结构体
                */
                class DescribeTraceCodesRequest : public AbstractModel
                {
                public:
                    DescribeTraceCodesRequest();
                    ~DescribeTraceCodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索关键字 码标识，或者批次ID
                     * @return Keyword 搜索关键字 码标识，或者批次ID
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置搜索关键字 码标识，或者批次ID
                     * @param _keyword 搜索关键字 码标识，或者批次ID
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取条数
                     * @return PageNumber 条数
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置条数
                     * @param _pageNumber 条数
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return PageSize 页码
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置页码
                     * @param _pageSize 页码
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取批次ID，弃用
                     * @return BatchId 批次ID，弃用
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置批次ID，弃用
                     * @param _batchId 批次ID，弃用
                     * 
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取企业ID
                     * @return CorpId 企业ID
                     * 
                     */
                    uint64_t GetCorpId() const;

                    /**
                     * 设置企业ID
                     * @param _corpId 企业ID
                     * 
                     */
                    void SetCorpId(const uint64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                private:

                    /**
                     * 搜索关键字 码标识，或者批次ID
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 条数
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 页码
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 批次ID，弃用
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBETRACECODESREQUEST_H_
