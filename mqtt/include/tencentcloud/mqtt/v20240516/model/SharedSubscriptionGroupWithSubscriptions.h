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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_SHAREDSUBSCRIPTIONGROUPWITHSUBSCRIPTIONS_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_SHAREDSUBSCRIPTIONGROUPWITHSUBSCRIPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * 查询共享订阅组（带订阅）
                */
                class SharedSubscriptionGroupWithSubscriptions : public AbstractModel
                {
                public:
                    SharedSubscriptionGroupWithSubscriptions();
                    ~SharedSubscriptionGroupWithSubscriptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>共享组名</p>
                     * @return SharedName <p>共享组名</p>
                     * 
                     */
                    std::string GetSharedName() const;

                    /**
                     * 设置<p>共享组名</p>
                     * @param _sharedName <p>共享组名</p>
                     * 
                     */
                    void SetSharedName(const std::string& _sharedName);

                    /**
                     * 判断参数 SharedName 是否已赋值
                     * @return SharedName 是否已赋值
                     * 
                     */
                    bool SharedNameHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p><p>单位：毫秒级时间戳</p>
                     * @return CreateTime <p>创建时间</p><p>单位：毫秒级时间戳</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p><p>单位：毫秒级时间戳</p>
                     * @param _createTime <p>创建时间</p><p>单位：毫秒级时间戳</p>
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p><p>单位：毫秒级时间戳</p>
                     * @return UpdateTime <p>更新时间</p><p>单位：毫秒级时间戳</p>
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p><p>单位：毫秒级时间戳</p>
                     * @param _updateTime <p>更新时间</p><p>单位：毫秒级时间戳</p>
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>订阅表达式</p>
                     * @return TopicFilters <p>订阅表达式</p>
                     * 
                     */
                    std::vector<std::string> GetTopicFilters() const;

                    /**
                     * 设置<p>订阅表达式</p>
                     * @param _topicFilters <p>订阅表达式</p>
                     * 
                     */
                    void SetTopicFilters(const std::vector<std::string>& _topicFilters);

                    /**
                     * 判断参数 TopicFilters 是否已赋值
                     * @return TopicFilters 是否已赋值
                     * 
                     */
                    bool TopicFiltersHasBeenSet() const;

                private:

                    /**
                     * <p>共享组名</p>
                     */
                    std::string m_sharedName;
                    bool m_sharedNameHasBeenSet;

                    /**
                     * <p>创建时间</p><p>单位：毫秒级时间戳</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p><p>单位：毫秒级时间戳</p>
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>订阅表达式</p>
                     */
                    std::vector<std::string> m_topicFilters;
                    bool m_topicFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_SHAREDSUBSCRIPTIONGROUPWITHSUBSCRIPTIONS_H_
