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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMONLINEINFOREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMONLINEINFOREQUEST_H_

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
                * DescribeLiveStreamOnlineInfo请求参数结构体
                */
                class DescribeLiveStreamOnlineInfoRequest : public AbstractModel
                {
                public:
                    DescribeLiveStreamOnlineInfoRequest();
                    ~DescribeLiveStreamOnlineInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取取得第几页。
默认值：1。
                     * @return PageNum 取得第几页。
默认值：1。
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置取得第几页。
默认值：1。
                     * @param PageNum 取得第几页。
默认值：1。
                     */
                    void SetPageNum(const uint64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取分页大小。
最大值：100。
取值范围：1~100 之前的任意整数。
默认值：10。
                     * @return PageSize 分页大小。
最大值：100。
取值范围：1~100 之前的任意整数。
默认值：10。
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页大小。
最大值：100。
取值范围：1~100 之前的任意整数。
默认值：10。
                     * @param PageSize 分页大小。
最大值：100。
取值范围：1~100 之前的任意整数。
默认值：10。
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取0:未开始推流 1:正在推流
                     * @return Status 0:未开始推流 1:正在推流
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置0:未开始推流 1:正在推流
                     * @param Status 0:未开始推流 1:正在推流
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取流名称。
                     * @return StreamName 流名称。
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称。
                     * @param StreamName 流名称。
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     */
                    bool StreamNameHasBeenSet() const;

                private:

                    /**
                     * 取得第几页。
默认值：1。
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 分页大小。
最大值：100。
取值范围：1~100 之前的任意整数。
默认值：10。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 0:未开始推流 1:正在推流
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 流名称。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMONLINEINFOREQUEST_H_
