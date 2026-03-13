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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CHANGELOG_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CHANGELOG_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 变更日志
                */
                class ChangeLog : public AbstractModel
                {
                public:
                    ChangeLog();
                    ~ChangeLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取变更类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChangeType 变更类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChangeType() const;

                    /**
                     * 设置变更类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _changeType 变更类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChangeType(const std::string& _changeType);

                    /**
                     * 判断参数 ChangeType 是否已赋值
                     * @return ChangeType 是否已赋值
                     * 
                     */
                    bool ChangeTypeHasBeenSet() const;

                    /**
                     * 获取修改前的值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OldValue 修改前的值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOldValue() const;

                    /**
                     * 设置修改前的值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oldValue 修改前的值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOldValue(const std::string& _oldValue);

                    /**
                     * 判断参数 OldValue 是否已赋值
                     * @return OldValue 是否已赋值
                     * 
                     */
                    bool OldValueHasBeenSet() const;

                    /**
                     * 获取修改后的值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewValue 修改后的值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNewValue() const;

                    /**
                     * 设置修改后的值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _newValue 修改后的值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNewValue(const std::string& _newValue);

                    /**
                     * 判断参数 NewValue 是否已赋值
                     * @return NewValue 是否已赋值
                     * 
                     */
                    bool NewValueHasBeenSet() const;

                    /**
                     * 获取修改人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifiedAccount 修改人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifiedAccount() const;

                    /**
                     * 设置修改人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifiedAccount 修改人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifiedAccount(const std::string& _modifiedAccount);

                    /**
                     * 判断参数 ModifiedAccount 是否已赋值
                     * @return ModifiedAccount 是否已赋值
                     * 
                     */
                    bool ModifiedAccountHasBeenSet() const;

                    /**
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifiedTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifiedTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取修改原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChangeReason 修改原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChangeReason() const;

                    /**
                     * 设置修改原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _changeReason 修改原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChangeReason(const std::string& _changeReason);

                    /**
                     * 判断参数 ChangeReason 是否已赋值
                     * @return ChangeReason 是否已赋值
                     * 
                     */
                    bool ChangeReasonHasBeenSet() const;

                    /**
                     * 获取修改人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifiedAccountName 修改人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifiedAccountName() const;

                    /**
                     * 设置修改人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifiedAccountName 修改人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifiedAccountName(const std::string& _modifiedAccountName);

                    /**
                     * 判断参数 ModifiedAccountName 是否已赋值
                     * @return ModifiedAccountName 是否已赋值
                     * 
                     */
                    bool ModifiedAccountNameHasBeenSet() const;

                private:

                    /**
                     * 变更类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_changeType;
                    bool m_changeTypeHasBeenSet;

                    /**
                     * 修改前的值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_oldValue;
                    bool m_oldValueHasBeenSet;

                    /**
                     * 修改后的值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_newValue;
                    bool m_newValueHasBeenSet;

                    /**
                     * 修改人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifiedAccount;
                    bool m_modifiedAccountHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 修改原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_changeReason;
                    bool m_changeReasonHasBeenSet;

                    /**
                     * 修改人名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifiedAccountName;
                    bool m_modifiedAccountNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CHANGELOG_H_
