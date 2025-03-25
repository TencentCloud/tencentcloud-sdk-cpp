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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_FAVORRESP_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_FAVORRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/Favors.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 用于获取收藏仓库的响应
                */
                class FavorResp : public AbstractModel
                {
                public:
                    FavorResp();
                    ~FavorResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取收藏仓库的总数
                     * @return TotalCount 收藏仓库的总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置收藏仓库的总数
                     * @param _totalCount 收藏仓库的总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取仓库信息数组
                     * @return RepoInfo 仓库信息数组
                     * 
                     */
                    std::vector<Favors> GetRepoInfo() const;

                    /**
                     * 设置仓库信息数组
                     * @param _repoInfo 仓库信息数组
                     * 
                     */
                    void SetRepoInfo(const std::vector<Favors>& _repoInfo);

                    /**
                     * 判断参数 RepoInfo 是否已赋值
                     * @return RepoInfo 是否已赋值
                     * 
                     */
                    bool RepoInfoHasBeenSet() const;

                private:

                    /**
                     * 收藏仓库的总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 仓库信息数组
                     */
                    std::vector<Favors> m_repoInfo;
                    bool m_repoInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_FAVORRESP_H_
