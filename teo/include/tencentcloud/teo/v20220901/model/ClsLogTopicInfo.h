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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CLSLOGTOPICINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CLSLOGTOPICINFO_H_

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
                * 日志任务主题信息
                */
                class ClsLogTopicInfo : public AbstractModel
                {
                public:
                    ClsLogTopicInfo();
                    ~ClsLogTopicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务名。
                     * @return TaskName 任务名。
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名。
                     * @param TaskName 任务名。
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取站点名称。
                     * @return ZoneName 站点名称。
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置站点名称。
                     * @param ZoneName 站点名称。
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

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
                     * 获取任务类型。
                     * @return EntityType 任务类型。
                     */
                    std::string GetEntityType() const;

                    /**
                     * 设置任务类型。
                     * @param EntityType 任务类型。
                     */
                    void SetEntityType(const std::string& _entityType);

                    /**
                     * 判断参数 EntityType 是否已赋值
                     * @return EntityType 是否已赋值
                     */
                    bool EntityTypeHasBeenSet() const;

                    /**
                     * 获取任务主题保存时间。
                     * @return Period 任务主题保存时间。
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置任务主题保存时间。
                     * @param Period 任务主题保存时间。
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取任务主题是否开启。
                     * @return Enabled 任务主题是否开启。
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置任务主题是否开启。
                     * @param Enabled 任务主题是否开启。
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取任务主题是否异常。
                     * @return Deleted 任务主题是否异常。
                     */
                    std::string GetDeleted() const;

                    /**
                     * 设置任务主题是否异常。
                     * @param Deleted 任务主题是否异常。
                     */
                    void SetDeleted(const std::string& _deleted);

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     */
                    bool DeletedHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param CreateTime 创建时间。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取推送目标地址,取值有：
<li>cls: 推送到cls；</li>
<li>custom_enpoint: 自定义推送地址。</li>
                     * @return Target 推送目标地址,取值有：
<li>cls: 推送到cls；</li>
<li>custom_enpoint: 自定义推送地址。</li>
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置推送目标地址,取值有：
<li>cls: 推送到cls；</li>
<li>custom_enpoint: 自定义推送地址。</li>
                     * @param Target 推送目标地址,取值有：
<li>cls: 推送到cls；</li>
<li>custom_enpoint: 自定义推送地址。</li>
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取日志集所属地区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogSetRegion 日志集所属地区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLogSetRegion() const;

                    /**
                     * 设置日志集所属地区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogSetRegion 日志集所属地区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogSetRegion(const std::string& _logSetRegion);

                    /**
                     * 判断参数 LogSetRegion 是否已赋值
                     * @return LogSetRegion 是否已赋值
                     */
                    bool LogSetRegionHasBeenSet() const;

                    /**
                     * 获取站点id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneId 站点id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ZoneId 站点id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

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
                     * 获取推送任务类型，取值有：
<li>cls：推送到cls；</li>
<li>custom_endpoint：推送到自定义接口。</li>
                     * @return LogSetType 推送任务类型，取值有：
<li>cls：推送到cls；</li>
<li>custom_endpoint：推送到自定义接口。</li>
                     */
                    std::string GetLogSetType() const;

                    /**
                     * 设置推送任务类型，取值有：
<li>cls：推送到cls；</li>
<li>custom_endpoint：推送到自定义接口。</li>
                     * @param LogSetType 推送任务类型，取值有：
<li>cls：推送到cls；</li>
<li>custom_endpoint：推送到自定义接口。</li>
                     */
                    void SetLogSetType(const std::string& _logSetType);

                    /**
                     * 判断参数 LogSetType 是否已赋值
                     * @return LogSetType 是否已赋值
                     */
                    bool LogSetTypeHasBeenSet() const;

                private:

                    /**
                     * 任务名。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 站点名称。
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

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
                     * 任务类型。
                     */
                    std::string m_entityType;
                    bool m_entityTypeHasBeenSet;

                    /**
                     * 任务主题保存时间。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 任务主题是否开启。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 任务主题是否异常。
                     */
                    std::string m_deleted;
                    bool m_deletedHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 推送目标地址,取值有：
<li>cls: 推送到cls；</li>
<li>custom_enpoint: 自定义推送地址。</li>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 日志集所属地区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logSetRegion;
                    bool m_logSetRegionHasBeenSet;

                    /**
                     * 站点id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 加速区域，取值有：
<li>mainland：中国大陆境内;</li>
<li>overseas：全球（不含中国大陆）。</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 推送任务类型，取值有：
<li>cls：推送到cls；</li>
<li>custom_endpoint：推送到自定义接口。</li>
                     */
                    std::string m_logSetType;
                    bool m_logSetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CLSLOGTOPICINFO_H_
