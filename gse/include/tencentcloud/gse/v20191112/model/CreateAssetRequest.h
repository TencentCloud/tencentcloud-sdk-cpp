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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_CREATEASSETREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_CREATEASSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/Tag.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * CreateAsset请求参数结构体
                */
                class CreateAssetRequest : public AbstractModel
                {
                public:
                    CreateAssetRequest();
                    ~CreateAssetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取生成包的ZIP包名，例如：server.zip
                     * @return BucketKey 生成包的ZIP包名，例如：server.zip
                     * 
                     */
                    std::string GetBucketKey() const;

                    /**
                     * 设置生成包的ZIP包名，例如：server.zip
                     * @param _bucketKey 生成包的ZIP包名，例如：server.zip
                     * 
                     */
                    void SetBucketKey(const std::string& _bucketKey);

                    /**
                     * 判断参数 BucketKey 是否已赋值
                     * @return BucketKey 是否已赋值
                     * 
                     */
                    bool BucketKeyHasBeenSet() const;

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
                     * 获取生成包可运行的操作系统，若传入参数为CentOS7.16则不需要传入ImageId字段，否则，需要传入Imageid字段（该方式是为了兼容之前的版本，后续建议使用ImageId来替代该字段）。这里可通过[DescribeAssetSystems](https://cloud.tencent.com/document/product/1165/49191)接口获取asset支持的操作系统进行传入（使用AssetSupportSys的OsVersion字段）
                     * @return OperateSystem 生成包可运行的操作系统，若传入参数为CentOS7.16则不需要传入ImageId字段，否则，需要传入Imageid字段（该方式是为了兼容之前的版本，后续建议使用ImageId来替代该字段）。这里可通过[DescribeAssetSystems](https://cloud.tencent.com/document/product/1165/49191)接口获取asset支持的操作系统进行传入（使用AssetSupportSys的OsVersion字段）
                     * 
                     */
                    std::string GetOperateSystem() const;

                    /**
                     * 设置生成包可运行的操作系统，若传入参数为CentOS7.16则不需要传入ImageId字段，否则，需要传入Imageid字段（该方式是为了兼容之前的版本，后续建议使用ImageId来替代该字段）。这里可通过[DescribeAssetSystems](https://cloud.tencent.com/document/product/1165/49191)接口获取asset支持的操作系统进行传入（使用AssetSupportSys的OsVersion字段）
                     * @param _operateSystem 生成包可运行的操作系统，若传入参数为CentOS7.16则不需要传入ImageId字段，否则，需要传入Imageid字段（该方式是为了兼容之前的版本，后续建议使用ImageId来替代该字段）。这里可通过[DescribeAssetSystems](https://cloud.tencent.com/document/product/1165/49191)接口获取asset支持的操作系统进行传入（使用AssetSupportSys的OsVersion字段）
                     * 
                     */
                    void SetOperateSystem(const std::string& _operateSystem);

                    /**
                     * 判断参数 OperateSystem 是否已赋值
                     * @return OperateSystem 是否已赋值
                     * 
                     */
                    bool OperateSystemHasBeenSet() const;

                    /**
                     * 获取生成包支持的操作系统镜像id，若传入OperateSystem字段的值是CentOS7.16，则不需要传入该值；如果不是，则需要通过[DescribeAssetSystems](https://cloud.tencent.com/document/product/1165/49191)接口获取asset支持的操作系统ImageId进行传入
                     * @return ImageId 生成包支持的操作系统镜像id，若传入OperateSystem字段的值是CentOS7.16，则不需要传入该值；如果不是，则需要通过[DescribeAssetSystems](https://cloud.tencent.com/document/product/1165/49191)接口获取asset支持的操作系统ImageId进行传入
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置生成包支持的操作系统镜像id，若传入OperateSystem字段的值是CentOS7.16，则不需要传入该值；如果不是，则需要通过[DescribeAssetSystems](https://cloud.tencent.com/document/product/1165/49191)接口获取asset支持的操作系统ImageId进行传入
                     * @param _imageId 生成包支持的操作系统镜像id，若传入OperateSystem字段的值是CentOS7.16，则不需要传入该值；如果不是，则需要通过[DescribeAssetSystems](https://cloud.tencent.com/document/product/1165/49191)接口获取asset支持的操作系统ImageId进行传入
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
                     * 获取标签列表，最大长度50组
                     * @return Tags 标签列表，最大长度50组
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表，最大长度50组
                     * @param _tags 标签列表，最大长度50组
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 生成包的ZIP包名，例如：server.zip
                     */
                    std::string m_bucketKey;
                    bool m_bucketKeyHasBeenSet;

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
                     * 生成包可运行的操作系统，若传入参数为CentOS7.16则不需要传入ImageId字段，否则，需要传入Imageid字段（该方式是为了兼容之前的版本，后续建议使用ImageId来替代该字段）。这里可通过[DescribeAssetSystems](https://cloud.tencent.com/document/product/1165/49191)接口获取asset支持的操作系统进行传入（使用AssetSupportSys的OsVersion字段）
                     */
                    std::string m_operateSystem;
                    bool m_operateSystemHasBeenSet;

                    /**
                     * 生成包支持的操作系统镜像id，若传入OperateSystem字段的值是CentOS7.16，则不需要传入该值；如果不是，则需要通过[DescribeAssetSystems](https://cloud.tencent.com/document/product/1165/49191)接口获取asset支持的操作系统ImageId进行传入
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 标签列表，最大长度50组
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_CREATEASSETREQUEST_H_
