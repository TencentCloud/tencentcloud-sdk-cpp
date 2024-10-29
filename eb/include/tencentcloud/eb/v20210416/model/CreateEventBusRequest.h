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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_CREATEEVENTBUSREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_CREATEEVENTBUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * CreateEventBus请求参数结构体
                */
                class CreateEventBusRequest : public AbstractModel
                {
                public:
                    CreateEventBusRequest();
                    ~CreateEventBusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取事件集名称，只能包含字母、中文、数字、下划线、连字符，以字母/中文开头，以数字、字母或中文结尾，2~60个字符
                     * @return EventBusName 事件集名称，只能包含字母、中文、数字、下划线、连字符，以字母/中文开头，以数字、字母或中文结尾，2~60个字符
                     * 
                     */
                    std::string GetEventBusName() const;

                    /**
                     * 设置事件集名称，只能包含字母、中文、数字、下划线、连字符，以字母/中文开头，以数字、字母或中文结尾，2~60个字符
                     * @param _eventBusName 事件集名称，只能包含字母、中文、数字、下划线、连字符，以字母/中文开头，以数字、字母或中文结尾，2~60个字符
                     * 
                     */
                    void SetEventBusName(const std::string& _eventBusName);

                    /**
                     * 判断参数 EventBusName 是否已赋值
                     * @return EventBusName 是否已赋值
                     * 
                     */
                    bool EventBusNameHasBeenSet() const;

                    /**
                     * 获取事件集描述，只能包含数字、中英文及常用标点符号，不超过200个字符
                     * @return Description 事件集描述，只能包含数字、中英文及常用标点符号，不超过200个字符
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置事件集描述，只能包含数字、中英文及常用标点符号，不超过200个字符
                     * @param _description 事件集描述，只能包含数字、中英文及常用标点符号，不超过200个字符
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
                     * 获取EB存储时长
                     * @return SaveDays EB存储时长
                     * 
                     */
                    int64_t GetSaveDays() const;

                    /**
                     * 设置EB存储时长
                     * @param _saveDays EB存储时长
                     * 
                     */
                    void SetSaveDays(const int64_t& _saveDays);

                    /**
                     * 判断参数 SaveDays 是否已赋值
                     * @return SaveDays 是否已赋值
                     * 
                     */
                    bool SaveDaysHasBeenSet() const;

                    /**
                     * 获取EB是否开启存储
                     * @return EnableStore EB是否开启存储
                     * 
                     */
                    bool GetEnableStore() const;

                    /**
                     * 设置EB是否开启存储
                     * @param _enableStore EB是否开启存储
                     * 
                     */
                    void SetEnableStore(const bool& _enableStore);

                    /**
                     * 判断参数 EnableStore 是否已赋值
                     * @return EnableStore 是否已赋值
                     * 
                     */
                    bool EnableStoreHasBeenSet() const;

                private:

                    /**
                     * 事件集名称，只能包含字母、中文、数字、下划线、连字符，以字母/中文开头，以数字、字母或中文结尾，2~60个字符
                     */
                    std::string m_eventBusName;
                    bool m_eventBusNameHasBeenSet;

                    /**
                     * 事件集描述，只能包含数字、中英文及常用标点符号，不超过200个字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * EB存储时长
                     */
                    int64_t m_saveDays;
                    bool m_saveDaysHasBeenSet;

                    /**
                     * EB是否开启存储
                     */
                    bool m_enableStore;
                    bool m_enableStoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_CREATEEVENTBUSREQUEST_H_
