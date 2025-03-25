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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_FAVORS_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_FAVORS_H_

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
                * 仓库收藏
                */
                class Favors : public AbstractModel
                {
                public:
                    Favors();
                    ~Favors() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取仓库名字
                     * @return RepoName 仓库名字
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置仓库名字
                     * @param _repoName 仓库名字
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
                     * 获取Pull总共的次数
                     * @return PullCount Pull总共的次数
                     * 
                     */
                    int64_t GetPullCount() const;

                    /**
                     * 设置Pull总共的次数
                     * @param _pullCount Pull总共的次数
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
                     * 获取仓库收藏次数
                     * @return FavorCount 仓库收藏次数
                     * 
                     */
                    int64_t GetFavorCount() const;

                    /**
                     * 设置仓库收藏次数
                     * @param _favorCount 仓库收藏次数
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
                     * 获取仓库是否公开
                     * @return Public 仓库是否公开
                     * 
                     */
                    int64_t GetPublic() const;

                    /**
                     * 设置仓库是否公开
                     * @param _public 仓库是否公开
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
                     * 获取是否为官方所有
                     * @return IsQcloudOfficial 是否为官方所有
                     * 
                     */
                    bool GetIsQcloudOfficial() const;

                    /**
                     * 设置是否为官方所有
                     * @param _isQcloudOfficial 是否为官方所有
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
                     * 获取仓库Tag的数量
                     * @return TagCount 仓库Tag的数量
                     * 
                     */
                    int64_t GetTagCount() const;

                    /**
                     * 设置仓库Tag的数量
                     * @param _tagCount 仓库Tag的数量
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
                     * 获取Logo
                     * @return Logo Logo
                     * 
                     */
                    std::string GetLogo() const;

                    /**
                     * 设置Logo
                     * @param _logo Logo
                     * 
                     */
                    void SetLogo(const std::string& _logo);

                    /**
                     * 判断参数 Logo 是否已赋值
                     * @return Logo 是否已赋值
                     * 
                     */
                    bool LogoHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
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
                     * 获取地域的Id
                     * @return RegionId 地域的Id
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域的Id
                     * @param _regionId 地域的Id
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * 仓库名字
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * 仓库类型
                     */
                    std::string m_repoType;
                    bool m_repoTypeHasBeenSet;

                    /**
                     * Pull总共的次数
                     */
                    int64_t m_pullCount;
                    bool m_pullCountHasBeenSet;

                    /**
                     * 仓库收藏次数
                     */
                    int64_t m_favorCount;
                    bool m_favorCountHasBeenSet;

                    /**
                     * 仓库是否公开
                     */
                    int64_t m_public;
                    bool m_publicHasBeenSet;

                    /**
                     * 是否为官方所有
                     */
                    bool m_isQcloudOfficial;
                    bool m_isQcloudOfficialHasBeenSet;

                    /**
                     * 仓库Tag的数量
                     */
                    int64_t m_tagCount;
                    bool m_tagCountHasBeenSet;

                    /**
                     * Logo
                     */
                    std::string m_logo;
                    bool m_logoHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 地域的Id
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_FAVORS_H_
