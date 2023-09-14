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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGEREGISTRYSCANTASKONEKEYREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGEREGISTRYSCANTASKONEKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ImageInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateAssetImageRegistryScanTaskOneKey请求参数结构体
                */
                class CreateAssetImageRegistryScanTaskOneKeyRequest : public AbstractModel
                {
                public:
                    CreateAssetImageRegistryScanTaskOneKeyRequest();
                    ~CreateAssetImageRegistryScanTaskOneKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否扫描全部镜像(废弃)
                     * @return All 是否扫描全部镜像(废弃)
                     * @deprecated
                     */
                    bool GetAll() const;

                    /**
                     * 设置是否扫描全部镜像(废弃)
                     * @param _all 是否扫描全部镜像(废弃)
                     * @deprecated
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * @deprecated
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取扫描的镜像列表
                     * @return Images 扫描的镜像列表
                     * 
                     */
                    std::vector<ImageInfo> GetImages() const;

                    /**
                     * 设置扫描的镜像列表
                     * @param _images 扫描的镜像列表
                     * 
                     */
                    void SetImages(const std::vector<ImageInfo>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取扫描类型数组
                     * @return ScanType 扫描类型数组
                     * 
                     */
                    std::vector<std::string> GetScanType() const;

                    /**
                     * 设置扫描类型数组
                     * @param _scanType 扫描类型数组
                     * 
                     */
                    void SetScanType(const std::vector<std::string>& _scanType);

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                    /**
                     * 获取扫描的镜像列表Id
                     * @return Id 扫描的镜像列表Id
                     * 
                     */
                    std::vector<uint64_t> GetId() const;

                    /**
                     * 设置扫描的镜像列表Id
                     * @param _id 扫描的镜像列表Id
                     * 
                     */
                    void SetId(const std::vector<uint64_t>& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取是否最新镜像
                     * @return IsLatest 是否最新镜像
                     * 
                     */
                    bool GetIsLatest() const;

                    /**
                     * 设置是否最新镜像
                     * @param _isLatest 是否最新镜像
                     * 
                     */
                    void SetIsLatest(const bool& _isLatest);

                    /**
                     * 判断参数 IsLatest 是否已赋值
                     * @return IsLatest 是否已赋值
                     * 
                     */
                    bool IsLatestHasBeenSet() const;

                    /**
                     * 获取扫描范围 0全部镜像，1自选镜像，2推荐扫描镜像
                     * @return ScanScope 扫描范围 0全部镜像，1自选镜像，2推荐扫描镜像
                     * 
                     */
                    uint64_t GetScanScope() const;

                    /**
                     * 设置扫描范围 0全部镜像，1自选镜像，2推荐扫描镜像
                     * @param _scanScope 扫描范围 0全部镜像，1自选镜像，2推荐扫描镜像
                     * 
                     */
                    void SetScanScope(const uint64_t& _scanScope);

                    /**
                     * 判断参数 ScanScope 是否已赋值
                     * @return ScanScope 是否已赋值
                     * 
                     */
                    bool ScanScopeHasBeenSet() const;

                    /**
                     * 获取仓库类型
                     * @return RegistryType 仓库类型
                     * 
                     */
                    std::vector<std::string> GetRegistryType() const;

                    /**
                     * 设置仓库类型
                     * @param _registryType 仓库类型
                     * 
                     */
                    void SetRegistryType(const std::vector<std::string>& _registryType);

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     * 
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::vector<std::string> GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
                     * 
                     */
                    void SetNamespace(const std::vector<std::string>& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取是否存在运行中的容器
                     * @return ContainerRunning 是否存在运行中的容器
                     * 
                     */
                    bool GetContainerRunning() const;

                    /**
                     * 设置是否存在运行中的容器
                     * @param _containerRunning 是否存在运行中的容器
                     * 
                     */
                    void SetContainerRunning(const bool& _containerRunning);

                    /**
                     * 判断参数 ContainerRunning 是否已赋值
                     * @return ContainerRunning 是否已赋值
                     * 
                     */
                    bool ContainerRunningHasBeenSet() const;

                    /**
                     * 获取任务超时时长单位s
                     * @return Timeout 任务超时时长单位s
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置任务超时时长单位s
                     * @param _timeout 任务超时时长单位s
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                private:

                    /**
                     * 是否扫描全部镜像(废弃)
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * 扫描的镜像列表
                     */
                    std::vector<ImageInfo> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * 扫描类型数组
                     */
                    std::vector<std::string> m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * 扫描的镜像列表Id
                     */
                    std::vector<uint64_t> m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 是否最新镜像
                     */
                    bool m_isLatest;
                    bool m_isLatestHasBeenSet;

                    /**
                     * 扫描范围 0全部镜像，1自选镜像，2推荐扫描镜像
                     */
                    uint64_t m_scanScope;
                    bool m_scanScopeHasBeenSet;

                    /**
                     * 仓库类型
                     */
                    std::vector<std::string> m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::vector<std::string> m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 是否存在运行中的容器
                     */
                    bool m_containerRunning;
                    bool m_containerRunningHasBeenSet;

                    /**
                     * 任务超时时长单位s
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGEREGISTRYSCANTASKONEKEYREQUEST_H_
