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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CAPACITYGLOBALCONFIG_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CAPACITYGLOBALCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/DefaultSetting.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 资源调度-容量调度器的全局设置
                */
                class CapacityGlobalConfig : public AbstractModel
                {
                public:
                    CapacityGlobalConfig();
                    ~CapacityGlobalConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启了标签调度
                     * @return EnableLabel 是否开启了标签调度
                     * 
                     */
                    bool GetEnableLabel() const;

                    /**
                     * 设置是否开启了标签调度
                     * @param _enableLabel 是否开启了标签调度
                     * 
                     */
                    void SetEnableLabel(const bool& _enableLabel);

                    /**
                     * 判断参数 EnableLabel 是否已赋值
                     * @return EnableLabel 是否已赋值
                     * 
                     */
                    bool EnableLabelHasBeenSet() const;

                    /**
                     * 获取如果开启了标签调度，标签信息存放的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelDir 如果开启了标签调度，标签信息存放的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabelDir() const;

                    /**
                     * 设置如果开启了标签调度，标签信息存放的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelDir 如果开启了标签调度，标签信息存放的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelDir(const std::string& _labelDir);

                    /**
                     * 判断参数 LabelDir 是否已赋值
                     * @return LabelDir 是否已赋值
                     * 
                     */
                    bool LabelDirHasBeenSet() const;

                    /**
                     * 获取是否覆盖用户指定队列，为true表示覆盖。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueMappingOverride 是否覆盖用户指定队列，为true表示覆盖。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetQueueMappingOverride() const;

                    /**
                     * 设置是否覆盖用户指定队列，为true表示覆盖。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueMappingOverride 是否覆盖用户指定队列，为true表示覆盖。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueueMappingOverride(const bool& _queueMappingOverride);

                    /**
                     * 判断参数 QueueMappingOverride 是否已赋值
                     * @return QueueMappingOverride 是否已赋值
                     * 
                     */
                    bool QueueMappingOverrideHasBeenSet() const;

                    /**
                     * 获取高级设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultSettings 高级设置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DefaultSetting> GetDefaultSettings() const;

                    /**
                     * 设置高级设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultSettings 高级设置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefaultSettings(const std::vector<DefaultSetting>& _defaultSettings);

                    /**
                     * 判断参数 DefaultSettings 是否已赋值
                     * @return DefaultSettings 是否已赋值
                     * 
                     */
                    bool DefaultSettingsHasBeenSet() const;

                private:

                    /**
                     * 是否开启了标签调度
                     */
                    bool m_enableLabel;
                    bool m_enableLabelHasBeenSet;

                    /**
                     * 如果开启了标签调度，标签信息存放的路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labelDir;
                    bool m_labelDirHasBeenSet;

                    /**
                     * 是否覆盖用户指定队列，为true表示覆盖。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_queueMappingOverride;
                    bool m_queueMappingOverrideHasBeenSet;

                    /**
                     * 高级设置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DefaultSetting> m_defaultSettings;
                    bool m_defaultSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CAPACITYGLOBALCONFIG_H_
