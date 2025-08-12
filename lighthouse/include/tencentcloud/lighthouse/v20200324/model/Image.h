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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_IMAGE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_IMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * CVM镜像信息。
                */
                class Image : public AbstractModel
                {
                public:
                    Image();
                    ~Image() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CVM镜像 ID ，是Image的唯一标识。
                     * @return ImageId CVM镜像 ID ，是Image的唯一标识。
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置CVM镜像 ID ，是Image的唯一标识。
                     * @param _imageId CVM镜像 ID ，是Image的唯一标识。
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取镜像名称。
                     * @return ImageName 镜像名称。
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名称。
                     * @param _imageName 镜像名称。
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取镜像描述。
                     * @return ImageDescription 镜像描述。
                     * 
                     */
                    std::string GetImageDescription() const;

                    /**
                     * 设置镜像描述。
                     * @param _imageDescription 镜像描述。
                     * 
                     */
                    void SetImageDescription(const std::string& _imageDescription);

                    /**
                     * 判断参数 ImageDescription 是否已赋值
                     * @return ImageDescription 是否已赋值
                     * 
                     */
                    bool ImageDescriptionHasBeenSet() const;

                    /**
                     * 获取镜像大小。单位GB。
                     * @return ImageSize 镜像大小。单位GB。
                     * 
                     */
                    int64_t GetImageSize() const;

                    /**
                     * 设置镜像大小。单位GB。
                     * @param _imageSize 镜像大小。单位GB。
                     * 
                     */
                    void SetImageSize(const int64_t& _imageSize);

                    /**
                     * 判断参数 ImageSize 是否已赋值
                     * @return ImageSize 是否已赋值
                     * 
                     */
                    bool ImageSizeHasBeenSet() const;

                    /**
                     * 获取镜像来源。
<li>CREATE_IMAGE：自定义镜像</li>
<li>EXTERNAL_IMPORT：外部导入镜像</li>
                     * @return ImageSource 镜像来源。
<li>CREATE_IMAGE：自定义镜像</li>
<li>EXTERNAL_IMPORT：外部导入镜像</li>
                     * 
                     */
                    std::string GetImageSource() const;

                    /**
                     * 设置镜像来源。
<li>CREATE_IMAGE：自定义镜像</li>
<li>EXTERNAL_IMPORT：外部导入镜像</li>
                     * @param _imageSource 镜像来源。
<li>CREATE_IMAGE：自定义镜像</li>
<li>EXTERNAL_IMPORT：外部导入镜像</li>
                     * 
                     */
                    void SetImageSource(const std::string& _imageSource);

                    /**
                     * 判断参数 ImageSource 是否已赋值
                     * @return ImageSource 是否已赋值
                     * 
                     */
                    bool ImageSourceHasBeenSet() const;

                    /**
                     * 获取镜像分类
<li>SystemImage：系统盘镜像</li>
<li>InstanceImage：整机镜像</li>
                     * @return ImageClass 镜像分类
<li>SystemImage：系统盘镜像</li>
<li>InstanceImage：整机镜像</li>
                     * 
                     */
                    std::string GetImageClass() const;

                    /**
                     * 设置镜像分类
<li>SystemImage：系统盘镜像</li>
<li>InstanceImage：整机镜像</li>
                     * @param _imageClass 镜像分类
<li>SystemImage：系统盘镜像</li>
<li>InstanceImage：整机镜像</li>
                     * 
                     */
                    void SetImageClass(const std::string& _imageClass);

                    /**
                     * 判断参数 ImageClass 是否已赋值
                     * @return ImageClass 是否已赋值
                     * 
                     */
                    bool ImageClassHasBeenSet() const;

                    /**
                     * 获取镜像状态
CREATING:创建中
NORMAL:正常
CREATEFAILED:创建失败
USING:使用中
SYNCING:同步中
IMPORTING:导入中
IMPORTFAILED:导入失败
                     * @return ImageState 镜像状态
CREATING:创建中
NORMAL:正常
CREATEFAILED:创建失败
USING:使用中
SYNCING:同步中
IMPORTING:导入中
IMPORTFAILED:导入失败
                     * 
                     */
                    std::string GetImageState() const;

                    /**
                     * 设置镜像状态
CREATING:创建中
NORMAL:正常
CREATEFAILED:创建失败
USING:使用中
SYNCING:同步中
IMPORTING:导入中
IMPORTFAILED:导入失败
                     * @param _imageState 镜像状态
CREATING:创建中
NORMAL:正常
CREATEFAILED:创建失败
USING:使用中
SYNCING:同步中
IMPORTING:导入中
IMPORTFAILED:导入失败
                     * 
                     */
                    void SetImageState(const std::string& _imageState);

                    /**
                     * 判断参数 ImageState 是否已赋值
                     * @return ImageState 是否已赋值
                     * 
                     */
                    bool ImageStateHasBeenSet() const;

                    /**
                     * 获取镜像是否支持Cloudinit。
                     * @return IsSupportCloudinit 镜像是否支持Cloudinit。
                     * 
                     */
                    bool GetIsSupportCloudinit() const;

                    /**
                     * 设置镜像是否支持Cloudinit。
                     * @param _isSupportCloudinit 镜像是否支持Cloudinit。
                     * 
                     */
                    void SetIsSupportCloudinit(const bool& _isSupportCloudinit);

                    /**
                     * 判断参数 IsSupportCloudinit 是否已赋值
                     * @return IsSupportCloudinit 是否已赋值
                     * 
                     */
                    bool IsSupportCloudinitHasBeenSet() const;

                    /**
                     * 获取镜像架构。
                     * @return Architecture 镜像架构。
                     * 
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 设置镜像架构。
                     * @param _architecture 镜像架构。
                     * 
                     */
                    void SetArchitecture(const std::string& _architecture);

                    /**
                     * 判断参数 Architecture 是否已赋值
                     * @return Architecture 是否已赋值
                     * 
                     */
                    bool ArchitectureHasBeenSet() const;

                    /**
                     * 获取镜像操作系统。
                     * @return OsName 镜像操作系统。
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置镜像操作系统。
                     * @param _osName 镜像操作系统。
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取镜像来源平台。
                     * @return Platform 镜像来源平台。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置镜像来源平台。
                     * @param _platform 镜像来源平台。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取镜像创建时间。
                     * @return CreatedTime 镜像创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置镜像创建时间。
                     * @param _createdTime 镜像创建时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取镜像是否可共享到轻量应用服务器。
                     * @return IsShareable 镜像是否可共享到轻量应用服务器。
                     * 
                     */
                    bool GetIsShareable() const;

                    /**
                     * 设置镜像是否可共享到轻量应用服务器。
                     * @param _isShareable 镜像是否可共享到轻量应用服务器。
                     * 
                     */
                    void SetIsShareable(const bool& _isShareable);

                    /**
                     * 判断参数 IsShareable 是否已赋值
                     * @return IsShareable 是否已赋值
                     * 
                     */
                    bool IsShareableHasBeenSet() const;

                    /**
                     * 获取不可共享的原因。
                     * @return UnshareableReason 不可共享的原因。
                     * 
                     */
                    std::string GetUnshareableReason() const;

                    /**
                     * 设置不可共享的原因。
                     * @param _unshareableReason 不可共享的原因。
                     * 
                     */
                    void SetUnshareableReason(const std::string& _unshareableReason);

                    /**
                     * 判断参数 UnshareableReason 是否已赋值
                     * @return UnshareableReason 是否已赋值
                     * 
                     */
                    bool UnshareableReasonHasBeenSet() const;

                private:

                    /**
                     * CVM镜像 ID ，是Image的唯一标识。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 镜像名称。
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 镜像描述。
                     */
                    std::string m_imageDescription;
                    bool m_imageDescriptionHasBeenSet;

                    /**
                     * 镜像大小。单位GB。
                     */
                    int64_t m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * 镜像来源。
<li>CREATE_IMAGE：自定义镜像</li>
<li>EXTERNAL_IMPORT：外部导入镜像</li>
                     */
                    std::string m_imageSource;
                    bool m_imageSourceHasBeenSet;

                    /**
                     * 镜像分类
<li>SystemImage：系统盘镜像</li>
<li>InstanceImage：整机镜像</li>
                     */
                    std::string m_imageClass;
                    bool m_imageClassHasBeenSet;

                    /**
                     * 镜像状态
CREATING:创建中
NORMAL:正常
CREATEFAILED:创建失败
USING:使用中
SYNCING:同步中
IMPORTING:导入中
IMPORTFAILED:导入失败
                     */
                    std::string m_imageState;
                    bool m_imageStateHasBeenSet;

                    /**
                     * 镜像是否支持Cloudinit。
                     */
                    bool m_isSupportCloudinit;
                    bool m_isSupportCloudinitHasBeenSet;

                    /**
                     * 镜像架构。
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * 镜像操作系统。
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * 镜像来源平台。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 镜像创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 镜像是否可共享到轻量应用服务器。
                     */
                    bool m_isShareable;
                    bool m_isShareableHasBeenSet;

                    /**
                     * 不可共享的原因。
                     */
                    std::string m_unshareableReason;
                    bool m_unshareableReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_IMAGE_H_
