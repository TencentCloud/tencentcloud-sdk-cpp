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

#ifndef TENCENTCLOUD_VRS_V20200824_MODEL_VOICETYPEINFO_H_
#define TENCENTCLOUD_VRS_V20200824_MODEL_VOICETYPEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vrs
    {
        namespace V20200824
        {
            namespace Model
            {
                /**
                * 复刻音色详情
                */
                class VoiceTypeInfo : public AbstractModel
                {
                public:
                    VoiceTypeInfo();
                    ~VoiceTypeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音色id。（若为一句话复刻时，该值为固定值“200000000”）
                     * @return VoiceType 音色id。（若为一句话复刻时，该值为固定值“200000000”）
                     * 
                     */
                    int64_t GetVoiceType() const;

                    /**
                     * 设置音色id。（若为一句话复刻时，该值为固定值“200000000”）
                     * @param _voiceType 音色id。（若为一句话复刻时，该值为固定值“200000000”）
                     * 
                     */
                    void SetVoiceType(const int64_t& _voiceType);

                    /**
                     * 判断参数 VoiceType 是否已赋值
                     * @return VoiceType 是否已赋值
                     * 
                     */
                    bool VoiceTypeHasBeenSet() const;

                    /**
                     * 获取音色名称
                     * @return VoiceName 音色名称
                     * 
                     */
                    std::string GetVoiceName() const;

                    /**
                     * 设置音色名称
                     * @param _voiceName 音色名称
                     * 
                     */
                    void SetVoiceName(const std::string& _voiceName);

                    /**
                     * 判断参数 VoiceName 是否已赋值
                     * @return VoiceName 是否已赋值
                     * 
                     */
                    bool VoiceNameHasBeenSet() const;

                    /**
                     * 获取音色性别: 1-male 2-female
                     * @return VoiceGender 音色性别: 1-male 2-female
                     * 
                     */
                    int64_t GetVoiceGender() const;

                    /**
                     * 设置音色性别: 1-male 2-female
                     * @param _voiceGender 音色性别: 1-male 2-female
                     * 
                     */
                    void SetVoiceGender(const int64_t& _voiceGender);

                    /**
                     * 判断参数 VoiceGender 是否已赋值
                     * @return VoiceGender 是否已赋值
                     * 
                     */
                    bool VoiceGenderHasBeenSet() const;

                    /**
                     * 获取复刻类型: 0-轻量版复刻 1-基础版复刻
                     * @return TaskType 复刻类型: 0-轻量版复刻 1-基础版复刻
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置复刻类型: 0-轻量版复刻 1-基础版复刻
                     * @param _taskType 复刻类型: 0-轻量版复刻 1-基础版复刻
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取复刻任务 ID
                     * @return TaskID 复刻任务 ID
                     * 
                     */
                    std::string GetTaskID() const;

                    /**
                     * 设置复刻任务 ID
                     * @param _taskID 复刻任务 ID
                     * 
                     */
                    void SetTaskID(const std::string& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return DateCreated 创建时间
                     * 
                     */
                    std::string GetDateCreated() const;

                    /**
                     * 设置创建时间
                     * @param _dateCreated 创建时间
                     * 
                     */
                    void SetDateCreated(const std::string& _dateCreated);

                    /**
                     * 判断参数 DateCreated 是否已赋值
                     * @return DateCreated 是否已赋值
                     * 
                     */
                    bool DateCreatedHasBeenSet() const;

                    /**
                     * 获取部署状态。若已部署，则可通过语音合成接口调用该音色
                     * @return IsDeployed 部署状态。若已部署，则可通过语音合成接口调用该音色
                     * 
                     */
                    bool GetIsDeployed() const;

                    /**
                     * 设置部署状态。若已部署，则可通过语音合成接口调用该音色
                     * @param _isDeployed 部署状态。若已部署，则可通过语音合成接口调用该音色
                     * 
                     */
                    void SetIsDeployed(const bool& _isDeployed);

                    /**
                     * 判断参数 IsDeployed 是否已赋值
                     * @return IsDeployed 是否已赋值
                     * 
                     */
                    bool IsDeployedHasBeenSet() const;

                    /**
                     * 获取任务过期时间。（当复刻类型为一句话复刻时展示）

注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 任务过期时间。（当复刻类型为一句话复刻时展示）

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置任务过期时间。（当复刻类型为一句话复刻时展示）

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 任务过期时间。（当复刻类型为一句话复刻时展示）

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取快速复刻音色ID。（当复刻类型为一句话复刻时展示）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FastVoiceType 快速复刻音色ID。（当复刻类型为一句话复刻时展示）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFastVoiceType() const;

                    /**
                     * 设置快速复刻音色ID。（当复刻类型为一句话复刻时展示）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fastVoiceType 快速复刻音色ID。（当复刻类型为一句话复刻时展示）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFastVoiceType(const std::string& _fastVoiceType);

                    /**
                     * 判断参数 FastVoiceType 是否已赋值
                     * @return FastVoiceType 是否已赋值
                     * 
                     */
                    bool FastVoiceTypeHasBeenSet() const;

                private:

                    /**
                     * 音色id。（若为一句话复刻时，该值为固定值“200000000”）
                     */
                    int64_t m_voiceType;
                    bool m_voiceTypeHasBeenSet;

                    /**
                     * 音色名称
                     */
                    std::string m_voiceName;
                    bool m_voiceNameHasBeenSet;

                    /**
                     * 音色性别: 1-male 2-female
                     */
                    int64_t m_voiceGender;
                    bool m_voiceGenderHasBeenSet;

                    /**
                     * 复刻类型: 0-轻量版复刻 1-基础版复刻
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 复刻任务 ID
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_dateCreated;
                    bool m_dateCreatedHasBeenSet;

                    /**
                     * 部署状态。若已部署，则可通过语音合成接口调用该音色
                     */
                    bool m_isDeployed;
                    bool m_isDeployedHasBeenSet;

                    /**
                     * 任务过期时间。（当复刻类型为一句话复刻时展示）

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 快速复刻音色ID。（当复刻类型为一句话复刻时展示）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fastVoiceType;
                    bool m_fastVoiceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VRS_V20200824_MODEL_VOICETYPEINFO_H_
