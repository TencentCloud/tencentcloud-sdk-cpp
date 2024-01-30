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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_ERRORINFO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_ERRORINFO_H_

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
                * 自定义错误信息对象
                */
                class ErrorInfo : public AbstractModel
                {
                public:
                    ErrorInfo();
                    ~ErrorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取错误说明字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorTip 错误说明字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorTip() const;

                    /**
                     * 设置错误说明字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorTip 错误说明字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorTip(const std::string& _errorTip);

                    /**
                     * 判断参数 ErrorTip 是否已赋值
                     * @return ErrorTip 是否已赋值
                     * 
                     */
                    bool ErrorTipHasBeenSet() const;

                    /**
                     * 获取原始异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage 原始异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置原始异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorMessage 原始异常信息
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
                     * 获取错误等级字段
ERROR
WARN
INFO
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorLevel 错误等级字段
ERROR
WARN
INFO
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorLevel() const;

                    /**
                     * 设置错误等级字段
ERROR
WARN
INFO
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorLevel 错误等级字段
ERROR
WARN
INFO
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorLevel(const std::string& _errorLevel);

                    /**
                     * 判断参数 ErrorLevel 是否已赋值
                     * @return ErrorLevel 是否已赋值
                     * 
                     */
                    bool ErrorLevelHasBeenSet() const;

                    /**
                     * 获取指引文档链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocLink 指引文档链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDocLink() const;

                    /**
                     * 设置指引文档链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _docLink 指引文档链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDocLink(const std::string& _docLink);

                    /**
                     * 判断参数 DocLink 是否已赋值
                     * @return DocLink 是否已赋值
                     * 
                     */
                    bool DocLinkHasBeenSet() const;

                    /**
                     * 获取快速指引说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FAQ 快速指引说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFAQ() const;

                    /**
                     * 设置快速指引说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fAQ 快速指引说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFAQ(const std::string& _fAQ);

                    /**
                     * 判断参数 FAQ 是否已赋值
                     * @return FAQ 是否已赋值
                     * 
                     */
                    bool FAQHasBeenSet() const;

                    /**
                     * 获取预留字段1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReservedField 预留字段1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReservedField() const;

                    /**
                     * 设置预留字段1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reservedField 预留字段1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReservedField(const std::string& _reservedField);

                    /**
                     * 判断参数 ReservedField 是否已赋值
                     * @return ReservedField 是否已赋值
                     * 
                     */
                    bool ReservedFieldHasBeenSet() const;

                private:

                    /**
                     * 错误说明字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorTip;
                    bool m_errorTipHasBeenSet;

                    /**
                     * 原始异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 错误等级字段
ERROR
WARN
INFO
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorLevel;
                    bool m_errorLevelHasBeenSet;

                    /**
                     * 指引文档链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_docLink;
                    bool m_docLinkHasBeenSet;

                    /**
                     * 快速指引说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fAQ;
                    bool m_fAQHasBeenSet;

                    /**
                     * 预留字段1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reservedField;
                    bool m_reservedFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_ERRORINFO_H_
