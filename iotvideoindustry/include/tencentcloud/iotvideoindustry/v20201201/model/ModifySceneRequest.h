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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYSCENEREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYSCENEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * ModifyScene请求参数结构体
                */
                class ModifySceneRequest : public AbstractModel
                {
                public:
                    ModifySceneRequest();
                    ~ModifySceneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取场景ID
                     * @return IntId 场景ID
                     * 
                     */
                    int64_t GetIntId() const;

                    /**
                     * 设置场景ID
                     * @param _intId 场景ID
                     * 
                     */
                    void SetIntId(const int64_t& _intId);

                    /**
                     * 判断参数 IntId 是否已赋值
                     * @return IntId 是否已赋值
                     * 
                     */
                    bool IntIdHasBeenSet() const;

                    /**
                     * 获取场景名称
                     * @return SceneName 场景名称
                     * 
                     */
                    std::string GetSceneName() const;

                    /**
                     * 设置场景名称
                     * @param _sceneName 场景名称
                     * 
                     */
                    void SetSceneName(const std::string& _sceneName);

                    /**
                     * 判断参数 SceneName 是否已赋值
                     * @return SceneName 是否已赋值
                     * 
                     */
                    bool SceneNameHasBeenSet() const;

                    /**
                     * 获取触发条件
                     * @return SceneTrigger 触发条件
                     * 
                     */
                    std::string GetSceneTrigger() const;

                    /**
                     * 设置触发条件
                     * @param _sceneTrigger 触发条件
                     * 
                     */
                    void SetSceneTrigger(const std::string& _sceneTrigger);

                    /**
                     * 判断参数 SceneTrigger 是否已赋值
                     * @return SceneTrigger 是否已赋值
                     * 
                     */
                    bool SceneTriggerHasBeenSet() const;

                    /**
                     * 获取录制时长(秒)
                     * @return RecordDuration 录制时长(秒)
                     * 
                     */
                    int64_t GetRecordDuration() const;

                    /**
                     * 设置录制时长(秒)
                     * @param _recordDuration 录制时长(秒)
                     * 
                     */
                    void SetRecordDuration(const int64_t& _recordDuration);

                    /**
                     * 判断参数 RecordDuration 是否已赋值
                     * @return RecordDuration 是否已赋值
                     * 
                     */
                    bool RecordDurationHasBeenSet() const;

                private:

                    /**
                     * 场景ID
                     */
                    int64_t m_intId;
                    bool m_intIdHasBeenSet;

                    /**
                     * 场景名称
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                    /**
                     * 触发条件
                     */
                    std::string m_sceneTrigger;
                    bool m_sceneTriggerHasBeenSet;

                    /**
                     * 录制时长(秒)
                     */
                    int64_t m_recordDuration;
                    bool m_recordDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYSCENEREQUEST_H_
