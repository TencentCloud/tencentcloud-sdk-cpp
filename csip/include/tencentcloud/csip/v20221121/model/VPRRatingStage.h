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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VPRRATINGSTAGE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VPRRATINGSTAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * VRP评级阶段
                */
                class VPRRatingStage : public AbstractModel
                {
                public:
                    VPRRatingStage();
                    ~VPRRatingStage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取阶段名称（例如：威胁活跃度、可利用性、漏洞严重性等）
                     * @return Stage 阶段名称（例如：威胁活跃度、可利用性、漏洞严重性等）
                     * 
                     */
                    std::string GetStage() const;

                    /**
                     * 设置阶段名称（例如：威胁活跃度、可利用性、漏洞严重性等）
                     * @param _stage 阶段名称（例如：威胁活跃度、可利用性、漏洞严重性等）
                     * 
                     */
                    void SetStage(const std::string& _stage);

                    /**
                     * 判断参数 Stage 是否已赋值
                     * @return Stage 是否已赋值
                     * 
                     */
                    bool StageHasBeenSet() const;

                    /**
                     * 获取该阶段的评级结果
                     * @return Result 该阶段的评级结果
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置该阶段的评级结果
                     * @param _result 该阶段的评级结果
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 阶段名称（例如：威胁活跃度、可利用性、漏洞严重性等）
                     */
                    std::string m_stage;
                    bool m_stageHasBeenSet;

                    /**
                     * 该阶段的评级结果
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VPRRATINGSTAGE_H_
