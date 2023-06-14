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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEFORBIDSTREAMLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEFORBIDSTREAMLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveForbidStreamList请求参数结构体
                */
                class DescribeLiveForbidStreamListRequest : public AbstractModel
                {
                public:
                    DescribeLiveForbidStreamListRequest();
                    ~DescribeLiveForbidStreamListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取取得第几页，默认1。
                     * @return PageNum 取得第几页，默认1。
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置取得第几页，默认1。
                     * @param _pageNum 取得第几页，默认1。
                     * 
                     */
                    void SetPageNum(const int64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取每页大小，最大100。 
取值：1~100之前的任意整数。
默认值：10。
                     * @return PageSize 每页大小，最大100。 
取值：1~100之前的任意整数。
默认值：10。
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页大小，最大100。 
取值：1~100之前的任意整数。
默认值：10。
                     * @param _pageSize 每页大小，最大100。 
取值：1~100之前的任意整数。
默认值：10。
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取按流名称查询。
                     * @return StreamName 按流名称查询。
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置按流名称查询。
                     * @param _streamName 按流名称查询。
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                private:

                    /**
                     * 取得第几页，默认1。
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 每页大小，最大100。 
取值：1~100之前的任意整数。
默认值：10。
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 按流名称查询。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEFORBIDSTREAMLISTREQUEST_H_
