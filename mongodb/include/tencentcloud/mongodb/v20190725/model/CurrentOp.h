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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_CURRENTOP_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_CURRENTOP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 云数据库实例当前操作
                */
                class CurrentOp : public AbstractModel
                {
                public:
                    CurrentOp();
                    ~CurrentOp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作序号。
                     * @return OpId 操作序号。
                     * 
                     */
                    int64_t GetOpId() const;

                    /**
                     * 设置操作序号。
                     * @param _opId 操作序号。
                     * 
                     */
                    void SetOpId(const int64_t& _opId);

                    /**
                     * 判断参数 OpId 是否已赋值
                     * @return OpId 是否已赋值
                     * 
                     */
                    bool OpIdHasBeenSet() const;

                    /**
                     * 获取操作所在的命名空间，形式如db.collection。
                     * @return Ns 操作所在的命名空间，形式如db.collection。
                     * 
                     */
                    std::string GetNs() const;

                    /**
                     * 设置操作所在的命名空间，形式如db.collection。
                     * @param _ns 操作所在的命名空间，形式如db.collection。
                     * 
                     */
                    void SetNs(const std::string& _ns);

                    /**
                     * 判断参数 Ns 是否已赋值
                     * @return Ns 是否已赋值
                     * 
                     */
                    bool NsHasBeenSet() const;

                    /**
                     * 获取操作执行语句。
                     * @return Query 操作执行语句。
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置操作执行语句。
                     * @param _query 操作执行语句。
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取操作类型，可能的取值：aggregate、count、delete、distinct、find、findAndModify、getMore、insert、mapReduce、update和command。
                     * @return Op 操作类型，可能的取值：aggregate、count、delete、distinct、find、findAndModify、getMore、insert、mapReduce、update和command。
                     * 
                     */
                    std::string GetOp() const;

                    /**
                     * 设置操作类型，可能的取值：aggregate、count、delete、distinct、find、findAndModify、getMore、insert、mapReduce、update和command。
                     * @param _op 操作类型，可能的取值：aggregate、count、delete、distinct、find、findAndModify、getMore、insert、mapReduce、update和command。
                     * 
                     */
                    void SetOp(const std::string& _op);

                    /**
                     * 判断参数 Op 是否已赋值
                     * @return Op 是否已赋值
                     * 
                     */
                    bool OpHasBeenSet() const;

                    /**
                     * 获取操作所在的分片名称。
                     * @return ReplicaSetName 操作所在的分片名称。
                     * 
                     */
                    std::string GetReplicaSetName() const;

                    /**
                     * 设置操作所在的分片名称。
                     * @param _replicaSetName 操作所在的分片名称。
                     * 
                     */
                    void SetReplicaSetName(const std::string& _replicaSetName);

                    /**
                     * 判断参数 ReplicaSetName 是否已赋值
                     * @return ReplicaSetName 是否已赋值
                     * 
                     */
                    bool ReplicaSetNameHasBeenSet() const;

                    /**
                     * 获取操作所在的节点名称。
                     * @return NodeName 操作所在的节点名称。
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置操作所在的节点名称。
                     * @param _nodeName 操作所在的节点名称。
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取操作详细信息。
                     * @return Operation 操作详细信息。
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作详细信息。
                     * @param _operation 操作详细信息。
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取筛选条件，节点状态，可能的取值为：Primary、Secondary。
                     * @return State 筛选条件，节点状态，可能的取值为：Primary、Secondary。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置筛选条件，节点状态，可能的取值为：Primary、Secondary。
                     * @param _state 筛选条件，节点状态，可能的取值为：Primary、Secondary。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取操作已执行时间（ms）。
                     * @return MicrosecsRunning 操作已执行时间（ms）。
                     * 
                     */
                    uint64_t GetMicrosecsRunning() const;

                    /**
                     * 设置操作已执行时间（ms）。
                     * @param _microsecsRunning 操作已执行时间（ms）。
                     * 
                     */
                    void SetMicrosecsRunning(const uint64_t& _microsecsRunning);

                    /**
                     * 判断参数 MicrosecsRunning 是否已赋值
                     * @return MicrosecsRunning 是否已赋值
                     * 
                     */
                    bool MicrosecsRunningHasBeenSet() const;

                    /**
                     * 获取当前操作所在节点信息。
                     * @return ExecNode 当前操作所在节点信息。
                     * 
                     */
                    std::string GetExecNode() const;

                    /**
                     * 设置当前操作所在节点信息。
                     * @param _execNode 当前操作所在节点信息。
                     * 
                     */
                    void SetExecNode(const std::string& _execNode);

                    /**
                     * 判断参数 ExecNode 是否已赋值
                     * @return ExecNode 是否已赋值
                     * 
                     */
                    bool ExecNodeHasBeenSet() const;

                private:

                    /**
                     * 操作序号。
                     */
                    int64_t m_opId;
                    bool m_opIdHasBeenSet;

                    /**
                     * 操作所在的命名空间，形式如db.collection。
                     */
                    std::string m_ns;
                    bool m_nsHasBeenSet;

                    /**
                     * 操作执行语句。
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 操作类型，可能的取值：aggregate、count、delete、distinct、find、findAndModify、getMore、insert、mapReduce、update和command。
                     */
                    std::string m_op;
                    bool m_opHasBeenSet;

                    /**
                     * 操作所在的分片名称。
                     */
                    std::string m_replicaSetName;
                    bool m_replicaSetNameHasBeenSet;

                    /**
                     * 操作所在的节点名称。
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 操作详细信息。
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 筛选条件，节点状态，可能的取值为：Primary、Secondary。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 操作已执行时间（ms）。
                     */
                    uint64_t m_microsecsRunning;
                    bool m_microsecsRunningHasBeenSet;

                    /**
                     * 当前操作所在节点信息。
                     */
                    std::string m_execNode;
                    bool m_execNodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CURRENTOP_H_
