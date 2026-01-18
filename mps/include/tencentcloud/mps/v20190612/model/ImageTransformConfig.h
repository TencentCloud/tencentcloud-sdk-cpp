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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGETRANSFORMCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGETRANSFORMCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ImageResizeConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 图片基础转换能力
                */
                class ImageTransformConfig : public AbstractModel
                {
                public:
                    ImageTransformConfig();
                    ~ImageTransformConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片缩放配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageResize 图片缩放配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageResizeConfig GetImageResize() const;

                    /**
                     * 设置图片缩放配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageResize 图片缩放配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageResize(const ImageResizeConfig& _imageResize);

                    /**
                     * 判断参数 ImageResize 是否已赋值
                     * @return ImageResize 是否已赋值
                     * 
                     */
                    bool ImageResizeHasBeenSet() const;

                private:

                    /**
                     * 图片缩放配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageResizeConfig m_imageResize;
                    bool m_imageResizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGETRANSFORMCONFIG_H_
