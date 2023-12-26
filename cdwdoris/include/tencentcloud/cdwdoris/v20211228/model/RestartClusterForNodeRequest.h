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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESTARTCLUSTERFORNODEREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESTARTCLUSTERFORNODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * RestartClusterForNode请求参数结构体
                */
                class RestartClusterForNodeRequest : public AbstractModel
                {
                public:
                    RestartClusterForNodeRequest();
                    ~RestartClusterForNodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID，例如cdwch-xxxx
                     * @return InstanceId 集群ID，例如cdwch-xxxx
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID，例如cdwch-xxxx
                     * @param _instanceId 集群ID，例如cdwch-xxxx
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取配置文件名称
                     * @return ConfigName 配置文件名称
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置配置文件名称
                     * @param _configName 配置文件名称
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取每次重启的批次
                     * @return BatchSize 每次重启的批次
                     * 
                     */
                    int64_t GetBatchSize() const;

                    /**
                     * 设置每次重启的批次
                     * @param _batchSize 每次重启的批次
                     * 
                     */
                    void SetBatchSize(const int64_t& _batchSize);

                    /**
                     * 判断参数 BatchSize 是否已赋值
                     * @return BatchSize 是否已赋值
                     * 
                     */
                    bool BatchSizeHasBeenSet() const;

                    /**
                     * 获取重启节点
                     * @return NodeList 重启节点
                     * 
                     */
                    std::vector<std::string> GetNodeList() const;

                    /**
                     * 设置重启节点
                     * @param _nodeList 重启节点
                     * 
                     */
                    void SetNodeList(const std::vector<std::string>& _nodeList);

                    /**
                     * 判断参数 NodeList 是否已赋值
                     * @return NodeList 是否已赋值
                     * 
                     */
                    bool NodeListHasBeenSet() const;

                    /**
                     * 获取false表示非滚动重启，true表示滚动重启
                     * @return RollingRestart false表示非滚动重启，true表示滚动重启
                     * 
                     */
                    bool GetRollingRestart() const;

                    /**
                     * 设置false表示非滚动重启，true表示滚动重启
                     * @param _rollingRestart false表示非滚动重启，true表示滚动重启
                     * 
                     */
                    void SetRollingRestart(const bool& _rollingRestart);

                    /**
                     * 判断参数 RollingRestart 是否已赋值
                     * @return RollingRestart 是否已赋值
                     * 
                     */
                    bool RollingRestartHasBeenSet() const;

                private:

                    /**
                     * 集群ID，例如cdwch-xxxx
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 配置文件名称
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * 每次重启的批次
                     */
                    int64_t m_batchSize;
                    bool m_batchSizeHasBeenSet;

                    /**
                     * 重启节点
                     */
                    std::vector<std::string> m_nodeList;
                    bool m_nodeListHasBeenSet;

                    /**
                     * false表示非滚动重启，true表示滚动重启
                     */
                    bool m_rollingRestart;
                    bool m_rollingRestartHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESTARTCLUSTERFORNODEREQUEST_H_
