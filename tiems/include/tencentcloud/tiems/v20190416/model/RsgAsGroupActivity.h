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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_RSGASGROUPACTIVITY_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_RSGASGROUPACTIVITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiems/v20190416/model/RsgAsActivityRelatedInstance.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * 伸缩组活动信息
                */
                class RsgAsGroupActivity : public AbstractModel
                {
                public:
                    RsgAsGroupActivity();
                    ~RsgAsGroupActivity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取伸缩组活动 ID
                     * @return Id 伸缩组活动 ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置伸缩组活动 ID
                     * @param _id 伸缩组活动 ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取关联的伸缩组 ID
                     * @return RsgAsGroupId 关联的伸缩组 ID
                     * 
                     */
                    std::string GetRsgAsGroupId() const;

                    /**
                     * 设置关联的伸缩组 ID
                     * @param _rsgAsGroupId 关联的伸缩组 ID
                     * 
                     */
                    void SetRsgAsGroupId(const std::string& _rsgAsGroupId);

                    /**
                     * 判断参数 RsgAsGroupId 是否已赋值
                     * @return RsgAsGroupId 是否已赋值
                     * 
                     */
                    bool RsgAsGroupIdHasBeenSet() const;

                    /**
                     * 获取活动类型
                     * @return ActivityType 活动类型
                     * 
                     */
                    std::string GetActivityType() const;

                    /**
                     * 设置活动类型
                     * @param _activityType 活动类型
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
                     * 获取状态的编码
                     * @return StatusCode 状态的编码
                     * 
                     */
                    std::string GetStatusCode() const;

                    /**
                     * 设置状态的编码
                     * @param _statusCode 状态的编码
                     * 
                     */
                    void SetStatusCode(const std::string& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取状态的消息
                     * @return StatusMessage 状态的消息
                     * 
                     */
                    std::string GetStatusMessage() const;

                    /**
                     * 设置状态的消息
                     * @param _statusMessage 状态的消息
                     * 
                     */
                    void SetStatusMessage(const std::string& _statusMessage);

                    /**
                     * 判断参数 StatusMessage 是否已赋值
                     * @return StatusMessage 是否已赋值
                     * 
                     */
                    bool StatusMessageHasBeenSet() const;

                    /**
                     * 获取活动原因
                     * @return Cause 活动原因
                     * 
                     */
                    std::string GetCause() const;

                    /**
                     * 设置活动原因
                     * @param _cause 活动原因
                     * 
                     */
                    void SetCause(const std::string& _cause);

                    /**
                     * 判断参数 Cause 是否已赋值
                     * @return Cause 是否已赋值
                     * 
                     */
                    bool CauseHasBeenSet() const;

                    /**
                     * 获取活动描述
                     * @return Description 活动描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置活动描述
                     * @param _description 活动描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取活动开始时间
                     * @return StartTime 活动开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置活动开始时间
                     * @param _startTime 活动开始时间
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
                     * 获取活动结束时间
                     * @return EndTime 活动结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置活动结束时间
                     * @param _endTime 活动结束时间
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
                     * 获取活动创建时间
                     * @return CreateTime 活动创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置活动创建时间
                     * @param _createTime 活动创建时间
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
                     * 获取活动相关联的节点
                     * @return RsgAsActivityRelatedInstance 活动相关联的节点
                     * 
                     */
                    std::vector<RsgAsActivityRelatedInstance> GetRsgAsActivityRelatedInstance() const;

                    /**
                     * 设置活动相关联的节点
                     * @param _rsgAsActivityRelatedInstance 活动相关联的节点
                     * 
                     */
                    void SetRsgAsActivityRelatedInstance(const std::vector<RsgAsActivityRelatedInstance>& _rsgAsActivityRelatedInstance);

                    /**
                     * 判断参数 RsgAsActivityRelatedInstance 是否已赋值
                     * @return RsgAsActivityRelatedInstance 是否已赋值
                     * 
                     */
                    bool RsgAsActivityRelatedInstanceHasBeenSet() const;

                    /**
                     * 获取简略的状态消息
                     * @return StatusMessageSimplified 简略的状态消息
                     * 
                     */
                    std::string GetStatusMessageSimplified() const;

                    /**
                     * 设置简略的状态消息
                     * @param _statusMessageSimplified 简略的状态消息
                     * 
                     */
                    void SetStatusMessageSimplified(const std::string& _statusMessageSimplified);

                    /**
                     * 判断参数 StatusMessageSimplified 是否已赋值
                     * @return StatusMessageSimplified 是否已赋值
                     * 
                     */
                    bool StatusMessageSimplifiedHasBeenSet() const;

                private:

                    /**
                     * 伸缩组活动 ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 关联的伸缩组 ID
                     */
                    std::string m_rsgAsGroupId;
                    bool m_rsgAsGroupIdHasBeenSet;

                    /**
                     * 活动类型
                     */
                    std::string m_activityType;
                    bool m_activityTypeHasBeenSet;

                    /**
                     * 状态的编码
                     */
                    std::string m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * 状态的消息
                     */
                    std::string m_statusMessage;
                    bool m_statusMessageHasBeenSet;

                    /**
                     * 活动原因
                     */
                    std::string m_cause;
                    bool m_causeHasBeenSet;

                    /**
                     * 活动描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 活动开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 活动结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 活动创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 活动相关联的节点
                     */
                    std::vector<RsgAsActivityRelatedInstance> m_rsgAsActivityRelatedInstance;
                    bool m_rsgAsActivityRelatedInstanceHasBeenSet;

                    /**
                     * 简略的状态消息
                     */
                    std::string m_statusMessageSimplified;
                    bool m_statusMessageSimplifiedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_RSGASGROUPACTIVITY_H_
