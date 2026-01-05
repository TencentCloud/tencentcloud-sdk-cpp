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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_EXECUTIONACTIONBRIEF_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_EXECUTIONACTIONBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 执行操作结果
                */
                class ExecutionActionBrief : public AbstractModel
                {
                public:
                    ExecutionActionBrief();
                    ~ExecutionActionBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作实体 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ItemId 操作实体 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置操作实体 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _itemId 操作实体 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取操作实体名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ItemName 操作实体名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetItemName() const;

                    /**
                     * 设置操作实体名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _itemName 操作实体名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItemName(const std::string& _itemName);

                    /**
                     * 判断参数 ItemName 是否已赋值
                     * @return ItemName 是否已赋值
                     * 
                     */
                    bool ItemNameHasBeenSet() const;

                    /**
                     * 获取操作 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionActionId 操作 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionActionId() const;

                    /**
                     * 设置操作 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionActionId 操作 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionActionId(const std::string& _executionActionId);

                    /**
                     * 判断参数 ExecutionActionId 是否已赋值
                     * @return ExecutionActionId 是否已赋值
                     * 
                     */
                    bool ExecutionActionIdHasBeenSet() const;

                    /**
                     * 获取失败信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage 失败信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置失败信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorMessage 失败信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取操作状态，true：成功，false：失败
                     * @return OpStatus 操作状态，true：成功，false：失败
                     * 
                     */
                    bool GetOpStatus() const;

                    /**
                     * 设置操作状态，true：成功，false：失败
                     * @param _opStatus 操作状态，true：成功，false：失败
                     * 
                     */
                    void SetOpStatus(const bool& _opStatus);

                    /**
                     * 判断参数 OpStatus 是否已赋值
                     * @return OpStatus 是否已赋值
                     * 
                     */
                    bool OpStatusHasBeenSet() const;

                private:

                    /**
                     * 操作实体 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 操作实体名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_itemName;
                    bool m_itemNameHasBeenSet;

                    /**
                     * 操作 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionActionId;
                    bool m_executionActionIdHasBeenSet;

                    /**
                     * 失败信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 操作状态，true：成功，false：失败
                     */
                    bool m_opStatus;
                    bool m_opStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_EXECUTIONACTIONBRIEF_H_
