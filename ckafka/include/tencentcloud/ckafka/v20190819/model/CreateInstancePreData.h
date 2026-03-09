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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPREDATA_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPREDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/DealInstanceDTO.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 创建预付费接口返回的Data
                */
                class CreateInstancePreData : public AbstractModel
                {
                public:
                    CreateInstancePreData();
                    ~CreateInstancePreData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>CreateInstancePre返回固定为0，不能作为CheckTaskStatus的查询条件。只是为了保证和后台数据结构对齐。</p>
                     * @return FlowId <p>CreateInstancePre返回固定为0，不能作为CheckTaskStatus的查询条件。只是为了保证和后台数据结构对齐。</p>
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置<p>CreateInstancePre返回固定为0，不能作为CheckTaskStatus的查询条件。只是为了保证和后台数据结构对齐。</p>
                     * @param _flowId <p>CreateInstancePre返回固定为0，不能作为CheckTaskStatus的查询条件。只是为了保证和后台数据结构对齐。</p>
                     * 
                     */
                    void SetFlowId(const int64_t& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取<p>订单号列表</p>
                     * @return DealNames <p>订单号列表</p>
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 设置<p>订单号列表</p>
                     * @param _dealNames <p>订单号列表</p>
                     * 
                     */
                    void SetDealNames(const std::vector<std::string>& _dealNames);

                    /**
                     * 判断参数 DealNames 是否已赋值
                     * @return DealNames 是否已赋值
                     * 
                     */
                    bool DealNamesHasBeenSet() const;

                    /**
                     * 获取<p>ckafka集群实例Id，当购买多个实例时，默认返回购买的第一个实例 id</p>
                     * @return InstanceId <p>ckafka集群实例Id，当购买多个实例时，默认返回购买的第一个实例 id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ckafka集群实例Id，当购买多个实例时，默认返回购买的第一个实例 id</p>
                     * @param _instanceId <p>ckafka集群实例Id，当购买多个实例时，默认返回购买的第一个实例 id</p>
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
                     * 获取<p>订单和购买实例对应映射列表</p>
                     * @return DealNameInstanceIdMapping <p>订单和购买实例对应映射列表</p>
                     * 
                     */
                    std::vector<DealInstanceDTO> GetDealNameInstanceIdMapping() const;

                    /**
                     * 设置<p>订单和购买实例对应映射列表</p>
                     * @param _dealNameInstanceIdMapping <p>订单和购买实例对应映射列表</p>
                     * 
                     */
                    void SetDealNameInstanceIdMapping(const std::vector<DealInstanceDTO>& _dealNameInstanceIdMapping);

                    /**
                     * 判断参数 DealNameInstanceIdMapping 是否已赋值
                     * @return DealNameInstanceIdMapping 是否已赋值
                     * 
                     */
                    bool DealNameInstanceIdMappingHasBeenSet() const;

                    /**
                     * 获取<p>CAM鉴权返回的eventId</p>
                     * @return EventId <p>CAM鉴权返回的eventId</p>
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置<p>CAM鉴权返回的eventId</p>
                     * @param _eventId <p>CAM鉴权返回的eventId</p>
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                private:

                    /**
                     * <p>CreateInstancePre返回固定为0，不能作为CheckTaskStatus的查询条件。只是为了保证和后台数据结构对齐。</p>
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>订单号列表</p>
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                    /**
                     * <p>ckafka集群实例Id，当购买多个实例时，默认返回购买的第一个实例 id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>订单和购买实例对应映射列表</p>
                     */
                    std::vector<DealInstanceDTO> m_dealNameInstanceIdMapping;
                    bool m_dealNameInstanceIdMappingHasBeenSet;

                    /**
                     * <p>CAM鉴权返回的eventId</p>
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPREDATA_H_
