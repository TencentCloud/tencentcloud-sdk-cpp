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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PAUSESERVERLESSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PAUSESERVERLESSREQUEST_H_

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
                * PauseServerless请求参数结构体
                */
                class PauseServerlessRequest : public AbstractModel
                {
                public:
                    PauseServerlessRequest();
                    ~PauseServerlessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取是否强制暂停，忽略当前的用户链接  0:不强制  1:强制， 默认为1
                     * @return ForcePause 是否强制暂停，忽略当前的用户链接  0:不强制  1:强制， 默认为1
                     * 
                     */
                    int64_t GetForcePause() const;

                    /**
                     * 设置是否强制暂停，忽略当前的用户链接  0:不强制  1:强制， 默认为1
                     * @param _forcePause 是否强制暂停，忽略当前的用户链接  0:不强制  1:强制， 默认为1
                     * 
                     */
                    void SetForcePause(const int64_t& _forcePause);

                    /**
                     * 判断参数 ForcePause 是否已赋值
                     * @return ForcePause 是否已赋值
                     * 
                     */
                    bool ForcePauseHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 是否强制暂停，忽略当前的用户链接  0:不强制  1:强制， 默认为1
                     */
                    int64_t m_forcePause;
                    bool m_forcePauseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PAUSESERVERLESSREQUEST_H_
