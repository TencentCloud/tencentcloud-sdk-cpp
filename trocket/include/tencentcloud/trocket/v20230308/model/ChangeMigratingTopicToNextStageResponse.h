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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_CHANGEMIGRATINGTOPICTONEXTSTAGERESPONSE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_CHANGEMIGRATINGTOPICTONEXTSTAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/TopicStageChangeResult.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * ChangeMigratingTopicToNextStage返回参数结构体
                */
                class ChangeMigratingTopicToNextStageResponse : public AbstractModel
                {
                public:
                    ChangeMigratingTopicToNextStageResponse();
                    ~ChangeMigratingTopicToNextStageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取迁移主题状态修改的结果列表
                     * @return Results 迁移主题状态修改的结果列表
                     * 
                     */
                    std::vector<TopicStageChangeResult> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * 迁移主题状态修改的结果列表
                     */
                    std::vector<TopicStageChangeResult> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_CHANGEMIGRATINGTOPICTONEXTSTAGERESPONSE_H_
