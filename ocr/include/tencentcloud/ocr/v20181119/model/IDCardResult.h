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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_IDCARDRESULT_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_IDCARDRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/IDCardInfoResult.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * IDCardResult
                */
                class IDCardResult : public AbstractModel
                {
                public:
                    IDCardResult();
                    ~IDCardResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取正面结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Front 正面结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IDCardInfoResult GetFront() const;

                    /**
                     * 设置正面结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _front 正面结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFront(const IDCardInfoResult& _front);

                    /**
                     * 判断参数 Front 是否已赋值
                     * @return Front 是否已赋值
                     * 
                     */
                    bool FrontHasBeenSet() const;

                    /**
                     * 获取反面结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Back 反面结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IDCardInfoResult GetBack() const;

                    /**
                     * 设置反面结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _back 反面结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBack(const IDCardInfoResult& _back);

                    /**
                     * 判断参数 Back 是否已赋值
                     * @return Back 是否已赋值
                     * 
                     */
                    bool BackHasBeenSet() const;

                private:

                    /**
                     * 正面结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IDCardInfoResult m_front;
                    bool m_frontHasBeenSet;

                    /**
                     * 反面结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IDCardInfoResult m_back;
                    bool m_backHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_IDCARDRESULT_H_
