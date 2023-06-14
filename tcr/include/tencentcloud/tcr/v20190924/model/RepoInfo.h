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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_REPOINFO_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_REPOINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 仓库的信息
                */
                class RepoInfo : public AbstractModel
                {
                public:
                    RepoInfo();
                    ~RepoInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取仓库名称
                     * @return RepoName 仓库名称
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置仓库名称
                     * @param _repoName 仓库名称
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

                    /**
                     * 获取Tag数量
                     * @return TagCount Tag数量
                     * 
                     */
                    int64_t GetTagCount() const;

                    /**
                     * 设置Tag数量
                     * @param _tagCount Tag数量
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
                     * 获取是否为公开
                     * @return Public 是否为公开
                     * 
                     */
                    int64_t GetPublic() const;

                    /**
                     * 设置是否为公开
                     * @param _public 是否为公开
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
                     * 获取是否为用户收藏
                     * @return IsUserFavor 是否为用户收藏
                     * 
                     */
                    bool GetIsUserFavor() const;

                    /**
                     * 设置是否为用户收藏
                     * @param _isUserFavor 是否为用户收藏
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
                     * 获取是否为腾讯云官方仓库
                     * @return IsQcloudOfficial 是否为腾讯云官方仓库
                     * 
                     */
                    bool GetIsQcloudOfficial() const;

                    /**
                     * 设置是否为腾讯云官方仓库
                     * @param _isQcloudOfficial 是否为腾讯云官方仓库
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
                     * 获取被收藏的个数
                     * @return FavorCount 被收藏的个数
                     * 
                     */
                    int64_t GetFavorCount() const;

                    /**
                     * 设置被收藏的个数
                     * @param _favorCount 被收藏的个数
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
                     * 获取拉取的数量
                     * @return PullCount 拉取的数量
                     * 
                     */
                    int64_t GetPullCount() const;

                    /**
                     * 设置拉取的数量
                     * @param _pullCount 拉取的数量
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
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取仓库创建时间
                     * @return CreationTime 仓库创建时间
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置仓库创建时间
                     * @param _creationTime 仓库创建时间
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
                     * 获取仓库更新时间
                     * @return UpdateTime 仓库更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置仓库更新时间
                     * @param _updateTime 仓库更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 仓库名称
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * 仓库类型
                     */
                    std::string m_repoType;
                    bool m_repoTypeHasBeenSet;

                    /**
                     * Tag数量
                     */
                    int64_t m_tagCount;
                    bool m_tagCountHasBeenSet;

                    /**
                     * 是否为公开
                     */
                    int64_t m_public;
                    bool m_publicHasBeenSet;

                    /**
                     * 是否为用户收藏
                     */
                    bool m_isUserFavor;
                    bool m_isUserFavorHasBeenSet;

                    /**
                     * 是否为腾讯云官方仓库
                     */
                    bool m_isQcloudOfficial;
                    bool m_isQcloudOfficialHasBeenSet;

                    /**
                     * 被收藏的个数
                     */
                    int64_t m_favorCount;
                    bool m_favorCountHasBeenSet;

                    /**
                     * 拉取的数量
                     */
                    int64_t m_pullCount;
                    bool m_pullCountHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 仓库创建时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 仓库更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_REPOINFO_H_
