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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_TCRREPOINFO_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_TCRREPOINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * tcr仓库信息
                */
                class TcrRepoInfo : public AbstractModel
                {
                public:
                    TcrRepoInfo();
                    ~TcrRepoInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域（填数字）
                     * @return Region 地域（填数字）
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域（填数字）
                     * @param _region 地域（填数字）
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

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
                     * 获取实例名
                     * @return RegistryName 实例名
                     * 
                     */
                    std::string GetRegistryName() const;

                    /**
                     * 设置实例名
                     * @param _registryName 实例名
                     * 
                     */
                    void SetRegistryName(const std::string& _registryName);

                    /**
                     * 判断参数 RegistryName 是否已赋值
                     * @return RegistryName 是否已赋值
                     * 
                     */
                    bool RegistryNameHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取仓库名
                     * @return RepoName 仓库名
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置仓库名
                     * @param _repoName 仓库名
                     * 
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     * 
                     */
                    bool RepoNameHasBeenSet() const;

                private:

                    /**
                     * 地域（填数字）
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 实例名
                     */
                    std::string m_registryName;
                    bool m_registryNameHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 仓库名
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_TCRREPOINFO_H_
