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

#ifndef TENCENTCLOUD_VRS_V20200824_MODEL_DOWNLOADVRSMODELRSP_H_
#define TENCENTCLOUD_VRS_V20200824_MODEL_DOWNLOADVRSMODELRSP_H_

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
                * 离线声音复刻模型下载响应
                */
                class DownloadVRSModelRsp : public AbstractModel
                {
                public:
                    DownloadVRSModelRsp();
                    ~DownloadVRSModelRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型cos地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Model 模型cos地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置模型cos地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _model 模型cos地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取音色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VoiceName 音色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVoiceName() const;

                    /**
                     * 设置音色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _voiceName 音色名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取音色性别:
1-male
2-female
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VoiceGender 音色性别:
1-male
2-female
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVoiceGender() const;

                    /**
                     * 设置音色性别:
1-male
2-female
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _voiceGender 音色性别:
1-male
2-female
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取语言类型：
1-中文
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VoiceLanguage 语言类型：
1-中文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVoiceLanguage() const;

                    /**
                     * 设置语言类型：
1-中文
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _voiceLanguage 语言类型：
1-中文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVoiceLanguage(const int64_t& _voiceLanguage);

                    /**
                     * 判断参数 VoiceLanguage 是否已赋值
                     * @return VoiceLanguage 是否已赋值
                     * 
                     */
                    bool VoiceLanguageHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 模型cos地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 音色名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_voiceName;
                    bool m_voiceNameHasBeenSet;

                    /**
                     * 音色性别:
1-male
2-female
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_voiceGender;
                    bool m_voiceGenderHasBeenSet;

                    /**
                     * 语言类型：
1-中文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_voiceLanguage;
                    bool m_voiceLanguageHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VRS_V20200824_MODEL_DOWNLOADVRSMODELRSP_H_
