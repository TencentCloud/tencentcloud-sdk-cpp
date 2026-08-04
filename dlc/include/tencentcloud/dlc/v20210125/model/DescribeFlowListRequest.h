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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEFLOWLISTREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEFLOWLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeFlowList请求参数结构体
                */
                class DescribeFlowListRequest : public AbstractModel
                {
                public:
                    DescribeFlowListRequest();
                    ~DescribeFlowListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分区编码
                     * @return PartitionCode 分区编码
                     * 
                     */
                    std::string GetPartitionCode() const;

                    /**
                     * 设置分区编码
                     * @param _partitionCode 分区编码
                     * 
                     */
                    void SetPartitionCode(const std::string& _partitionCode);

                    /**
                     * 判断参数 PartitionCode 是否已赋值
                     * @return PartitionCode 是否已赋值
                     * 
                     */
                    bool PartitionCodeHasBeenSet() const;

                    /**
                     * 获取页码，从1开始，默认为1
                     * @return Page 页码，从1开始，默认为1
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置页码，从1开始，默认为1
                     * @param _page 页码，从1开始，默认为1
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取每页返回数量，默认为10
                     * @return PageSize 每页返回数量，默认为10
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页返回数量，默认为10
                     * @param _pageSize 每页返回数量，默认为10
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 分区编码
                     */
                    std::string m_partitionCode;
                    bool m_partitionCodeHasBeenSet;

                    /**
                     * 页码，从1开始，默认为1
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 每页返回数量，默认为10
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEFLOWLISTREQUEST_H_
