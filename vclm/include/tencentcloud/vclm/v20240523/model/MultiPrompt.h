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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_MULTIPROMPT_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_MULTIPROMPT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * 各分镜信息，如提示词、时长等

通过index、prompt、duration参数定义分镜序号及相应提示词和时长，其中：

最多支持6个分镜，最小支持1个分镜

每个分镜相关内容的最大长度不超过512

每个分镜的时长不大于当前任务的总时长，不小于1

所有分镜的时长之和等于当前任务的总时长

用key:value承载，如下：

"multi_prompt":[
	{
  	"index":int,
    "prompt": "string",
    "duration": "5"
  },
  {
  	"index":int,
    "prompt": "string",
    "duration": "5"
  }
]
当mult_shot参数为true且shot_type参数为customize时，当前参数不得为空
                */
                class MultiPrompt : public AbstractModel
                {
                public:
                    MultiPrompt();
                    ~MultiPrompt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>分镜序号</p>
                     * @return Index <p>分镜序号</p>
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置<p>分镜序号</p>
                     * @param _index <p>分镜序号</p>
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取<p>分镜提示词</p>
                     * @return Prompt <p>分镜提示词</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>分镜提示词</p>
                     * @param _prompt <p>分镜提示词</p>
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
                     * 获取<p>时长</p>
                     * @return Duration <p>时长</p>
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置<p>时长</p>
                     * @param _duration <p>时长</p>
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * <p>分镜序号</p>
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * <p>分镜提示词</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>时长</p>
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_MULTIPROMPT_H_
