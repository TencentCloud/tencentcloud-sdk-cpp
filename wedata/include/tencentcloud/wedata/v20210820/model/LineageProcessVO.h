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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_LINEAGEPROCESSVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_LINEAGEPROCESSVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/LineageProperty.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * LineageProcessVO
                */
                class LineageProcessVO : public AbstractModel
                {
                public:
                    LineageProcessVO();
                    ~LineageProcessVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取原始唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessId 原始唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessId() const;

                    /**
                     * 设置原始唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processId 原始唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessId(const std::string& _processId);

                    /**
                     * 判断参数 ProcessId 是否已赋值
                     * @return ProcessId 是否已赋值
                     * 
                     */
                    bool ProcessIdHasBeenSet() const;

                    /**
                     * 获取任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessType() const;

                    /**
                     * 设置任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processType 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessType(const std::string& _processType);

                    /**
                     * 判断参数 ProcessType 是否已赋值
                     * @return ProcessType 是否已赋值
                     * 
                     */
                    bool ProcessTypeHasBeenSet() const;

                    /**
                     * 获取任务子类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessSubType 任务子类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessSubType() const;

                    /**
                     * 设置任务子类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processSubType 任务子类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessSubType(const std::string& _processSubType);

                    /**
                     * 判断参数 ProcessSubType 是否已赋值
                     * @return ProcessSubType 是否已赋值
                     * 
                     */
                    bool ProcessSubTypeHasBeenSet() const;

                    /**
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessName 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processName 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualifiedId 唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQualifiedId() const;

                    /**
                     * 设置唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qualifiedId 唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQualifiedId(const std::string& _qualifiedId);

                    /**
                     * 判断参数 QualifiedId 是否已赋值
                     * @return QualifiedId 是否已赋值
                     * 
                     */
                    bool QualifiedIdHasBeenSet() const;

                    /**
                     * 获取来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Platform 来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _platform 来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取额外扩展参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessProperties 额外扩展参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LineageProperty> GetProcessProperties() const;

                    /**
                     * 设置额外扩展参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processProperties 额外扩展参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessProperties(const std::vector<LineageProperty>& _processProperties);

                    /**
                     * 判断参数 ProcessProperties 是否已赋值
                     * @return ProcessProperties 是否已赋值
                     * 
                     */
                    bool ProcessPropertiesHasBeenSet() const;

                private:

                    /**
                     * 原始唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * 任务子类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processSubType;
                    bool m_processSubTypeHasBeenSet;

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_qualifiedId;
                    bool m_qualifiedIdHasBeenSet;

                    /**
                     * 来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 额外扩展参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LineageProperty> m_processProperties;
                    bool m_processPropertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_LINEAGEPROCESSVO_H_
