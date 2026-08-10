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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VPRRATINGINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VPRRATINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/VPRRatingStage.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * VRP评级信息
                */
                class VPRRatingInfo : public AbstractModel
                {
                public:
                    VPRRatingInfo();
                    ~VPRRatingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPR 评级结果
枚举值：
URGENT：立即修复
SUGGESTED：建议修复
DEFERRABLE：可延迟修复
                     * @return Result VPR 评级结果
枚举值：
URGENT：立即修复
SUGGESTED：建议修复
DEFERRABLE：可延迟修复
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置VPR 评级结果
枚举值：
URGENT：立即修复
SUGGESTED：建议修复
DEFERRABLE：可延迟修复
                     * @param _result VPR 评级结果
枚举值：
URGENT：立即修复
SUGGESTED：建议修复
DEFERRABLE：可延迟修复
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取评级说明
                     * @return Remark 评级说明
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置评级说明
                     * @param _remark 评级说明
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取分阶段评级详情列表
                     * @return Stage 分阶段评级详情列表
                     * 
                     */
                    std::vector<VPRRatingStage> GetStage() const;

                    /**
                     * 设置分阶段评级详情列表
                     * @param _stage 分阶段评级详情列表
                     * 
                     */
                    void SetStage(const std::vector<VPRRatingStage>& _stage);

                    /**
                     * 判断参数 Stage 是否已赋值
                     * @return Stage 是否已赋值
                     * 
                     */
                    bool StageHasBeenSet() const;

                private:

                    /**
                     * VPR 评级结果
枚举值：
URGENT：立即修复
SUGGESTED：建议修复
DEFERRABLE：可延迟修复
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 评级说明
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 分阶段评级详情列表
                     */
                    std::vector<VPRRatingStage> m_stage;
                    bool m_stageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VPRRATINGINFO_H_
