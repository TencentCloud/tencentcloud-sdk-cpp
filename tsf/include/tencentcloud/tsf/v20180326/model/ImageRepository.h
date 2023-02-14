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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reponame 仓库名,含命名空间,如tsf/nginx
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetReponame() const;

                    /**
                     * 设置仓库名,含命名空间,如tsf/nginx
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Reponame 仓库名,含命名空间,如tsf/nginx
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReponame(const std::string& _reponame);

                    /**
                     * 判断参数 Reponame 是否已赋值
                     * @return Reponame 是否已赋值
                     */
                    bool ReponameHasBeenSet() const;

                    /**
                     * 获取仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Repotype 仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRepotype() const;

                    /**
                     * 设置仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Repotype 仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRepotype(const std::string& _repotype);

                    /**
                     * 判断参数 Repotype 是否已赋值
                     * @return Repotype 是否已赋值
                     */
                    bool RepotypeHasBeenSet() const;

                    /**
                     * 获取镜像版本数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagCount 镜像版本数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTagCount() const;

                    /**
                     * 设置镜像版本数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TagCount 镜像版本数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTagCount(const int64_t& _tagCount);

                    /**
                     * 判断参数 TagCount 是否已赋值
                     * @return TagCount 是否已赋值
                     */
                    bool TagCountHasBeenSet() const;

                    /**
                     * 获取是否公共,1:公有,0:私有
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsPublic 是否公共,1:公有,0:私有
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetIsPublic() const;

                    /**
                     * 设置是否公共,1:公有,0:私有
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsPublic 是否公共,1:公有,0:私有
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsPublic(const int64_t& _isPublic);

                    /**
                     * 判断参数 IsPublic 是否已赋值
                     * @return IsPublic 是否已赋值
                     */
                    bool IsPublicHasBeenSet() const;

                    /**
                     * 获取是否被用户收藏。true：是，false：否
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsUserFavor 是否被用户收藏。true：是，false：否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsUserFavor() const;

                    /**
                     * 设置是否被用户收藏。true：是，false：否
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsUserFavor 是否被用户收藏。true：是，false：否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsUserFavor(const bool& _isUserFavor);

                    /**
                     * 判断参数 IsUserFavor 是否已赋值
                     * @return IsUserFavor 是否已赋值
                     */
                    bool IsUserFavorHasBeenSet() const;

                    /**
                     * 获取是否是腾讯云官方仓库。 是否是腾讯云官方仓库。true：是，false：否
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsQcloudOfficial 是否是腾讯云官方仓库。 是否是腾讯云官方仓库。true：是，false：否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsQcloudOfficial() const;

                    /**
                     * 设置是否是腾讯云官方仓库。 是否是腾讯云官方仓库。true：是，false：否
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsQcloudOfficial 是否是腾讯云官方仓库。 是否是腾讯云官方仓库。true：是，false：否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsQcloudOfficial(const bool& _isQcloudOfficial);

                    /**
                     * 判断参数 IsQcloudOfficial 是否已赋值
                     * @return IsQcloudOfficial 是否已赋值
                     */
                    bool IsQcloudOfficialHasBeenSet() const;

                    /**
                     * 获取被所有用户收藏次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FavorCount 被所有用户收藏次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetFavorCount() const;

                    /**
                     * 设置被所有用户收藏次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FavorCount 被所有用户收藏次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFavorCount(const int64_t& _favorCount);

                    /**
                     * 判断参数 FavorCount 是否已赋值
                     * @return FavorCount 是否已赋值
                     */
                    bool FavorCountHasBeenSet() const;

                    /**
                     * 获取拉取次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PullCount 拉取次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPullCount() const;

                    /**
                     * 设置拉取次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PullCount 拉取次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPullCount(const int64_t& _pullCount);

                    /**
                     * 判断参数 PullCount 是否已赋值
                     * @return PullCount 是否已赋值
                     */
                    bool PullCountHasBeenSet() const;

                    /**
                     * 获取描述内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Description 描述内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreationTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreationTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取TcrRepoInfo值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TcrRepoInfo TcrRepoInfo值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TcrRepoInfo GetTcrRepoInfo() const;

                    /**
                     * 设置TcrRepoInfo值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TcrRepoInfo TcrRepoInfo值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTcrRepoInfo(const TcrRepoInfo& _tcrRepoInfo);

                    /**
                     * 判断参数 TcrRepoInfo 是否已赋值
                     * @return TcrRepoInfo 是否已赋值
                     */
                    bool TcrRepoInfoHasBeenSet() const;

                    /**
                     * 获取TcrBindingId值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TcrBindingId TcrBindingId值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTcrBindingId() const;

                    /**
                     * 设置TcrBindingId值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TcrBindingId TcrBindingId值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTcrBindingId(const int64_t& _tcrBindingId);

                    /**
                     * 判断参数 TcrBindingId 是否已赋值
                     * @return TcrBindingId 是否已赋值
                     */
                    bool TcrBindingIdHasBeenSet() const;

                    /**
                     * 获取applicationid值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId applicationid值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置applicationid值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApplicationId applicationid值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取ApplicationName值（废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationName ApplicationName值（废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScalableRule GetApplicationName() const;

                    /**
                     * 设置ApplicationName值（废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApplicationName ApplicationName值（废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApplicationName(const ScalableRule& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取ApplicationName值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationNameReal ApplicationName值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApplicationNameReal() const;

                    /**
                     * 设置ApplicationName值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApplicationNameReal ApplicationName值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApplicationNameReal(const std::string& _applicationNameReal);

                    /**
                     * 判断参数 ApplicationNameReal 是否已赋值
                     * @return ApplicationNameReal 是否已赋值
                     */
                    bool ApplicationNameRealHasBeenSet() const;

                    /**
                     * 获取是否公共,1:公有,0:私有
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Public 是否公共,1:公有,0:私有
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPublic() const;

                    /**
                     * 设置是否公共,1:公有,0:私有
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Public 是否公共,1:公有,0:私有
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPublic(const int64_t& _public);

                    /**
                     * 判断参数 Public 是否已赋值
                     * @return Public 是否已赋值
                     */
                    bool PublicHasBeenSet() const;

                private:

                    /**
                     * 仓库名,含命名空间,如tsf/nginx
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reponame;
                    bool m_reponameHasBeenSet;

                    /**
                     * 仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_repotype;
                    bool m_repotypeHasBeenSet;

                    /**
                     * 镜像版本数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tagCount;
                    bool m_tagCountHasBeenSet;

                    /**
                     * 是否公共,1:公有,0:私有
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isPublic;
                    bool m_isPublicHasBeenSet;

                    /**
                     * 是否被用户收藏。true：是，false：否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isUserFavor;
                    bool m_isUserFavorHasBeenSet;

                    /**
                     * 是否是腾讯云官方仓库。 是否是腾讯云官方仓库。true：是，false：否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isQcloudOfficial;
                    bool m_isQcloudOfficialHasBeenSet;

                    /**
                     * 被所有用户收藏次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_favorCount;
                    bool m_favorCountHasBeenSet;

                    /**
                     * 拉取次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pullCount;
                    bool m_pullCountHasBeenSet;

                    /**
                     * 描述内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * TcrRepoInfo值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TcrRepoInfo m_tcrRepoInfo;
                    bool m_tcrRepoInfoHasBeenSet;

                    /**
                     * TcrBindingId值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tcrBindingId;
                    bool m_tcrBindingIdHasBeenSet;

                    /**
                     * applicationid值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * ApplicationName值（废弃）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScalableRule m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * ApplicationName值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationNameReal;
                    bool m_applicationNameRealHasBeenSet;

                    /**
                     * 是否公共,1:公有,0:私有
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_public;
                    bool m_publicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_IMAGEREPOSITORY_H_
