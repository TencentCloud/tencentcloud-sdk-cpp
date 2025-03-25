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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_IMAGEREPOSITORY_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_IMAGEREPOSITORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/TcrRepoInfo.h>
#include <tencentcloud/tsf/v20180326/model/ScalableRule.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 镜像仓库
                */
                class ImageRepository : public AbstractModel
                {
                public:
                    ImageRepository();
                    ~ImageRepository() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取仓库名,含命名空间,如tsf/nginx
                     * @return Reponame 仓库名,含命名空间,如tsf/nginx
                     * 
                     */
                    std::string GetReponame() const;

                    /**
                     * 设置仓库名,含命名空间,如tsf/nginx
                     * @param _reponame 仓库名,含命名空间,如tsf/nginx
                     * 
                     */
                    void SetReponame(const std::string& _reponame);

                    /**
                     * 判断参数 Reponame 是否已赋值
                     * @return Reponame 是否已赋值
                     * 
                     */
                    bool ReponameHasBeenSet() const;

                    /**
                     * 获取仓库类型
                     * @return Repotype 仓库类型
                     * 
                     */
                    std::string GetRepotype() const;

                    /**
                     * 设置仓库类型
                     * @param _repotype 仓库类型
                     * 
                     */
                    void SetRepotype(const std::string& _repotype);

                    /**
                     * 判断参数 Repotype 是否已赋值
                     * @return Repotype 是否已赋值
                     * 
                     */
                    bool RepotypeHasBeenSet() const;

                    /**
                     * 获取镜像版本数
                     * @return TagCount 镜像版本数
                     * 
                     */
                    int64_t GetTagCount() const;

                    /**
                     * 设置镜像版本数
                     * @param _tagCount 镜像版本数
                     * 
                     */
                    void SetTagCount(const int64_t& _tagCount);

                    /**
                     * 判断参数 TagCount 是否已赋值
                     * @return TagCount 是否已赋值
                     * 
                     */
                    bool TagCountHasBeenSet() const;

                    /**
                     * 获取是否公共,1:公有,0:私有
                     * @return IsPublic 是否公共,1:公有,0:私有
                     * 
                     */
                    int64_t GetIsPublic() const;

                    /**
                     * 设置是否公共,1:公有,0:私有
                     * @param _isPublic 是否公共,1:公有,0:私有
                     * 
                     */
                    void SetIsPublic(const int64_t& _isPublic);

                    /**
                     * 判断参数 IsPublic 是否已赋值
                     * @return IsPublic 是否已赋值
                     * 
                     */
                    bool IsPublicHasBeenSet() const;

                    /**
                     * 获取是否被用户收藏。true：是，false：否
                     * @return IsUserFavor 是否被用户收藏。true：是，false：否
                     * 
                     */
                    bool GetIsUserFavor() const;

                    /**
                     * 设置是否被用户收藏。true：是，false：否
                     * @param _isUserFavor 是否被用户收藏。true：是，false：否
                     * 
                     */
                    void SetIsUserFavor(const bool& _isUserFavor);

                    /**
                     * 判断参数 IsUserFavor 是否已赋值
                     * @return IsUserFavor 是否已赋值
                     * 
                     */
                    bool IsUserFavorHasBeenSet() const;

                    /**
                     * 获取是否是腾讯云官方仓库。 是否是腾讯云官方仓库。true：是，false：否
                     * @return IsQcloudOfficial 是否是腾讯云官方仓库。 是否是腾讯云官方仓库。true：是，false：否
                     * 
                     */
                    bool GetIsQcloudOfficial() const;

                    /**
                     * 设置是否是腾讯云官方仓库。 是否是腾讯云官方仓库。true：是，false：否
                     * @param _isQcloudOfficial 是否是腾讯云官方仓库。 是否是腾讯云官方仓库。true：是，false：否
                     * 
                     */
                    void SetIsQcloudOfficial(const bool& _isQcloudOfficial);

                    /**
                     * 判断参数 IsQcloudOfficial 是否已赋值
                     * @return IsQcloudOfficial 是否已赋值
                     * 
                     */
                    bool IsQcloudOfficialHasBeenSet() const;

                    /**
                     * 获取被所有用户收藏次数
                     * @return FavorCount 被所有用户收藏次数
                     * 
                     */
                    int64_t GetFavorCount() const;

                    /**
                     * 设置被所有用户收藏次数
                     * @param _favorCount 被所有用户收藏次数
                     * 
                     */
                    void SetFavorCount(const int64_t& _favorCount);

                    /**
                     * 判断参数 FavorCount 是否已赋值
                     * @return FavorCount 是否已赋值
                     * 
                     */
                    bool FavorCountHasBeenSet() const;

                    /**
                     * 获取拉取次数
                     * @return PullCount 拉取次数
                     * 
                     */
                    int64_t GetPullCount() const;

                    /**
                     * 设置拉取次数
                     * @param _pullCount 拉取次数
                     * 
                     */
                    void SetPullCount(const int64_t& _pullCount);

                    /**
                     * 判断参数 PullCount 是否已赋值
                     * @return PullCount 是否已赋值
                     * 
                     */
                    bool PullCountHasBeenSet() const;

                    /**
                     * 获取描述内容
                     * @return Description 描述内容
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述内容
                     * @param _description 描述内容
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreationTime 创建时间
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置创建时间
                     * @param _creationTime 创建时间
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取TcrRepoInfo值
                     * @return TcrRepoInfo TcrRepoInfo值
                     * 
                     */
                    TcrRepoInfo GetTcrRepoInfo() const;

                    /**
                     * 设置TcrRepoInfo值
                     * @param _tcrRepoInfo TcrRepoInfo值
                     * 
                     */
                    void SetTcrRepoInfo(const TcrRepoInfo& _tcrRepoInfo);

                    /**
                     * 判断参数 TcrRepoInfo 是否已赋值
                     * @return TcrRepoInfo 是否已赋值
                     * 
                     */
                    bool TcrRepoInfoHasBeenSet() const;

                    /**
                     * 获取TcrBindingId值
                     * @return TcrBindingId TcrBindingId值
                     * 
                     */
                    int64_t GetTcrBindingId() const;

                    /**
                     * 设置TcrBindingId值
                     * @param _tcrBindingId TcrBindingId值
                     * 
                     */
                    void SetTcrBindingId(const int64_t& _tcrBindingId);

                    /**
                     * 判断参数 TcrBindingId 是否已赋值
                     * @return TcrBindingId 是否已赋值
                     * 
                     */
                    bool TcrBindingIdHasBeenSet() const;

                    /**
                     * 获取applicationid值
                     * @return ApplicationId applicationid值
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置applicationid值
                     * @param _applicationId applicationid值
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取ApplicationName值（废弃）
                     * @return ApplicationName ApplicationName值（废弃）
                     * 
                     */
                    ScalableRule GetApplicationName() const;

                    /**
                     * 设置ApplicationName值（废弃）
                     * @param _applicationName ApplicationName值（废弃）
                     * 
                     */
                    void SetApplicationName(const ScalableRule& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取ApplicationName值
                     * @return ApplicationNameReal ApplicationName值
                     * 
                     */
                    std::string GetApplicationNameReal() const;

                    /**
                     * 设置ApplicationName值
                     * @param _applicationNameReal ApplicationName值
                     * 
                     */
                    void SetApplicationNameReal(const std::string& _applicationNameReal);

                    /**
                     * 判断参数 ApplicationNameReal 是否已赋值
                     * @return ApplicationNameReal 是否已赋值
                     * 
                     */
                    bool ApplicationNameRealHasBeenSet() const;

                    /**
                     * 获取是否公共,1:公有,0:私有
                     * @return Public 是否公共,1:公有,0:私有
                     * 
                     */
                    int64_t GetPublic() const;

                    /**
                     * 设置是否公共,1:公有,0:私有
                     * @param _public 是否公共,1:公有,0:私有
                     * 
                     */
                    void SetPublic(const int64_t& _public);

                    /**
                     * 判断参数 Public 是否已赋值
                     * @return Public 是否已赋值
                     * 
                     */
                    bool PublicHasBeenSet() const;

                    /**
                     * 获取创建方式：manual | automatic
                     * @return CreateMode 创建方式：manual | automatic
                     * 
                     */
                    std::string GetCreateMode() const;

                    /**
                     * 设置创建方式：manual | automatic
                     * @param _createMode 创建方式：manual | automatic
                     * 
                     */
                    void SetCreateMode(const std::string& _createMode);

                    /**
                     * 判断参数 CreateMode 是否已赋值
                     * @return CreateMode 是否已赋值
                     * 
                     */
                    bool CreateModeHasBeenSet() const;

                    /**
                     * 获取仓库名，等同reponame字段
                     * @return RepoName 仓库名，等同reponame字段
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置仓库名，等同reponame字段
                     * @param _repoName 仓库名，等同reponame字段
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
                     * 获取仓库类型
                     * @return RepoType 仓库类型
                     * 
                     */
                    std::string GetRepoType() const;

                    /**
                     * 设置仓库类型
                     * @param _repoType 仓库类型
                     * 
                     */
                    void SetRepoType(const std::string& _repoType);

                    /**
                     * 判断参数 RepoType 是否已赋值
                     * @return RepoType 是否已赋值
                     * 
                     */
                    bool RepoTypeHasBeenSet() const;

                private:

                    /**
                     * 仓库名,含命名空间,如tsf/nginx
                     */
                    std::string m_reponame;
                    bool m_reponameHasBeenSet;

                    /**
                     * 仓库类型
                     */
                    std::string m_repotype;
                    bool m_repotypeHasBeenSet;

                    /**
                     * 镜像版本数
                     */
                    int64_t m_tagCount;
                    bool m_tagCountHasBeenSet;

                    /**
                     * 是否公共,1:公有,0:私有
                     */
                    int64_t m_isPublic;
                    bool m_isPublicHasBeenSet;

                    /**
                     * 是否被用户收藏。true：是，false：否
                     */
                    bool m_isUserFavor;
                    bool m_isUserFavorHasBeenSet;

                    /**
                     * 是否是腾讯云官方仓库。 是否是腾讯云官方仓库。true：是，false：否
                     */
                    bool m_isQcloudOfficial;
                    bool m_isQcloudOfficialHasBeenSet;

                    /**
                     * 被所有用户收藏次数
                     */
                    int64_t m_favorCount;
                    bool m_favorCountHasBeenSet;

                    /**
                     * 拉取次数
                     */
                    int64_t m_pullCount;
                    bool m_pullCountHasBeenSet;

                    /**
                     * 描述内容
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * TcrRepoInfo值
                     */
                    TcrRepoInfo m_tcrRepoInfo;
                    bool m_tcrRepoInfoHasBeenSet;

                    /**
                     * TcrBindingId值
                     */
                    int64_t m_tcrBindingId;
                    bool m_tcrBindingIdHasBeenSet;

                    /**
                     * applicationid值
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * ApplicationName值（废弃）
                     */
                    ScalableRule m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * ApplicationName值
                     */
                    std::string m_applicationNameReal;
                    bool m_applicationNameRealHasBeenSet;

                    /**
                     * 是否公共,1:公有,0:私有
                     */
                    int64_t m_public;
                    bool m_publicHasBeenSet;

                    /**
                     * 创建方式：manual | automatic
                     */
                    std::string m_createMode;
                    bool m_createModeHasBeenSet;

                    /**
                     * 仓库名，等同reponame字段
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * 仓库类型
                     */
                    std::string m_repoType;
                    bool m_repoTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_IMAGEREPOSITORY_H_
