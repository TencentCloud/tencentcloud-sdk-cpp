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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_EVENTS_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_EVENTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 实例扩展事件详情
                */
                class Events : public AbstractModel
                {
                public:
                    Events();
                    ~Events() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID
                     * @return Id ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置ID
                     * @param _id ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取扩展事件文件名称
                     * @return FileName 扩展事件文件名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置扩展事件文件名称
                     * @param _fileName 扩展事件文件名称
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取扩展事件文件大小
                     * @return Size 扩展事件文件大小
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置扩展事件文件大小
                     * @param _size 扩展事件文件大小
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取事件类型，slow-慢SQL事件，blocked-阻塞事件，deadlock-死锁事件
                     * @return EventType 事件类型，slow-慢SQL事件，blocked-阻塞事件，deadlock-死锁事件
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置事件类型，slow-慢SQL事件，blocked-阻塞事件，deadlock-死锁事件
                     * @param _eventType 事件类型，slow-慢SQL事件，blocked-阻塞事件，deadlock-死锁事件
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取事件记录状态，1-成功，2-失败
                     * @return Status 事件记录状态，1-成功，2-失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置事件记录状态，1-成功，2-失败
                     * @param _status 事件记录状态，1-成功，2-失败
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
                     * 获取扩展文件生成开始时间
                     * @return StartTime 扩展文件生成开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置扩展文件生成开始时间
                     * @param _startTime 扩展文件生成开始时间
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
                     * 获取扩展文件生成开始时间
                     * @return EndTime 扩展文件生成开始时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置扩展文件生成开始时间
                     * @param _endTime 扩展文件生成开始时间
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
                     * 获取内网下载地址
                     * @return InternalAddr 内网下载地址
                     * 
                     */
                    std::string GetInternalAddr() const;

                    /**
                     * 设置内网下载地址
                     * @param _internalAddr 内网下载地址
                     * 
                     */
                    void SetInternalAddr(const std::string& _internalAddr);

                    /**
                     * 判断参数 InternalAddr 是否已赋值
                     * @return InternalAddr 是否已赋值
                     * 
                     */
                    bool InternalAddrHasBeenSet() const;

                    /**
                     * 获取外网下载地址
                     * @return ExternalAddr 外网下载地址
                     * 
                     */
                    std::string GetExternalAddr() const;

                    /**
                     * 设置外网下载地址
                     * @param _externalAddr 外网下载地址
                     * 
                     */
                    void SetExternalAddr(const std::string& _externalAddr);

                    /**
                     * 判断参数 ExternalAddr 是否已赋值
                     * @return ExternalAddr 是否已赋值
                     * 
                     */
                    bool ExternalAddrHasBeenSet() const;

                private:

                    /**
                     * ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 扩展事件文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 扩展事件文件大小
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 事件类型，slow-慢SQL事件，blocked-阻塞事件，deadlock-死锁事件
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 事件记录状态，1-成功，2-失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 扩展文件生成开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 扩展文件生成开始时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 内网下载地址
                     */
                    std::string m_internalAddr;
                    bool m_internalAddrHasBeenSet;

                    /**
                     * 外网下载地址
                     */
                    std::string m_externalAddr;
                    bool m_externalAddrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_EVENTS_H_
