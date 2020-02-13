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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_ALARMINFO_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_ALARMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * 拨测告警信息
                */
                class AlarmInfo : public AbstractModel
                {
                public:
                    AlarmInfo();
                    ~AlarmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警对象的名称
                     * @return ObjName 告警对象的名称
                     */
                    std::string GetObjName() const;

                    /**
                     * 设置告警对象的名称
                     * @param ObjName 告警对象的名称
                     */
                    void SetObjName(const std::string& _objName);

                    /**
                     * 判断参数 ObjName 是否已赋值
                     * @return ObjName 是否已赋值
                     */
                    bool ObjNameHasBeenSet() const;

                    /**
                     * 获取告警发生的时间
                     * @return FirstOccurTime 告警发生的时间
                     */
                    std::string GetFirstOccurTime() const;

                    /**
                     * 设置告警发生的时间
                     * @param FirstOccurTime 告警发生的时间
                     */
                    void SetFirstOccurTime(const std::string& _firstOccurTime);

                    /**
                     * 判断参数 FirstOccurTime 是否已赋值
                     * @return FirstOccurTime 是否已赋值
                     */
                    bool FirstOccurTimeHasBeenSet() const;

                    /**
                     * 获取告警结束的时间
                     * @return LastOccurTime 告警结束的时间
                     */
                    std::string GetLastOccurTime() const;

                    /**
                     * 设置告警结束的时间
                     * @param LastOccurTime 告警结束的时间
                     */
                    void SetLastOccurTime(const std::string& _lastOccurTime);

                    /**
                     * 判断参数 LastOccurTime 是否已赋值
                     * @return LastOccurTime 是否已赋值
                     */
                    bool LastOccurTimeHasBeenSet() const;

                    /**
                     * 获取告警状态。1 表示已恢复，0 表示未恢复，2表示数据不足
                     * @return Status 告警状态。1 表示已恢复，0 表示未恢复，2表示数据不足
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置告警状态。1 表示已恢复，0 表示未恢复，2表示数据不足
                     * @param Status 告警状态。1 表示已恢复，0 表示未恢复，2表示数据不足
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取告警的内容
                     * @return Content 告警的内容
                     */
                    std::string GetContent() const;

                    /**
                     * 设置告警的内容
                     * @param Content 告警的内容
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取拨测任务ID
                     * @return TaskId 拨测任务ID
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置拨测任务ID
                     * @param TaskId 拨测任务ID
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取特征项名字
                     * @return MetricName 特征项名字
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置特征项名字
                     * @param MetricName 特征项名字
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取特征项数值
                     * @return MetricValue 特征项数值
                     */
                    std::string GetMetricValue() const;

                    /**
                     * 设置特征项数值
                     * @param MetricValue 特征项数值
                     */
                    void SetMetricValue(const std::string& _metricValue);

                    /**
                     * 判断参数 MetricValue 是否已赋值
                     * @return MetricValue 是否已赋值
                     */
                    bool MetricValueHasBeenSet() const;

                    /**
                     * 获取告警对象的ID
                     * @return ObjId 告警对象的ID
                     */
                    std::string GetObjId() const;

                    /**
                     * 设置告警对象的ID
                     * @param ObjId 告警对象的ID
                     */
                    void SetObjId(const std::string& _objId);

                    /**
                     * 判断参数 ObjId 是否已赋值
                     * @return ObjId 是否已赋值
                     */
                    bool ObjIdHasBeenSet() const;

                private:

                    /**
                     * 告警对象的名称
                     */
                    std::string m_objName;
                    bool m_objNameHasBeenSet;

                    /**
                     * 告警发生的时间
                     */
                    std::string m_firstOccurTime;
                    bool m_firstOccurTimeHasBeenSet;

                    /**
                     * 告警结束的时间
                     */
                    std::string m_lastOccurTime;
                    bool m_lastOccurTimeHasBeenSet;

                    /**
                     * 告警状态。1 表示已恢复，0 表示未恢复，2表示数据不足
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 告警的内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 拨测任务ID
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 特征项名字
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 特征项数值
                     */
                    std::string m_metricValue;
                    bool m_metricValueHasBeenSet;

                    /**
                     * 告警对象的ID
                     */
                    std::string m_objId;
                    bool m_objIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_ALARMINFO_H_
