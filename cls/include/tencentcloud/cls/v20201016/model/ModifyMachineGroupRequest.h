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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYMACHINEGROUPREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYMACHINEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/MachineGroupTypeInfo.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyMachineGroup请求参数结构体
                */
                class ModifyMachineGroupRequest : public AbstractModel
                {
                public:
                    ModifyMachineGroupRequest();
                    ~ModifyMachineGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取机器组ID
                     * @return GroupId 机器组ID
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置机器组ID
                     * @param GroupId 机器组ID
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取机器组名称
                     * @return GroupName 机器组名称
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置机器组名称
                     * @param GroupName 机器组名称
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取机器组类型
                     * @return MachineGroupType 机器组类型
                     */
                    MachineGroupTypeInfo GetMachineGroupType() const;

                    /**
                     * 设置机器组类型
                     * @param MachineGroupType 机器组类型
                     */
                    void SetMachineGroupType(const MachineGroupTypeInfo& _machineGroupType);

                    /**
                     * 判断参数 MachineGroupType 是否已赋值
                     * @return MachineGroupType 是否已赋值
                     */
                    bool MachineGroupTypeHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return Tags 标签列表
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表
                     * @param Tags 标签列表
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取是否开启机器组自动更新
                     * @return AutoUpdate 是否开启机器组自动更新
                     */
                    bool GetAutoUpdate() const;

                    /**
                     * 设置是否开启机器组自动更新
                     * @param AutoUpdate 是否开启机器组自动更新
                     */
                    void SetAutoUpdate(const bool& _autoUpdate);

                    /**
                     * 判断参数 AutoUpdate 是否已赋值
                     * @return AutoUpdate 是否已赋值
                     */
                    bool AutoUpdateHasBeenSet() const;

                    /**
                     * 获取升级开始时间，建议业务低峰期升级LogListener
                     * @return UpdateStartTime 升级开始时间，建议业务低峰期升级LogListener
                     */
                    std::string GetUpdateStartTime() const;

                    /**
                     * 设置升级开始时间，建议业务低峰期升级LogListener
                     * @param UpdateStartTime 升级开始时间，建议业务低峰期升级LogListener
                     */
                    void SetUpdateStartTime(const std::string& _updateStartTime);

                    /**
                     * 判断参数 UpdateStartTime 是否已赋值
                     * @return UpdateStartTime 是否已赋值
                     */
                    bool UpdateStartTimeHasBeenSet() const;

                    /**
                     * 获取升级结束时间，建议业务低峰期升级LogListener
                     * @return UpdateEndTime 升级结束时间，建议业务低峰期升级LogListener
                     */
                    std::string GetUpdateEndTime() const;

                    /**
                     * 设置升级结束时间，建议业务低峰期升级LogListener
                     * @param UpdateEndTime 升级结束时间，建议业务低峰期升级LogListener
                     */
                    void SetUpdateEndTime(const std::string& _updateEndTime);

                    /**
                     * 判断参数 UpdateEndTime 是否已赋值
                     * @return UpdateEndTime 是否已赋值
                     */
                    bool UpdateEndTimeHasBeenSet() const;

                    /**
                     * 获取是否开启服务日志，用于记录因Loglistener 服务自身产生的log，开启后，会创建内部日志集cls_service_logging和日志主题loglistener_status,loglistener_alarm,loglistener_business，不产生计费
                     * @return ServiceLogging 是否开启服务日志，用于记录因Loglistener 服务自身产生的log，开启后，会创建内部日志集cls_service_logging和日志主题loglistener_status,loglistener_alarm,loglistener_business，不产生计费
                     */
                    bool GetServiceLogging() const;

                    /**
                     * 设置是否开启服务日志，用于记录因Loglistener 服务自身产生的log，开启后，会创建内部日志集cls_service_logging和日志主题loglistener_status,loglistener_alarm,loglistener_business，不产生计费
                     * @param ServiceLogging 是否开启服务日志，用于记录因Loglistener 服务自身产生的log，开启后，会创建内部日志集cls_service_logging和日志主题loglistener_status,loglistener_alarm,loglistener_business，不产生计费
                     */
                    void SetServiceLogging(const bool& _serviceLogging);

                    /**
                     * 判断参数 ServiceLogging 是否已赋值
                     * @return ServiceLogging 是否已赋值
                     */
                    bool ServiceLoggingHasBeenSet() const;

                private:

                    /**
                     * 机器组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 机器组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 机器组类型
                     */
                    MachineGroupTypeInfo m_machineGroupType;
                    bool m_machineGroupTypeHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 是否开启机器组自动更新
                     */
                    bool m_autoUpdate;
                    bool m_autoUpdateHasBeenSet;

                    /**
                     * 升级开始时间，建议业务低峰期升级LogListener
                     */
                    std::string m_updateStartTime;
                    bool m_updateStartTimeHasBeenSet;

                    /**
                     * 升级结束时间，建议业务低峰期升级LogListener
                     */
                    std::string m_updateEndTime;
                    bool m_updateEndTimeHasBeenSet;

                    /**
                     * 是否开启服务日志，用于记录因Loglistener 服务自身产生的log，开启后，会创建内部日志集cls_service_logging和日志主题loglistener_status,loglistener_alarm,loglistener_business，不产生计费
                     */
                    bool m_serviceLogging;
                    bool m_serviceLoggingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYMACHINEGROUPREQUEST_H_