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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_REFRESHACTIVITY_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_REFRESHACTIVITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/RefreshBatch.h>
#include <tencentcloud/as/v20180419/model/RefreshSettings.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 实例刷新活动。
                */
                class RefreshActivity : public AbstractModel
                {
                public:
                    RefreshActivity();
                    ~RefreshActivity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取伸缩组 ID。
                     * @return AutoScalingGroupId 伸缩组 ID。
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置伸缩组 ID。
                     * @param _autoScalingGroupId 伸缩组 ID。
                     * 
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取刷新活动 ID。
                     * @return RefreshActivityId 刷新活动 ID。
                     * 
                     */
                    std::string GetRefreshActivityId() const;

                    /**
                     * 设置刷新活动 ID。
                     * @param _refreshActivityId 刷新活动 ID。
                     * 
                     */
                    void SetRefreshActivityId(const std::string& _refreshActivityId);

                    /**
                     * 判断参数 RefreshActivityId 是否已赋值
                     * @return RefreshActivityId 是否已赋值
                     * 
                     */
                    bool RefreshActivityIdHasBeenSet() const;

                    /**
                     * 获取原始刷新活动ID，仅在回滚刷新活动中存在。
                     * @return OriginRefreshActivityId 原始刷新活动ID，仅在回滚刷新活动中存在。
                     * 
                     */
                    std::string GetOriginRefreshActivityId() const;

                    /**
                     * 设置原始刷新活动ID，仅在回滚刷新活动中存在。
                     * @param _originRefreshActivityId 原始刷新活动ID，仅在回滚刷新活动中存在。
                     * 
                     */
                    void SetOriginRefreshActivityId(const std::string& _originRefreshActivityId);

                    /**
                     * 判断参数 OriginRefreshActivityId 是否已赋值
                     * @return OriginRefreshActivityId 是否已赋值
                     * 
                     */
                    bool OriginRefreshActivityIdHasBeenSet() const;

                    /**
                     * 获取刷新批次信息列表。
                     * @return RefreshBatchSet 刷新批次信息列表。
                     * 
                     */
                    std::vector<RefreshBatch> GetRefreshBatchSet() const;

                    /**
                     * 设置刷新批次信息列表。
                     * @param _refreshBatchSet 刷新批次信息列表。
                     * 
                     */
                    void SetRefreshBatchSet(const std::vector<RefreshBatch>& _refreshBatchSet);

                    /**
                     * 判断参数 RefreshBatchSet 是否已赋值
                     * @return RefreshBatchSet 是否已赋值
                     * 
                     */
                    bool RefreshBatchSetHasBeenSet() const;

                    /**
                     * 获取刷新模式。取值范围如下：
<li>ROLLING_UPDATE_RESET：重装系统进行滚动更新</li>
<li>ROLLING_UPDATE_REPLACE：新建实例替换进行滚动更新，该模式暂不支持回滚接口</li>
                     * @return RefreshMode 刷新模式。取值范围如下：
<li>ROLLING_UPDATE_RESET：重装系统进行滚动更新</li>
<li>ROLLING_UPDATE_REPLACE：新建实例替换进行滚动更新，该模式暂不支持回滚接口</li>
                     * 
                     */
                    std::string GetRefreshMode() const;

                    /**
                     * 设置刷新模式。取值范围如下：
<li>ROLLING_UPDATE_RESET：重装系统进行滚动更新</li>
<li>ROLLING_UPDATE_REPLACE：新建实例替换进行滚动更新，该模式暂不支持回滚接口</li>
                     * @param _refreshMode 刷新模式。取值范围如下：
<li>ROLLING_UPDATE_RESET：重装系统进行滚动更新</li>
<li>ROLLING_UPDATE_REPLACE：新建实例替换进行滚动更新，该模式暂不支持回滚接口</li>
                     * 
                     */
                    void SetRefreshMode(const std::string& _refreshMode);

                    /**
                     * 判断参数 RefreshMode 是否已赋值
                     * @return RefreshMode 是否已赋值
                     * 
                     */
                    bool RefreshModeHasBeenSet() const;

                    /**
                     * 获取实例更新设置参数。
                     * @return RefreshSettings 实例更新设置参数。
                     * 
                     */
                    RefreshSettings GetRefreshSettings() const;

                    /**
                     * 设置实例更新设置参数。
                     * @param _refreshSettings 实例更新设置参数。
                     * 
                     */
                    void SetRefreshSettings(const RefreshSettings& _refreshSettings);

                    /**
                     * 判断参数 RefreshSettings 是否已赋值
                     * @return RefreshSettings 是否已赋值
                     * 
                     */
                    bool RefreshSettingsHasBeenSet() const;

                    /**
                     * 获取刷新活动类型。取值如下：
<li>NORMAL：正常刷新活动</li>
<li>ROLLBACK：回滚刷新活动</li>
                     * @return ActivityType 刷新活动类型。取值如下：
<li>NORMAL：正常刷新活动</li>
<li>ROLLBACK：回滚刷新活动</li>
                     * 
                     */
                    std::string GetActivityType() const;

                    /**
                     * 设置刷新活动类型。取值如下：
<li>NORMAL：正常刷新活动</li>
<li>ROLLBACK：回滚刷新活动</li>
                     * @param _activityType 刷新活动类型。取值如下：
<li>NORMAL：正常刷新活动</li>
<li>ROLLBACK：回滚刷新活动</li>
                     * 
                     */
                    void SetActivityType(const std::string& _activityType);

                    /**
                     * 判断参数 ActivityType 是否已赋值
                     * @return ActivityType 是否已赋值
                     * 
                     */
                    bool ActivityTypeHasBeenSet() const;

                    /**
                     * 获取刷新活动状态。取值如下：
<li>INIT：初始化中</li>
<li>RUNNING：运行中</li>
<li>SUCCESSFUL：活动成功</li>
<li>FAILED_PAUSE：因刷新批次失败暂停</li>
<li>AUTO_PAUSE：因暂停策略自动暂停</li>
<li>MANUAL_PAUSE：手动暂停</li>
<li>CANCELLED：活动取消</li>
<li>FAILED：活动失败</li>
                     * @return Status 刷新活动状态。取值如下：
<li>INIT：初始化中</li>
<li>RUNNING：运行中</li>
<li>SUCCESSFUL：活动成功</li>
<li>FAILED_PAUSE：因刷新批次失败暂停</li>
<li>AUTO_PAUSE：因暂停策略自动暂停</li>
<li>MANUAL_PAUSE：手动暂停</li>
<li>CANCELLED：活动取消</li>
<li>FAILED：活动失败</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置刷新活动状态。取值如下：
<li>INIT：初始化中</li>
<li>RUNNING：运行中</li>
<li>SUCCESSFUL：活动成功</li>
<li>FAILED_PAUSE：因刷新批次失败暂停</li>
<li>AUTO_PAUSE：因暂停策略自动暂停</li>
<li>MANUAL_PAUSE：手动暂停</li>
<li>CANCELLED：活动取消</li>
<li>FAILED：活动失败</li>
                     * @param _status 刷新活动状态。取值如下：
<li>INIT：初始化中</li>
<li>RUNNING：运行中</li>
<li>SUCCESSFUL：活动成功</li>
<li>FAILED_PAUSE：因刷新批次失败暂停</li>
<li>AUTO_PAUSE：因暂停策略自动暂停</li>
<li>MANUAL_PAUSE：手动暂停</li>
<li>CANCELLED：活动取消</li>
<li>FAILED：活动失败</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取当前刷新批次序号。例如，2 表示当前活动正在刷新第二批次的实例。
                     * @return CurrentRefreshBatchNum 当前刷新批次序号。例如，2 表示当前活动正在刷新第二批次的实例。
                     * 
                     */
                    uint64_t GetCurrentRefreshBatchNum() const;

                    /**
                     * 设置当前刷新批次序号。例如，2 表示当前活动正在刷新第二批次的实例。
                     * @param _currentRefreshBatchNum 当前刷新批次序号。例如，2 表示当前活动正在刷新第二批次的实例。
                     * 
                     */
                    void SetCurrentRefreshBatchNum(const uint64_t& _currentRefreshBatchNum);

                    /**
                     * 判断参数 CurrentRefreshBatchNum 是否已赋值
                     * @return CurrentRefreshBatchNum 是否已赋值
                     * 
                     */
                    bool CurrentRefreshBatchNumHasBeenSet() const;

                    /**
                     * 获取刷新活动开始时间，为标准 `UTC` 时间，格式形如 `YYYY-MM-DDTHH:mm:ssZ`。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 刷新活动开始时间，为标准 `UTC` 时间，格式形如 `YYYY-MM-DDTHH:mm:ssZ`。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置刷新活动开始时间，为标准 `UTC` 时间，格式形如 `YYYY-MM-DDTHH:mm:ssZ`。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 刷新活动开始时间，为标准 `UTC` 时间，格式形如 `YYYY-MM-DDTHH:mm:ssZ`。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取刷新活动结束时间，为标准 `UTC` 时间，格式形如 `YYYY-MM-DDTHH:mm:ssZ`。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 刷新活动结束时间，为标准 `UTC` 时间，格式形如 `YYYY-MM-DDTHH:mm:ssZ`。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置刷新活动结束时间，为标准 `UTC` 时间，格式形如 `YYYY-MM-DDTHH:mm:ssZ`。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 刷新活动结束时间，为标准 `UTC` 时间，格式形如 `YYYY-MM-DDTHH:mm:ssZ`。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取刷新活动创建时间，为标准 `UTC` 时间，格式形如 `YYYY-MM-DDTHH:mm:ssZ`。
                     * @return CreatedTime 刷新活动创建时间，为标准 `UTC` 时间，格式形如 `YYYY-MM-DDTHH:mm:ssZ`。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置刷新活动创建时间，为标准 `UTC` 时间，格式形如 `YYYY-MM-DDTHH:mm:ssZ`。
                     * @param _createdTime 刷新活动创建时间，为标准 `UTC` 时间，格式形如 `YYYY-MM-DDTHH:mm:ssZ`。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                private:

                    /**
                     * 伸缩组 ID。
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * 刷新活动 ID。
                     */
                    std::string m_refreshActivityId;
                    bool m_refreshActivityIdHasBeenSet;

                    /**
                     * 原始刷新活动ID，仅在回滚刷新活动中存在。
                     */
                    std::string m_originRefreshActivityId;
                    bool m_originRefreshActivityIdHasBeenSet;

                    /**
                     * 刷新批次信息列表。
                     */
                    std::vector<RefreshBatch> m_refreshBatchSet;
                    bool m_refreshBatchSetHasBeenSet;

                    /**
                     * 刷新模式。取值范围如下：
<li>ROLLING_UPDATE_RESET：重装系统进行滚动更新</li>
<li>ROLLING_UPDATE_REPLACE：新建实例替换进行滚动更新，该模式暂不支持回滚接口</li>
                     */
                    std::string m_refreshMode;
                    bool m_refreshModeHasBeenSet;

                    /**
                     * 实例更新设置参数。
                     */
                    RefreshSettings m_refreshSettings;
                    bool m_refreshSettingsHasBeenSet;

                    /**
                     * 刷新活动类型。取值如下：
<li>NORMAL：正常刷新活动</li>
<li>ROLLBACK：回滚刷新活动</li>
                     */
                    std::string m_activityType;
                    bool m_activityTypeHasBeenSet;

                    /**
                     * 刷新活动状态。取值如下：
<li>INIT：初始化中</li>
<li>RUNNING：运行中</li>
<li>SUCCESSFUL：活动成功</li>
<li>FAILED_PAUSE：因刷新批次失败暂停</li>
<li>AUTO_PAUSE：因暂停策略自动暂停</li>
<li>MANUAL_PAUSE：手动暂停</li>
<li>CANCELLED：活动取消</li>
<li>FAILED：活动失败</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 当前刷新批次序号。例如，2 表示当前活动正在刷新第二批次的实例。
                     */
                    uint64_t m_currentRefreshBatchNum;
                    bool m_currentRefreshBatchNumHasBeenSet;

                    /**
                     * 刷新活动开始时间，为标准 `UTC` 时间，格式形如 `YYYY-MM-DDTHH:mm:ssZ`。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 刷新活动结束时间，为标准 `UTC` 时间，格式形如 `YYYY-MM-DDTHH:mm:ssZ`。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 刷新活动创建时间，为标准 `UTC` 时间，格式形如 `YYYY-MM-DDTHH:mm:ssZ`。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_REFRESHACTIVITY_H_
