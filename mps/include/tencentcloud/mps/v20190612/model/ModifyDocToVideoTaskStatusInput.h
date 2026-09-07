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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYDOCTOVIDEOTASKSTATUSINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYDOCTOVIDEOTASKSTATUSINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/DocToVideoRegenerateInput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 修改 AIGC 文档生视频任务状态输入
                */
                class ModifyDocToVideoTaskStatusInput : public AbstractModel
                {
                public:
                    ModifyDocToVideoTaskStatusInput();
                    ~ModifyDocToVideoTaskStatusInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>修改动作类型。</p><p>枚举值：</p><ul><li>confirm： 确认已完成阶段并推进下一阶段</li><li>regenerate： 重新生成指定阶段</li></ul>
                     * @return Action <p>修改动作类型。</p><p>枚举值：</p><ul><li>confirm： 确认已完成阶段并推进下一阶段</li><li>regenerate： 重新生成指定阶段</li></ul>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>修改动作类型。</p><p>枚举值：</p><ul><li>confirm： 确认已完成阶段并推进下一阶段</li><li>regenerate： 重新生成指定阶段</li></ul>
                     * @param _action <p>修改动作类型。</p><p>枚举值：</p><ul><li>confirm： 确认已完成阶段并推进下一阶段</li><li>regenerate： 重新生成指定阶段</li></ul>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>修改目标阶段。</p><p>枚举值：</p><ul><li>STAGE_1：<br>Action=confirm 时：确认大纲、继续生成后续配音、动画效果、字幕；<br>Action=regenerate 时：重新生成大纲。</li></ul><ul><li>STAGE_2：<br>Action=confirm 时：确认生成的配音、动画效果、字幕，生成最终成片；<br>Action=regenerate 时：重新生成配音、动画效果、字幕。</li></ul>
                     * @return Stage <p>修改目标阶段。</p><p>枚举值：</p><ul><li>STAGE_1：<br>Action=confirm 时：确认大纲、继续生成后续配音、动画效果、字幕；<br>Action=regenerate 时：重新生成大纲。</li></ul><ul><li>STAGE_2：<br>Action=confirm 时：确认生成的配音、动画效果、字幕，生成最终成片；<br>Action=regenerate 时：重新生成配音、动画效果、字幕。</li></ul>
                     * 
                     */
                    std::string GetStage() const;

                    /**
                     * 设置<p>修改目标阶段。</p><p>枚举值：</p><ul><li>STAGE_1：<br>Action=confirm 时：确认大纲、继续生成后续配音、动画效果、字幕；<br>Action=regenerate 时：重新生成大纲。</li></ul><ul><li>STAGE_2：<br>Action=confirm 时：确认生成的配音、动画效果、字幕，生成最终成片；<br>Action=regenerate 时：重新生成配音、动画效果、字幕。</li></ul>
                     * @param _stage <p>修改目标阶段。</p><p>枚举值：</p><ul><li>STAGE_1：<br>Action=confirm 时：确认大纲、继续生成后续配音、动画效果、字幕；<br>Action=regenerate 时：重新生成大纲。</li></ul><ul><li>STAGE_2：<br>Action=confirm 时：确认生成的配音、动画效果、字幕，生成最终成片；<br>Action=regenerate 时：重新生成配音、动画效果、字幕。</li></ul>
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
                     * 获取<p>需要进行修改的目标任务 ID。</p>
                     * @return SourceTaskId <p>需要进行修改的目标任务 ID。</p>
                     * 
                     */
                    std::string GetSourceTaskId() const;

                    /**
                     * 设置<p>需要进行修改的目标任务 ID。</p>
                     * @param _sourceTaskId <p>需要进行修改的目标任务 ID。</p>
                     * 
                     */
                    void SetSourceTaskId(const std::string& _sourceTaskId);

                    /**
                     * 判断参数 SourceTaskId 是否已赋值
                     * @return SourceTaskId 是否已赋值
                     * 
                     */
                    bool SourceTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>重新生成参数。</p><p>仅 Action=regenerate 时必填。</p>
                     * @return Regenerate <p>重新生成参数。</p><p>仅 Action=regenerate 时必填。</p>
                     * 
                     */
                    DocToVideoRegenerateInput GetRegenerate() const;

                    /**
                     * 设置<p>重新生成参数。</p><p>仅 Action=regenerate 时必填。</p>
                     * @param _regenerate <p>重新生成参数。</p><p>仅 Action=regenerate 时必填。</p>
                     * 
                     */
                    void SetRegenerate(const DocToVideoRegenerateInput& _regenerate);

                    /**
                     * 判断参数 Regenerate 是否已赋值
                     * @return Regenerate 是否已赋值
                     * 
                     */
                    bool RegenerateHasBeenSet() const;

                private:

                    /**
                     * <p>修改动作类型。</p><p>枚举值：</p><ul><li>confirm： 确认已完成阶段并推进下一阶段</li><li>regenerate： 重新生成指定阶段</li></ul>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>修改目标阶段。</p><p>枚举值：</p><ul><li>STAGE_1：<br>Action=confirm 时：确认大纲、继续生成后续配音、动画效果、字幕；<br>Action=regenerate 时：重新生成大纲。</li></ul><ul><li>STAGE_2：<br>Action=confirm 时：确认生成的配音、动画效果、字幕，生成最终成片；<br>Action=regenerate 时：重新生成配音、动画效果、字幕。</li></ul>
                     */
                    std::string m_stage;
                    bool m_stageHasBeenSet;

                    /**
                     * <p>需要进行修改的目标任务 ID。</p>
                     */
                    std::string m_sourceTaskId;
                    bool m_sourceTaskIdHasBeenSet;

                    /**
                     * <p>重新生成参数。</p><p>仅 Action=regenerate 时必填。</p>
                     */
                    DocToVideoRegenerateInput m_regenerate;
                    bool m_regenerateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYDOCTOVIDEOTASKSTATUSINPUT_H_
