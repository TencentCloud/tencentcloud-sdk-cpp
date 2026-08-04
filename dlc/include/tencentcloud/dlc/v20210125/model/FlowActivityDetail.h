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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_FLOWACTIVITYDETAIL_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_FLOWACTIVITYDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 流程活动详情
                */
                class FlowActivityDetail : public AbstractModel
                {
                public:
                    FlowActivityDetail();
                    ~FlowActivityDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>活动编码</p>
                     * @return ActivityCode <p>活动编码</p>
                     * 
                     */
                    std::string GetActivityCode() const;

                    /**
                     * 设置<p>活动编码</p>
                     * @param _activityCode <p>活动编码</p>
                     * 
                     */
                    void SetActivityCode(const std::string& _activityCode);

                    /**
                     * 判断参数 ActivityCode 是否已赋值
                     * @return ActivityCode 是否已赋值
                     * 
                     */
                    bool ActivityCodeHasBeenSet() const;

                    /**
                     * 获取<p>活动状态</p>
                     * @return Status <p>活动状态</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>活动状态</p>
                     * @param _status <p>活动状态</p>
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
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间</p>
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

                    /**
                     * 获取<p>耗时（秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration <p>耗时（秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置<p>耗时（秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration <p>耗时（秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * <p>活动编码</p>
                     */
                    std::string m_activityCode;
                    bool m_activityCodeHasBeenSet;

                    /**
                     * <p>活动状态</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>耗时（秒）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_FLOWACTIVITYDETAIL_H_
