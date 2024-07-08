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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKDELLOGOOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKDELLOGOOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 智能擦除结果信息
                */
                class AiAnalysisTaskDelLogoOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskDelLogoOutput();
                    ~AiAnalysisTaskDelLogoOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取擦除后文件的路径。
                     * @return Path 擦除后文件的路径。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置擦除后文件的路径。
                     * @param _path 擦除后文件的路径。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取擦除后文件的存储位置。
                     * @return OutputStorage 擦除后文件的存储位置。
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置擦除后文件的存储位置。
                     * @param _outputStorage 擦除后文件的存储位置。
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取基于画面提取的字幕文件路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginSubtitlePath 基于画面提取的字幕文件路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginSubtitlePath() const;

                    /**
                     * 设置基于画面提取的字幕文件路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originSubtitlePath 基于画面提取的字幕文件路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginSubtitlePath(const std::string& _originSubtitlePath);

                    /**
                     * 判断参数 OriginSubtitlePath 是否已赋值
                     * @return OriginSubtitlePath 是否已赋值
                     * 
                     */
                    bool OriginSubtitlePathHasBeenSet() const;

                    /**
                     * 获取基于画面提取的字幕翻译文件路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranslateSubtitlePath 基于画面提取的字幕翻译文件路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTranslateSubtitlePath() const;

                    /**
                     * 设置基于画面提取的字幕翻译文件路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _translateSubtitlePath 基于画面提取的字幕翻译文件路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTranslateSubtitlePath(const std::string& _translateSubtitlePath);

                    /**
                     * 判断参数 TranslateSubtitlePath 是否已赋值
                     * @return TranslateSubtitlePath 是否已赋值
                     * 
                     */
                    bool TranslateSubtitlePathHasBeenSet() const;

                private:

                    /**
                     * 擦除后文件的路径。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 擦除后文件的存储位置。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * 基于画面提取的字幕文件路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originSubtitlePath;
                    bool m_originSubtitlePathHasBeenSet;

                    /**
                     * 基于画面提取的字幕翻译文件路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_translateSubtitlePath;
                    bool m_translateSubtitlePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKDELLOGOOUTPUT_H_
