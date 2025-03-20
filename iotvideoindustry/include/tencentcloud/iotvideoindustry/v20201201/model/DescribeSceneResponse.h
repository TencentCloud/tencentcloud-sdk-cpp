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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBESCENERESPONSE_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBESCENERESPONSE_H_

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
                * DescribeScene返回参数结构体
                */
                class DescribeSceneResponse : public AbstractModel
                {
                public:
                    DescribeSceneResponse();
                    ~DescribeSceneResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取场景ID
                     * @return IntId 场景ID
                     * 
                     */
                    int64_t GetIntId() const;

                    /**
                     * 判断参数 IntId 是否已赋值
                     * @return IntId 是否已赋值
                     * 
                     */
                    bool IntIdHasBeenSet() const;

                    /**
                     * 获取录制时长(秒)
                     * @return RecordDuration 录制时长(秒)
                     * 
                     */
                    int64_t GetRecordDuration() const;

                    /**
                     * 判断参数 RecordDuration 是否已赋值
                     * @return RecordDuration 是否已赋值
                     * 
                     */
                    bool RecordDurationHasBeenSet() const;

                    /**
                     * 获取场景名称
                     * @return SceneName 场景名称
                     * 
                     */
                    std::string GetSceneName() const;

                    /**
                     * 判断参数 SceneName 是否已赋值
                     * @return SceneName 是否已赋值
                     * 
                     */
                    bool SceneNameHasBeenSet() const;

                    /**
                     * 获取场景触发规则
                     * @return SceneTrigger 场景触发规则
                     * 
                     */
                    std::string GetSceneTrigger() const;

                    /**
                     * 判断参数 SceneTrigger 是否已赋值
                     * @return SceneTrigger 是否已赋值
                     * 
                     */
                    bool SceneTriggerHasBeenSet() const;

                    /**
                     * 获取存储时长 (天)
                     * @return StoreDuration 存储时长 (天)
                     * 
                     */
                    int64_t GetStoreDuration() const;

                    /**
                     * 判断参数 StoreDuration 是否已赋值
                     * @return StoreDuration 是否已赋值
                     * 
                     */
                    bool StoreDurationHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取用户Uin
                     * @return Uin 用户Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * 场景ID
                     */
                    int64_t m_intId;
                    bool m_intIdHasBeenSet;

                    /**
                     * 录制时长(秒)
                     */
                    int64_t m_recordDuration;
                    bool m_recordDurationHasBeenSet;

                    /**
                     * 场景名称
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                    /**
                     * 场景触发规则
                     */
                    std::string m_sceneTrigger;
                    bool m_sceneTriggerHasBeenSet;

                    /**
                     * 存储时长 (天)
                     */
                    int64_t m_storeDuration;
                    bool m_storeDurationHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 用户Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBESCENERESPONSE_H_
