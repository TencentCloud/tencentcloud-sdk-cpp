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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_ANNOTATIONCONTEXT_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_ANNOTATIONCONTEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * 标注上下文
                */
                class AnnotationContext : public AbstractModel
                {
                public:
                    AnnotationContext();
                    ~AnnotationContext() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务目标（整段视频的总目标）</p>
                     * @return TaskGoal <p>任务目标（整段视频的总目标）</p>
                     * 
                     */
                    std::string GetTaskGoal() const;

                    /**
                     * 设置<p>任务目标（整段视频的总目标）</p>
                     * @param _taskGoal <p>任务目标（整段视频的总目标）</p>
                     * 
                     */
                    void SetTaskGoal(const std::string& _taskGoal);

                    /**
                     * 判断参数 TaskGoal 是否已赋值
                     * @return TaskGoal 是否已赋值
                     * 
                     */
                    bool TaskGoalHasBeenSet() const;

                    /**
                     * 获取<p>关键物体列表</p>
                     * @return KeyObjects <p>关键物体列表</p>
                     * 
                     */
                    std::vector<std::string> GetKeyObjects() const;

                    /**
                     * 设置<p>关键物体列表</p>
                     * @param _keyObjects <p>关键物体列表</p>
                     * 
                     */
                    void SetKeyObjects(const std::vector<std::string>& _keyObjects);

                    /**
                     * 判断参数 KeyObjects 是否已赋值
                     * @return KeyObjects 是否已赋值
                     * 
                     */
                    bool KeyObjectsHasBeenSet() const;

                    /**
                     * 获取<p>原子动词参考列表</p>
                     * @return AtomicVerbs <p>原子动词参考列表</p>
                     * 
                     */
                    std::vector<std::string> GetAtomicVerbs() const;

                    /**
                     * 设置<p>原子动词参考列表</p>
                     * @param _atomicVerbs <p>原子动词参考列表</p>
                     * 
                     */
                    void SetAtomicVerbs(const std::vector<std::string>& _atomicVerbs);

                    /**
                     * 判断参数 AtomicVerbs 是否已赋值
                     * @return AtomicVerbs 是否已赋值
                     * 
                     */
                    bool AtomicVerbsHasBeenSet() const;

                private:

                    /**
                     * <p>任务目标（整段视频的总目标）</p>
                     */
                    std::string m_taskGoal;
                    bool m_taskGoalHasBeenSet;

                    /**
                     * <p>关键物体列表</p>
                     */
                    std::vector<std::string> m_keyObjects;
                    bool m_keyObjectsHasBeenSet;

                    /**
                     * <p>原子动词参考列表</p>
                     */
                    std::vector<std::string> m_atomicVerbs;
                    bool m_atomicVerbsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_ANNOTATIONCONTEXT_H_
