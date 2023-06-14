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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_IMAGE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_IMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/SrcImage.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 镜像信息
                */
                class Image : public AbstractModel
                {
                public:
                    Image();
                    ~Image() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像ID
                     * @return ImageId 镜像ID
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像ID
                     * @param _imageId 镜像ID
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
                     * 获取镜像名称
                     * @return ImageName 镜像名称
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名称
                     * @param _imageName 镜像名称
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
                     * 获取镜像状态
                     * @return ImageState 镜像状态
                     * 
                     */
                    std::string GetImageState() const;

                    /**
                     * 设置镜像状态
                     * @param _imageState 镜像状态
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
                     * 获取镜像类型
                     * @return ImageType 镜像类型
                     * 
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置镜像类型
                     * @param _imageType 镜像类型
                     * 
                     */
                    void SetImageType(const std::string& _imageType);

                    /**
                     * 判断参数 ImageType 是否已赋值
                     * @return ImageType 是否已赋值
                     * 
                     */
                    bool ImageTypeHasBeenSet() const;

                    /**
                     * 获取操作系统名称
                     * @return ImageOsName 操作系统名称
                     * 
                     */
                    std::string GetImageOsName() const;

                    /**
                     * 设置操作系统名称
                     * @param _imageOsName 操作系统名称
                     * 
                     */
                    void SetImageOsName(const std::string& _imageOsName);

                    /**
                     * 判断参数 ImageOsName 是否已赋值
                     * @return ImageOsName 是否已赋值
                     * 
                     */
                    bool ImageOsNameHasBeenSet() const;

                    /**
                     * 获取镜像描述
                     * @return ImageDescription 镜像描述
                     * 
                     */
                    std::string GetImageDescription() const;

                    /**
                     * 设置镜像描述
                     * @param _imageDescription 镜像描述
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
                     * 获取镜像导入时间
                     * @return ImageCreateTime 镜像导入时间
                     * 
                     */
                    std::string GetImageCreateTime() const;

                    /**
                     * 设置镜像导入时间
                     * @param _imageCreateTime 镜像导入时间
                     * 
                     */
                    void SetImageCreateTime(const std::string& _imageCreateTime);

                    /**
                     * 判断参数 ImageCreateTime 是否已赋值
                     * @return ImageCreateTime 是否已赋值
                     * 
                     */
                    bool ImageCreateTimeHasBeenSet() const;

                    /**
                     * 获取操作系统位数
                     * @return Architecture 操作系统位数
                     * 
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 设置操作系统位数
                     * @param _architecture 操作系统位数
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
                     * 获取操作系统类型
                     * @return OsType 操作系统类型
                     * 
                     */
                    std::string GetOsType() const;

                    /**
                     * 设置操作系统类型
                     * @param _osType 操作系统类型
                     * 
                     */
                    void SetOsType(const std::string& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取操作系统版本
                     * @return OsVersion 操作系统版本
                     * 
                     */
                    std::string GetOsVersion() const;

                    /**
                     * 设置操作系统版本
                     * @param _osVersion 操作系统版本
                     * 
                     */
                    void SetOsVersion(const std::string& _osVersion);

                    /**
                     * 判断参数 OsVersion 是否已赋值
                     * @return OsVersion 是否已赋值
                     * 
                     */
                    bool OsVersionHasBeenSet() const;

                    /**
                     * 获取操作系统平台
                     * @return Platform 操作系统平台
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置操作系统平台
                     * @param _platform 操作系统平台
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
                     * 获取镜像所有者
                     * @return ImageOwner 镜像所有者
                     * 
                     */
                    int64_t GetImageOwner() const;

                    /**
                     * 设置镜像所有者
                     * @param _imageOwner 镜像所有者
                     * 
                     */
                    void SetImageOwner(const int64_t& _imageOwner);

                    /**
                     * 判断参数 ImageOwner 是否已赋值
                     * @return ImageOwner 是否已赋值
                     * 
                     */
                    bool ImageOwnerHasBeenSet() const;

                    /**
                     * 获取镜像大小。单位：GB
                     * @return ImageSize 镜像大小。单位：GB
                     * 
                     */
                    int64_t GetImageSize() const;

                    /**
                     * 设置镜像大小。单位：GB
                     * @param _imageSize 镜像大小。单位：GB
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
                     * 获取镜像来源信息
                     * @return SrcImage 镜像来源信息
                     * 
                     */
                    SrcImage GetSrcImage() const;

                    /**
                     * 设置镜像来源信息
                     * @param _srcImage 镜像来源信息
                     * 
                     */
                    void SetSrcImage(const SrcImage& _srcImage);

                    /**
                     * 判断参数 SrcImage 是否已赋值
                     * @return SrcImage 是否已赋值
                     * 
                     */
                    bool SrcImageHasBeenSet() const;

                    /**
                     * 获取镜像来源类型
                     * @return ImageSource 镜像来源类型
                     * 
                     */
                    std::string GetImageSource() const;

                    /**
                     * 设置镜像来源类型
                     * @param _imageSource 镜像来源类型
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
                     * 获取中间态和失败时候的任务ID
                     * @return TaskId 中间态和失败时候的任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置中间态和失败时候的任务ID
                     * @param _taskId 中间态和失败时候的任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取是否支持CloudInit
                     * @return IsSupportCloudInit 是否支持CloudInit
                     * 
                     */
                    bool GetIsSupportCloudInit() const;

                    /**
                     * 设置是否支持CloudInit
                     * @param _isSupportCloudInit 是否支持CloudInit
                     * 
                     */
                    void SetIsSupportCloudInit(const bool& _isSupportCloudInit);

                    /**
                     * 判断参数 IsSupportCloudInit 是否已赋值
                     * @return IsSupportCloudInit 是否已赋值
                     * 
                     */
                    bool IsSupportCloudInitHasBeenSet() const;

                private:

                    /**
                     * 镜像ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 镜像名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 镜像状态
                     */
                    std::string m_imageState;
                    bool m_imageStateHasBeenSet;

                    /**
                     * 镜像类型
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * 操作系统名称
                     */
                    std::string m_imageOsName;
                    bool m_imageOsNameHasBeenSet;

                    /**
                     * 镜像描述
                     */
                    std::string m_imageDescription;
                    bool m_imageDescriptionHasBeenSet;

                    /**
                     * 镜像导入时间
                     */
                    std::string m_imageCreateTime;
                    bool m_imageCreateTimeHasBeenSet;

                    /**
                     * 操作系统位数
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * 操作系统类型
                     */
                    std::string m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * 操作系统版本
                     */
                    std::string m_osVersion;
                    bool m_osVersionHasBeenSet;

                    /**
                     * 操作系统平台
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 镜像所有者
                     */
                    int64_t m_imageOwner;
                    bool m_imageOwnerHasBeenSet;

                    /**
                     * 镜像大小。单位：GB
                     */
                    int64_t m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * 镜像来源信息
                     */
                    SrcImage m_srcImage;
                    bool m_srcImageHasBeenSet;

                    /**
                     * 镜像来源类型
                     */
                    std::string m_imageSource;
                    bool m_imageSourceHasBeenSet;

                    /**
                     * 中间态和失败时候的任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 是否支持CloudInit
                     */
                    bool m_isSupportCloudInit;
                    bool m_isSupportCloudInitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_IMAGE_H_
