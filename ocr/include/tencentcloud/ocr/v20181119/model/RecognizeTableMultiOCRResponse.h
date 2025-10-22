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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETABLEMULTIOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETABLEMULTIOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizeTableMultiOCR返回参数结构体
                */
                class RecognizeTableMultiOCRResponse : public AbstractModel
                {
                public:
                    RecognizeTableMultiOCRResponse();
                    ~RecognizeTableMultiOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Base64 编码后的 Excel 数据或 Markdown 数据。  注意：此字段可能返回空，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataBase64 Base64 编码后的 Excel 数据或 Markdown 数据。  注意：此字段可能返回空，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataBase64() const;

                    /**
                     * 判断参数 DataBase64 是否已赋值
                     * @return DataBase64 是否已赋值
                     * 
                     */
                    bool DataBase64HasBeenSet() const;

                private:

                    /**
                     * Base64 编码后的 Excel 数据或 Markdown 数据。  注意：此字段可能返回空，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataBase64;
                    bool m_dataBase64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETABLEMULTIOCRRESPONSE_H_
