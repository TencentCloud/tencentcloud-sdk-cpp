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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYLOGTOPICTASKREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYLOGTOPICTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyLogTopicTask请求参数结构体
                */
                class ModifyLogTopicTaskRequest : public AbstractModel
                {
                public:
                    ModifyLogTopicTaskRequest();
                    ~ModifyLogTopicTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点ID。
                     * @return ZoneId 站点ID。
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID。
                     * @param ZoneId 站点ID。
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取日志集所属地区。
                     * @return LogSetRegion 日志集所属地区。
                     */
                    std::string GetLogSetRegion() const;

                    /**
                     * 设置日志集所属地区。
                     * @param LogSetRegion 日志集所属地区。
                     */
                    void SetLogSetRegion(const std::string& _logSetRegion);

                    /**
                     * 判断参数 LogSetRegion 是否已赋值
                     * @return LogSetRegion 是否已赋值
                     */
                    bool LogSetRegionHasBeenSet() const;

                    /**
                     * 获取日志集ID。
                     * @return LogSetId 日志集ID。
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置日志集ID。
                     * @param LogSetId 日志集ID。
                     */
                    void SetLogSetId(const std::string& _logSetId);

                    /**
                     * 判断参数 LogSetId 是否已赋值
                     * @return LogSetId 是否已赋值
                     */
                    bool LogSetIdHasBeenSet() const;

                    /**
                     * 获取日志主题ID。
                     * @return TopicId 日志主题ID。
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题ID。
                     * @param TopicId 日志主题ID。
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取数据推送类型，可选的类型有：
<li>domain：七层代理日志；</li>
<li>application：四层代理日志；</li>
<li>web-rateLiming：速率限制日志；</li>
<li>web-attack：Web攻击防护日志；</li>
<li>web-rule：自定义规则日志；</li>
<li>web-bot：Bot管理日志。</li>
                     * @return EntityType 数据推送类型，可选的类型有：
<li>domain：七层代理日志；</li>
<li>application：四层代理日志；</li>
<li>web-rateLiming：速率限制日志；</li>
<li>web-attack：Web攻击防护日志；</li>
<li>web-rule：自定义规则日志；</li>
<li>web-bot：Bot管理日志。</li>
                     */
                    std::string GetEntityType() const;

                    /**
                     * 设置数据推送类型，可选的类型有：
<li>domain：七层代理日志；</li>
<li>application：四层代理日志；</li>
<li>web-rateLiming：速率限制日志；</li>
<li>web-attack：Web攻击防护日志；</li>
<li>web-rule：自定义规则日志；</li>
<li>web-bot：Bot管理日志。</li>
                     * @param EntityType 数据推送类型，可选的类型有：
<li>domain：七层代理日志；</li>
<li>application：四层代理日志；</li>
<li>web-rateLiming：速率限制日志；</li>
<li>web-attack：Web攻击防护日志；</li>
<li>web-rule：自定义规则日志；</li>
<li>web-bot：Bot管理日志。</li>
                     */
                    void SetEntityType(const std::string& _entityType);

                    /**
                     * 判断参数 EntityType 是否已赋值
                     * @return EntityType 是否已赋值
                     */
                    bool EntityTypeHasBeenSet() const;

                    /**
                     * 获取推送任务名。
                     * @return TaskName 推送任务名。
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置推送任务名。
                     * @param TaskName 推送任务名。
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取待更新的主题名称，不填表示不更新主题名称。
                     * @return TopicName 待更新的主题名称，不填表示不更新主题名称。
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置待更新的主题名称，不填表示不更新主题名称。
                     * @param TopicName 待更新的主题名称，不填表示不更新主题名称。
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取更新后的日志集名称。
                     * @return LogSetName 更新后的日志集名称。
                     */
                    std::string GetLogSetName() const;

                    /**
                     * 设置更新后的日志集名称。
                     * @param LogSetName 更新后的日志集名称。
                     */
                    void SetLogSetName(const std::string& _logSetName);

                    /**
                     * 判断参数 LogSetName 是否已赋值
                     * @return LogSetName 是否已赋值
                     */
                    bool LogSetNameHasBeenSet() const;

                    /**
                     * 获取更新后的日志集保存时间。
                     * @return Period 更新后的日志集保存时间。
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置更新后的日志集保存时间。
                     * @param Period 更新后的日志集保存时间。
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取待添加的推送任务实体列表。
                     * @return DropEntityList 待添加的推送任务实体列表。
                     */
                    std::vector<std::string> GetDropEntityList() const;

                    /**
                     * 设置待添加的推送任务实体列表。
                     * @param DropEntityList 待添加的推送任务实体列表。
                     */
                    void SetDropEntityList(const std::vector<std::string>& _dropEntityList);

                    /**
                     * 判断参数 DropEntityList 是否已赋值
                     * @return DropEntityList 是否已赋值
                     */
                    bool DropEntityListHasBeenSet() const;

                    /**
                     * 获取待删除的推送任务实例列表。
                     * @return AddedEntityList 待删除的推送任务实例列表。
                     */
                    std::vector<std::string> GetAddedEntityList() const;

                    /**
                     * 设置待删除的推送任务实例列表。
                     * @param AddedEntityList 待删除的推送任务实例列表。
                     */
                    void SetAddedEntityList(const std::vector<std::string>& _addedEntityList);

                    /**
                     * 判断参数 AddedEntityList 是否已赋值
                     * @return AddedEntityList 是否已赋值
                     */
                    bool AddedEntityListHasBeenSet() const;

                private:

                    /**
                     * 站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 日志集所属地区。
                     */
                    std::string m_logSetRegion;
                    bool m_logSetRegionHasBeenSet;

                    /**
                     * 日志集ID。
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * 日志主题ID。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 数据推送类型，可选的类型有：
<li>domain：七层代理日志；</li>
<li>application：四层代理日志；</li>
<li>web-rateLiming：速率限制日志；</li>
<li>web-attack：Web攻击防护日志；</li>
<li>web-rule：自定义规则日志；</li>
<li>web-bot：Bot管理日志。</li>
                     */
                    std::string m_entityType;
                    bool m_entityTypeHasBeenSet;

                    /**
                     * 推送任务名。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 待更新的主题名称，不填表示不更新主题名称。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 更新后的日志集名称。
                     */
                    std::string m_logSetName;
                    bool m_logSetNameHasBeenSet;

                    /**
                     * 更新后的日志集保存时间。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 待添加的推送任务实体列表。
                     */
                    std::vector<std::string> m_dropEntityList;
                    bool m_dropEntityListHasBeenSet;

                    /**
                     * 待删除的推送任务实例列表。
                     */
                    std::vector<std::string> m_addedEntityList;
                    bool m_addedEntityListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYLOGTOPICTASKREQUEST_H_
