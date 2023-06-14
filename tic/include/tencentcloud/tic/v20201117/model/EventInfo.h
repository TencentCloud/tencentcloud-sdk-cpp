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

#ifndef TENCENTCLOUD_TIC_V20201117_MODEL_EVENTINFO_H_
#define TENCENTCLOUD_TIC_V20201117_MODEL_EVENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 事件详情
                */
                class EventInfo : public AbstractModel
                {
                public:
                    EventInfo();
                    ~EventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件ID
                     * @return EventId 事件ID
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置事件ID
                     * @param _eventId 事件ID
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

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
                     * 设置版本ID
                     * @param _versionId 版本ID
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

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
                     * 设置资源栈ID
                     * @param _stackId 资源栈ID
                     * 
                     */
                    void SetStackId(const std::string& _stackId);

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
                     * 设置事件类型
                     * @param _type 事件类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取版本状态
                     * @return Status 版本状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置版本状态
                     * @param _status 版本状态
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
                     * 获取状态信息
                     * @return Message 状态信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置状态信息
                     * @param _message 状态信息
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

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
                     * 版本状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIC_V20201117_MODEL_EVENTINFO_H_
