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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYREPOSITORYACCESSPERSONALREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYREPOSITORYACCESSPERSONALREQUEST_H_

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
                * ModifyRepositoryAccessPersonal请求参数结构体
                */
                class ModifyRepositoryAccessPersonalRequest : public AbstractModel
                {
                public:
                    ModifyRepositoryAccessPersonalRequest();
                    ~ModifyRepositoryAccessPersonalRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取默认值为0, 1公共，0私有
                     * @return Public 默认值为0, 1公共，0私有
                     * 
                     */
                    int64_t GetPublic() const;

                    /**
                     * 设置默认值为0, 1公共，0私有
                     * @param _public 默认值为0, 1公共，0私有
                     * 
                     */
                    void SetPublic(const int64_t& _public);

                    /**
                     * 判断参数 Public 是否已赋值
                     * @return Public 是否已赋值
                     * 
                     */
                    bool PublicHasBeenSet() const;

                private:

                    /**
                     * 仓库名称
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * 默认值为0, 1公共，0私有
                     */
                    int64_t m_public;
                    bool m_publicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYREPOSITORYACCESSPERSONALREQUEST_H_
