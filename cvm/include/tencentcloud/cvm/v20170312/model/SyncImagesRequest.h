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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_SYNCIMAGESREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_SYNCIMAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * SyncImages请求参数结构体
                */
                class SyncImagesRequest : public AbstractModel
                {
                public:
                    SyncImagesRequest();
                    ~SyncImagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像ID列表 ，镜像ID可以通过如下方式获取：<br><li>通过[DescribeImages](https://cloud.tencent.com/document/api/213/15715)接口返回的`ImageId`获取，镜像ID对应的镜像状态必须为`NORMAL`。</li><li>通过[镜像控制台](https://console.cloud.tencent.com/cvm/image)获取。</li>
                     * @return ImageIds 镜像ID列表 ，镜像ID可以通过如下方式获取：<br><li>通过[DescribeImages](https://cloud.tencent.com/document/api/213/15715)接口返回的`ImageId`获取，镜像ID对应的镜像状态必须为`NORMAL`。</li><li>通过[镜像控制台](https://console.cloud.tencent.com/cvm/image)获取。</li>
                     * 
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置镜像ID列表 ，镜像ID可以通过如下方式获取：<br><li>通过[DescribeImages](https://cloud.tencent.com/document/api/213/15715)接口返回的`ImageId`获取，镜像ID对应的镜像状态必须为`NORMAL`。</li><li>通过[镜像控制台](https://console.cloud.tencent.com/cvm/image)获取。</li>
                     * @param _imageIds 镜像ID列表 ，镜像ID可以通过如下方式获取：<br><li>通过[DescribeImages](https://cloud.tencent.com/document/api/213/15715)接口返回的`ImageId`获取，镜像ID对应的镜像状态必须为`NORMAL`。</li><li>通过[镜像控制台](https://console.cloud.tencent.com/cvm/image)获取。</li>
                     * 
                     */
                    void SetImageIds(const std::vector<std::string>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     * 
                     */
                    bool ImageIdsHasBeenSet() const;

                    /**
                     * 获取目的同步地域列表，必须满足如下限制：<br><li>必须是一个合法的Region。</li><li>如果是自定义镜像，则目标同步地域不能为源地域。</li><li>如果是共享镜像，则目的同步地域仅支持源地域，表示将共享镜像复制为源地域的自定义镜像。</li><li>如果是自定义镜像复制为加密自定义镜像，则目的同步地域仅支持源地域，表示将自定义镜像复制为源地域的加密自定义镜像。</li><li>暂不支持部分地域同步，请参考[复制镜像](https://cloud.tencent.com/document/product/213/4943#.E5.A4.8D.E5.88.B6.E8.AF.B4.E6.98.8E)。</li>具体地域参数请参考[Region](https://cloud.tencent.com/document/product/213/6091)。
                     * @return DestinationRegions 目的同步地域列表，必须满足如下限制：<br><li>必须是一个合法的Region。</li><li>如果是自定义镜像，则目标同步地域不能为源地域。</li><li>如果是共享镜像，则目的同步地域仅支持源地域，表示将共享镜像复制为源地域的自定义镜像。</li><li>如果是自定义镜像复制为加密自定义镜像，则目的同步地域仅支持源地域，表示将自定义镜像复制为源地域的加密自定义镜像。</li><li>暂不支持部分地域同步，请参考[复制镜像](https://cloud.tencent.com/document/product/213/4943#.E5.A4.8D.E5.88.B6.E8.AF.B4.E6.98.8E)。</li>具体地域参数请参考[Region](https://cloud.tencent.com/document/product/213/6091)。
                     * 
                     */
                    std::vector<std::string> GetDestinationRegions() const;

                    /**
                     * 设置目的同步地域列表，必须满足如下限制：<br><li>必须是一个合法的Region。</li><li>如果是自定义镜像，则目标同步地域不能为源地域。</li><li>如果是共享镜像，则目的同步地域仅支持源地域，表示将共享镜像复制为源地域的自定义镜像。</li><li>如果是自定义镜像复制为加密自定义镜像，则目的同步地域仅支持源地域，表示将自定义镜像复制为源地域的加密自定义镜像。</li><li>暂不支持部分地域同步，请参考[复制镜像](https://cloud.tencent.com/document/product/213/4943#.E5.A4.8D.E5.88.B6.E8.AF.B4.E6.98.8E)。</li>具体地域参数请参考[Region](https://cloud.tencent.com/document/product/213/6091)。
                     * @param _destinationRegions 目的同步地域列表，必须满足如下限制：<br><li>必须是一个合法的Region。</li><li>如果是自定义镜像，则目标同步地域不能为源地域。</li><li>如果是共享镜像，则目的同步地域仅支持源地域，表示将共享镜像复制为源地域的自定义镜像。</li><li>如果是自定义镜像复制为加密自定义镜像，则目的同步地域仅支持源地域，表示将自定义镜像复制为源地域的加密自定义镜像。</li><li>暂不支持部分地域同步，请参考[复制镜像](https://cloud.tencent.com/document/product/213/4943#.E5.A4.8D.E5.88.B6.E8.AF.B4.E6.98.8E)。</li>具体地域参数请参考[Region](https://cloud.tencent.com/document/product/213/6091)。
                     * 
                     */
                    void SetDestinationRegions(const std::vector<std::string>& _destinationRegions);

                    /**
                     * 判断参数 DestinationRegions 是否已赋值
                     * @return DestinationRegions 是否已赋值
                     * 
                     */
                    bool DestinationRegionsHasBeenSet() const;

                    /**
                     * 获取检测是否支持发起同步镜像。
默认值: false
                     * @return DryRun 检测是否支持发起同步镜像。
默认值: false
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置检测是否支持发起同步镜像。
默认值: false
                     * @param _dryRun 检测是否支持发起同步镜像。
默认值: false
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取目标镜像名称。默认使用源镜像名称。
最多支持 60 个字符。
                     * @return ImageName 目标镜像名称。默认使用源镜像名称。
最多支持 60 个字符。
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置目标镜像名称。默认使用源镜像名称。
最多支持 60 个字符。
                     * @param _imageName 目标镜像名称。默认使用源镜像名称。
最多支持 60 个字符。
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
                     * 获取是否需要返回目的地域的镜像ID。
默认值: false
                     * @return ImageSetRequired 是否需要返回目的地域的镜像ID。
默认值: false
                     * 
                     */
                    bool GetImageSetRequired() const;

                    /**
                     * 设置是否需要返回目的地域的镜像ID。
默认值: false
                     * @param _imageSetRequired 是否需要返回目的地域的镜像ID。
默认值: false
                     * 
                     */
                    void SetImageSetRequired(const bool& _imageSetRequired);

                    /**
                     * 判断参数 ImageSetRequired 是否已赋值
                     * @return ImageSetRequired 是否已赋值
                     * 
                     */
                    bool ImageSetRequiredHasBeenSet() const;

                    /**
                     * 获取是否复制为加密自定义镜像。
默认值为 false。
复制加密自定义镜像仅支持同地域， 即 DestinationRegions 仅支持填写指定镜像所在地域。
                     * @return Encrypt 是否复制为加密自定义镜像。
默认值为 false。
复制加密自定义镜像仅支持同地域， 即 DestinationRegions 仅支持填写指定镜像所在地域。
                     * 
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置是否复制为加密自定义镜像。
默认值为 false。
复制加密自定义镜像仅支持同地域， 即 DestinationRegions 仅支持填写指定镜像所在地域。
                     * @param _encrypt 是否复制为加密自定义镜像。
默认值为 false。
复制加密自定义镜像仅支持同地域， 即 DestinationRegions 仅支持填写指定镜像所在地域。
                     * 
                     */
                    void SetEncrypt(const bool& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     * 
                     */
                    bool EncryptHasBeenSet() const;

                    /**
                     * 获取加密自定义镜像使用的 KMS 密钥 ID。
仅当复制加密镜像时，即 Encrypt 为 true 时，此参数有效；
不指定 KmsKeyId，默认使用 CBS 云产品 KMS 密钥。
KMS 密钥 ID 通过[KMS 控制台](https://console.cloud.tencent.com/kms2)获取。
                     * @return KmsKeyId 加密自定义镜像使用的 KMS 密钥 ID。
仅当复制加密镜像时，即 Encrypt 为 true 时，此参数有效；
不指定 KmsKeyId，默认使用 CBS 云产品 KMS 密钥。
KMS 密钥 ID 通过[KMS 控制台](https://console.cloud.tencent.com/kms2)获取。
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置加密自定义镜像使用的 KMS 密钥 ID。
仅当复制加密镜像时，即 Encrypt 为 true 时，此参数有效；
不指定 KmsKeyId，默认使用 CBS 云产品 KMS 密钥。
KMS 密钥 ID 通过[KMS 控制台](https://console.cloud.tencent.com/kms2)获取。
                     * @param _kmsKeyId 加密自定义镜像使用的 KMS 密钥 ID。
仅当复制加密镜像时，即 Encrypt 为 true 时，此参数有效；
不指定 KmsKeyId，默认使用 CBS 云产品 KMS 密钥。
KMS 密钥 ID 通过[KMS 控制台](https://console.cloud.tencent.com/kms2)获取。
                     * 
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                private:

                    /**
                     * 镜像ID列表 ，镜像ID可以通过如下方式获取：<br><li>通过[DescribeImages](https://cloud.tencent.com/document/api/213/15715)接口返回的`ImageId`获取，镜像ID对应的镜像状态必须为`NORMAL`。</li><li>通过[镜像控制台](https://console.cloud.tencent.com/cvm/image)获取。</li>
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * 目的同步地域列表，必须满足如下限制：<br><li>必须是一个合法的Region。</li><li>如果是自定义镜像，则目标同步地域不能为源地域。</li><li>如果是共享镜像，则目的同步地域仅支持源地域，表示将共享镜像复制为源地域的自定义镜像。</li><li>如果是自定义镜像复制为加密自定义镜像，则目的同步地域仅支持源地域，表示将自定义镜像复制为源地域的加密自定义镜像。</li><li>暂不支持部分地域同步，请参考[复制镜像](https://cloud.tencent.com/document/product/213/4943#.E5.A4.8D.E5.88.B6.E8.AF.B4.E6.98.8E)。</li>具体地域参数请参考[Region](https://cloud.tencent.com/document/product/213/6091)。
                     */
                    std::vector<std::string> m_destinationRegions;
                    bool m_destinationRegionsHasBeenSet;

                    /**
                     * 检测是否支持发起同步镜像。
默认值: false
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * 目标镜像名称。默认使用源镜像名称。
最多支持 60 个字符。
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 是否需要返回目的地域的镜像ID。
默认值: false
                     */
                    bool m_imageSetRequired;
                    bool m_imageSetRequiredHasBeenSet;

                    /**
                     * 是否复制为加密自定义镜像。
默认值为 false。
复制加密自定义镜像仅支持同地域， 即 DestinationRegions 仅支持填写指定镜像所在地域。
                     */
                    bool m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * 加密自定义镜像使用的 KMS 密钥 ID。
仅当复制加密镜像时，即 Encrypt 为 true 时，此参数有效；
不指定 KmsKeyId，默认使用 CBS 云产品 KMS 密钥。
KMS 密钥 ID 通过[KMS 控制台](https://console.cloud.tencent.com/kms2)获取。
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_SYNCIMAGESREQUEST_H_
