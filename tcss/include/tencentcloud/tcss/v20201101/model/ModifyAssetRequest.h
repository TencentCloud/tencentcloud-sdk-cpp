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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYASSETREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYASSETREQUEST_H_

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
                * ModifyAsset请求参数结构体
                */
                class ModifyAssetRequest : public AbstractModel
                {
                public:
                    ModifyAssetRequest();
                    ~ModifyAssetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取同步全部普通节点
                     * @return All 同步全部普通节点
                     * 
                     */
                    bool GetAll() const;

                    /**
                     * 设置同步全部普通节点
                     * @param _all 同步全部普通节点
                     * 
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * 
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取要同步的主机列表uuid 
                     * @return Hosts 要同步的主机列表uuid 
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置要同步的主机列表uuid 
                     * @param _hosts 要同步的主机列表uuid 
                     * 
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取同步全部超级节点
                     * @return AllSuperHost 同步全部超级节点
                     * 
                     */
                    bool GetAllSuperHost() const;

                    /**
                     * 设置同步全部超级节点
                     * @param _allSuperHost 同步全部超级节点
                     * 
                     */
                    void SetAllSuperHost(const bool& _allSuperHost);

                    /**
                     * 判断参数 AllSuperHost 是否已赋值
                     * @return AllSuperHost 是否已赋值
                     * 
                     */
                    bool AllSuperHostHasBeenSet() const;

                    /**
                     * 获取要同步的超级节点唯一id
                     * @return NodeUniqueIds 要同步的超级节点唯一id
                     * 
                     */
                    std::vector<std::string> GetNodeUniqueIds() const;

                    /**
                     * 设置要同步的超级节点唯一id
                     * @param _nodeUniqueIds 要同步的超级节点唯一id
                     * 
                     */
                    void SetNodeUniqueIds(const std::vector<std::string>& _nodeUniqueIds);

                    /**
                     * 判断参数 NodeUniqueIds 是否已赋值
                     * @return NodeUniqueIds 是否已赋值
                     * 
                     */
                    bool NodeUniqueIdsHasBeenSet() const;

                    /**
                     * 获取超时时间(秒) 最低3600s
                     * @return TimeoutSec 超时时间(秒) 最低3600s
                     * 
                     */
                    uint64_t GetTimeoutSec() const;

                    /**
                     * 设置超时时间(秒) 最低3600s
                     * @param _timeoutSec 超时时间(秒) 最低3600s
                     * 
                     */
                    void SetTimeoutSec(const uint64_t& _timeoutSec);

                    /**
                     * 判断参数 TimeoutSec 是否已赋值
                     * @return TimeoutSec 是否已赋值
                     * 
                     */
                    bool TimeoutSecHasBeenSet() const;

                private:

                    /**
                     * 同步全部普通节点
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * 要同步的主机列表uuid 
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * 同步全部超级节点
                     */
                    bool m_allSuperHost;
                    bool m_allSuperHostHasBeenSet;

                    /**
                     * 要同步的超级节点唯一id
                     */
                    std::vector<std::string> m_nodeUniqueIds;
                    bool m_nodeUniqueIdsHasBeenSet;

                    /**
                     * 超时时间(秒) 最低3600s
                     */
                    uint64_t m_timeoutSec;
                    bool m_timeoutSecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYASSETREQUEST_H_
