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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_IMAGEINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_IMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 镜像描述信息
                */
                class ImageInfo : public AbstractModel
                {
                public:
                    ImageInfo();
                    ~ImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像类型：TCR为腾讯云TCR镜像; CCR为腾讯云TCR个人版镜像，PreSet为平台预置镜像
                     * @return ImageType 镜像类型：TCR为腾讯云TCR镜像; CCR为腾讯云TCR个人版镜像，PreSet为平台预置镜像
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置镜像类型：TCR为腾讯云TCR镜像; CCR为腾讯云TCR个人版镜像，PreSet为平台预置镜像
                     * @param ImageType 镜像类型：TCR为腾讯云TCR镜像; CCR为腾讯云TCR个人版镜像，PreSet为平台预置镜像
                     */
                    void SetImageType(const std::string& _imageType);

                    /**
                     * 判断参数 ImageType 是否已赋值
                     * @return ImageType 是否已赋值
                     */
                    bool ImageTypeHasBeenSet() const;

                    /**
                     * 获取镜像地址
                     * @return ImageUrl 镜像地址
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置镜像地址
                     * @param ImageUrl 镜像地址
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取TCR镜像对应的地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegistryRegion TCR镜像对应的地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegistryRegion() const;

                    /**
                     * 设置TCR镜像对应的地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RegistryRegion TCR镜像对应的地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegistryRegion(const std::string& _registryRegion);

                    /**
                     * 判断参数 RegistryRegion 是否已赋值
                     * @return RegistryRegion 是否已赋值
                     */
                    bool RegistryRegionHasBeenSet() const;

                    /**
                     * 获取TCR镜像对应的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegistryId TCR镜像对应的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置TCR镜像对应的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RegistryId TCR镜像对应的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     */
                    bool RegistryIdHasBeenSet() const;

                private:

                    /**
                     * 镜像类型：TCR为腾讯云TCR镜像; CCR为腾讯云TCR个人版镜像，PreSet为平台预置镜像
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * 镜像地址
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * TCR镜像对应的地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * TCR镜像对应的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_IMAGEINFO_H_
