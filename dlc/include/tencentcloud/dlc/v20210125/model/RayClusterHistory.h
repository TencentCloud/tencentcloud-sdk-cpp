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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RAYCLUSTERHISTORY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RAYCLUSTERHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 集群状态历史详情
                */
                class RayClusterHistory : public AbstractModel
                {
                public:
                    RayClusterHistory();
                    ~RayClusterHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>历史记录ID</p>
                     * @return Id <p>历史记录ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>历史记录ID</p>
                     * @param _id <p>历史记录ID</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>集群/数据实验室ID</p>
                     * @return ClusterId <p>集群/数据实验室ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群/数据实验室ID</p>
                     * @param _clusterId <p>集群/数据实验室ID</p>
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
                     * 获取<p>集群/数据实验室名称</p>
                     * @return ClusterName <p>集群/数据实验室名称</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群/数据实验室名称</p>
                     * @param _clusterName <p>集群/数据实验室名称</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>源状态</p>
                     * @return FromState <p>源状态</p>
                     * 
                     */
                    std::string GetFromState() const;

                    /**
                     * 设置<p>源状态</p>
                     * @param _fromState <p>源状态</p>
                     * 
                     */
                    void SetFromState(const std::string& _fromState);

                    /**
                     * 判断参数 FromState 是否已赋值
                     * @return FromState 是否已赋值
                     * 
                     */
                    bool FromStateHasBeenSet() const;

                    /**
                     * 获取<p>目标状态</p>
                     * @return ToState <p>目标状态</p>
                     * 
                     */
                    std::string GetToState() const;

                    /**
                     * 设置<p>目标状态</p>
                     * @param _toState <p>目标状态</p>
                     * 
                     */
                    void SetToState(const std::string& _toState);

                    /**
                     * 判断参数 ToState 是否已赋值
                     * @return ToState 是否已赋值
                     * 
                     */
                    bool ToStateHasBeenSet() const;

                    /**
                     * 获取<p>触发事件</p>
                     * @return Event <p>触发事件</p>
                     * 
                     */
                    std::string GetEvent() const;

                    /**
                     * 设置<p>触发事件</p>
                     * @param _event <p>触发事件</p>
                     * 
                     */
                    void SetEvent(const std::string& _event);

                    /**
                     * 判断参数 Event 是否已赋值
                     * @return Event 是否已赋值
                     * 
                     */
                    bool EventHasBeenSet() const;

                    /**
                     * 获取<p>消息</p>
                     * @return Message <p>消息</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>消息</p>
                     * @param _message <p>消息</p>
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
                     * 获取<p>转换时间（毫秒时间戳）</p>
                     * @return TransitionTime <p>转换时间（毫秒时间戳）</p>
                     * 
                     */
                    int64_t GetTransitionTime() const;

                    /**
                     * 设置<p>转换时间（毫秒时间戳）</p>
                     * @param _transitionTime <p>转换时间（毫秒时间戳）</p>
                     * 
                     */
                    void SetTransitionTime(const int64_t& _transitionTime);

                    /**
                     * 判断参数 TransitionTime 是否已赋值
                     * @return TransitionTime 是否已赋值
                     * 
                     */
                    bool TransitionTimeHasBeenSet() const;

                private:

                    /**
                     * <p>历史记录ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>集群/数据实验室ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群/数据实验室名称</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>源状态</p>
                     */
                    std::string m_fromState;
                    bool m_fromStateHasBeenSet;

                    /**
                     * <p>目标状态</p>
                     */
                    std::string m_toState;
                    bool m_toStateHasBeenSet;

                    /**
                     * <p>触发事件</p>
                     */
                    std::string m_event;
                    bool m_eventHasBeenSet;

                    /**
                     * <p>消息</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>转换时间（毫秒时间戳）</p>
                     */
                    int64_t m_transitionTime;
                    bool m_transitionTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RAYCLUSTERHISTORY_H_
