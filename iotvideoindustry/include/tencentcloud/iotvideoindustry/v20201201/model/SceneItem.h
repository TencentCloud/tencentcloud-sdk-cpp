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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_SCENEITEM_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_SCENEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 场景列表元素
                */
                class SceneItem : public AbstractModel
                {
                public:
                    SceneItem();
                    ~SceneItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取用户UIN
                     * @return Uin 用户UIN
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户UIN
                     * @param _uin 用户UIN
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

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
                     * 获取触发规则
                     * @return SceneTrigger 触发规则
                     * 
                     */
                    std::string GetSceneTrigger() const;

                    /**
                     * 设置触发规则
                     * @param _sceneTrigger 触发规则
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
                     * 获取录制时长 秒
                     * @return RecordDuration 录制时长 秒
                     * 
                     */
                    int64_t GetRecordDuration() const;

                    /**
                     * 设置录制时长 秒
                     * @param _recordDuration 录制时长 秒
                     * 
                     */
                    void SetRecordDuration(const int64_t& _recordDuration);

                    /**
                     * 判断参数 RecordDuration 是否已赋值
                     * @return RecordDuration 是否已赋值
                     * 
                     */
                    bool RecordDurationHasBeenSet() const;

                    /**
                     * 获取存储时长 天
                     * @return StoreDuration 存储时长 天
                     * 
                     */
                    int64_t GetStoreDuration() const;

                    /**
                     * 设置存储时长 天
                     * @param _storeDuration 存储时长 天
                     * 
                     */
                    void SetStoreDuration(const int64_t& _storeDuration);

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
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return UpdateTime 修改时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置修改时间
                     * @param _updateTime 修改时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 场景ID
                     */
                    int64_t m_intId;
                    bool m_intIdHasBeenSet;

                    /**
                     * 用户UIN
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 场景名称
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                    /**
                     * 触发规则
                     */
                    std::string m_sceneTrigger;
                    bool m_sceneTriggerHasBeenSet;

                    /**
                     * 录制时长 秒
                     */
                    int64_t m_recordDuration;
                    bool m_recordDurationHasBeenSet;

                    /**
                     * 存储时长 天
                     */
                    int64_t m_storeDuration;
                    bool m_storeDurationHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_SCENEITEM_H_
