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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBELIVECHANNELRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBELIVECHANNELRESPONSE_H_

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
                * DescribeLiveChannel返回参数结构体
                */
                class DescribeLiveChannelResponse : public AbstractModel
                {
                public:
                    DescribeLiveChannelResponse();
                    ~DescribeLiveChannelResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取频道ID
                     * @return LiveChannelId 频道ID
                     * 
                     */
                    std::string GetLiveChannelId() const;

                    /**
                     * 判断参数 LiveChannelId 是否已赋值
                     * @return LiveChannelId 是否已赋值
                     * 
                     */
                    bool LiveChannelIdHasBeenSet() const;

                    /**
                     * 获取频道名称
                     * @return LiveChannelName 频道名称
                     * 
                     */
                    std::string GetLiveChannelName() const;

                    /**
                     * 判断参数 LiveChannelName 是否已赋值
                     * @return LiveChannelName 是否已赋值
                     * 
                     */
                    bool LiveChannelNameHasBeenSet() const;

                    /**
                     * 获取直播频道类型 1：固定直播；2：移动直播
                     * @return LiveChannelType 直播频道类型 1：固定直播；2：移动直播
                     * 
                     */
                    int64_t GetLiveChannelType() const;

                    /**
                     * 判断参数 LiveChannelType 是否已赋值
                     * @return LiveChannelType 是否已赋值
                     * 
                     */
                    bool LiveChannelTypeHasBeenSet() const;

                    /**
                     * 获取通道直播状态：1: 未推流，2: 推流中
                     * @return LiveStatus 通道直播状态：1: 未推流，2: 推流中
                     * 
                     */
                    int64_t GetLiveStatus() const;

                    /**
                     * 判断参数 LiveStatus 是否已赋值
                     * @return LiveStatus 是否已赋值
                     * 
                     */
                    bool LiveStatusHasBeenSet() const;

                    /**
                     * 获取推流地址
                     * @return PushStreamAddress 推流地址
                     * 
                     */
                    std::string GetPushStreamAddress() const;

                    /**
                     * 判断参数 PushStreamAddress 是否已赋值
                     * @return PushStreamAddress 是否已赋值
                     * 
                     */
                    bool PushStreamAddressHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::vector<std::string> GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return UpdateTime 修改时间
                     * 
                     */
                    std::vector<std::string> GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 频道ID
                     */
                    std::string m_liveChannelId;
                    bool m_liveChannelIdHasBeenSet;

                    /**
                     * 频道名称
                     */
                    std::string m_liveChannelName;
                    bool m_liveChannelNameHasBeenSet;

                    /**
                     * 直播频道类型 1：固定直播；2：移动直播
                     */
                    int64_t m_liveChannelType;
                    bool m_liveChannelTypeHasBeenSet;

                    /**
                     * 通道直播状态：1: 未推流，2: 推流中
                     */
                    int64_t m_liveStatus;
                    bool m_liveStatusHasBeenSet;

                    /**
                     * 推流地址
                     */
                    std::string m_pushStreamAddress;
                    bool m_pushStreamAddressHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::vector<std::string> m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::vector<std::string> m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBELIVECHANNELRESPONSE_H_
