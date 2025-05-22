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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DEPENDENCYPACKAGE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DEPENDENCYPACKAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 任务依赖包信息
                */
                class DependencyPackage : public AbstractModel
                {
                public:
                    DependencyPackage();
                    ~DependencyPackage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取依赖包类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageSource 依赖包类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageSource() const;

                    /**
                     * 设置依赖包类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageSource 依赖包类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPackageSource(const std::string& _packageSource);

                    /**
                     * 判断参数 PackageSource 是否已赋值
                     * @return PackageSource 是否已赋值
                     * 
                     */
                    bool PackageSourceHasBeenSet() const;

                    /**
                     * 获取依赖包信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MavenPackage 依赖包信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMavenPackage() const;

                    /**
                     * 设置依赖包信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mavenPackage 依赖包信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMavenPackage(const std::string& _mavenPackage);

                    /**
                     * 判断参数 MavenPackage 是否已赋值
                     * @return MavenPackage 是否已赋值
                     * 
                     */
                    bool MavenPackageHasBeenSet() const;

                    /**
                     * 获取依赖包仓库
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MavenRepository 依赖包仓库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMavenRepository() const;

                    /**
                     * 设置依赖包仓库
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mavenRepository 依赖包仓库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMavenRepository(const std::string& _mavenRepository);

                    /**
                     * 判断参数 MavenRepository 是否已赋值
                     * @return MavenRepository 是否已赋值
                     * 
                     */
                    bool MavenRepositoryHasBeenSet() const;

                    /**
                     * 获取maven包exclusion信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MavenExclusion maven包exclusion信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMavenExclusion() const;

                    /**
                     * 设置maven包exclusion信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mavenExclusion maven包exclusion信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMavenExclusion(const std::string& _mavenExclusion);

                    /**
                     * 判断参数 MavenExclusion 是否已赋值
                     * @return MavenExclusion 是否已赋值
                     * 
                     */
                    bool MavenExclusionHasBeenSet() const;

                    /**
                     * 获取pypi包信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PypiPackage pypi包信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPypiPackage() const;

                    /**
                     * 设置pypi包信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pypiPackage pypi包信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPypiPackage(const std::string& _pypiPackage);

                    /**
                     * 判断参数 PypiPackage 是否已赋值
                     * @return PypiPackage 是否已赋值
                     * 
                     */
                    bool PypiPackageHasBeenSet() const;

                    /**
                     * 获取pypi索引地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PypiIndexUrl pypi索引地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPypiIndexUrl() const;

                    /**
                     * 设置pypi索引地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pypiIndexUrl pypi索引地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPypiIndexUrl(const std::string& _pypiIndexUrl);

                    /**
                     * 判断参数 PypiIndexUrl 是否已赋值
                     * @return PypiIndexUrl 是否已赋值
                     * 
                     */
                    bool PypiIndexUrlHasBeenSet() const;

                    /**
                     * 获取文件包的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageType 文件包的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置文件包的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageType 文件包的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取文件包的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackagePath 文件包的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackagePath() const;

                    /**
                     * 设置文件包的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packagePath 文件包的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPackagePath(const std::string& _packagePath);

                    /**
                     * 判断参数 PackagePath 是否已赋值
                     * @return PackagePath 是否已赋值
                     * 
                     */
                    bool PackagePathHasBeenSet() const;

                private:

                    /**
                     * 依赖包类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageSource;
                    bool m_packageSourceHasBeenSet;

                    /**
                     * 依赖包信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mavenPackage;
                    bool m_mavenPackageHasBeenSet;

                    /**
                     * 依赖包仓库
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mavenRepository;
                    bool m_mavenRepositoryHasBeenSet;

                    /**
                     * maven包exclusion信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mavenExclusion;
                    bool m_mavenExclusionHasBeenSet;

                    /**
                     * pypi包信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pypiPackage;
                    bool m_pypiPackageHasBeenSet;

                    /**
                     * pypi索引地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pypiIndexUrl;
                    bool m_pypiIndexUrlHasBeenSet;

                    /**
                     * 文件包的类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 文件包的路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packagePath;
                    bool m_packagePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DEPENDENCYPACKAGE_H_
