/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_IMAGEINFOV2_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_IMAGEINFOV2_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ImagePullSecret.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * EMR on TKE集群组件镜像信息
                */
                class ImageInfoV2 : public AbstractModel
                {
                public:
                    ImageInfoV2();
                    ~ImageInfoV2() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>镜像类型</p><p>枚举值：</p><ul><li>official： 官方镜像</li><li>custom： 自定义镜像</li><li>imageUrl： 镜像地址</li></ul>
                     * @return ImageMode <p>镜像类型</p><p>枚举值：</p><ul><li>official： 官方镜像</li><li>custom： 自定义镜像</li><li>imageUrl： 镜像地址</li></ul>
                     * 
                     */
                    std::string GetImageMode() const;

                    /**
                     * 设置<p>镜像类型</p><p>枚举值：</p><ul><li>official： 官方镜像</li><li>custom： 自定义镜像</li><li>imageUrl： 镜像地址</li></ul>
                     * @param _imageMode <p>镜像类型</p><p>枚举值：</p><ul><li>official： 官方镜像</li><li>custom： 自定义镜像</li><li>imageUrl： 镜像地址</li></ul>
                     * 
                     */
                    void SetImageMode(const std::string& _imageMode);

                    /**
                     * 判断参数 ImageMode 是否已赋值
                     * @return ImageMode 是否已赋值
                     * 
                     */
                    bool ImageModeHasBeenSet() const;

                    /**
                     * 获取<p>地域</p>
                     * @return Region <p>地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _region <p>地域</p>
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
                     * 获取<p>是否是存量镜像</p>
                     * @return LegacyCCR <p>是否是存量镜像</p>
                     * 
                     */
                    bool GetLegacyCCR() const;

                    /**
                     * 设置<p>是否是存量镜像</p>
                     * @param _legacyCCR <p>是否是存量镜像</p>
                     * 
                     */
                    void SetLegacyCCR(const bool& _legacyCCR);

                    /**
                     * 判断参数 LegacyCCR 是否已赋值
                     * @return LegacyCCR 是否已赋值
                     * 
                     */
                    bool LegacyCCRHasBeenSet() const;

                    /**
                     * 获取<p>镜像地址</p>
                     * @return FullImageUrl <p>镜像地址</p>
                     * 
                     */
                    std::string GetFullImageUrl() const;

                    /**
                     * 设置<p>镜像地址</p>
                     * @param _fullImageUrl <p>镜像地址</p>
                     * 
                     */
                    void SetFullImageUrl(const std::string& _fullImageUrl);

                    /**
                     * 判断参数 FullImageUrl 是否已赋值
                     * @return FullImageUrl 是否已赋值
                     * 
                     */
                    bool FullImageUrlHasBeenSet() const;

                    /**
                     * 获取<p>版本</p>
                     * @return MainVersion <p>版本</p>
                     * 
                     */
                    std::string GetMainVersion() const;

                    /**
                     * 设置<p>版本</p>
                     * @param _mainVersion <p>版本</p>
                     * 
                     */
                    void SetMainVersion(const std::string& _mainVersion);

                    /**
                     * 判断参数 MainVersion 是否已赋值
                     * @return MainVersion 是否已赋值
                     * 
                     */
                    bool MainVersionHasBeenSet() const;

                    /**
                     * 获取<p>镜像地址域名</p>
                     * @return RegistryUrl <p>镜像地址域名</p>
                     * 
                     */
                    std::string GetRegistryUrl() const;

                    /**
                     * 设置<p>镜像地址域名</p>
                     * @param _registryUrl <p>镜像地址域名</p>
                     * 
                     */
                    void SetRegistryUrl(const std::string& _registryUrl);

                    /**
                     * 判断参数 RegistryUrl 是否已赋值
                     * @return RegistryUrl 是否已赋值
                     * 
                     */
                    bool RegistryUrlHasBeenSet() const;

                    /**
                     * 获取<p>镜像命名空间</p>
                     * @return NamespaceName <p>镜像命名空间</p>
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置<p>镜像命名空间</p>
                     * @param _namespaceName <p>镜像命名空间</p>
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取<p>镜像仓库名</p>
                     * @return RepoName <p>镜像仓库名</p>
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置<p>镜像仓库名</p>
                     * @param _repoName <p>镜像仓库名</p>
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
                     * 获取<p>镜像版本标签</p>
                     * @return Tag <p>镜像版本标签</p>
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置<p>镜像版本标签</p>
                     * @param _tag <p>镜像版本标签</p>
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取<p>用户名</p>
                     * @return Username <p>用户名</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>用户名</p>
                     * @param _username <p>用户名</p>
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取<p>密码</p>
                     * @return Password <p>密码</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>密码</p>
                     * @param _password <p>密码</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>镜像拉取密钥</p>
                     * @return ImagePullSecret <p>镜像拉取密钥</p>
                     * 
                     */
                    ImagePullSecret GetImagePullSecret() const;

                    /**
                     * 设置<p>镜像拉取密钥</p>
                     * @param _imagePullSecret <p>镜像拉取密钥</p>
                     * 
                     */
                    void SetImagePullSecret(const ImagePullSecret& _imagePullSecret);

                    /**
                     * 判断参数 ImagePullSecret 是否已赋值
                     * @return ImagePullSecret 是否已赋值
                     * 
                     */
                    bool ImagePullSecretHasBeenSet() const;

                    /**
                     * 获取<p>镜像拉取策略</p>
                     * @return ImagePullPolicy <p>镜像拉取策略</p>
                     * 
                     */
                    std::string GetImagePullPolicy() const;

                    /**
                     * 设置<p>镜像拉取策略</p>
                     * @param _imagePullPolicy <p>镜像拉取策略</p>
                     * 
                     */
                    void SetImagePullPolicy(const std::string& _imagePullPolicy);

                    /**
                     * 判断参数 ImagePullPolicy 是否已赋值
                     * @return ImagePullPolicy 是否已赋值
                     * 
                     */
                    bool ImagePullPolicyHasBeenSet() const;

                private:

                    /**
                     * <p>镜像类型</p><p>枚举值：</p><ul><li>official： 官方镜像</li><li>custom： 自定义镜像</li><li>imageUrl： 镜像地址</li></ul>
                     */
                    std::string m_imageMode;
                    bool m_imageModeHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>是否是存量镜像</p>
                     */
                    bool m_legacyCCR;
                    bool m_legacyCCRHasBeenSet;

                    /**
                     * <p>镜像地址</p>
                     */
                    std::string m_fullImageUrl;
                    bool m_fullImageUrlHasBeenSet;

                    /**
                     * <p>版本</p>
                     */
                    std::string m_mainVersion;
                    bool m_mainVersionHasBeenSet;

                    /**
                     * <p>镜像地址域名</p>
                     */
                    std::string m_registryUrl;
                    bool m_registryUrlHasBeenSet;

                    /**
                     * <p>镜像命名空间</p>
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * <p>镜像仓库名</p>
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * <p>镜像版本标签</p>
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>密码</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>镜像拉取密钥</p>
                     */
                    ImagePullSecret m_imagePullSecret;
                    bool m_imagePullSecretHasBeenSet;

                    /**
                     * <p>镜像拉取策略</p>
                     */
                    std::string m_imagePullPolicy;
                    bool m_imagePullPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_IMAGEINFOV2_H_
