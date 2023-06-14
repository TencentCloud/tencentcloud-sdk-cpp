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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_ACTIVITYDETAIL_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_ACTIVITYDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 活动详情
                */
                class ActivityDetail : public AbstractModel
                {
                public:
                    ActivityDetail();
                    ~ActivityDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取活动id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivityId 活动id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetActivityId() const;

                    /**
                     * 设置活动id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activityId 活动id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivityId(const int64_t& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     * 
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取活动名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivityName 活动名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActivityName() const;

                    /**
                     * 设置活动名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activityName 活动名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivityName(const std::string& _activityName);

                    /**
                     * 判断参数 ActivityName 是否已赋值
                     * @return ActivityName 是否已赋值
                     * 
                     */
                    bool ActivityNameHasBeenSet() const;

                    /**
                     * 获取活动状态，10:未开始状态、20:已开始（进行中）状态、30:已结束状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivityState 活动状态，10:未开始状态、20:已开始（进行中）状态、30:已结束状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetActivityState() const;

                    /**
                     * 设置活动状态，10:未开始状态、20:已开始（进行中）状态、30:已结束状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activityState 活动状态，10:未开始状态、20:已开始（进行中）状态、30:已结束状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivityState(const int64_t& _activityState);

                    /**
                     * 判断参数 ActivityState 是否已赋值
                     * @return ActivityState 是否已赋值
                     * 
                     */
                    bool ActivityStateHasBeenSet() const;

                    /**
                     * 获取活动类型，100:留资活动
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivityType 活动类型，100:留资活动
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetActivityType() const;

                    /**
                     * 设置活动类型，100:留资活动
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activityType 活动类型，100:留资活动
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivityType(const int64_t& _activityType);

                    /**
                     * 判断参数 ActivityType 是否已赋值
                     * @return ActivityType 是否已赋值
                     * 
                     */
                    bool ActivityTypeHasBeenSet() const;

                    /**
                     * 获取活动开始时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 活动开始时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置活动开始时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 活动开始时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取活动结束时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 活动结束时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置活动结束时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 活动结束时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取活动主图
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MainPhoto 活动主图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMainPhoto() const;

                    /**
                     * 设置活动主图
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mainPhoto 活动主图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMainPhoto(const std::string& _mainPhoto);

                    /**
                     * 判断参数 MainPhoto 是否已赋值
                     * @return MainPhoto 是否已赋值
                     * 
                     */
                    bool MainPhotoHasBeenSet() const;

                    /**
                     * 获取协议编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivacyAgreementId 协议编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivacyAgreementId() const;

                    /**
                     * 设置协议编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privacyAgreementId 协议编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivacyAgreementId(const std::string& _privacyAgreementId);

                    /**
                     * 判断参数 PrivacyAgreementId 是否已赋值
                     * @return PrivacyAgreementId 是否已赋值
                     * 
                     */
                    bool PrivacyAgreementIdHasBeenSet() const;

                    /**
                     * 获取活动更新时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 活动更新时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置活动更新时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 活动更新时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取活动数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivityDataList 活动数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActivityDataList() const;

                    /**
                     * 设置活动数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activityDataList 活动数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivityDataList(const std::string& _activityDataList);

                    /**
                     * 判断参数 ActivityDataList 是否已赋值
                     * @return ActivityDataList 是否已赋值
                     * 
                     */
                    bool ActivityDataListHasBeenSet() const;

                private:

                    /**
                     * 活动id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * 活动名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_activityName;
                    bool m_activityNameHasBeenSet;

                    /**
                     * 活动状态，10:未开始状态、20:已开始（进行中）状态、30:已结束状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_activityState;
                    bool m_activityStateHasBeenSet;

                    /**
                     * 活动类型，100:留资活动
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_activityType;
                    bool m_activityTypeHasBeenSet;

                    /**
                     * 活动开始时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 活动结束时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 活动主图
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mainPhoto;
                    bool m_mainPhotoHasBeenSet;

                    /**
                     * 协议编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privacyAgreementId;
                    bool m_privacyAgreementIdHasBeenSet;

                    /**
                     * 活动更新时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 活动数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_activityDataList;
                    bool m_activityDataListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_ACTIVITYDETAIL_H_
