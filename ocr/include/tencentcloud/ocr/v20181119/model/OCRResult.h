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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_OCRRESULT_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_OCRRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/IDCardResult.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * ocr结果信息
                */
                class OCRResult : public AbstractModel
                {
                public:
                    OCRResult();
                    ~OCRResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取身份证结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IDCardResult 身份证结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IDCardResult GetIDCardResult() const;

                    /**
                     * 设置身份证结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iDCardResult 身份证结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIDCardResult(const IDCardResult& _iDCardResult);

                    /**
                     * 判断参数 IDCardResult 是否已赋值
                     * @return IDCardResult 是否已赋值
                     * 
                     */
                    bool IDCardResultHasBeenSet() const;

                private:

                    /**
                     * 身份证结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IDCardResult m_iDCardResult;
                    bool m_iDCardResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_OCRRESULT_H_
