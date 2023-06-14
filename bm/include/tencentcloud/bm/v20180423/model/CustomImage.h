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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_CUSTOMIMAGE_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_CUSTOMIMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bm/v20180423/model/PartitionInfo.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
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
                     * 获取镜像别名
                     * @return ImageName 镜像别名
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像别名
                     * @param _imageName 镜像别名
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
                     * 获取镜像状态码
                     * @return ImageStatus 镜像状态码
                     * 
                     */
                    uint64_t GetImageStatus() const;

                    /**
                     * 设置镜像状态码
                     * @param _imageStatus 镜像状态码
                     * 
                     */
                    void SetImageStatus(const uint64_t& _imageStatus);

                    /**
                     * 判断参数 ImageStatus 是否已赋值
                     * @return ImageStatus 是否已赋值
                     * 
                     */
                    bool ImageStatusHasBeenSet() const;

                    /**
                     * 获取镜像OS名
                     * @return OsClass 镜像OS名
                     * 
                     */
                    std::string GetOsClass() const;

                    /**
                     * 设置镜像OS名
                     * @param _osClass 镜像OS名
                     * 
                     */
                    void SetOsClass(const std::string& _osClass);

                    /**
                     * 判断参数 OsClass 是否已赋值
                     * @return OsClass 是否已赋值
                     * 
                     */
                    bool OsClassHasBeenSet() const;

                    /**
                     * 获取镜像OS版本
                     * @return OsVersion 镜像OS版本
                     * 
                     */
                    std::string GetOsVersion() const;

                    /**
                     * 设置镜像OS版本
                     * @param _osVersion 镜像OS版本
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
                     * 获取OS是64还是32位
                     * @return OsBit OS是64还是32位
                     * 
                     */
                    uint64_t GetOsBit() const;

                    /**
                     * 设置OS是64还是32位
                     * @param _osBit OS是64还是32位
                     * 
                     */
                    void SetOsBit(const uint64_t& _osBit);

                    /**
                     * 判断参数 OsBit 是否已赋值
                     * @return OsBit 是否已赋值
                     * 
                     */
                    bool OsBitHasBeenSet() const;

                    /**
                     * 获取镜像大小(M)
                     * @return ImageSize 镜像大小(M)
                     * 
                     */
                    uint64_t GetImageSize() const;

                    /**
                     * 设置镜像大小(M)
                     * @param _imageSize 镜像大小(M)
                     * 
                     */
                    void SetImageSize(const uint64_t& _imageSize);

                    /**
                     * 判断参数 ImageSize 是否已赋值
                     * @return ImageSize 是否已赋值
                     * 
                     */
                    bool ImageSizeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取分区信息
                     * @return PartitionInfoSet 分区信息
                     * 
                     */
                    std::vector<PartitionInfo> GetPartitionInfoSet() const;

                    /**
                     * 设置分区信息
                     * @param _partitionInfoSet 分区信息
                     * 
                     */
                    void SetPartitionInfoSet(const std::vector<PartitionInfo>& _partitionInfoSet);

                    /**
                     * 判断参数 PartitionInfoSet 是否已赋值
                     * @return PartitionInfoSet 是否已赋值
                     * 
                     */
                    bool PartitionInfoSetHasBeenSet() const;

                    /**
                     * 获取适用机型
                     * @return DeviceClassCode 适用机型
                     * 
                     */
                    std::string GetDeviceClassCode() const;

                    /**
                     * 设置适用机型
                     * @param _deviceClassCode 适用机型
                     * 
                     */
                    void SetDeviceClassCode(const std::string& _deviceClassCode);

                    /**
                     * 判断参数 DeviceClassCode 是否已赋值
                     * @return DeviceClassCode 是否已赋值
                     * 
                     */
                    bool DeviceClassCodeHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return ImageDescription 备注
                     * 
                     */
                    std::string GetImageDescription() const;

                    /**
                     * 设置备注
                     * @param _imageDescription 备注
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
                     * 获取原始镜像id
                     * @return OsTypeId 原始镜像id
                     * 
                     */
                    uint64_t GetOsTypeId() const;

                    /**
                     * 设置原始镜像id
                     * @param _osTypeId 原始镜像id
                     * 
                     */
                    void SetOsTypeId(const uint64_t& _osTypeId);

                    /**
                     * 判断参数 OsTypeId 是否已赋值
                     * @return OsTypeId 是否已赋值
                     * 
                     */
                    bool OsTypeIdHasBeenSet() const;

                private:

                    /**
                     * 镜像ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 镜像别名
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 镜像状态码
                     */
                    uint64_t m_imageStatus;
                    bool m_imageStatusHasBeenSet;

                    /**
                     * 镜像OS名
                     */
                    std::string m_osClass;
                    bool m_osClassHasBeenSet;

                    /**
                     * 镜像OS版本
                     */
                    std::string m_osVersion;
                    bool m_osVersionHasBeenSet;

                    /**
                     * OS是64还是32位
                     */
                    uint64_t m_osBit;
                    bool m_osBitHasBeenSet;

                    /**
                     * 镜像大小(M)
                     */
                    uint64_t m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 分区信息
                     */
                    std::vector<PartitionInfo> m_partitionInfoSet;
                    bool m_partitionInfoSetHasBeenSet;

                    /**
                     * 适用机型
                     */
                    std::string m_deviceClassCode;
                    bool m_deviceClassCodeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_imageDescription;
                    bool m_imageDescriptionHasBeenSet;

                    /**
                     * 原始镜像id
                     */
                    uint64_t m_osTypeId;
                    bool m_osTypeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_CUSTOMIMAGE_H_
