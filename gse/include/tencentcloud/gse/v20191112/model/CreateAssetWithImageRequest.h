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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_CREATEASSETWITHIMAGEREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_CREATEASSETWITHIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * CreateAssetWithImage请求参数结构体
                */
                class CreateAssetWithImageRequest : public AbstractModel
                {
                public:
                    CreateAssetWithImageRequest();
                    ~CreateAssetWithImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取生成包名字，最小长度为1，最大长度为64
                     * @return AssetName 生成包名字，最小长度为1，最大长度为64
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置生成包名字，最小长度为1，最大长度为64
                     * @param _assetName 生成包名字，最小长度为1，最大长度为64
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取生成包版本，最小长度为1，最大长度为64
                     * @return AssetVersion 生成包版本，最小长度为1，最大长度为64
                     * 
                     */
                    std::string GetAssetVersion() const;

                    /**
                     * 设置生成包版本，最小长度为1，最大长度为64
                     * @param _assetVersion 生成包版本，最小长度为1，最大长度为64
                     * 
                     */
                    void SetAssetVersion(const std::string& _assetVersion);

                    /**
                     * 判断参数 AssetVersion 是否已赋值
                     * @return AssetVersion 是否已赋值
                     * 
                     */
                    bool AssetVersionHasBeenSet() const;

                    /**
                     * 获取生成包所在地域，详见产品支持的 [地域列表](https://cloud.tencent.com/document/api/1165/42053#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8)
                     * @return AssetRegion 生成包所在地域，详见产品支持的 [地域列表](https://cloud.tencent.com/document/api/1165/42053#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8)
                     * 
                     */
                    std::string GetAssetRegion() const;

                    /**
                     * 设置生成包所在地域，详见产品支持的 [地域列表](https://cloud.tencent.com/document/api/1165/42053#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8)
                     * @param _assetRegion 生成包所在地域，详见产品支持的 [地域列表](https://cloud.tencent.com/document/api/1165/42053#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8)
                     * 
                     */
                    void SetAssetRegion(const std::string& _assetRegion);

                    /**
                     * 判断参数 AssetRegion 是否已赋值
                     * @return AssetRegion 是否已赋值
                     * 
                     */
                    bool AssetRegionHasBeenSet() const;

                    /**
                     * 获取生成包支持的操作系统镜像id
                     * @return ImageId 生成包支持的操作系统镜像id
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置生成包支持的操作系统镜像id
                     * @param _imageId 生成包支持的操作系统镜像id
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
                     * 获取操作系统镜像包大小，比如：40GB，支持单位 KB、MB、GB
                     * @return ImageSize 操作系统镜像包大小，比如：40GB，支持单位 KB、MB、GB
                     * 
                     */
                    std::string GetImageSize() const;

                    /**
                     * 设置操作系统镜像包大小，比如：40GB，支持单位 KB、MB、GB
                     * @param _imageSize 操作系统镜像包大小，比如：40GB，支持单位 KB、MB、GB
                     * 
                     */
                    void SetImageSize(const std::string& _imageSize);

                    /**
                     * 判断参数 ImageSize 是否已赋值
                     * @return ImageSize 是否已赋值
                     * 
                     */
                    bool ImageSizeHasBeenSet() const;

                    /**
                     * 获取操作系统镜像包名称，最小长度为1，最大长度为64
                     * @return ImageOs 操作系统镜像包名称，最小长度为1，最大长度为64
                     * 
                     */
                    std::string GetImageOs() const;

                    /**
                     * 设置操作系统镜像包名称，最小长度为1，最大长度为64
                     * @param _imageOs 操作系统镜像包名称，最小长度为1，最大长度为64
                     * 
                     */
                    void SetImageOs(const std::string& _imageOs);

                    /**
                     * 判断参数 ImageOs 是否已赋值
                     * @return ImageOs 是否已赋值
                     * 
                     */
                    bool ImageOsHasBeenSet() const;

                    /**
                     * 获取操作系统镜像包类型，CentOS 或者 Windows
                     * @return OsType 操作系统镜像包类型，CentOS 或者 Windows
                     * 
                     */
                    std::string GetOsType() const;

                    /**
                     * 设置操作系统镜像包类型，CentOS 或者 Windows
                     * @param _osType 操作系统镜像包类型，CentOS 或者 Windows
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
                     * 获取操作系统镜像包类型，当前只支持 SHARED_IMAGE
                     * @return ImageType 操作系统镜像包类型，当前只支持 SHARED_IMAGE
                     * 
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置操作系统镜像包类型，当前只支持 SHARED_IMAGE
                     * @param _imageType 操作系统镜像包类型，当前只支持 SHARED_IMAGE
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
                     * 获取操作系统镜像包位数，32 或者 64
                     * @return OsBit 操作系统镜像包位数，32 或者 64
                     * 
                     */
                    uint64_t GetOsBit() const;

                    /**
                     * 设置操作系统镜像包位数，32 或者 64
                     * @param _osBit 操作系统镜像包位数，32 或者 64
                     * 
                     */
                    void SetOsBit(const uint64_t& _osBit);

                    /**
                     * 判断参数 OsBit 是否已赋值
                     * @return OsBit 是否已赋值
                     * 
                     */
                    bool OsBitHasBeenSet() const;

                private:

                    /**
                     * 生成包名字，最小长度为1，最大长度为64
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 生成包版本，最小长度为1，最大长度为64
                     */
                    std::string m_assetVersion;
                    bool m_assetVersionHasBeenSet;

                    /**
                     * 生成包所在地域，详见产品支持的 [地域列表](https://cloud.tencent.com/document/api/1165/42053#.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8)
                     */
                    std::string m_assetRegion;
                    bool m_assetRegionHasBeenSet;

                    /**
                     * 生成包支持的操作系统镜像id
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 操作系统镜像包大小，比如：40GB，支持单位 KB、MB、GB
                     */
                    std::string m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * 操作系统镜像包名称，最小长度为1，最大长度为64
                     */
                    std::string m_imageOs;
                    bool m_imageOsHasBeenSet;

                    /**
                     * 操作系统镜像包类型，CentOS 或者 Windows
                     */
                    std::string m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * 操作系统镜像包类型，当前只支持 SHARED_IMAGE
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * 操作系统镜像包位数，32 或者 64
                     */
                    uint64_t m_osBit;
                    bool m_osBitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_CREATEASSETWITHIMAGEREQUEST_H_
