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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RAYJOBEVENTITEM_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RAYJOBEVENTITEM_H_

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
                * Ray 任务事件项
                */
                class RayJobEventItem : public AbstractModel
                {
                public:
                    RayJobEventItem();
                    ~RayJobEventItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>事件时间（Unix 时间戳，毫秒）</p>
                     * @return EventTime <p>事件时间（Unix 时间戳，毫秒）</p>
                     * 
                     */
                    uint64_t GetEventTime() const;

                    /**
                     * 设置<p>事件时间（Unix 时间戳，毫秒）</p>
                     * @param _eventTime <p>事件时间（Unix 时间戳，毫秒）</p>
                     * 
                     */
                    void SetEventTime(const uint64_t& _eventTime);

                    /**
                     * 判断参数 EventTime 是否已赋值
                     * @return EventTime 是否已赋值
                     * 
                     */
                    bool EventTimeHasBeenSet() const;

                    /**
                     * 获取<p>组件名称，来源于 event.involvedObject.kind</p>
                     * @return Component <p>组件名称，来源于 event.involvedObject.kind</p>
                     * 
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置<p>组件名称，来源于 event.involvedObject.kind</p>
                     * @param _component <p>组件名称，来源于 event.involvedObject.kind</p>
                     * 
                     */
                    void SetComponent(const std::string& _component);

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     * 
                     */
                    bool ComponentHasBeenSet() const;

                    /**
                     * 获取<p>事件级别，来源于 event.type 的原始值（如 Normal、Warning）</p>
                     * @return Level <p>事件级别，来源于 event.type 的原始值（如 Normal、Warning）</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>事件级别，来源于 event.type 的原始值（如 Normal、Warning）</p>
                     * @param _level <p>事件级别，来源于 event.type 的原始值（如 Normal、Warning）</p>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>事件内容，来源于 event.message</p>
                     * @return Message <p>事件内容，来源于 event.message</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>事件内容，来源于 event.message</p>
                     * @param _message <p>事件内容，来源于 event.message</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>关联的 K8s 对象名称，来源于 event.involvedObject.name</p>
                     * @return InvolvedObjectName <p>关联的 K8s 对象名称，来源于 event.involvedObject.name</p>
                     * 
                     */
                    std::string GetInvolvedObjectName() const;

                    /**
                     * 设置<p>关联的 K8s 对象名称，来源于 event.involvedObject.name</p>
                     * @param _involvedObjectName <p>关联的 K8s 对象名称，来源于 event.involvedObject.name</p>
                     * 
                     */
                    void SetInvolvedObjectName(const std::string& _involvedObjectName);

                    /**
                     * 判断参数 InvolvedObjectName 是否已赋值
                     * @return InvolvedObjectName 是否已赋值
                     * 
                     */
                    bool InvolvedObjectNameHasBeenSet() const;

                    /**
                     * 获取<p>事件来源组件，来源于 event.source.component</p>
                     * @return SourceComponent <p>事件来源组件，来源于 event.source.component</p>
                     * 
                     */
                    std::string GetSourceComponent() const;

                    /**
                     * 设置<p>事件来源组件，来源于 event.source.component</p>
                     * @param _sourceComponent <p>事件来源组件，来源于 event.source.component</p>
                     * 
                     */
                    void SetSourceComponent(const std::string& _sourceComponent);

                    /**
                     * 判断参数 SourceComponent 是否已赋值
                     * @return SourceComponent 是否已赋值
                     * 
                     */
                    bool SourceComponentHasBeenSet() const;

                    /**
                     * 获取<p>事件原因，来源于 event.reason</p>
                     * @return Reason <p>事件原因，来源于 event.reason</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>事件原因，来源于 event.reason</p>
                     * @param _reason <p>事件原因，来源于 event.reason</p>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * <p>事件时间（Unix 时间戳，毫秒）</p>
                     */
                    uint64_t m_eventTime;
                    bool m_eventTimeHasBeenSet;

                    /**
                     * <p>组件名称，来源于 event.involvedObject.kind</p>
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * <p>事件级别，来源于 event.type 的原始值（如 Normal、Warning）</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>事件内容，来源于 event.message</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>关联的 K8s 对象名称，来源于 event.involvedObject.name</p>
                     */
                    std::string m_involvedObjectName;
                    bool m_involvedObjectNameHasBeenSet;

                    /**
                     * <p>事件来源组件，来源于 event.source.component</p>
                     */
                    std::string m_sourceComponent;
                    bool m_sourceComponentHasBeenSet;

                    /**
                     * <p>事件原因，来源于 event.reason</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RAYJOBEVENTITEM_H_
