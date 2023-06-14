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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_GETSTATISTICSREPORTRESPONSE_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_GETSTATISTICSREPORTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/Volume.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * GetStatisticsReport返回参数结构体
                */
                class GetStatisticsReportResponse : public AbstractModel
                {
                public:
                    GetStatisticsReportResponse();
                    ~GetStatisticsReportResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取发信统计报告，按天
                     * @return DailyVolumes 发信统计报告，按天
                     * 
                     */
                    std::vector<Volume> GetDailyVolumes() const;

                    /**
                     * 判断参数 DailyVolumes 是否已赋值
                     * @return DailyVolumes 是否已赋值
                     * 
                     */
                    bool DailyVolumesHasBeenSet() const;

                    /**
                     * 获取发信统计报告，总览
                     * @return OverallVolume 发信统计报告，总览
                     * 
                     */
                    Volume GetOverallVolume() const;

                    /**
                     * 判断参数 OverallVolume 是否已赋值
                     * @return OverallVolume 是否已赋值
                     * 
                     */
                    bool OverallVolumeHasBeenSet() const;

                private:

                    /**
                     * 发信统计报告，按天
                     */
                    std::vector<Volume> m_dailyVolumes;
                    bool m_dailyVolumesHasBeenSet;

                    /**
                     * 发信统计报告，总览
                     */
                    Volume m_overallVolume;
                    bool m_overallVolumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_GETSTATISTICSREPORTRESPONSE_H_
