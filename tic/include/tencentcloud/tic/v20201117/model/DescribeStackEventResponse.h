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

#ifndef TENCENTCLOUD_TIC_V20201117_MODEL_DESCRIBESTACKEVENTRESPONSE_H_
#define TENCENTCLOUD_TIC_V20201117_MODEL_DESCRIBESTACKEVENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tic
    {
        namespace V20201117
        {
            namespace Model
            {
                /**
                * DescribeStackEvent返回参数结构体
                */
                class DescribeStackEventResponse : public AbstractModel
                {
                public:
                    DescribeStackEventResponse();
                    ~DescribeStackEventResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取事件ID
                     * @return EventId 事件ID
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取版本ID
                     * @return VersionId 版本ID
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取资源栈ID
                     * @return StackId 资源栈ID
                     * 
                     */
                    std::string GetStackId() const;

                    /**
                     * 判断参数 StackId 是否已赋值
                     * @return StackId 是否已赋值
                     * 
                     */
                    bool StackIdHasBeenSet() const;

                    /**
                     * 获取事件类型
                     * @return Type 事件类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取事件状态
                     * @return Status 事件状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取状态信息
                     * @return EventMessage 状态信息
                     * 
                     */
                    std::string GetEventMessage() const;

                    /**
                     * 判断参数 EventMessage 是否已赋值
                     * @return EventMessage 是否已赋值
                     * 
                     */
                    bool EventMessageHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取控制台输出文本
                     * @return ConsoleLog 控制台输出文本
                     * 
                     */
                    std::string GetConsoleLog() const;

                    /**
                     * 判断参数 ConsoleLog 是否已赋值
                     * @return ConsoleLog 是否已赋值
                     * 
                     */
                    bool ConsoleLogHasBeenSet() const;

                private:

                    /**
                     * 事件ID
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 版本ID
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * 资源栈ID
                     */
                    std::string m_stackId;
                    bool m_stackIdHasBeenSet;

                    /**
                     * 事件类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 事件状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态信息
                     */
                    std::string m_eventMessage;
                    bool m_eventMessageHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 控制台输出文本
                     */
                    std::string m_consoleLog;
                    bool m_consoleLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIC_V20201117_MODEL_DESCRIBESTACKEVENTRESPONSE_H_
