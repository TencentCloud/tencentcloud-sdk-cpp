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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DUPLICATEIMAGEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DUPLICATEIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DuplicateImage请求参数结构体
                */
                class DuplicateImageRequest : public AbstractModel
                {
                public:
                    DuplicateImageRequest();
                    ~DuplicateImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return RegistryId 实例id
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例id
                     * @param _registryId 实例id
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取源命名空间名称
                     * @return SourceNamespace 源命名空间名称
                     * 
                     */
                    std::string GetSourceNamespace() const;

                    /**
                     * 设置源命名空间名称
                     * @param _sourceNamespace 源命名空间名称
                     * 
                     */
                    void SetSourceNamespace(const std::string& _sourceNamespace);

                    /**
                     * 判断参数 SourceNamespace 是否已赋值
                     * @return SourceNamespace 是否已赋值
                     * 
                     */
                    bool SourceNamespaceHasBeenSet() const;

                    /**
                     * 获取源镜像仓库名称
                     * @return SourceRepo 源镜像仓库名称
                     * 
                     */
                    std::string GetSourceRepo() const;

                    /**
                     * 设置源镜像仓库名称
                     * @param _sourceRepo 源镜像仓库名称
                     * 
                     */
                    void SetSourceRepo(const std::string& _sourceRepo);

                    /**
                     * 判断参数 SourceRepo 是否已赋值
                     * @return SourceRepo 是否已赋值
                     * 
                     */
                    bool SourceRepoHasBeenSet() const;

                    /**
                     * 获取源镜像tag或digest值，目前仅支持tag
                     * @return SourceReference 源镜像tag或digest值，目前仅支持tag
                     * 
                     */
                    std::string GetSourceReference() const;

                    /**
                     * 设置源镜像tag或digest值，目前仅支持tag
                     * @param _sourceReference 源镜像tag或digest值，目前仅支持tag
                     * 
                     */
                    void SetSourceReference(const std::string& _sourceReference);

                    /**
                     * 判断参数 SourceReference 是否已赋值
                     * @return SourceReference 是否已赋值
                     * 
                     */
                    bool SourceReferenceHasBeenSet() const;

                    /**
                     * 获取目标镜像版本
                     * @return DestinationTag 目标镜像版本
                     * 
                     */
                    std::string GetDestinationTag() const;

                    /**
                     * 设置目标镜像版本
                     * @param _destinationTag 目标镜像版本
                     * 
                     */
                    void SetDestinationTag(const std::string& _destinationTag);

                    /**
                     * 判断参数 DestinationTag 是否已赋值
                     * @return DestinationTag 是否已赋值
                     * 
                     */
                    bool DestinationTagHasBeenSet() const;

                    /**
                     * 获取目标命名空间，不填默认与源一致
                     * @return DestinationNamespace 目标命名空间，不填默认与源一致
                     * 
                     */
                    std::string GetDestinationNamespace() const;

                    /**
                     * 设置目标命名空间，不填默认与源一致
                     * @param _destinationNamespace 目标命名空间，不填默认与源一致
                     * 
                     */
                    void SetDestinationNamespace(const std::string& _destinationNamespace);

                    /**
                     * 判断参数 DestinationNamespace 是否已赋值
                     * @return DestinationNamespace 是否已赋值
                     * 
                     */
                    bool DestinationNamespaceHasBeenSet() const;

                    /**
                     * 获取目标镜像仓库，不填默认与源一致
                     * @return DestinationRepo 目标镜像仓库，不填默认与源一致
                     * 
                     */
                    std::string GetDestinationRepo() const;

                    /**
                     * 设置目标镜像仓库，不填默认与源一致
                     * @param _destinationRepo 目标镜像仓库，不填默认与源一致
                     * 
                     */
                    void SetDestinationRepo(const std::string& _destinationRepo);

                    /**
                     * 判断参数 DestinationRepo 是否已赋值
                     * @return DestinationRepo 是否已赋值
                     * 
                     */
                    bool DestinationRepoHasBeenSet() const;

                    /**
                     * 获取是否覆盖
                     * @return Override 是否覆盖
                     * 
                     */
                    bool GetOverride() const;

                    /**
                     * 设置是否覆盖
                     * @param _override 是否覆盖
                     * 
                     */
                    void SetOverride(const bool& _override);

                    /**
                     * 判断参数 Override 是否已赋值
                     * @return Override 是否已赋值
                     * 
                     */
                    bool OverrideHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 源命名空间名称
                     */
                    std::string m_sourceNamespace;
                    bool m_sourceNamespaceHasBeenSet;

                    /**
                     * 源镜像仓库名称
                     */
                    std::string m_sourceRepo;
                    bool m_sourceRepoHasBeenSet;

                    /**
                     * 源镜像tag或digest值，目前仅支持tag
                     */
                    std::string m_sourceReference;
                    bool m_sourceReferenceHasBeenSet;

                    /**
                     * 目标镜像版本
                     */
                    std::string m_destinationTag;
                    bool m_destinationTagHasBeenSet;

                    /**
                     * 目标命名空间，不填默认与源一致
                     */
                    std::string m_destinationNamespace;
                    bool m_destinationNamespaceHasBeenSet;

                    /**
                     * 目标镜像仓库，不填默认与源一致
                     */
                    std::string m_destinationRepo;
                    bool m_destinationRepoHasBeenSet;

                    /**
                     * 是否覆盖
                     */
                    bool m_override;
                    bool m_overrideHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DUPLICATEIMAGEREQUEST_H_
