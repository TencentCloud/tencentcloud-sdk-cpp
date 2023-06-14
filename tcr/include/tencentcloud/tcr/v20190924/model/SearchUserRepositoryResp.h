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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_SEARCHUSERREPOSITORYRESP_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_SEARCHUSERREPOSITORYRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/RepoInfo.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 获取满足输入搜索条件的用户镜像仓库
                */
                class SearchUserRepositoryResp : public AbstractModel
                {
                public:
                    SearchUserRepositoryResp();
                    ~SearchUserRepositoryResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总个数
                     * @return TotalCount 总个数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置总个数
                     * @param _totalCount 总个数
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
                     * 获取仓库列表
                     * @return RepoInfo 仓库列表
                     * 
                     */
                    std::vector<RepoInfo> GetRepoInfo() const;

                    /**
                     * 设置仓库列表
                     * @param _repoInfo 仓库列表
                     * 
                     */
                    void SetRepoInfo(const std::vector<RepoInfo>& _repoInfo);

                    /**
                     * 判断参数 RepoInfo 是否已赋值
                     * @return RepoInfo 是否已赋值
                     * 
                     */
                    bool RepoInfoHasBeenSet() const;

                    /**
                     * 获取Server
                     * @return Server Server
                     * 
                     */
                    std::string GetServer() const;

                    /**
                     * 设置Server
                     * @param _server Server
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
                     * 获取PrivilegeFiltered
                     * @return PrivilegeFiltered PrivilegeFiltered
                     * 
                     */
                    bool GetPrivilegeFiltered() const;

                    /**
                     * 设置PrivilegeFiltered
                     * @param _privilegeFiltered PrivilegeFiltered
                     * 
                     */
                    void SetPrivilegeFiltered(const bool& _privilegeFiltered);

                    /**
                     * 判断参数 PrivilegeFiltered 是否已赋值
                     * @return PrivilegeFiltered 是否已赋值
                     * 
                     */
                    bool PrivilegeFilteredHasBeenSet() const;

                private:

                    /**
                     * 总个数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 仓库列表
                     */
                    std::vector<RepoInfo> m_repoInfo;
                    bool m_repoInfoHasBeenSet;

                    /**
                     * Server
                     */
                    std::string m_server;
                    bool m_serverHasBeenSet;

                    /**
                     * PrivilegeFiltered
                     */
                    bool m_privilegeFiltered;
                    bool m_privilegeFilteredHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_SEARCHUSERREPOSITORYRESP_H_
