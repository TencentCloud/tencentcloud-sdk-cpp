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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FORMFIELD_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FORMFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 此结构 (FormField) 用于描述内容控件填充结构。
                */
                class FormField : public AbstractModel
                {
                public:
                    FormField();
                    ~FormField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取控件填充vaule，ComponentType和传入值类型对应关系：
TEXT - 文本内容
MULTI_LINE_TEXT - 文本内容
CHECK_BOX - true/false
FILL_IMAGE、ATTACHMENT - 附件的FileId，需要通过UploadFiles接口上传获取
SELECTOR - 选项值
DYNAMIC_TABLE - 传入json格式的表格内容，具体见数据结构FlowInfo
                     * @return ComponentValue 控件填充vaule，ComponentType和传入值类型对应关系：
TEXT - 文本内容
MULTI_LINE_TEXT - 文本内容
CHECK_BOX - true/false
FILL_IMAGE、ATTACHMENT - 附件的FileId，需要通过UploadFiles接口上传获取
SELECTOR - 选项值
DYNAMIC_TABLE - 传入json格式的表格内容，具体见数据结构FlowInfo
                     * 
                     */
                    std::string GetComponentValue() const;

                    /**
                     * 设置控件填充vaule，ComponentType和传入值类型对应关系：
TEXT - 文本内容
MULTI_LINE_TEXT - 文本内容
CHECK_BOX - true/false
FILL_IMAGE、ATTACHMENT - 附件的FileId，需要通过UploadFiles接口上传获取
SELECTOR - 选项值
DYNAMIC_TABLE - 传入json格式的表格内容，具体见数据结构FlowInfo
                     * @param _componentValue 控件填充vaule，ComponentType和传入值类型对应关系：
TEXT - 文本内容
MULTI_LINE_TEXT - 文本内容
CHECK_BOX - true/false
FILL_IMAGE、ATTACHMENT - 附件的FileId，需要通过UploadFiles接口上传获取
SELECTOR - 选项值
DYNAMIC_TABLE - 传入json格式的表格内容，具体见数据结构FlowInfo
                     * 
                     */
                    void SetComponentValue(const std::string& _componentValue);

                    /**
                     * 判断参数 ComponentValue 是否已赋值
                     * @return ComponentValue 是否已赋值
                     * 
                     */
                    bool ComponentValueHasBeenSet() const;

                    /**
                     * 获取表单域或控件的ID，跟ComponentName二选一，不能全为空；
CreateFlowsByTemplates 接口不使用此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComponentId 表单域或控件的ID，跟ComponentName二选一，不能全为空；
CreateFlowsByTemplates 接口不使用此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComponentId() const;

                    /**
                     * 设置表单域或控件的ID，跟ComponentName二选一，不能全为空；
CreateFlowsByTemplates 接口不使用此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _componentId 表单域或控件的ID，跟ComponentName二选一，不能全为空；
CreateFlowsByTemplates 接口不使用此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComponentId(const std::string& _componentId);

                    /**
                     * 判断参数 ComponentId 是否已赋值
                     * @return ComponentId 是否已赋值
                     * 
                     */
                    bool ComponentIdHasBeenSet() const;

                    /**
                     * 获取控件的名字，跟ComponentId二选一，不能全为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComponentName 控件的名字，跟ComponentId二选一，不能全为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置控件的名字，跟ComponentId二选一，不能全为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _componentName 控件的名字，跟ComponentId二选一，不能全为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComponentName(const std::string& _componentName);

                    /**
                     * 判断参数 ComponentName 是否已赋值
                     * @return ComponentName 是否已赋值
                     * 
                     */
                    bool ComponentNameHasBeenSet() const;

                private:

                    /**
                     * 控件填充vaule，ComponentType和传入值类型对应关系：
TEXT - 文本内容
MULTI_LINE_TEXT - 文本内容
CHECK_BOX - true/false
FILL_IMAGE、ATTACHMENT - 附件的FileId，需要通过UploadFiles接口上传获取
SELECTOR - 选项值
DYNAMIC_TABLE - 传入json格式的表格内容，具体见数据结构FlowInfo
                     */
                    std::string m_componentValue;
                    bool m_componentValueHasBeenSet;

                    /**
                     * 表单域或控件的ID，跟ComponentName二选一，不能全为空；
CreateFlowsByTemplates 接口不使用此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_componentId;
                    bool m_componentIdHasBeenSet;

                    /**
                     * 控件的名字，跟ComponentId二选一，不能全为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FORMFIELD_H_
