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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCDRREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCDRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeTelCdr请求参数结构体
                */
                class DescribeTelCdrRequest : public AbstractModel
                {
                public:
                    DescribeTelCdrRequest();
                    ~DescribeTelCdrRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>起始时间戳，Unix 秒级时间戳，最大支持近180天。</p>
                     * @return StartTimeStamp <p>起始时间戳，Unix 秒级时间戳，最大支持近180天。</p>
                     * 
                     */
                    int64_t GetStartTimeStamp() const;

                    /**
                     * 设置<p>起始时间戳，Unix 秒级时间戳，最大支持近180天。</p>
                     * @param _startTimeStamp <p>起始时间戳，Unix 秒级时间戳，最大支持近180天。</p>
                     * 
                     */
                    void SetStartTimeStamp(const int64_t& _startTimeStamp);

                    /**
                     * 判断参数 StartTimeStamp 是否已赋值
                     * @return StartTimeStamp 是否已赋值
                     * 
                     */
                    bool StartTimeStampHasBeenSet() const;

                    /**
                     * 获取<p>结束时间戳，Unix 秒级时间戳，结束时间与开始时间的区间范围小于90天。</p>
                     * @return EndTimeStamp <p>结束时间戳，Unix 秒级时间戳，结束时间与开始时间的区间范围小于90天。</p>
                     * 
                     */
                    int64_t GetEndTimeStamp() const;

                    /**
                     * 设置<p>结束时间戳，Unix 秒级时间戳，结束时间与开始时间的区间范围小于90天。</p>
                     * @param _endTimeStamp <p>结束时间戳，Unix 秒级时间戳，结束时间与开始时间的区间范围小于90天。</p>
                     * 
                     */
                    void SetEndTimeStamp(const int64_t& _endTimeStamp);

                    /**
                     * 判断参数 EndTimeStamp 是否已赋值
                     * @return EndTimeStamp 是否已赋值
                     * 
                     */
                    bool EndTimeStampHasBeenSet() const;

                    /**
                     * 获取<p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     * @return SdkAppId <p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置<p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     * @param _sdkAppId <p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取<p>分页尺寸（必填），上限 100</p>
                     * @return PageSize <p>分页尺寸（必填），上限 100</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>分页尺寸（必填），上限 100</p>
                     * @param _pageSize <p>分页尺寸（必填），上限 100</p>
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
                     * 获取<p>分页页码（必填），从 0 开始</p>
                     * @return PageNumber <p>分页页码（必填），从 0 开始</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>分页页码（必填），从 0 开始</p>
                     * @param _pageNumber <p>分页页码（必填），从 0 开始</p>
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>实例 ID（废弃）</p>
                     * @return InstanceId <p>实例 ID（废弃）</p>
                     * @deprecated
                     */
                    int64_t GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID（废弃）</p>
                     * @param _instanceId <p>实例 ID（废弃）</p>
                     * @deprecated
                     */
                    void SetInstanceId(const int64_t& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * @deprecated
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>返回数据条数，上限（废弃）</p>
                     * @return Limit <p>返回数据条数，上限（废弃）</p>
                     * @deprecated
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数据条数，上限（废弃）</p>
                     * @param _limit <p>返回数据条数，上限（废弃）</p>
                     * @deprecated
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * @deprecated
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>偏移（废弃）</p>
                     * @return Offset <p>偏移（废弃）</p>
                     * @deprecated
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移（废弃）</p>
                     * @param _offset <p>偏移（废弃）</p>
                     * @deprecated
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * @deprecated
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>按手机号筛选</p>
                     * @return Phones <p>按手机号筛选</p>
                     * 
                     */
                    std::vector<std::string> GetPhones() const;

                    /**
                     * 设置<p>按手机号筛选</p>
                     * @param _phones <p>按手机号筛选</p>
                     * 
                     */
                    void SetPhones(const std::vector<std::string>& _phones);

                    /**
                     * 判断参数 Phones 是否已赋值
                     * @return Phones 是否已赋值
                     * 
                     */
                    bool PhonesHasBeenSet() const;

                    /**
                     * 获取<p>按SessionId筛选</p>
                     * @return SessionIds <p>按SessionId筛选</p>
                     * 
                     */
                    std::vector<std::string> GetSessionIds() const;

                    /**
                     * 设置<p>按SessionId筛选</p>
                     * @param _sessionIds <p>按SessionId筛选</p>
                     * 
                     */
                    void SetSessionIds(const std::vector<std::string>& _sessionIds);

                    /**
                     * 判断参数 SessionIds 是否已赋值
                     * @return SessionIds 是否已赋值
                     * 
                     */
                    bool SessionIdsHasBeenSet() const;

                private:

                    /**
                     * <p>起始时间戳，Unix 秒级时间戳，最大支持近180天。</p>
                     */
                    int64_t m_startTimeStamp;
                    bool m_startTimeStampHasBeenSet;

                    /**
                     * <p>结束时间戳，Unix 秒级时间戳，结束时间与开始时间的区间范围小于90天。</p>
                     */
                    int64_t m_endTimeStamp;
                    bool m_endTimeStampHasBeenSet;

                    /**
                     * <p>应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc</p>
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>分页尺寸（必填），上限 100</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>分页页码（必填），从 0 开始</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>实例 ID（废弃）</p>
                     */
                    int64_t m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>返回数据条数，上限（废弃）</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移（废弃）</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>按手机号筛选</p>
                     */
                    std::vector<std::string> m_phones;
                    bool m_phonesHasBeenSet;

                    /**
                     * <p>按SessionId筛选</p>
                     */
                    std::vector<std::string> m_sessionIds;
                    bool m_sessionIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCDRREQUEST_H_
