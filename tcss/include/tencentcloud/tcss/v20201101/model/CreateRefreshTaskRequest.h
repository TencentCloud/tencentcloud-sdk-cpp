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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEREFRESHTASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEREFRESHTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateRefreshTask请求参数结构体
                */
                class CreateRefreshTaskRequest : public AbstractModel
                {
                public:
                    CreateRefreshTaskRequest();
                    ~CreateRefreshTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定集群列表,若为空则标识同步所有集群
                     * @return ClusterIDs 指定集群列表,若为空则标识同步所有集群
                     * 
                     */
                    std::vector<std::string> GetClusterIDs() const;

                    /**
                     * 设置指定集群列表,若为空则标识同步所有集群
                     * @param _clusterIDs 指定集群列表,若为空则标识同步所有集群
                     * 
                     */
                    void SetClusterIDs(const std::vector<std::string>& _clusterIDs);

                    /**
                     * 判断参数 ClusterIDs 是否已赋值
                     * @return ClusterIDs 是否已赋值
                     * 
                     */
                    bool ClusterIDsHasBeenSet() const;

                    /**
                     * 获取是否只同步列表
                     * @return IsSyncListOnly 是否只同步列表
                     * 
                     */
                    bool GetIsSyncListOnly() const;

                    /**
                     * 设置是否只同步列表
                     * @param _isSyncListOnly 是否只同步列表
                     * 
                     */
                    void SetIsSyncListOnly(const bool& _isSyncListOnly);

                    /**
                     * 判断参数 IsSyncListOnly 是否已赋值
                     * @return IsSyncListOnly 是否已赋值
                     * 
                     */
                    bool IsSyncListOnlyHasBeenSet() const;

                private:

                    /**
                     * 指定集群列表,若为空则标识同步所有集群
                     */
                    std::vector<std::string> m_clusterIDs;
                    bool m_clusterIDsHasBeenSet;

                    /**
                     * 是否只同步列表
                     */
                    bool m_isSyncListOnly;
                    bool m_isSyncListOnlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEREFRESHTASKREQUEST_H_
