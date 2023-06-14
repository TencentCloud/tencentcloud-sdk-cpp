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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_REPOINFORESP_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_REPOINFORESP_H_

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
                * 仓库信息的返回信息
                */
                class RepoInfoResp : public AbstractModel
                {
                public:
                    RepoInfoResp();
                    ~RepoInfoResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取仓库总数
                     * @return TotalCount 仓库总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置仓库总数
                     * @param _totalCount 仓库总数
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
                     * 获取仓库信息列表
                     * @return RepoInfo 仓库信息列表
                     * 
                     */
                    std::vector<RepoInfo> GetRepoInfo() const;

                    /**
                     * 设置仓库信息列表
                     * @param _repoInfo 仓库信息列表
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
                     * 获取Server信息
                     * @return Server Server信息
                     * 
                     */
                    std::string GetServer() const;

                    /**
                     * 设置Server信息
                     * @param _server Server信息
                     * 
                     */
                    void SetServer(const std::string& _server);

                    /**
                     * 判断参数 Server 是否已赋值
                     * @return Server 是否已赋值
                     * 
                     */
                    bool ServerHasBeenSet() const;

                private:

                    /**
                     * 仓库总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 仓库信息列表
                     */
                    std::vector<RepoInfo> m_repoInfo;
                    bool m_repoInfoHasBeenSet;

                    /**
                     * Server信息
                     */
                    std::string m_server;
                    bool m_serverHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_REPOINFORESP_H_
