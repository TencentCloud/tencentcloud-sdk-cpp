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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMPACKAGELINEARASSEMBLYPROGRAMSCHEDULESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMPACKAGELINEARASSEMBLYPROGRAMSCHEDULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeStreamPackageLinearAssemblyProgramSchedules请求参数结构体
                */
                class DescribeStreamPackageLinearAssemblyProgramSchedulesRequest : public AbstractModel
                {
                public:
                    DescribeStreamPackageLinearAssemblyProgramSchedulesRequest();
                    ~DescribeStreamPackageLinearAssemblyProgramSchedulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询某个Channel下面的所有Program。
                     * @return ChannelId 查询某个Channel下面的所有Program。
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置查询某个Channel下面的所有Program。
                     * @param _channelId 查询某个Channel下面的所有Program。
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取窗口时长信息，单位秒。最大7776000s
                     * @return TimeWindow 窗口时长信息，单位秒。最大7776000s
                     * 
                     */
                    uint64_t GetTimeWindow() const;

                    /**
                     * 设置窗口时长信息，单位秒。最大7776000s
                     * @param _timeWindow 窗口时长信息，单位秒。最大7776000s
                     * 
                     */
                    void SetTimeWindow(const uint64_t& _timeWindow);

                    /**
                     * 判断参数 TimeWindow 是否已赋值
                     * @return TimeWindow 是否已赋值
                     * 
                     */
                    bool TimeWindowHasBeenSet() const;

                    /**
                     * 获取页数，取值范围为[1, 10000]。
                     * @return PageNum 页数，取值范围为[1, 10000]。
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置页数，取值范围为[1, 10000]。
                     * @param _pageNum 页数，取值范围为[1, 10000]。
                     * 
                     */
                    void SetPageNum(const uint64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取每页大小，取值范围为[1, 1000]。
                     * @return PageSize 每页大小，取值范围为[1, 1000]。
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页大小，取值范围为[1, 1000]。
                     * @param _pageSize 每页大小，取值范围为[1, 1000]。
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 查询某个Channel下面的所有Program。
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 窗口时长信息，单位秒。最大7776000s
                     */
                    uint64_t m_timeWindow;
                    bool m_timeWindowHasBeenSet;

                    /**
                     * 页数，取值范围为[1, 10000]。
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 每页大小，取值范围为[1, 1000]。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMPACKAGELINEARASSEMBLYPROGRAMSCHEDULESREQUEST_H_
