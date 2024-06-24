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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CONVERTDOCUMENTRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CONVERTDOCUMENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/WordRecognizeInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ConvertDocument返回参数结构体
                */
                class ConvertDocumentResponse : public AbstractModel
                {
                public:
                    ConvertDocumentResponse();
                    ~ConvertDocumentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取识别生成的word文件base64编码的字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WordRecognizeInfo 识别生成的word文件base64编码的字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WordRecognizeInfo> GetWordRecognizeInfo() const;

                    /**
                     * 判断参数 WordRecognizeInfo 是否已赋值
                     * @return WordRecognizeInfo 是否已赋值
                     * 
                     */
                    bool WordRecognizeInfoHasBeenSet() const;

                private:

                    /**
                     * 识别生成的word文件base64编码的字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WordRecognizeInfo> m_wordRecognizeInfo;
                    bool m_wordRecognizeInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CONVERTDOCUMENTRESPONSE_H_
