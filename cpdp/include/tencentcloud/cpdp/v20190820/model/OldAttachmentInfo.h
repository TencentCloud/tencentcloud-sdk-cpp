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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_OLDATTACHMENTINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_OLDATTACHMENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 附加项信息
                */
                class OldAttachmentInfo : public AbstractModel
                {
                public:
                    OldAttachmentInfo();
                    ~OldAttachmentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取附加项金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttachmentAmount 附加项金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAttachmentAmount() const;

                    /**
                     * 设置附加项金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachmentAmount 附加项金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttachmentAmount(const int64_t& _attachmentAmount);

                    /**
                     * 判断参数 AttachmentAmount 是否已赋值
                     * @return AttachmentAmount 是否已赋值
                     * 
                     */
                    bool AttachmentAmountHasBeenSet() const;

                    /**
                     * 获取附加项类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttachmentType 附加项类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttachmentType() const;

                    /**
                     * 设置附加项类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachmentType 附加项类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttachmentType(const std::string& _attachmentType);

                    /**
                     * 判断参数 AttachmentType 是否已赋值
                     * @return AttachmentType 是否已赋值
                     * 
                     */
                    bool AttachmentTypeHasBeenSet() const;

                    /**
                     * 获取附加项名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttachmentName 附加项名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttachmentName() const;

                    /**
                     * 设置附加项名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachmentName 附加项名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttachmentName(const std::string& _attachmentName);

                    /**
                     * 判断参数 AttachmentName 是否已赋值
                     * @return AttachmentName 是否已赋值
                     * 
                     */
                    bool AttachmentNameHasBeenSet() const;

                    /**
                     * 获取附加项编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttachmentCode 附加项编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttachmentCode() const;

                    /**
                     * 设置附加项编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachmentCode 附加项编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttachmentCode(const std::string& _attachmentCode);

                    /**
                     * 判断参数 AttachmentCode 是否已赋值
                     * @return AttachmentCode 是否已赋值
                     * 
                     */
                    bool AttachmentCodeHasBeenSet() const;

                private:

                    /**
                     * 附加项金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_attachmentAmount;
                    bool m_attachmentAmountHasBeenSet;

                    /**
                     * 附加项类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attachmentType;
                    bool m_attachmentTypeHasBeenSet;

                    /**
                     * 附加项名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attachmentName;
                    bool m_attachmentNameHasBeenSet;

                    /**
                     * 附加项编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attachmentCode;
                    bool m_attachmentCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_OLDATTACHMENTINFO_H_
