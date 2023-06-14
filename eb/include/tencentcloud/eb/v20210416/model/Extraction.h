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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_EXTRACTION_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_EXTRACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/TextParams.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * 描述如何提取数据
                */
                class Extraction : public AbstractModel
                {
                public:
                    Extraction();
                    ~Extraction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取JsonPath, 不指定则使用默认值$.
                     * @return ExtractionInputPath JsonPath, 不指定则使用默认值$.
                     * 
                     */
                    std::string GetExtractionInputPath() const;

                    /**
                     * 设置JsonPath, 不指定则使用默认值$.
                     * @param _extractionInputPath JsonPath, 不指定则使用默认值$.
                     * 
                     */
                    void SetExtractionInputPath(const std::string& _extractionInputPath);

                    /**
                     * 判断参数 ExtractionInputPath 是否已赋值
                     * @return ExtractionInputPath 是否已赋值
                     * 
                     */
                    bool ExtractionInputPathHasBeenSet() const;

                    /**
                     * 获取取值: TEXT/JSON
                     * @return Format 取值: TEXT/JSON
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置取值: TEXT/JSON
                     * @param _format 取值: TEXT/JSON
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取仅在Text需要传递
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TextParams 仅在Text需要传递
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TextParams GetTextParams() const;

                    /**
                     * 设置仅在Text需要传递
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _textParams 仅在Text需要传递
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTextParams(const TextParams& _textParams);

                    /**
                     * 判断参数 TextParams 是否已赋值
                     * @return TextParams 是否已赋值
                     * 
                     */
                    bool TextParamsHasBeenSet() const;

                private:

                    /**
                     * JsonPath, 不指定则使用默认值$.
                     */
                    std::string m_extractionInputPath;
                    bool m_extractionInputPathHasBeenSet;

                    /**
                     * 取值: TEXT/JSON
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 仅在Text需要传递
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TextParams m_textParams;
                    bool m_textParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_EXTRACTION_H_
