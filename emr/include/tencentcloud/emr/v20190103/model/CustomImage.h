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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CUSTOMIMAGE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CUSTOMIMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ImageInfo.h>
#include <tencentcloud/emr/v20190103/model/ImagePullSecret.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 自定义镜像信息
                */
                class CustomImage : public AbstractModel
                {
                public:
                    CustomImage();
                    ~CustomImage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像来源。支持企业版镜像（tcr）、个人版镜像（ccrPersonal）、个人版共有镜像（ccrAllPersonal)
                     * @return ImageSourceType 镜像来源。支持企业版镜像（tcr）、个人版镜像（ccrPersonal）、个人版共有镜像（ccrAllPersonal)
                     * 
                     */
                    std::string GetImageSourceType() const;

                    /**
                     * 设置镜像来源。支持企业版镜像（tcr）、个人版镜像（ccrPersonal）、个人版共有镜像（ccrAllPersonal)
                     * @param _imageSourceType 镜像来源。支持企业版镜像（tcr）、个人版镜像（ccrPersonal）、个人版共有镜像（ccrAllPersonal)
                     * 
                     */
                    void SetImageSourceType(const std::string& _imageSourceType);

                    /**
                     * 判断参数 ImageSourceType 是否已赋值
                     * @return ImageSourceType 是否已赋值
                     * 
                     */
                    bool ImageSourceTypeHasBeenSet() const;

                    /**
                     * 获取镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageInfo 镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageInfo 镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageInfo(const ImageInfo& _imageInfo);

                    /**
                     * 判断参数 ImageInfo 是否已赋值
                     * @return ImageInfo 是否已赋值
                     * 
                     */
                    bool ImageInfoHasBeenSet() const;

                    /**
                     * 获取镜像获取密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImagePullSecret 镜像获取密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImagePullSecret GetImagePullSecret() const;

                    /**
                     * 设置镜像获取密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imagePullSecret 镜像获取密钥
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImagePullSecret(const ImagePullSecret& _imagePullSecret);

                    /**
                     * 判断参数 ImagePullSecret 是否已赋值
                     * @return ImagePullSecret 是否已赋值
                     * 
                     */
                    bool ImagePullSecretHasBeenSet() const;

                private:

                    /**
                     * 镜像来源。支持企业版镜像（tcr）、个人版镜像（ccrPersonal）、个人版共有镜像（ccrAllPersonal)
                     */
                    std::string m_imageSourceType;
                    bool m_imageSourceTypeHasBeenSet;

                    /**
                     * 镜像信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * 镜像获取密钥
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImagePullSecret m_imagePullSecret;
                    bool m_imagePullSecretHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CUSTOMIMAGE_H_
