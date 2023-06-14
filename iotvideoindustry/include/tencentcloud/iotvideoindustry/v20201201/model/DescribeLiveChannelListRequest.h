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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBELIVECHANNELLISTREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBELIVECHANNELLISTREQUEST_H_

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
                * DescribeLiveChannelList请求参数结构体
                */
                class DescribeLiveChannelListRequest : public AbstractModel
                {
                public:
                    DescribeLiveChannelListRequest();
                    ~DescribeLiveChannelListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取最大数
                     * @return Limit 最大数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置最大数
                     * @param _limit 最大数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取直播频道类型，1：固定直播；2：移动直播
                     * @return LiveChannelType 直播频道类型，1：固定直播；2：移动直播
                     * 
                     */
                    int64_t GetLiveChannelType() const;

                    /**
                     * 设置直播频道类型，1：固定直播；2：移动直播
                     * @param _liveChannelType 直播频道类型，1：固定直播；2：移动直播
                     * 
                     */
                    void SetLiveChannelType(const int64_t& _liveChannelType);

                    /**
                     * 判断参数 LiveChannelType 是否已赋值
                     * @return LiveChannelType 是否已赋值
                     * 
                     */
                    bool LiveChannelTypeHasBeenSet() const;

                    /**
                     * 获取直播录制计划ID, null: 直播录制计划为空
                     * @return RecordPlanId 直播录制计划ID, null: 直播录制计划为空
                     * 
                     */
                    std::string GetRecordPlanId() const;

                    /**
                     * 设置直播录制计划ID, null: 直播录制计划为空
                     * @param _recordPlanId 直播录制计划ID, null: 直播录制计划为空
                     * 
                     */
                    void SetRecordPlanId(const std::string& _recordPlanId);

                    /**
                     * 判断参数 RecordPlanId 是否已赋值
                     * @return RecordPlanId 是否已赋值
                     * 
                     */
                    bool RecordPlanIdHasBeenSet() const;

                    /**
                     * 获取频道名称 (支持模糊搜索)
                     * @return LiveChannelName 频道名称 (支持模糊搜索)
                     * 
                     */
                    std::string GetLiveChannelName() const;

                    /**
                     * 设置频道名称 (支持模糊搜索)
                     * @param _liveChannelName 频道名称 (支持模糊搜索)
                     * 
                     */
                    void SetLiveChannelName(const std::string& _liveChannelName);

                    /**
                     * 判断参数 LiveChannelName 是否已赋值
                     * @return LiveChannelName 是否已赋值
                     * 
                     */
                    bool LiveChannelNameHasBeenSet() const;

                private:

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 最大数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 直播频道类型，1：固定直播；2：移动直播
                     */
                    int64_t m_liveChannelType;
                    bool m_liveChannelTypeHasBeenSet;

                    /**
                     * 直播录制计划ID, null: 直播录制计划为空
                     */
                    std::string m_recordPlanId;
                    bool m_recordPlanIdHasBeenSet;

                    /**
                     * 频道名称 (支持模糊搜索)
                     */
                    std::string m_liveChannelName;
                    bool m_liveChannelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBELIVECHANNELLISTREQUEST_H_
