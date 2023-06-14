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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_IMAGELOGO_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_IMAGELOGO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/Rectf.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 图片中出现的Logo信息
                */
                class ImageLogo : public AbstractModel
                {
                public:
                    ImageLogo();
                    ~ImageLogo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片中出现的Logo识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Logo 图片中出现的Logo识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogo() const;

                    /**
                     * 设置图片中出现的Logo识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logo 图片中出现的Logo识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogo(const std::string& _logo);

                    /**
                     * 判断参数 Logo 是否已赋值
                     * @return Logo 是否已赋值
                     * 
                     */
                    bool LogoHasBeenSet() const;

                    /**
                     * 获取Logo在图片中出现的位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppearRect Logo在图片中出现的位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Rectf GetAppearRect() const;

                    /**
                     * 设置Logo在图片中出现的位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appearRect Logo在图片中出现的位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppearRect(const Rectf& _appearRect);

                    /**
                     * 判断参数 AppearRect 是否已赋值
                     * @return AppearRect 是否已赋值
                     * 
                     */
                    bool AppearRectHasBeenSet() const;

                private:

                    /**
                     * 图片中出现的Logo识别结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logo;
                    bool m_logoHasBeenSet;

                    /**
                     * Logo在图片中出现的位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Rectf m_appearRect;
                    bool m_appearRectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_IMAGELOGO_H_
