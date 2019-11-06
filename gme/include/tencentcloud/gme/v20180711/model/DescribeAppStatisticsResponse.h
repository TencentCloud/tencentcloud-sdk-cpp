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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAPPSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAPPSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/AppStatisticsItem.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * 获取应用用量统计数据输出参数
                */
                class DescribeAppStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeAppStatisticsResponse();
                    ~DescribeAppStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取应用用量统计数据
                     * @return AppStatistics 应用用量统计数据
                     */
                    std::vector<AppStatisticsItem> GetAppStatistics() const;

                    /**
                     * 判断参数 AppStatistics 是否已赋值
                     * @return AppStatistics 是否已赋值
                     */
                    bool AppStatisticsHasBeenSet() const;

                private:

                    /**
                     * 应用用量统计数据
                     */
                    std::vector<AppStatisticsItem> m_appStatistics;
                    bool m_appStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAPPSTATISTICSRESPONSE_H_
