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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_INSTANCELOG_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_INSTANCELOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ES集群日志详细信息
                */
                class InstanceLog : public AbstractModel
                {
                public:
                    InstanceLog();
                    ~InstanceLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志时间
                     * @return Time 日志时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置日志时间
                     * @param _time 日志时间
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取日志级别
                     * @return Level 日志级别
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置日志级别
                     * @param _level 日志级别
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取集群节点ip
                     * @return Ip 集群节点ip
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置集群节点ip
                     * @param _ip 集群节点ip
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取日志内容
                     * @return Message 日志内容
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置日志内容
                     * @param _message 日志内容
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取集群节点ID
                     * @return NodeID 集群节点ID
                     * 
                     */
                    std::string GetNodeID() const;

                    /**
                     * 设置集群节点ID
                     * @param _nodeID 集群节点ID
                     * 
                     */
                    void SetNodeID(const std::string& _nodeID);

                    /**
                     * 判断参数 NodeID 是否已赋值
                     * @return NodeID 是否已赋值
                     * 
                     */
                    bool NodeIDHasBeenSet() const;

                    /**
                     * 获取慢日志索引名
                     * @return IndexName 慢日志索引名
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置慢日志索引名
                     * @param _indexName 慢日志索引名
                     * 
                     */
                    void SetIndexName(const std::string& _indexName);

                    /**
                     * 判断参数 IndexName 是否已赋值
                     * @return IndexName 是否已赋值
                     * 
                     */
                    bool IndexNameHasBeenSet() const;

                    /**
                     * 获取慢日志索引分片
                     * @return Shard 慢日志索引分片
                     * 
                     */
                    std::string GetShard() const;

                    /**
                     * 设置慢日志索引分片
                     * @param _shard 慢日志索引分片
                     * 
                     */
                    void SetShard(const std::string& _shard);

                    /**
                     * 判断参数 Shard 是否已赋值
                     * @return Shard 是否已赋值
                     * 
                     */
                    bool ShardHasBeenSet() const;

                    /**
                     * 获取慢日志索引查询耗时
                     * @return QueryCost 慢日志索引查询耗时
                     * 
                     */
                    std::string GetQueryCost() const;

                    /**
                     * 设置慢日志索引查询耗时
                     * @param _queryCost 慢日志索引查询耗时
                     * 
                     */
                    void SetQueryCost(const std::string& _queryCost);

                    /**
                     * 判断参数 QueryCost 是否已赋值
                     * @return QueryCost 是否已赋值
                     * 
                     */
                    bool QueryCostHasBeenSet() const;

                private:

                    /**
                     * 日志时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 日志级别
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 集群节点ip
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 日志内容
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 集群节点ID
                     */
                    std::string m_nodeID;
                    bool m_nodeIDHasBeenSet;

                    /**
                     * 慢日志索引名
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * 慢日志索引分片
                     */
                    std::string m_shard;
                    bool m_shardHasBeenSet;

                    /**
                     * 慢日志索引查询耗时
                     */
                    std::string m_queryCost;
                    bool m_queryCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_INSTANCELOG_H_
