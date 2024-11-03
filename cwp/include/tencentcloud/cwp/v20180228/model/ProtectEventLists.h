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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTEVENTLISTS_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTEVENTLISTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 防护事件列表信息
                */
                class ProtectEventLists : public AbstractModel
                {
                public:
                    ProtectEventLists();
                    ~ProtectEventLists() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务器名称
                     * @return HostName 服务器名称
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置服务器名称
                     * @param _hostName 服务器名称
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取服务器ip
                     * @return HostIp 服务器ip
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置服务器ip
                     * @param _hostIp 服务器ip
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取事件地址
                     * @return EventDir 事件地址
                     * 
                     */
                    std::string GetEventDir() const;

                    /**
                     * 设置事件地址
                     * @param _eventDir 事件地址
                     * 
                     */
                    void SetEventDir(const std::string& _eventDir);

                    /**
                     * 判断参数 EventDir 是否已赋值
                     * @return EventDir 是否已赋值
                     * 
                     */
                    bool EventDirHasBeenSet() const;

                    /**
                     * 获取事件类型 0-内容被修改恢复；1-权限被修改恢复；2-归属被修改恢复；3-被删除恢复；4-新增删除
                     * @return EventType 事件类型 0-内容被修改恢复；1-权限被修改恢复；2-归属被修改恢复；3-被删除恢复；4-新增删除
                     * 
                     */
                    uint64_t GetEventType() const;

                    /**
                     * 设置事件类型 0-内容被修改恢复；1-权限被修改恢复；2-归属被修改恢复；3-被删除恢复；4-新增删除
                     * @param _eventType 事件类型 0-内容被修改恢复；1-权限被修改恢复；2-归属被修改恢复；3-被删除恢复；4-新增删除
                     * 
                     */
                    void SetEventType(const uint64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取事件状态 1 已恢复 0 未恢复
                     * @return EventStatus 事件状态 1 已恢复 0 未恢复
                     * 
                     */
                    uint64_t GetEventStatus() const;

                    /**
                     * 设置事件状态 1 已恢复 0 未恢复
                     * @param _eventStatus 事件状态 1 已恢复 0 未恢复
                     * 
                     */
                    void SetEventStatus(const uint64_t& _eventStatus);

                    /**
                     * 判断参数 EventStatus 是否已赋值
                     * @return EventStatus 是否已赋值
                     * 
                     */
                    bool EventStatusHasBeenSet() const;

                    /**
                     * 获取发现时间
                     * @return CreateTime 发现时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置发现时间
                     * @param _createTime 发现时间
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
                     * 获取恢复时间
                     * @return RestoreTime 恢复时间
                     * 
                     */
                    std::string GetRestoreTime() const;

                    /**
                     * 设置恢复时间
                     * @param _restoreTime 恢复时间
                     * 
                     */
                    void SetRestoreTime(const std::string& _restoreTime);

                    /**
                     * 判断参数 RestoreTime 是否已赋值
                     * @return RestoreTime 是否已赋值
                     * 
                     */
                    bool RestoreTimeHasBeenSet() const;

                    /**
                     * 获取唯一ID
                     * @return Id 唯一ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置唯一ID
                     * @param _id 唯一ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取文件类型 0-常规文件；1-目录；2-软链
                     * @return FileType 文件类型 0-常规文件；1-目录；2-软链
                     * 
                     */
                    uint64_t GetFileType() const;

                    /**
                     * 设置文件类型 0-常规文件；1-目录；2-软链
                     * @param _fileType 文件类型 0-常规文件；1-目录；2-软链
                     * 
                     */
                    void SetFileType(const uint64_t& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取主机额外信息
                     * @return MachineExtraInfo 主机额外信息
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置主机额外信息
                     * @param _machineExtraInfo 主机额外信息
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                    /**
                     * 获取机器实例uuid
                     * @return Quuid 机器实例uuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置机器实例uuid
                     * @param _quuid 机器实例uuid
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                private:

                    /**
                     * 服务器名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 服务器ip
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 事件地址
                     */
                    std::string m_eventDir;
                    bool m_eventDirHasBeenSet;

                    /**
                     * 事件类型 0-内容被修改恢复；1-权限被修改恢复；2-归属被修改恢复；3-被删除恢复；4-新增删除
                     */
                    uint64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 事件状态 1 已恢复 0 未恢复
                     */
                    uint64_t m_eventStatus;
                    bool m_eventStatusHasBeenSet;

                    /**
                     * 发现时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 恢复时间
                     */
                    std::string m_restoreTime;
                    bool m_restoreTimeHasBeenSet;

                    /**
                     * 唯一ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 文件类型 0-常规文件；1-目录；2-软链
                     */
                    uint64_t m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 主机额外信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * 机器实例uuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTEVENTLISTS_H_
