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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWESEECONFIGRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWESEECONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/VisionSummaryConfig.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeEventIdFilterConfig.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DescribeTWeSeeConfig返回参数结构体
                */
                class DescribeTWeSeeConfigResponse : public AbstractModel
                {
                public:
                    DescribeTWeSeeConfigResponse();
                    ~DescribeTWeSeeConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否开启视频摘要
                     * @return EnableSummary 是否开启视频摘要
                     * 
                     */
                    bool GetEnableSummary() const;

                    /**
                     * 判断参数 EnableSummary 是否已赋值
                     * @return EnableSummary 是否已赋值
                     * 
                     */
                    bool EnableSummaryHasBeenSet() const;

                    /**
                     * 获取是否开启视频搜索
                     * @return EnableSearch 是否开启视频搜索
                     * 
                     */
                    bool GetEnableSearch() const;

                    /**
                     * 判断参数 EnableSearch 是否已赋值
                     * @return EnableSearch 是否已赋值
                     * 
                     */
                    bool EnableSearchHasBeenSet() const;

                    /**
                     * 获取配置参数
                     * @return Config 配置参数
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取摘要配置参数
                     * @return SummaryConfig 摘要配置参数
                     * 
                     */
                    VisionSummaryConfig GetSummaryConfig() const;

                    /**
                     * 判断参数 SummaryConfig 是否已赋值
                     * @return SummaryConfig 是否已赋值
                     * 
                     */
                    bool SummaryConfigHasBeenSet() const;

                    /**
                     * 获取云存事件 ID 过滤规则配置项
                     * @return EventIdFilterConfig 云存事件 ID 过滤规则配置项
                     * 
                     */
                    SeeEventIdFilterConfig GetEventIdFilterConfig() const;

                    /**
                     * 判断参数 EventIdFilterConfig 是否已赋值
                     * @return EventIdFilterConfig 是否已赋值
                     * 
                     */
                    bool EventIdFilterConfigHasBeenSet() const;

                private:

                    /**
                     * 是否开启视频摘要
                     */
                    bool m_enableSummary;
                    bool m_enableSummaryHasBeenSet;

                    /**
                     * 是否开启视频搜索
                     */
                    bool m_enableSearch;
                    bool m_enableSearchHasBeenSet;

                    /**
                     * 配置参数
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 摘要配置参数
                     */
                    VisionSummaryConfig m_summaryConfig;
                    bool m_summaryConfigHasBeenSet;

                    /**
                     * 云存事件 ID 过滤规则配置项
                     */
                    SeeEventIdFilterConfig m_eventIdFilterConfig;
                    bool m_eventIdFilterConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWESEECONFIGRESPONSE_H_
