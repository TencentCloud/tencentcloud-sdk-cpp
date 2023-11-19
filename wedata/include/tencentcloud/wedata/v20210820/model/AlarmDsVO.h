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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMDSVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMDSVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/AlarmExtDsVO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 告警信息
                */
                class AlarmDsVO : public AbstractModel
                {
                public:
                    AlarmDsVO();
                    ~AlarmDsVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警策略id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmId 告警策略id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmId() const;

                    /**
                     * 设置告警策略id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmId 告警策略id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmId(const std::string& _alarmId);

                    /**
                     * 判断参数 AlarmId 是否已赋值
                     * @return AlarmId 是否已赋值
                     * 
                     */
                    bool AlarmIdHasBeenSet() const;

                    /**
                     * 获取任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取告警是否生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 告警是否生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置告警是否生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 告警是否生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取告警类别，目前支持失败告警，超时告警
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmType 告警类别，目前支持失败告警，超时告警
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmType() const;

                    /**
                     * 设置告警类别，目前支持失败告警，超时告警
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmType 告警类别，目前支持失败告警，超时告警
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmType(const std::string& _alarmType);

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     * 
                     */
                    bool AlarmTypeHasBeenSet() const;

                    /**
                     * 获取告警方式 ，目前支持email提醒，短信提醒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmWay 告警方式 ，目前支持email提醒，短信提醒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmWay() const;

                    /**
                     * 设置告警方式 ，目前支持email提醒，短信提醒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmWay 告警方式 ，目前支持email提醒，短信提醒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmWay(const std::string& _alarmWay);

                    /**
                     * 判断参数 AlarmWay 是否已赋值
                     * @return AlarmWay 是否已赋值
                     * 
                     */
                    bool AlarmWayHasBeenSet() const;

                    /**
                     * 获取告警创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creator 告警创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置告警创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creator 告警创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取告警接收人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmRecipient 告警接收人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmRecipient() const;

                    /**
                     * 设置告警接收人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmRecipient 告警接收人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmRecipient(const std::string& _alarmRecipient);

                    /**
                     * 判断参数 AlarmRecipient 是否已赋值
                     * @return AlarmRecipient 是否已赋值
                     * 
                     */
                    bool AlarmRecipientHasBeenSet() const;

                    /**
                     * 获取告警接收人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmRecipientId 告警接收人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmRecipientId() const;

                    /**
                     * 设置告警接收人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmRecipientId 告警接收人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmRecipientId(const std::string& _alarmRecipientId);

                    /**
                     * 判断参数 AlarmRecipientId 是否已赋值
                     * @return AlarmRecipientId 是否已赋值
                     * 
                     */
                    bool AlarmRecipientIdHasBeenSet() const;

                    /**
                     * 获取告警修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 告警修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置告警修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime 告警修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取最近失败告警实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastFailTime 最近失败告警实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastFailTime() const;

                    /**
                     * 设置最近失败告警实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastFailTime 最近失败告警实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastFailTime(const std::string& _lastFailTime);

                    /**
                     * 判断参数 LastFailTime 是否已赋值
                     * @return LastFailTime 是否已赋值
                     * 
                     */
                    bool LastFailTimeHasBeenSet() const;

                    /**
                     * 获取最近超时告警实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastOverTime 最近超时告警实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastOverTime() const;

                    /**
                     * 设置最近超时告警实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastOverTime 最近超时告警实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastOverTime(const std::string& _lastOverTime);

                    /**
                     * 判断参数 LastOverTime 是否已赋值
                     * @return LastOverTime 是否已赋值
                     * 
                     */
                    bool LastOverTimeHasBeenSet() const;

                    /**
                     * 获取最新告警时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastAlarmTime 最新告警时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastAlarmTime() const;

                    /**
                     * 设置最新告警时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastAlarmTime 最新告警时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastAlarmTime(const std::string& _lastAlarmTime);

                    /**
                     * 判断参数 LastAlarmTime 是否已赋值
                     * @return LastAlarmTime 是否已赋值
                     * 
                     */
                    bool LastAlarmTimeHasBeenSet() const;

                    /**
                     * 获取AlarmExt信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmExt AlarmExt信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AlarmExtDsVO> GetAlarmExt() const;

                    /**
                     * 设置AlarmExt信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmExt AlarmExt信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmExt(const std::vector<AlarmExtDsVO>& _alarmExt);

                    /**
                     * 判断参数 AlarmExt 是否已赋值
                     * @return AlarmExt 是否已赋值
                     * 
                     */
                    bool AlarmExtHasBeenSet() const;

                    /**
                     * 获取告警创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 告警创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置告警创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 告警创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 告警策略id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 告警是否生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 告警类别，目前支持失败告警，超时告警
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * 告警方式 ，目前支持email提醒，短信提醒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmWay;
                    bool m_alarmWayHasBeenSet;

                    /**
                     * 告警创建人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 告警接收人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmRecipient;
                    bool m_alarmRecipientHasBeenSet;

                    /**
                     * 告警接收人ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmRecipientId;
                    bool m_alarmRecipientIdHasBeenSet;

                    /**
                     * 告警修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 最近失败告警实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastFailTime;
                    bool m_lastFailTimeHasBeenSet;

                    /**
                     * 最近超时告警实例数据时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastOverTime;
                    bool m_lastOverTimeHasBeenSet;

                    /**
                     * 最新告警时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastAlarmTime;
                    bool m_lastAlarmTimeHasBeenSet;

                    /**
                     * AlarmExt信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AlarmExtDsVO> m_alarmExt;
                    bool m_alarmExtHasBeenSet;

                    /**
                     * 告警创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMDSVO_H_
