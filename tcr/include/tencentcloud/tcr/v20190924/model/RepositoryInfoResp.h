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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_REPOSITORYINFORESP_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_REPOSITORYINFORESP_H_

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
                * 查询共享版仓库信息返回
                */
                class RepositoryInfoResp : public AbstractModel
                {
                public:
                    RepositoryInfoResp();
                    ~RepositoryInfoResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像仓库名字
                     * @return RepoName 镜像仓库名字
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置镜像仓库名字
                     * @param _repoName 镜像仓库名字
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
                     * 获取镜像仓库类型
                     * @return RepoType 镜像仓库类型
                     * 
                     */
                    std::string GetRepoType() const;

                    /**
                     * 设置镜像仓库类型
                     * @param _repoType 镜像仓库类型
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
                     * 获取镜像仓库服务地址
                     * @return Server 镜像仓库服务地址
                     * 
                     */
                    std::string GetServer() const;

                    /**
                     * 设置镜像仓库服务地址
                     * @param _server 镜像仓库服务地址
                     * 
                     */
                    void SetServer(const std::string& _server);

                    /**
                     * 判断参数 Server 是否已赋值
                     * @return Server 是否已赋值
                     * 
                     */
                    bool ServerHasBeenSet() const;

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
                     * 获取镜像仓库描述
                     * @return Description 镜像仓库描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置镜像仓库描述
                     * @param _description 镜像仓库描述
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
                     * 获取是否为公有镜像
                     * @return Public 是否为公有镜像
                     * 
                     */
                    int64_t GetPublic() const;

                    /**
                     * 设置是否为公有镜像
                     * @param _public 是否为公有镜像
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
                     * 获取下载次数
                     * @return PullCount 下载次数
                     * 
                     */
                    int64_t GetPullCount() const;

                    /**
                     * 设置下载次数
                     * @param _pullCount 下载次数
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
                     * 获取收藏次数
                     * @return FavorCount 收藏次数
                     * 
                     */
                    int64_t GetFavorCount() const;

                    /**
                     * 设置收藏次数
                     * @param _favorCount 收藏次数
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
                     * 获取是否为腾讯云官方镜像
                     * @return IsQcloudOfficial 是否为腾讯云官方镜像
                     * 
                     */
                    bool GetIsQcloudOfficial() const;

                    /**
                     * 设置是否为腾讯云官方镜像
                     * @param _isQcloudOfficial 是否为腾讯云官方镜像
                     * 
                     */
                    void SetIsQcloudOfficial(const bool& _isQcloudOfficial);

                    /**
                     * 判断参数 IsQcloudOfficial 是否已赋值
                     * @return IsQcloudOfficial 是否已赋值
                     * 
                     */
                    bool IsQcloudOfficialHasBeenSet() const;

                private:

                    /**
                     * 镜像仓库名字
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * 镜像仓库类型
                     */
                    std::string m_repoType;
                    bool m_repoTypeHasBeenSet;

                    /**
                     * 镜像仓库服务地址
                     */
                    std::string m_server;
                    bool m_serverHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 镜像仓库描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 是否为公有镜像
                     */
                    int64_t m_public;
                    bool m_publicHasBeenSet;

                    /**
                     * 下载次数
                     */
                    int64_t m_pullCount;
                    bool m_pullCountHasBeenSet;

                    /**
                     * 收藏次数
                     */
                    int64_t m_favorCount;
                    bool m_favorCountHasBeenSet;

                    /**
                     * 是否为用户收藏
                     */
                    bool m_isUserFavor;
                    bool m_isUserFavorHasBeenSet;

                    /**
                     * 是否为腾讯云官方镜像
                     */
                    bool m_isQcloudOfficial;
                    bool m_isQcloudOfficialHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_REPOSITORYINFORESP_H_
