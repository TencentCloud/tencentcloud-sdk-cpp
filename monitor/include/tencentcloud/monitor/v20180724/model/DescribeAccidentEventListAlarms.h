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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEACCIDENTEVENTLISTALARMS_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEACCIDENTEVENTLISTALARMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeAccidentEventList接口的出参类型
                */
                class DescribeAccidentEventListAlarms : public AbstractModel
                {
                public:
                    DescribeAccidentEventListAlarms();
                    ~DescribeAccidentEventListAlarms() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件分类
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessTypeDesc 事件分类
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBusinessTypeDesc() const;

                    /**
                     * 设置事件分类
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessTypeDesc 事件分类
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBusinessTypeDesc(const std::string& _businessTypeDesc);

                    /**
                     * 判断参数 BusinessTypeDesc 是否已赋值
                     * @return BusinessTypeDesc 是否已赋值
                     * 
                     */
                    bool BusinessTypeDescHasBeenSet() const;

                    /**
                     * 获取事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccidentTypeDesc 事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccidentTypeDesc() const;

                    /**
                     * 设置事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accidentTypeDesc 事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccidentTypeDesc(const std::string& _accidentTypeDesc);

                    /**
                     * 判断参数 AccidentTypeDesc 是否已赋值
                     * @return AccidentTypeDesc 是否已赋值
                     * 
                     */
                    bool AccidentTypeDescHasBeenSet() const;

                    /**
                     * 获取事件分类的ID，1表示服务问题，2表示其他订阅
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessID 事件分类的ID，1表示服务问题，2表示其他订阅
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBusinessID() const;

                    /**
                     * 设置事件分类的ID，1表示服务问题，2表示其他订阅
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessID 事件分类的ID，1表示服务问题，2表示其他订阅
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBusinessID(const int64_t& _businessID);

                    /**
                     * 判断参数 BusinessID 是否已赋值
                     * @return BusinessID 是否已赋值
                     * 
                     */
                    bool BusinessIDHasBeenSet() const;

                    /**
                     * 获取事件状态的ID，0表示已恢复，1表示未恢复
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventStatus 事件状态的ID，0表示已恢复，1表示未恢复
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEventStatus() const;

                    /**
                     * 设置事件状态的ID，0表示已恢复，1表示未恢复
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventStatus 事件状态的ID，0表示已恢复，1表示未恢复
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventStatus(const int64_t& _eventStatus);

                    /**
                     * 判断参数 EventStatus 是否已赋值
                     * @return EventStatus 是否已赋值
                     * 
                     */
                    bool EventStatusHasBeenSet() const;

                    /**
                     * 获取影响的对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AffectResource 影响的对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAffectResource() const;

                    /**
                     * 设置影响的对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _affectResource 影响的对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAffectResource(const std::string& _affectResource);

                    /**
                     * 判断参数 AffectResource 是否已赋值
                     * @return AffectResource 是否已赋值
                     * 
                     */
                    bool AffectResourceHasBeenSet() const;

                    /**
                     * 获取事件的地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 事件的地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置事件的地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 事件的地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取事件发生的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OccurTime 事件发生的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOccurTime() const;

                    /**
                     * 设置事件发生的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _occurTime 事件发生的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOccurTime(const std::string& _occurTime);

                    /**
                     * 判断参数 OccurTime 是否已赋值
                     * @return OccurTime 是否已赋值
                     * 
                     */
                    bool OccurTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 事件分类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_businessTypeDesc;
                    bool m_businessTypeDescHasBeenSet;

                    /**
                     * 事件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accidentTypeDesc;
                    bool m_accidentTypeDescHasBeenSet;

                    /**
                     * 事件分类的ID，1表示服务问题，2表示其他订阅
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_businessID;
                    bool m_businessIDHasBeenSet;

                    /**
                     * 事件状态的ID，0表示已恢复，1表示未恢复
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_eventStatus;
                    bool m_eventStatusHasBeenSet;

                    /**
                     * 影响的对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_affectResource;
                    bool m_affectResourceHasBeenSet;

                    /**
                     * 事件的地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 事件发生的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_occurTime;
                    bool m_occurTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEACCIDENTEVENTLISTALARMS_H_
