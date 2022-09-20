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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_LOGTOPICDETAILINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_LOGTOPICDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 推送任务详细信息
                */
                class LogTopicDetailInfo : public AbstractModel
                {
                public:
                    LogTopicDetailInfo();
                    ~LogTopicDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取推送任务的任务名称。
                     * @return TaskName 推送任务的任务名称。
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置推送任务的任务名称。
                     * @param TaskName 推送任务的任务名称。
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取日志集所属的地域。
                     * @return LogSetRegion 日志集所属的地域。
                     */
                    std::string GetLogSetRegion() const;

                    /**
                     * 设置日志集所属的地域。
                     * @param LogSetRegion 日志集所属的地域。
                     */
                    void SetLogSetRegion(const std::string& _logSetRegion);

                    /**
                     * 判断参数 LogSetRegion 是否已赋值
                     * @return LogSetRegion 是否已赋值
                     */
                    bool LogSetRegionHasBeenSet() const;

                    /**
                     * 获取推送任务的类型。
                     * @return EntityType 推送任务的类型。
                     */
                    std::string GetEntityType() const;

                    /**
                     * 设置推送任务的类型。
                     * @param EntityType 推送任务的类型。
                     */
                    void SetEntityType(const std::string& _entityType);

                    /**
                     * 判断参数 EntityType 是否已赋值
                     * @return EntityType 是否已赋值
                     */
                    bool EntityTypeHasBeenSet() const;

                    /**
                     * 获取任务实体列表。
                     * @return EntityList 任务实体列表。
                     */
                    std::vector<std::string> GetEntityList() const;

                    /**
                     * 设置任务实体列表。
                     * @param EntityList 任务实体列表。
                     */
                    void SetEntityList(const std::vector<std::string>& _entityList);

                    /**
                     * 判断参数 EntityList 是否已赋值
                     * @return EntityList 是否已赋值
                     */
                    bool EntityListHasBeenSet() const;

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
                     * 获取日志集名称。
                     * @return LogSetName 日志集名称。
                     */
                    std::string GetLogSetName() const;

                    /**
                     * 设置日志集名称。
                     * @param LogSetName 日志集名称。
                     */
                    void SetLogSetName(const std::string& _logSetName);

                    /**
                     * 判断参数 LogSetName 是否已赋值
                     * @return LogSetName 是否已赋值
                     */
                    bool LogSetNameHasBeenSet() const;

                    /**
                     * 获取推送任务主题ID。
                     * @return TopicId 推送任务主题ID。
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置推送任务主题ID。
                     * @param TopicId 推送任务主题ID。
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取推送任务主题名称。
                     * @return TopicName 推送任务主题名称。
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置推送任务主题名称。
                     * @param TopicName 推送任务主题名称。
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取推送任务主题保存时间，单位为天。
                     * @return Period 推送任务主题保存时间，单位为天。
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置推送任务主题保存时间，单位为天。
                     * @param Period 推送任务主题保存时间，单位为天。
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取推送任务是否开启。
                     * @return Enabled 推送任务是否开启。
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置推送任务是否开启。
                     * @param Enabled 推送任务是否开启。
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取推送任务创建时间，时间格式为: YYYY-mm-dd HH:MM:SS。
                     * @return CreateTime 推送任务创建时间，时间格式为: YYYY-mm-dd HH:MM:SS。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置推送任务创建时间，时间格式为: YYYY-mm-dd HH:MM:SS。
                     * @param CreateTime 推送任务创建时间，时间格式为: YYYY-mm-dd HH:MM:SS。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取加速区域，取值有：
<li>mainland：中国大陆境内;</li>
<li>overseas：全球（不含中国大陆）。</li>
                     * @return Area 加速区域，取值有：
<li>mainland：中国大陆境内;</li>
<li>overseas：全球（不含中国大陆）。</li>
                     */
                    std::string GetArea() const;

                    /**
                     * 设置加速区域，取值有：
<li>mainland：中国大陆境内;</li>
<li>overseas：全球（不含中国大陆）。</li>
                     * @param Area 加速区域，取值有：
<li>mainland：中国大陆境内;</li>
<li>overseas：全球（不含中国大陆）。</li>
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取站点ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneId 站点ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ZoneId 站点ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取站点名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneName 站点名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置站点名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ZoneName 站点名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取是否被删除了，取值有：
<li>yes: 已经被删除；</li>
<li>no: 没有被删除。</li>
                     * @return Deleted 是否被删除了，取值有：
<li>yes: 已经被删除；</li>
<li>no: 没有被删除。</li>
                     */
                    std::string GetDeleted() const;

                    /**
                     * 设置是否被删除了，取值有：
<li>yes: 已经被删除；</li>
<li>no: 没有被删除。</li>
                     * @param Deleted 是否被删除了，取值有：
<li>yes: 已经被删除；</li>
<li>no: 没有被删除。</li>
                     */
                    void SetDeleted(const std::string& _deleted);

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     */
                    bool DeletedHasBeenSet() const;

                private:

                    /**
                     * 推送任务的任务名称。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 日志集所属的地域。
                     */
                    std::string m_logSetRegion;
                    bool m_logSetRegionHasBeenSet;

                    /**
                     * 推送任务的类型。
                     */
                    std::string m_entityType;
                    bool m_entityTypeHasBeenSet;

                    /**
                     * 任务实体列表。
                     */
                    std::vector<std::string> m_entityList;
                    bool m_entityListHasBeenSet;

                    /**
                     * 日志集ID。
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * 日志集名称。
                     */
                    std::string m_logSetName;
                    bool m_logSetNameHasBeenSet;

                    /**
                     * 推送任务主题ID。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 推送任务主题名称。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 推送任务主题保存时间，单位为天。
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 推送任务是否开启。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 推送任务创建时间，时间格式为: YYYY-mm-dd HH:MM:SS。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 加速区域，取值有：
<li>mainland：中国大陆境内;</li>
<li>overseas：全球（不含中国大陆）。</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 站点ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 站点名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 是否被删除了，取值有：
<li>yes: 已经被删除；</li>
<li>no: 没有被删除。</li>
                     */
                    std::string m_deleted;
                    bool m_deletedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_LOGTOPICDETAILINFO_H_
