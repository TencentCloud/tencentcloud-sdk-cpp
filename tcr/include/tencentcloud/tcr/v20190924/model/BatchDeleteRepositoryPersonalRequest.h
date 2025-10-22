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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_BATCHDELETEREPOSITORYPERSONALREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_BATCHDELETEREPOSITORYPERSONALREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * BatchDeleteRepositoryPersonal请求参数结构体
                */
                class BatchDeleteRepositoryPersonalRequest : public AbstractModel
                {
                public:
                    BatchDeleteRepositoryPersonalRequest();
                    ~BatchDeleteRepositoryPersonalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取仓库名称数组
                     * @return RepoNames 仓库名称数组
                     * 
                     */
                    std::vector<std::string> GetRepoNames() const;

                    /**
                     * 设置仓库名称数组
                     * @param _repoNames 仓库名称数组
                     * 
                     */
                    void SetRepoNames(const std::vector<std::string>& _repoNames);

                    /**
                     * 判断参数 RepoNames 是否已赋值
                     * @return RepoNames 是否已赋值
                     * 
                     */
                    bool RepoNamesHasBeenSet() const;

                private:

                    /**
                     * 仓库名称数组
                     */
                    std::vector<std::string> m_repoNames;
                    bool m_repoNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_BATCHDELETEREPOSITORYPERSONALREQUEST_H_
