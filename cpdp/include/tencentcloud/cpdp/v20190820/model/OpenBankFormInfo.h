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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKFORMINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKFORMINFO_H_

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
                * 网银页面提交html
                */
                class OpenBankFormInfo : public AbstractModel
                {
                public:
                    OpenBankFormInfo();
                    ~OpenBankFormInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网银页面提交html
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FormHtml 网银页面提交html
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFormHtml() const;

                    /**
                     * 设置网银页面提交html
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _formHtml 网银页面提交html
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFormHtml(const std::string& _formHtml);

                    /**
                     * 判断参数 FormHtml 是否已赋值
                     * @return FormHtml 是否已赋值
                     * 
                     */
                    bool FormHtmlHasBeenSet() const;

                    /**
                     * 获取网银提交页面字符集
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FormEncoding 网银提交页面字符集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFormEncoding() const;

                    /**
                     * 设置网银提交页面字符集
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _formEncoding 网银提交页面字符集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFormEncoding(const std::string& _formEncoding);

                    /**
                     * 判断参数 FormEncoding 是否已赋值
                     * @return FormEncoding 是否已赋值
                     * 
                     */
                    bool FormEncodingHasBeenSet() const;

                private:

                    /**
                     * 网银页面提交html
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_formHtml;
                    bool m_formHtmlHasBeenSet;

                    /**
                     * 网银提交页面字符集
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_formEncoding;
                    bool m_formEncodingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKFORMINFO_H_
