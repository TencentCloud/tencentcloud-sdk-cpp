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

#ifndef TENCENTCLOUD_AMS_V20200608_MODEL_DESCRIBEAUDIOSTATRESPONSE_H_
#define TENCENTCLOUD_AMS_V20200608_MODEL_DESCRIBEAUDIOSTATRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ams/v20200608/model/Overview.h>
#include <tencentcloud/ams/v20200608/model/TrendCount.h>
#include <tencentcloud/ams/v20200608/model/EvilCount.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20200608
        {
            namespace Model
            {
                /**
                * DescribeAudioStat返回参数结构体
                */
                class DescribeAudioStatResponse : public AbstractModel
                {
                public:
                    DescribeAudioStatResponse();
                    ~DescribeAudioStatResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取识别结果统计
                     * @return Overview 识别结果统计
                     * 
                     */
                    Overview GetOverview() const;

                    /**
                     * 判断参数 Overview 是否已赋值
                     * @return Overview 是否已赋值
                     * 
                     */
                    bool OverviewHasBeenSet() const;

                    /**
                     * 获取识别量统计
                     * @return TrendCount 识别量统计
                     * 
                     */
                    std::vector<TrendCount> GetTrendCount() const;

                    /**
                     * 判断参数 TrendCount 是否已赋值
                     * @return TrendCount 是否已赋值
                     * 
                     */
                    bool TrendCountHasBeenSet() const;

                    /**
                     * 获取违规数据分布
                     * @return EvilCount 违规数据分布
                     * 
                     */
                    std::vector<EvilCount> GetEvilCount() const;

                    /**
                     * 判断参数 EvilCount 是否已赋值
                     * @return EvilCount 是否已赋值
                     * 
                     */
                    bool EvilCountHasBeenSet() const;

                private:

                    /**
                     * 识别结果统计
                     */
                    Overview m_overview;
                    bool m_overviewHasBeenSet;

                    /**
                     * 识别量统计
                     */
                    std::vector<TrendCount> m_trendCount;
                    bool m_trendCountHasBeenSet;

                    /**
                     * 违规数据分布
                     */
                    std::vector<EvilCount> m_evilCount;
                    bool m_evilCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20200608_MODEL_DESCRIBEAUDIOSTATRESPONSE_H_
