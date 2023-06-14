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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBERECORDDATESBYLIVEREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBERECORDDATESBYLIVEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeRecordDatesByLive请求参数结构体
                */
                class DescribeRecordDatesByLiveRequest : public AbstractModel
                {
                public:
                    DescribeRecordDatesByLiveRequest();
                    ~DescribeRecordDatesByLiveRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取直播频道ID
                     * @return LiveChannelId 直播频道ID
                     * 
                     */
                    std::string GetLiveChannelId() const;

                    /**
                     * 设置直播频道ID
                     * @param _liveChannelId 直播频道ID
                     * 
                     */
                    void SetLiveChannelId(const std::string& _liveChannelId);

                    /**
                     * 判断参数 LiveChannelId 是否已赋值
                     * @return LiveChannelId 是否已赋值
                     * 
                     */
                    bool LiveChannelIdHasBeenSet() const;

                    /**
                     * 获取分页值，本地录制时参数无效
                     * @return Offset 分页值，本地录制时参数无效
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页值，本地录制时参数无效
                     * @param _offset 分页值，本地录制时参数无效
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
                     * 获取限制值，本地录制时参数无效
                     * @return Limit 限制值，本地录制时参数无效
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置限制值，本地录制时参数无效
                     * @param _limit 限制值，本地录制时参数无效
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 直播频道ID
                     */
                    std::string m_liveChannelId;
                    bool m_liveChannelIdHasBeenSet;

                    /**
                     * 分页值，本地录制时参数无效
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制值，本地录制时参数无效
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBERECORDDATESBYLIVEREQUEST_H_
