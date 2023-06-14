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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEDAILYMOSTPLAYEDSTATRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEDAILYMOSTPLAYEDSTATRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/DailyPlayStatInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeDailyMostPlayedStat返回参数结构体
                */
                class DescribeDailyMostPlayedStatResponse : public AbstractModel
                {
                public:
                    DescribeDailyMostPlayedStatResponse();
                    ~DescribeDailyMostPlayedStatResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取媒体文件播放统计信息。
                     * @return DailyPlayStatInfoSet 媒体文件播放统计信息。
                     * 
                     */
                    std::vector<DailyPlayStatInfo> GetDailyPlayStatInfoSet() const;

                    /**
                     * 判断参数 DailyPlayStatInfoSet 是否已赋值
                     * @return DailyPlayStatInfoSet 是否已赋值
                     * 
                     */
                    bool DailyPlayStatInfoSetHasBeenSet() const;

                private:

                    /**
                     * 媒体文件播放统计信息。
                     */
                    std::vector<DailyPlayStatInfo> m_dailyPlayStatInfoSet;
                    bool m_dailyPlayStatInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEDAILYMOSTPLAYEDSTATRESPONSE_H_
