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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBECHANNELSBYLIVERECORDPLANRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBECHANNELSBYLIVERECORDPLANRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/LiveChannelItem.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeChannelsByLiveRecordPlan返回参数结构体
                */
                class DescribeChannelsByLiveRecordPlanResponse : public AbstractModel
                {
                public:
                    DescribeChannelsByLiveRecordPlanResponse();
                    ~DescribeChannelsByLiveRecordPlanResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总个数
                     * @return TotalCount 总个数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取通道详情数组
                     * @return LiveChannels 通道详情数组
                     * 
                     */
                    std::vector<LiveChannelItem> GetLiveChannels() const;

                    /**
                     * 判断参数 LiveChannels 是否已赋值
                     * @return LiveChannels 是否已赋值
                     * 
                     */
                    bool LiveChannelsHasBeenSet() const;

                private:

                    /**
                     * 总个数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 通道详情数组
                     */
                    std::vector<LiveChannelItem> m_liveChannels;
                    bool m_liveChannelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBECHANNELSBYLIVERECORDPLANRESPONSE_H_
