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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTBATCHCASEDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTBATCHCASEDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 事件连续时间实例信息
                */
                class EventBatchCaseDTO : public AbstractModel
                {
                public:
                    EventBatchCaseDTO();
                    ~EventBatchCaseDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件实例id
                     * @return CaseId 事件实例id
                     * 
                     */
                    std::string GetCaseId() const;

                    /**
                     * 设置事件实例id
                     * @param _caseId 事件实例id
                     * 
                     */
                    void SetCaseId(const std::string& _caseId);

                    /**
                     * 判断参数 CaseId 是否已赋值
                     * @return CaseId 是否已赋值
                     * 
                     */
                    bool CaseIdHasBeenSet() const;

                    /**
                     * 获取事件名
                     * @return Name 事件名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置事件名
                     * @param _name 事件名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取事件触发起始时间
                     * @return StartDimension 事件触发起始时间
                     * 
                     */
                    std::string GetStartDimension() const;

                    /**
                     * 设置事件触发起始时间
                     * @param _startDimension 事件触发起始时间
                     * 
                     */
                    void SetStartDimension(const std::string& _startDimension);

                    /**
                     * 判断参数 StartDimension 是否已赋值
                     * @return StartDimension 是否已赋值
                     * 
                     */
                    bool StartDimensionHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreationTs 创建时间
                     * 
                     */
                    std::string GetCreationTs() const;

                    /**
                     * 设置创建时间
                     * @param _creationTs 创建时间
                     * 
                     */
                    void SetCreationTs(const std::string& _creationTs);

                    /**
                     * 判断参数 CreationTs 是否已赋值
                     * @return CreationTs 是否已赋值
                     * 
                     */
                    bool CreationTsHasBeenSet() const;

                    /**
                     * 获取消费者id
                     * @return ConsumerId 消费者id
                     * 
                     */
                    std::string GetConsumerId() const;

                    /**
                     * 设置消费者id
                     * @param _consumerId 消费者id
                     * 
                     */
                    void SetConsumerId(const std::string& _consumerId);

                    /**
                     * 判断参数 ConsumerId 是否已赋值
                     * @return ConsumerId 是否已赋值
                     * 
                     */
                    bool ConsumerIdHasBeenSet() const;

                    /**
                     * 获取描述信息
                     * @return Description 描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息
                     * @param _description 描述信息
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
                     * 获取事件触发结束时间
                     * @return EndDimension 事件触发结束时间
                     * 
                     */
                    std::string GetEndDimension() const;

                    /**
                     * 设置事件触发结束时间
                     * @param _endDimension 事件触发结束时间
                     * 
                     */
                    void SetEndDimension(const std::string& _endDimension);

                    /**
                     * 判断参数 EndDimension 是否已赋值
                     * @return EndDimension 是否已赋值
                     * 
                     */
                    bool EndDimensionHasBeenSet() const;

                    /**
                     * 获取事件周期
                     * @return EventSubType 事件周期
                     * 
                     */
                    std::string GetEventSubType() const;

                    /**
                     * 设置事件周期
                     * @param _eventSubType 事件周期
                     * 
                     */
                    void SetEventSubType(const std::string& _eventSubType);

                    /**
                     * 判断参数 EventSubType 是否已赋值
                     * @return EventSubType 是否已赋值
                     * 
                     */
                    bool EventSubTypeHasBeenSet() const;

                private:

                    /**
                     * 事件实例id
                     */
                    std::string m_caseId;
                    bool m_caseIdHasBeenSet;

                    /**
                     * 事件名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 事件触发起始时间
                     */
                    std::string m_startDimension;
                    bool m_startDimensionHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_creationTs;
                    bool m_creationTsHasBeenSet;

                    /**
                     * 消费者id
                     */
                    std::string m_consumerId;
                    bool m_consumerIdHasBeenSet;

                    /**
                     * 描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 事件触发结束时间
                     */
                    std::string m_endDimension;
                    bool m_endDimensionHasBeenSet;

                    /**
                     * 事件周期
                     */
                    std::string m_eventSubType;
                    bool m_eventSubTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTBATCHCASEDTO_H_
