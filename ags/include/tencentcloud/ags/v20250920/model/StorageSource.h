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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_STORAGESOURCE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_STORAGESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/CosStorageSource.h>
#include <tencentcloud/ags/v20250920/model/ImageStorageSource.h>
#include <tencentcloud/ags/v20250920/model/CfsStorageSource.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 挂载存储配置
                */
                class StorageSource : public AbstractModel
                {
                public:
                    StorageSource();
                    ~StorageSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对象存储桶配置
                     * @return Cos 对象存储桶配置
                     * 
                     */
                    CosStorageSource GetCos() const;

                    /**
                     * 设置对象存储桶配置
                     * @param _cos 对象存储桶配置
                     * 
                     */
                    void SetCos(const CosStorageSource& _cos);

                    /**
                     * 判断参数 Cos 是否已赋值
                     * @return Cos 是否已赋值
                     * 
                     */
                    bool CosHasBeenSet() const;

                    /**
                     * 获取镜像卷配置
                     * @return Image 镜像卷配置
                     * 
                     */
                    ImageStorageSource GetImage() const;

                    /**
                     * 设置镜像卷配置
                     * @param _image 镜像卷配置
                     * 
                     */
                    void SetImage(const ImageStorageSource& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取文件存储配置
                     * @return Cfs 文件存储配置
                     * 
                     */
                    CfsStorageSource GetCfs() const;

                    /**
                     * 设置文件存储配置
                     * @param _cfs 文件存储配置
                     * 
                     */
                    void SetCfs(const CfsStorageSource& _cfs);

                    /**
                     * 判断参数 Cfs 是否已赋值
                     * @return Cfs 是否已赋值
                     * 
                     */
                    bool CfsHasBeenSet() const;

                private:

                    /**
                     * 对象存储桶配置
                     */
                    CosStorageSource m_cos;
                    bool m_cosHasBeenSet;

                    /**
                     * 镜像卷配置
                     */
                    ImageStorageSource m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 文件存储配置
                     */
                    CfsStorageSource m_cfs;
                    bool m_cfsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_STORAGESOURCE_H_
