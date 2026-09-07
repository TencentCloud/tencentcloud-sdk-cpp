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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DOCTOVIDEOREGENERATEINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DOCTOVIDEOREGENERATEINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * AIGC 文档生视频任务重新生成的输入信息
                */
                class DocToVideoRegenerateInput : public AbstractModel
                {
                public:
                    DocToVideoRegenerateInput();
                    ~DocToVideoRegenerateInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>重新生成的范围。</p><p>枚举值：</p><ul><li>full： 该阶段全量重新生成（例如：修改整体的场景数量）</li><li>scenes： 按场景局部重新生成（例如：修改某场景的具体内容）</li></ul>
                     * @return Scope <p>重新生成的范围。</p><p>枚举值：</p><ul><li>full： 该阶段全量重新生成（例如：修改整体的场景数量）</li><li>scenes： 按场景局部重新生成（例如：修改某场景的具体内容）</li></ul>
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置<p>重新生成的范围。</p><p>枚举值：</p><ul><li>full： 该阶段全量重新生成（例如：修改整体的场景数量）</li><li>scenes： 按场景局部重新生成（例如：修改某场景的具体内容）</li></ul>
                     * @param _scope <p>重新生成的范围。</p><p>枚举值：</p><ul><li>full： 该阶段全量重新生成（例如：修改整体的场景数量）</li><li>scenes： 按场景局部重新生成（例如：修改某场景的具体内容）</li></ul>
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>重新生成时的提示词。</p>
                     * @return Prompt <p>重新生成时的提示词。</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>重新生成时的提示词。</p>
                     * @param _prompt <p>重新生成时的提示词。</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取<p>按页局部重新生成时的目标页 ID 数组。仅 Scope=scenes 时必填。不可重复，单次重新生成最多 5 页。</p>
                     * @return SceneIds <p>按页局部重新生成时的目标页 ID 数组。仅 Scope=scenes 时必填。不可重复，单次重新生成最多 5 页。</p>
                     * 
                     */
                    std::vector<std::string> GetSceneIds() const;

                    /**
                     * 设置<p>按页局部重新生成时的目标页 ID 数组。仅 Scope=scenes 时必填。不可重复，单次重新生成最多 5 页。</p>
                     * @param _sceneIds <p>按页局部重新生成时的目标页 ID 数组。仅 Scope=scenes 时必填。不可重复，单次重新生成最多 5 页。</p>
                     * 
                     */
                    void SetSceneIds(const std::vector<std::string>& _sceneIds);

                    /**
                     * 判断参数 SceneIds 是否已赋值
                     * @return SceneIds 是否已赋值
                     * 
                     */
                    bool SceneIdsHasBeenSet() const;

                private:

                    /**
                     * <p>重新生成的范围。</p><p>枚举值：</p><ul><li>full： 该阶段全量重新生成（例如：修改整体的场景数量）</li><li>scenes： 按场景局部重新生成（例如：修改某场景的具体内容）</li></ul>
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>重新生成时的提示词。</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>按页局部重新生成时的目标页 ID 数组。仅 Scope=scenes 时必填。不可重复，单次重新生成最多 5 页。</p>
                     */
                    std::vector<std::string> m_sceneIds;
                    bool m_sceneIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DOCTOVIDEOREGENERATEINPUT_H_
