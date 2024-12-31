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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SCHEDULERTASKINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SCHEDULERTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/SchedulerTaskDetail.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * yarn资源调度历史
                */
                class SchedulerTaskInfo : public AbstractModel
                {
                public:
                    SchedulerTaskInfo();
                    ~SchedulerTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取调度器类型
                     * @return SchedulerName 调度器类型
                     * 
                     */
                    std::string GetSchedulerName() const;

                    /**
                     * 设置调度器类型
                     * @param _schedulerName 调度器类型
                     * 
                     */
                    void SetSchedulerName(const std::string& _schedulerName);

                    /**
                     * 判断参数 SchedulerName 是否已赋值
                     * @return SchedulerName 是否已赋值
                     * 
                     */
                    bool SchedulerNameHasBeenSet() const;

                    /**
                     * 获取操作类型
                     * @return OperatorName 操作类型
                     * 
                     */
                    std::string GetOperatorName() const;

                    /**
                     * 设置操作类型
                     * @param _operatorName 操作类型
                     * 
                     */
                    void SetOperatorName(const std::string& _operatorName);

                    /**
                     * 判断参数 OperatorName 是否已赋值
                     * @return OperatorName 是否已赋值
                     * 
                     */
                    bool OperatorNameHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return CreateTime 开始时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置开始时间
                     * @param _createTime 开始时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return State 状态
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置状态
                     * @param _state 状态
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Details 详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SchedulerTaskDetail> GetDetails() const;

                    /**
                     * 设置详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _details 详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetails(const std::vector<SchedulerTaskDetail>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * 调度器类型
                     */
                    std::string m_schedulerName;
                    bool m_schedulerNameHasBeenSet;

                    /**
                     * 操作类型
                     */
                    std::string m_operatorName;
                    bool m_operatorNameHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 状态
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SchedulerTaskDetail> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCHEDULERTASKINFO_H_
