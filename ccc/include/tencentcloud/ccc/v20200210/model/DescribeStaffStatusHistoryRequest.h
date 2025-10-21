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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESTAFFSTATUSHISTORYREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESTAFFSTATUSHISTORYREQUEST_H_

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
                * DescribeStaffStatusHistory请求参数结构体
                */
                class DescribeStaffStatusHistoryRequest : public AbstractModel
                {
                public:
                    DescribeStaffStatusHistoryRequest();
                    ~DescribeStaffStatusHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @return SdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @param _sdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
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
                     * 获取座席账号
                     * @return StaffUserId 座席账号
                     * 
                     */
                    std::string GetStaffUserId() const;

                    /**
                     * 设置座席账号
                     * @param _staffUserId 座席账号
                     * 
                     */
                    void SetStaffUserId(const std::string& _staffUserId);

                    /**
                     * 判断参数 StaffUserId 是否已赋值
                     * @return StaffUserId 是否已赋值
                     * 
                     */
                    bool StaffUserIdHasBeenSet() const;

                    /**
                     * 获取起始时间戳，Unix 秒级时间戳，最大支持近180天。
                     * @return StartTimestamp 起始时间戳，Unix 秒级时间戳，最大支持近180天。
                     * 
                     */
                    int64_t GetStartTimestamp() const;

                    /**
                     * 设置起始时间戳，Unix 秒级时间戳，最大支持近180天。
                     * @param _startTimestamp 起始时间戳，Unix 秒级时间戳，最大支持近180天。
                     * 
                     */
                    void SetStartTimestamp(const int64_t& _startTimestamp);

                    /**
                     * 判断参数 StartTimestamp 是否已赋值
                     * @return StartTimestamp 是否已赋值
                     * 
                     */
                    bool StartTimestampHasBeenSet() const;

                    /**
                     * 获取结束时间戳，Unix 秒级时间戳，结束时间与开始时间的区间范围小于 7 天。
                     * @return EndTimestamp 结束时间戳，Unix 秒级时间戳，结束时间与开始时间的区间范围小于 7 天。
                     * 
                     */
                    int64_t GetEndTimestamp() const;

                    /**
                     * 设置结束时间戳，Unix 秒级时间戳，结束时间与开始时间的区间范围小于 7 天。
                     * @param _endTimestamp 结束时间戳，Unix 秒级时间戳，结束时间与开始时间的区间范围小于 7 天。
                     * 
                     */
                    void SetEndTimestamp(const int64_t& _endTimestamp);

                    /**
                     * 判断参数 EndTimestamp 是否已赋值
                     * @return EndTimestamp 是否已赋值
                     * 
                     */
                    bool EndTimestampHasBeenSet() const;

                    /**
                     * 获取分页检索时使用的游标
                     * @return Cursor 分页检索时使用的游标
                     * 
                     */
                    std::string GetCursor() const;

                    /**
                     * 设置分页检索时使用的游标
                     * @param _cursor 分页检索时使用的游标
                     * 
                     */
                    void SetCursor(const std::string& _cursor);

                    /**
                     * 判断参数 Cursor 是否已赋值
                     * @return Cursor 是否已赋值
                     * 
                     */
                    bool CursorHasBeenSet() const;

                    /**
                     * 获取分页尺寸
                     * @return PageSize 分页尺寸
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页尺寸
                     * @param _pageSize 分页尺寸
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
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 座席账号
                     */
                    std::string m_staffUserId;
                    bool m_staffUserIdHasBeenSet;

                    /**
                     * 起始时间戳，Unix 秒级时间戳，最大支持近180天。
                     */
                    int64_t m_startTimestamp;
                    bool m_startTimestampHasBeenSet;

                    /**
                     * 结束时间戳，Unix 秒级时间戳，结束时间与开始时间的区间范围小于 7 天。
                     */
                    int64_t m_endTimestamp;
                    bool m_endTimestampHasBeenSet;

                    /**
                     * 分页检索时使用的游标
                     */
                    std::string m_cursor;
                    bool m_cursorHasBeenSet;

                    /**
                     * 分页尺寸
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESTAFFSTATUSHISTORYREQUEST_H_
