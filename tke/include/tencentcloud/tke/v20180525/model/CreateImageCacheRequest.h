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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATEIMAGECACHEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATEIMAGECACHEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ImageRegistryCredential.h>
#include <tencentcloud/tke/v20180525/model/EipAttribute.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateImageCache请求参数结构体
                */
                class CreateImageCacheRequest : public AbstractModel
                {
                public:
                    CreateImageCacheRequest();
                    ~CreateImageCacheRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用于制作镜像缓存的容器镜像列表
                     * @return Images 用于制作镜像缓存的容器镜像列表
                     * 
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 设置用于制作镜像缓存的容器镜像列表
                     * @param _images 用于制作镜像缓存的容器镜像列表
                     * 
                     */
                    void SetImages(const std::vector<std::string>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取实例所属子网 ID
                     * @return SubnetId 实例所属子网 ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置实例所属子网 ID
                     * @param _subnetId 实例所属子网 ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取实例所属 VPC ID
                     * @return VpcId 实例所属 VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置实例所属 VPC ID
                     * @param _vpcId 实例所属 VPC ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取镜像缓存名称
                     * @return ImageCacheName 镜像缓存名称
                     * 
                     */
                    std::string GetImageCacheName() const;

                    /**
                     * 设置镜像缓存名称
                     * @param _imageCacheName 镜像缓存名称
                     * 
                     */
                    void SetImageCacheName(const std::string& _imageCacheName);

                    /**
                     * 判断参数 ImageCacheName 是否已赋值
                     * @return ImageCacheName 是否已赋值
                     * 
                     */
                    bool ImageCacheNameHasBeenSet() const;

                    /**
                     * 获取安全组 ID
                     * @return SecurityGroupIds 安全组 ID
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组 ID
                     * @param _securityGroupIds 安全组 ID
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取镜像仓库凭证数组
                     * @return ImageRegistryCredentials 镜像仓库凭证数组
                     * 
                     */
                    std::vector<ImageRegistryCredential> GetImageRegistryCredentials() const;

                    /**
                     * 设置镜像仓库凭证数组
                     * @param _imageRegistryCredentials 镜像仓库凭证数组
                     * 
                     */
                    void SetImageRegistryCredentials(const std::vector<ImageRegistryCredential>& _imageRegistryCredentials);

                    /**
                     * 判断参数 ImageRegistryCredentials 是否已赋值
                     * @return ImageRegistryCredentials 是否已赋值
                     * 
                     */
                    bool ImageRegistryCredentialsHasBeenSet() const;

                    /**
                     * 获取用来绑定容器实例的已有EIP
                     * @return ExistedEipId 用来绑定容器实例的已有EIP
                     * 
                     */
                    std::string GetExistedEipId() const;

                    /**
                     * 设置用来绑定容器实例的已有EIP
                     * @param _existedEipId 用来绑定容器实例的已有EIP
                     * 
                     */
                    void SetExistedEipId(const std::string& _existedEipId);

                    /**
                     * 判断参数 ExistedEipId 是否已赋值
                     * @return ExistedEipId 是否已赋值
                     * 
                     */
                    bool ExistedEipIdHasBeenSet() const;

                    /**
                     * 获取是否为容器实例自动创建EIP，默认为false。若传true，则此参数和ExistedEipIds互斥
                     * @return AutoCreateEip 是否为容器实例自动创建EIP，默认为false。若传true，则此参数和ExistedEipIds互斥
                     * 
                     */
                    bool GetAutoCreateEip() const;

                    /**
                     * 设置是否为容器实例自动创建EIP，默认为false。若传true，则此参数和ExistedEipIds互斥
                     * @param _autoCreateEip 是否为容器实例自动创建EIP，默认为false。若传true，则此参数和ExistedEipIds互斥
                     * 
                     */
                    void SetAutoCreateEip(const bool& _autoCreateEip);

                    /**
                     * 判断参数 AutoCreateEip 是否已赋值
                     * @return AutoCreateEip 是否已赋值
                     * 
                     */
                    bool AutoCreateEipHasBeenSet() const;

                    /**
                     * 获取自动创建EIP的可选参数。若传此参数，则会自动创建EIP。
另外此参数和ExistedEipIds互斥
                     * @return AutoCreateEipAttribute 自动创建EIP的可选参数。若传此参数，则会自动创建EIP。
另外此参数和ExistedEipIds互斥
                     * 
                     */
                    EipAttribute GetAutoCreateEipAttribute() const;

                    /**
                     * 设置自动创建EIP的可选参数。若传此参数，则会自动创建EIP。
另外此参数和ExistedEipIds互斥
                     * @param _autoCreateEipAttribute 自动创建EIP的可选参数。若传此参数，则会自动创建EIP。
另外此参数和ExistedEipIds互斥
                     * 
                     */
                    void SetAutoCreateEipAttribute(const EipAttribute& _autoCreateEipAttribute);

                    /**
                     * 判断参数 AutoCreateEipAttribute 是否已赋值
                     * @return AutoCreateEipAttribute 是否已赋值
                     * 
                     */
                    bool AutoCreateEipAttributeHasBeenSet() const;

                    /**
                     * 获取镜像缓存的大小。默认为20 GiB。取值范围参考[云硬盘类型](https://cloud.tencent.com/document/product/362/2353)中的高性能云盘类型的大小限制。
                     * @return ImageCacheSize 镜像缓存的大小。默认为20 GiB。取值范围参考[云硬盘类型](https://cloud.tencent.com/document/product/362/2353)中的高性能云盘类型的大小限制。
                     * 
                     */
                    uint64_t GetImageCacheSize() const;

                    /**
                     * 设置镜像缓存的大小。默认为20 GiB。取值范围参考[云硬盘类型](https://cloud.tencent.com/document/product/362/2353)中的高性能云盘类型的大小限制。
                     * @param _imageCacheSize 镜像缓存的大小。默认为20 GiB。取值范围参考[云硬盘类型](https://cloud.tencent.com/document/product/362/2353)中的高性能云盘类型的大小限制。
                     * 
                     */
                    void SetImageCacheSize(const uint64_t& _imageCacheSize);

                    /**
                     * 判断参数 ImageCacheSize 是否已赋值
                     * @return ImageCacheSize 是否已赋值
                     * 
                     */
                    bool ImageCacheSizeHasBeenSet() const;

                    /**
                     * 获取镜像缓存保留时间天数，过期将会自动清理，默认为0，永不过期。
                     * @return RetentionDays 镜像缓存保留时间天数，过期将会自动清理，默认为0，永不过期。
                     * 
                     */
                    uint64_t GetRetentionDays() const;

                    /**
                     * 设置镜像缓存保留时间天数，过期将会自动清理，默认为0，永不过期。
                     * @param _retentionDays 镜像缓存保留时间天数，过期将会自动清理，默认为0，永不过期。
                     * 
                     */
                    void SetRetentionDays(const uint64_t& _retentionDays);

                    /**
                     * 判断参数 RetentionDays 是否已赋值
                     * @return RetentionDays 是否已赋值
                     * 
                     */
                    bool RetentionDaysHasBeenSet() const;

                    /**
                     * 获取指定拉取镜像仓库的镜像时不校验证书。如["harbor.example.com"]。
                     * @return RegistrySkipVerifyList 指定拉取镜像仓库的镜像时不校验证书。如["harbor.example.com"]。
                     * 
                     */
                    std::vector<std::string> GetRegistrySkipVerifyList() const;

                    /**
                     * 设置指定拉取镜像仓库的镜像时不校验证书。如["harbor.example.com"]。
                     * @param _registrySkipVerifyList 指定拉取镜像仓库的镜像时不校验证书。如["harbor.example.com"]。
                     * 
                     */
                    void SetRegistrySkipVerifyList(const std::vector<std::string>& _registrySkipVerifyList);

                    /**
                     * 判断参数 RegistrySkipVerifyList 是否已赋值
                     * @return RegistrySkipVerifyList 是否已赋值
                     * 
                     */
                    bool RegistrySkipVerifyListHasBeenSet() const;

                    /**
                     * 获取指定拉取镜像仓库的镜像时使用 HTTP 协议。如["harbor.example.com"]。
                     * @return RegistryHttpEndPointList 指定拉取镜像仓库的镜像时使用 HTTP 协议。如["harbor.example.com"]。
                     * 
                     */
                    std::vector<std::string> GetRegistryHttpEndPointList() const;

                    /**
                     * 设置指定拉取镜像仓库的镜像时使用 HTTP 协议。如["harbor.example.com"]。
                     * @param _registryHttpEndPointList 指定拉取镜像仓库的镜像时使用 HTTP 协议。如["harbor.example.com"]。
                     * 
                     */
                    void SetRegistryHttpEndPointList(const std::vector<std::string>& _registryHttpEndPointList);

                    /**
                     * 判断参数 RegistryHttpEndPointList 是否已赋值
                     * @return RegistryHttpEndPointList 是否已赋值
                     * 
                     */
                    bool RegistryHttpEndPointListHasBeenSet() const;

                    /**
                     * 获取自定义制作镜像缓存过程中容器实例的宿主机上的 DNS。如：
"nameserver 4.4.4.4\nnameserver 8.8.8.8"
                     * @return ResolveConfig 自定义制作镜像缓存过程中容器实例的宿主机上的 DNS。如：
"nameserver 4.4.4.4\nnameserver 8.8.8.8"
                     * 
                     */
                    std::string GetResolveConfig() const;

                    /**
                     * 设置自定义制作镜像缓存过程中容器实例的宿主机上的 DNS。如：
"nameserver 4.4.4.4\nnameserver 8.8.8.8"
                     * @param _resolveConfig 自定义制作镜像缓存过程中容器实例的宿主机上的 DNS。如：
"nameserver 4.4.4.4\nnameserver 8.8.8.8"
                     * 
                     */
                    void SetResolveConfig(const std::string& _resolveConfig);

                    /**
                     * 判断参数 ResolveConfig 是否已赋值
                     * @return ResolveConfig 是否已赋值
                     * 
                     */
                    bool ResolveConfigHasBeenSet() const;

                private:

                    /**
                     * 用于制作镜像缓存的容器镜像列表
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * 实例所属子网 ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 实例所属 VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 镜像缓存名称
                     */
                    std::string m_imageCacheName;
                    bool m_imageCacheNameHasBeenSet;

                    /**
                     * 安全组 ID
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 镜像仓库凭证数组
                     */
                    std::vector<ImageRegistryCredential> m_imageRegistryCredentials;
                    bool m_imageRegistryCredentialsHasBeenSet;

                    /**
                     * 用来绑定容器实例的已有EIP
                     */
                    std::string m_existedEipId;
                    bool m_existedEipIdHasBeenSet;

                    /**
                     * 是否为容器实例自动创建EIP，默认为false。若传true，则此参数和ExistedEipIds互斥
                     */
                    bool m_autoCreateEip;
                    bool m_autoCreateEipHasBeenSet;

                    /**
                     * 自动创建EIP的可选参数。若传此参数，则会自动创建EIP。
另外此参数和ExistedEipIds互斥
                     */
                    EipAttribute m_autoCreateEipAttribute;
                    bool m_autoCreateEipAttributeHasBeenSet;

                    /**
                     * 镜像缓存的大小。默认为20 GiB。取值范围参考[云硬盘类型](https://cloud.tencent.com/document/product/362/2353)中的高性能云盘类型的大小限制。
                     */
                    uint64_t m_imageCacheSize;
                    bool m_imageCacheSizeHasBeenSet;

                    /**
                     * 镜像缓存保留时间天数，过期将会自动清理，默认为0，永不过期。
                     */
                    uint64_t m_retentionDays;
                    bool m_retentionDaysHasBeenSet;

                    /**
                     * 指定拉取镜像仓库的镜像时不校验证书。如["harbor.example.com"]。
                     */
                    std::vector<std::string> m_registrySkipVerifyList;
                    bool m_registrySkipVerifyListHasBeenSet;

                    /**
                     * 指定拉取镜像仓库的镜像时使用 HTTP 协议。如["harbor.example.com"]。
                     */
                    std::vector<std::string> m_registryHttpEndPointList;
                    bool m_registryHttpEndPointListHasBeenSet;

                    /**
                     * 自定义制作镜像缓存过程中容器实例的宿主机上的 DNS。如：
"nameserver 4.4.4.4\nnameserver 8.8.8.8"
                     */
                    std::string m_resolveConfig;
                    bool m_resolveConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATEIMAGECACHEREQUEST_H_
