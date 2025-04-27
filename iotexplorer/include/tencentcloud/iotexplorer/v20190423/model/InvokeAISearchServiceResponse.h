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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INVOKEAISEARCHSERVICERESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INVOKEAISEARCHSERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/TargetInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * InvokeAISearchService返回参数结构体
                */
                class InvokeAISearchServiceResponse : public AbstractModel
                {
                public:
                    InvokeAISearchServiceResponse();
                    ~InvokeAISearchServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取基于搜索结果的总结
                     * @return Summary 基于搜索结果的总结
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取视频结果集
                     * @return Targets 视频结果集
                     * 
                     */
                    std::vector<TargetInfo> GetTargets() const;

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取视频回放URL
                     * @return VideoURL 视频回放URL
                     * 
                     */
                    std::string GetVideoURL() const;

                    /**
                     * 判断参数 VideoURL 是否已赋值
                     * @return VideoURL 是否已赋值
                     * 
                     */
                    bool VideoURLHasBeenSet() const;

                private:

                    /**
                     * 基于搜索结果的总结
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * 视频结果集
                     */
                    std::vector<TargetInfo> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * 视频回放URL
                     */
                    std::string m_videoURL;
                    bool m_videoURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INVOKEAISEARCHSERVICERESPONSE_H_
