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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_GROUPRELEASE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_GROUPRELEASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ConfigRelease.h>
#include <tencentcloud/tsf/v20180326/model/FileConfigRelease.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 部署组配置发布相关信息
                */
                class GroupRelease : public AbstractModel
                {
                public:
                    GroupRelease();
                    ~GroupRelease() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageId 程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageId 程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取程序包名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageName 程序包名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置程序包名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageName 程序包名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取程序包版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageVersion 程序包版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 设置程序包版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageVersion 程序包版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPackageVersion(const std::string& _packageVersion);

                    /**
                     * 判断参数 PackageVersion 是否已赋值
                     * @return PackageVersion 是否已赋值
                     * 
                     */
                    bool PackageVersionHasBeenSet() const;

                    /**
                     * 获取镜像名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RepoName 镜像名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置镜像名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _repoName 镜像名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     * 
                     */
                    bool RepoNameHasBeenSet() const;

                    /**
                     * 获取镜像版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagName 镜像版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置镜像版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagName 镜像版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagName(const std::string& _tagName);

                    /**
                     * 判断参数 TagName 是否已赋值
                     * @return TagName 是否已赋值
                     * 
                     */
                    bool TagNameHasBeenSet() const;

                    /**
                     * 获取已发布的全局配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicConfigReleaseList 已发布的全局配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ConfigRelease> GetPublicConfigReleaseList() const;

                    /**
                     * 设置已发布的全局配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicConfigReleaseList 已发布的全局配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicConfigReleaseList(const std::vector<ConfigRelease>& _publicConfigReleaseList);

                    /**
                     * 判断参数 PublicConfigReleaseList 是否已赋值
                     * @return PublicConfigReleaseList 是否已赋值
                     * 
                     */
                    bool PublicConfigReleaseListHasBeenSet() const;

                    /**
                     * 获取已发布的应用配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigReleaseList 已发布的应用配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ConfigRelease> GetConfigReleaseList() const;

                    /**
                     * 设置已发布的应用配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configReleaseList 已发布的应用配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigReleaseList(const std::vector<ConfigRelease>& _configReleaseList);

                    /**
                     * 判断参数 ConfigReleaseList 是否已赋值
                     * @return ConfigReleaseList 是否已赋值
                     * 
                     */
                    bool ConfigReleaseListHasBeenSet() const;

                    /**
                     * 获取已发布的文件配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileConfigReleaseList 已发布的文件配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FileConfigRelease> GetFileConfigReleaseList() const;

                    /**
                     * 设置已发布的文件配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileConfigReleaseList 已发布的文件配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileConfigReleaseList(const std::vector<FileConfigRelease>& _fileConfigReleaseList);

                    /**
                     * 判断参数 FileConfigReleaseList 是否已赋值
                     * @return FileConfigReleaseList 是否已赋值
                     * 
                     */
                    bool FileConfigReleaseListHasBeenSet() const;

                private:

                    /**
                     * 程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 程序包名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 程序包版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageVersion;
                    bool m_packageVersionHasBeenSet;

                    /**
                     * 镜像名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * 镜像版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                    /**
                     * 已发布的全局配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ConfigRelease> m_publicConfigReleaseList;
                    bool m_publicConfigReleaseListHasBeenSet;

                    /**
                     * 已发布的应用配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ConfigRelease> m_configReleaseList;
                    bool m_configReleaseListHasBeenSet;

                    /**
                     * 已发布的文件配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FileConfigRelease> m_fileConfigReleaseList;
                    bool m_fileConfigReleaseListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_GROUPRELEASE_H_
