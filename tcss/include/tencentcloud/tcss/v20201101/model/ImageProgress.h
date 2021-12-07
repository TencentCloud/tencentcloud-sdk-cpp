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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEPROGRESS_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEPROGRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 基本镜像信息
                */
                class ImageProgress : public AbstractModel
                {
                public:
                    ImageProgress();
                    ~ImageProgress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageId 镜像id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ImageId 镜像id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegistryType 仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RegistryType 仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegistryType(const std::string& _registryType);

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取镜像仓库地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageRepoAddress 镜像仓库地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetImageRepoAddress() const;

                    /**
                     * 设置镜像仓库地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ImageRepoAddress 镜像仓库地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetImageRepoAddress(const std::string& _imageRepoAddress);

                    /**
                     * 判断参数 ImageRepoAddress 是否已赋值
                     * @return ImageRepoAddress 是否已赋值
                     */
                    bool ImageRepoAddressHasBeenSet() const;

                    /**
                     * 获取实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceId 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceName 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Namespace 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取仓库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageName 仓库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置仓库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ImageName 仓库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取镜像tag
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageTag 镜像tag
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetImageTag() const;

                    /**
                     * 设置镜像tag
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ImageTag 镜像tag
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetImageTag(const std::string& _imageTag);

                    /**
                     * 判断参数 ImageTag 是否已赋值
                     * @return ImageTag 是否已赋值
                     */
                    bool ImageTagHasBeenSet() const;

                    /**
                     * 获取镜像扫描状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScanStatus 镜像扫描状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetScanStatus() const;

                    /**
                     * 设置镜像扫描状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ScanStatus 镜像扫描状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetScanStatus(const std::string& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     */
                    bool ScanStatusHasBeenSet() const;

                    /**
                     * 获取镜像cve扫描进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CveProgress 镜像cve扫描进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCveProgress() const;

                    /**
                     * 设置镜像cve扫描进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CveProgress 镜像cve扫描进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCveProgress(const uint64_t& _cveProgress);

                    /**
                     * 判断参数 CveProgress 是否已赋值
                     * @return CveProgress 是否已赋值
                     */
                    bool CveProgressHasBeenSet() const;

                    /**
                     * 获取镜像敏感扫描进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskProgress 镜像敏感扫描进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRiskProgress() const;

                    /**
                     * 设置镜像敏感扫描进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RiskProgress 镜像敏感扫描进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRiskProgress(const uint64_t& _riskProgress);

                    /**
                     * 判断参数 RiskProgress 是否已赋值
                     * @return RiskProgress 是否已赋值
                     */
                    bool RiskProgressHasBeenSet() const;

                    /**
                     * 获取镜像木马扫描进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirusProgress 镜像木马扫描进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetVirusProgress() const;

                    /**
                     * 设置镜像木马扫描进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VirusProgress 镜像木马扫描进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVirusProgress(const uint64_t& _virusProgress);

                    /**
                     * 判断参数 VirusProgress 是否已赋值
                     * @return VirusProgress 是否已赋值
                     */
                    bool VirusProgressHasBeenSet() const;

                private:

                    /**
                     * 镜像id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * 镜像仓库地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageRepoAddress;
                    bool m_imageRepoAddressHasBeenSet;

                    /**
                     * 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 仓库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 镜像tag
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageTag;
                    bool m_imageTagHasBeenSet;

                    /**
                     * 镜像扫描状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * 镜像cve扫描进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cveProgress;
                    bool m_cveProgressHasBeenSet;

                    /**
                     * 镜像敏感扫描进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_riskProgress;
                    bool m_riskProgressHasBeenSet;

                    /**
                     * 镜像木马扫描进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_virusProgress;
                    bool m_virusProgressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEPROGRESS_H_
