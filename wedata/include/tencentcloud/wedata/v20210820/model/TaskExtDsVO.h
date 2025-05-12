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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKEXTDSVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKEXTDSVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ParamInfoDs.h>
#include <tencentcloud/wedata/v20210820/model/AttributeItemDsVO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 属性配置
                */
                class TaskExtDsVO : public AbstractModel
                {
                public:
                    TaskExtDsVO();
                    ~TaskExtDsVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Properties 任务属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ParamInfoDs> GetProperties() const;

                    /**
                     * 设置任务属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _properties 任务属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProperties(const std::vector<ParamInfoDs>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取任务试运行扩展业务属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DryRunExtAttributes 任务试运行扩展业务属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AttributeItemDsVO> GetDryRunExtAttributes() const;

                    /**
                     * 设置任务试运行扩展业务属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dryRunExtAttributes 任务试运行扩展业务属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDryRunExtAttributes(const std::vector<AttributeItemDsVO>& _dryRunExtAttributes);

                    /**
                     * 判断参数 DryRunExtAttributes 是否已赋值
                     * @return DryRunExtAttributes 是否已赋值
                     * 
                     */
                    bool DryRunExtAttributesHasBeenSet() const;

                    /**
                     * 获取任务试运行动态传参
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DryRunParameter 任务试运行动态传参
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AttributeItemDsVO> GetDryRunParameter() const;

                    /**
                     * 设置任务试运行动态传参
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dryRunParameter 任务试运行动态传参
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDryRunParameter(const std::vector<AttributeItemDsVO>& _dryRunParameter);

                    /**
                     * 判断参数 DryRunParameter 是否已赋值
                     * @return DryRunParameter 是否已赋值
                     * 
                     */
                    bool DryRunParameterHasBeenSet() const;

                private:

                    /**
                     * 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ParamInfoDs> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * 任务试运行扩展业务属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AttributeItemDsVO> m_dryRunExtAttributes;
                    bool m_dryRunExtAttributesHasBeenSet;

                    /**
                     * 任务试运行动态传参
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AttributeItemDsVO> m_dryRunParameter;
                    bool m_dryRunParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKEXTDSVO_H_
