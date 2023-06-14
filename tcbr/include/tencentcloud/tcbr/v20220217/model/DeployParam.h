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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_DEPLOYPARAM_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_DEPLOYPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/RepositoryInfo.h>
#include <tencentcloud/tcbr/v20220217/model/BuildPacksInfo.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * 部署参数
                */
                class DeployParam : public AbstractModel
                {
                public:
                    DeployParam();
                    ~DeployParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部署类型：package/image/repository/pipeline/jar/war
                     * @return DeployType 部署类型：package/image/repository/pipeline/jar/war
                     * 
                     */
                    std::string GetDeployType() const;

                    /**
                     * 设置部署类型：package/image/repository/pipeline/jar/war
                     * @param _deployType 部署类型：package/image/repository/pipeline/jar/war
                     * 
                     */
                    void SetDeployType(const std::string& _deployType);

                    /**
                     * 判断参数 DeployType 是否已赋值
                     * @return DeployType 是否已赋值
                     * 
                     */
                    bool DeployTypeHasBeenSet() const;

                    /**
                     * 获取部署类型为image时传入
                     * @return ImageUrl 部署类型为image时传入
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置部署类型为image时传入
                     * @param _imageUrl 部署类型为image时传入
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取部署类型为package时传入
                     * @return PackageName 部署类型为package时传入
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置部署类型为package时传入
                     * @param _packageName 部署类型为package时传入
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
                     * 获取部署类型为package时传入
                     * @return PackageVersion 部署类型为package时传入
                     * 
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 设置部署类型为package时传入
                     * @param _packageVersion 部署类型为package时传入
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
                     * 获取部署备注
                     * @return DeployRemark 部署备注
                     * 
                     */
                    std::string GetDeployRemark() const;

                    /**
                     * 设置部署备注
                     * @param _deployRemark 部署备注
                     * 
                     */
                    void SetDeployRemark(const std::string& _deployRemark);

                    /**
                     * 判断参数 DeployRemark 是否已赋值
                     * @return DeployRemark 是否已赋值
                     * 
                     */
                    bool DeployRemarkHasBeenSet() const;

                    /**
                     * 获取代码仓库信息
                     * @return RepoInfo 代码仓库信息
                     * 
                     */
                    RepositoryInfo GetRepoInfo() const;

                    /**
                     * 设置代码仓库信息
                     * @param _repoInfo 代码仓库信息
                     * 
                     */
                    void SetRepoInfo(const RepositoryInfo& _repoInfo);

                    /**
                     * 判断参数 RepoInfo 是否已赋值
                     * @return RepoInfo 是否已赋值
                     * 
                     */
                    bool RepoInfoHasBeenSet() const;

                    /**
                     * 获取无Dockerfile时填写
                     * @return BuildPacks 无Dockerfile时填写
                     * 
                     */
                    BuildPacksInfo GetBuildPacks() const;

                    /**
                     * 设置无Dockerfile时填写
                     * @param _buildPacks 无Dockerfile时填写
                     * 
                     */
                    void SetBuildPacks(const BuildPacksInfo& _buildPacks);

                    /**
                     * 判断参数 BuildPacks 是否已赋值
                     * @return BuildPacks 是否已赋值
                     * 
                     */
                    bool BuildPacksHasBeenSet() const;

                    /**
                     * 获取发布类型 GRAY | FULL
                     * @return ReleaseType 发布类型 GRAY | FULL
                     * 
                     */
                    std::string GetReleaseType() const;

                    /**
                     * 设置发布类型 GRAY | FULL
                     * @param _releaseType 发布类型 GRAY | FULL
                     * 
                     */
                    void SetReleaseType(const std::string& _releaseType);

                    /**
                     * 判断参数 ReleaseType 是否已赋值
                     * @return ReleaseType 是否已赋值
                     * 
                     */
                    bool ReleaseTypeHasBeenSet() const;

                private:

                    /**
                     * 部署类型：package/image/repository/pipeline/jar/war
                     */
                    std::string m_deployType;
                    bool m_deployTypeHasBeenSet;

                    /**
                     * 部署类型为image时传入
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 部署类型为package时传入
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 部署类型为package时传入
                     */
                    std::string m_packageVersion;
                    bool m_packageVersionHasBeenSet;

                    /**
                     * 部署备注
                     */
                    std::string m_deployRemark;
                    bool m_deployRemarkHasBeenSet;

                    /**
                     * 代码仓库信息
                     */
                    RepositoryInfo m_repoInfo;
                    bool m_repoInfoHasBeenSet;

                    /**
                     * 无Dockerfile时填写
                     */
                    BuildPacksInfo m_buildPacks;
                    bool m_buildPacksHasBeenSet;

                    /**
                     * 发布类型 GRAY | FULL
                     */
                    std::string m_releaseType;
                    bool m_releaseTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_DEPLOYPARAM_H_
