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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_BASESTATEACTION_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_BASESTATEACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 列表查询返回的每条记录的操作属性
                */
                class BaseStateAction : public AbstractModel
                {
                public:
                    BaseStateAction();
                    ~BaseStateAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取编辑是否可见
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShowEdit 编辑是否可见
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetShowEdit() const;

                    /**
                     * 设置编辑是否可见
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _showEdit 编辑是否可见
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShowEdit(const bool& _showEdit);

                    /**
                     * 判断参数 ShowEdit 是否已赋值
                     * @return ShowEdit 是否已赋值
                     * 
                     */
                    bool ShowEditHasBeenSet() const;

                    /**
                     * 获取编辑是否可点击
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsEdit 编辑是否可点击
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsEdit() const;

                    /**
                     * 设置编辑是否可点击
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isEdit 编辑是否可点击
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsEdit(const bool& _isEdit);

                    /**
                     * 判断参数 IsEdit 是否已赋值
                     * @return IsEdit 是否已赋值
                     * 
                     */
                    bool IsEditHasBeenSet() const;

                    /**
                     * 获取编辑按钮的文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EditText 编辑按钮的文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEditText() const;

                    /**
                     * 设置编辑按钮的文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _editText 编辑按钮的文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEditText(const std::string& _editText);

                    /**
                     * 判断参数 EditText 是否已赋值
                     * @return EditText 是否已赋值
                     * 
                     */
                    bool EditTextHasBeenSet() const;

                    /**
                     * 获取编辑不可用时的提示文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EditTips 编辑不可用时的提示文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEditTips() const;

                    /**
                     * 设置编辑不可用时的提示文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _editTips 编辑不可用时的提示文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEditTips(const std::string& _editTips);

                    /**
                     * 判断参数 EditTips 是否已赋值
                     * @return EditTips 是否已赋值
                     * 
                     */
                    bool EditTipsHasBeenSet() const;

                    /**
                     * 获取删除是否可见
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShowDel 删除是否可见
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetShowDel() const;

                    /**
                     * 设置删除是否可见
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _showDel 删除是否可见
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShowDel(const bool& _showDel);

                    /**
                     * 判断参数 ShowDel 是否已赋值
                     * @return ShowDel 是否已赋值
                     * 
                     */
                    bool ShowDelHasBeenSet() const;

                    /**
                     * 获取删除是否可点击
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDel 删除是否可点击
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsDel() const;

                    /**
                     * 设置删除是否可点击
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDel 删除是否可点击
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsDel(const bool& _isDel);

                    /**
                     * 判断参数 IsDel 是否已赋值
                     * @return IsDel 是否已赋值
                     * 
                     */
                    bool IsDelHasBeenSet() const;

                    /**
                     * 获取删除按钮的文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DelText 删除按钮的文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDelText() const;

                    /**
                     * 设置删除按钮的文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _delText 删除按钮的文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDelText(const std::string& _delText);

                    /**
                     * 判断参数 DelText 是否已赋值
                     * @return DelText 是否已赋值
                     * 
                     */
                    bool DelTextHasBeenSet() const;

                    /**
                     * 获取删除不可用时的提示文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DelTips 删除不可用时的提示文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDelTips() const;

                    /**
                     * 设置删除不可用时的提示文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _delTips 删除不可用时的提示文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDelTips(const std::string& _delTips);

                    /**
                     * 判断参数 DelTips 是否已赋值
                     * @return DelTips 是否已赋值
                     * 
                     */
                    bool DelTipsHasBeenSet() const;

                    /**
                     * 获取复制是否可见
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShowCopy 复制是否可见
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetShowCopy() const;

                    /**
                     * 设置复制是否可见
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _showCopy 复制是否可见
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShowCopy(const bool& _showCopy);

                    /**
                     * 判断参数 ShowCopy 是否已赋值
                     * @return ShowCopy 是否已赋值
                     * 
                     */
                    bool ShowCopyHasBeenSet() const;

                    /**
                     * 获取是否可见
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShowView 是否可见
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetShowView() const;

                    /**
                     * 设置是否可见
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _showView 是否可见
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShowView(const bool& _showView);

                    /**
                     * 判断参数 ShowView 是否已赋值
                     * @return ShowView 是否已赋值
                     * 
                     */
                    bool ShowViewHasBeenSet() const;

                    /**
                     * 获取是否可重命名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShowRename 是否可重命名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetShowRename() const;

                    /**
                     * 设置是否可重命名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _showRename 是否可重命名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShowRename(const bool& _showRename);

                    /**
                     * 判断参数 ShowRename 是否已赋值
                     * @return ShowRename 是否已赋值
                     * 
                     */
                    bool ShowRenameHasBeenSet() const;

                private:

                    /**
                     * 编辑是否可见
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_showEdit;
                    bool m_showEditHasBeenSet;

                    /**
                     * 编辑是否可点击
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isEdit;
                    bool m_isEditHasBeenSet;

                    /**
                     * 编辑按钮的文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_editText;
                    bool m_editTextHasBeenSet;

                    /**
                     * 编辑不可用时的提示文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_editTips;
                    bool m_editTipsHasBeenSet;

                    /**
                     * 删除是否可见
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_showDel;
                    bool m_showDelHasBeenSet;

                    /**
                     * 删除是否可点击
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isDel;
                    bool m_isDelHasBeenSet;

                    /**
                     * 删除按钮的文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_delText;
                    bool m_delTextHasBeenSet;

                    /**
                     * 删除不可用时的提示文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_delTips;
                    bool m_delTipsHasBeenSet;

                    /**
                     * 复制是否可见
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_showCopy;
                    bool m_showCopyHasBeenSet;

                    /**
                     * 是否可见
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_showView;
                    bool m_showViewHasBeenSet;

                    /**
                     * 是否可重命名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_showRename;
                    bool m_showRenameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_BASESTATEACTION_H_
