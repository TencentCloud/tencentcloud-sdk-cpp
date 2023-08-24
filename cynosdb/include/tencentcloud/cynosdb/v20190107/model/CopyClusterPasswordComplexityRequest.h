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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_COPYCLUSTERPASSWORDCOMPLEXITYREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_COPYCLUSTERPASSWORDCOMPLEXITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CopyClusterPasswordComplexity请求参数结构体
                */
                class CopyClusterPasswordComplexityRequest : public AbstractModel
                {
                public:
                    CopyClusterPasswordComplexityRequest();
                    ~CopyClusterPasswordComplexityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取复制集群ID数组，例如["cynosdbmysql-bzxxrmtq","cynosdbmysql-qwer"]
                     * @return ClusterIds 复制集群ID数组，例如["cynosdbmysql-bzxxrmtq","cynosdbmysql-qwer"]
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置复制集群ID数组，例如["cynosdbmysql-bzxxrmtq","cynosdbmysql-qwer"]
                     * @param _clusterIds 复制集群ID数组，例如["cynosdbmysql-bzxxrmtq","cynosdbmysql-qwer"]
                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                    /**
                     * 获取集群id，例如"cynosdbmysql-bzxxrmtq"
                     * @return SourceClusterId 集群id，例如"cynosdbmysql-bzxxrmtq"
                     * 
                     */
                    std::string GetSourceClusterId() const;

                    /**
                     * 设置集群id，例如"cynosdbmysql-bzxxrmtq"
                     * @param _sourceClusterId 集群id，例如"cynosdbmysql-bzxxrmtq"
                     * 
                     */
                    void SetSourceClusterId(const std::string& _sourceClusterId);

                    /**
                     * 判断参数 SourceClusterId 是否已赋值
                     * @return SourceClusterId 是否已赋值
                     * 
                     */
                    bool SourceClusterIdHasBeenSet() const;

                private:

                    /**
                     * 复制集群ID数组，例如["cynosdbmysql-bzxxrmtq","cynosdbmysql-qwer"]
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * 集群id，例如"cynosdbmysql-bzxxrmtq"
                     */
                    std::string m_sourceClusterId;
                    bool m_sourceClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_COPYCLUSTERPASSWORDCOMPLEXITYREQUEST_H_
