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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_LOGOPARAM_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_LOGOPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aiart/v20221229/model/LogoRect.h>


namespace TencentCloud
{
    namespace Aiart
    {
        namespace V20221229
        {
            namespace Model
            {
                /**
                * logo参数
                */
                class LogoParam : public AbstractModel
                {
                public:
                    LogoParam();
                    ~LogoParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取水印 Url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogoUrl 水印 Url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogoUrl() const;

                    /**
                     * 设置水印 Url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logoUrl 水印 Url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogoUrl(const std::string& _logoUrl);

                    /**
                     * 判断参数 LogoUrl 是否已赋值
                     * @return LogoUrl 是否已赋值
                     * 
                     */
                    bool LogoUrlHasBeenSet() const;

                    /**
                     * 获取水印 Base64，Url 和 Base64 二选一传入，如果都提供以 Url 为准
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogoImage 水印 Base64，Url 和 Base64 二选一传入，如果都提供以 Url 为准
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogoImage() const;

                    /**
                     * 设置水印 Base64，Url 和 Base64 二选一传入，如果都提供以 Url 为准
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logoImage 水印 Base64，Url 和 Base64 二选一传入，如果都提供以 Url 为准
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogoImage(const std::string& _logoImage);

                    /**
                     * 判断参数 LogoImage 是否已赋值
                     * @return LogoImage 是否已赋值
                     * 
                     */
                    bool LogoImageHasBeenSet() const;

                    /**
                     * 获取水印图片位于生成结果图中的坐标，将按照坐标对标识图片进行位置和大小的拉伸匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogoRect 水印图片位于生成结果图中的坐标，将按照坐标对标识图片进行位置和大小的拉伸匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LogoRect GetLogoRect() const;

                    /**
                     * 设置水印图片位于生成结果图中的坐标，将按照坐标对标识图片进行位置和大小的拉伸匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logoRect 水印图片位于生成结果图中的坐标，将按照坐标对标识图片进行位置和大小的拉伸匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogoRect(const LogoRect& _logoRect);

                    /**
                     * 判断参数 LogoRect 是否已赋值
                     * @return LogoRect 是否已赋值
                     * 
                     */
                    bool LogoRectHasBeenSet() const;

                private:

                    /**
                     * 水印 Url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logoUrl;
                    bool m_logoUrlHasBeenSet;

                    /**
                     * 水印 Base64，Url 和 Base64 二选一传入，如果都提供以 Url 为准
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logoImage;
                    bool m_logoImageHasBeenSet;

                    /**
                     * 水印图片位于生成结果图中的坐标，将按照坐标对标识图片进行位置和大小的拉伸匹配
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LogoRect m_logoRect;
                    bool m_logoRectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_LOGOPARAM_H_
