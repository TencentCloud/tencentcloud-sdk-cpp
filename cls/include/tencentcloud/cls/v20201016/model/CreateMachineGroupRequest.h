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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEMACHINEGROUPREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEMACHINEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/MachineGroupTypeInfo.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>
#include <tencentcloud/cls/v20201016/model/MetaTagInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateMachineGroup请求参数结构体
                */
                class CreateMachineGroupRequest : public AbstractModel
                {
                public:
                    CreateMachineGroupRequest();
                    ~CreateMachineGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取机器组名字，不能重复
                     * @return GroupName 机器组名字，不能重复
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置机器组名字，不能重复
                     * @param _groupName 机器组名字，不能重复
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取创建机器组类型。取值如下：
- Type：ip，Values中为ip字符串列表创建机器组
- Type：label，Values中为标签字符串列表创建机器组
                     * @return MachineGroupType 创建机器组类型。取值如下：
- Type：ip，Values中为ip字符串列表创建机器组
- Type：label，Values中为标签字符串列表创建机器组
                     * 
                     */
                    MachineGroupTypeInfo GetMachineGroupType() const;

                    /**
                     * 设置创建机器组类型。取值如下：
- Type：ip，Values中为ip字符串列表创建机器组
- Type：label，Values中为标签字符串列表创建机器组
                     * @param _machineGroupType 创建机器组类型。取值如下：
- Type：ip，Values中为ip字符串列表创建机器组
- Type：label，Values中为标签字符串列表创建机器组
                     * 
                     */
                    void SetMachineGroupType(const MachineGroupTypeInfo& _machineGroupType);

                    /**
                     * 判断参数 MachineGroupType 是否已赋值
                     * @return MachineGroupType 是否已赋值
                     * 
                     */
                    bool MachineGroupTypeHasBeenSet() const;

                    /**
                     * 获取标签描述列表，通过指定该参数可以同时绑定标签到相应的机器组。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。
                     * @return Tags 标签描述列表，通过指定该参数可以同时绑定标签到相应的机器组。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签描述列表，通过指定该参数可以同时绑定标签到相应的机器组。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。
                     * @param _tags 标签描述列表，通过指定该参数可以同时绑定标签到相应的机器组。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取是否开启机器组自动更新。默认false
                     * @return AutoUpdate 是否开启机器组自动更新。默认false
                     * 
                     */
                    bool GetAutoUpdate() const;

                    /**
                     * 设置是否开启机器组自动更新。默认false
                     * @param _autoUpdate 是否开启机器组自动更新。默认false
                     * 
                     */
                    void SetAutoUpdate(const bool& _autoUpdate);

                    /**
                     * 判断参数 AutoUpdate 是否已赋值
                     * @return AutoUpdate 是否已赋值
                     * 
                     */
                    bool AutoUpdateHasBeenSet() const;

                    /**
                     * 获取升级开始时间，建议业务低峰期升级LogListener
                     * @return UpdateStartTime 升级开始时间，建议业务低峰期升级LogListener
                     * 
                     */
                    std::string GetUpdateStartTime() const;

                    /**
                     * 设置升级开始时间，建议业务低峰期升级LogListener
                     * @param _updateStartTime 升级开始时间，建议业务低峰期升级LogListener
                     * 
                     */
                    void SetUpdateStartTime(const std::string& _updateStartTime);

                    /**
                     * 判断参数 UpdateStartTime 是否已赋值
                     * @return UpdateStartTime 是否已赋值
                     * 
                     */
                    bool UpdateStartTimeHasBeenSet() const;

                    /**
                     * 获取升级结束时间，建议业务低峰期升级LogListener
                     * @return UpdateEndTime 升级结束时间，建议业务低峰期升级LogListener
                     * 
                     */
                    std::string GetUpdateEndTime() const;

                    /**
                     * 设置升级结束时间，建议业务低峰期升级LogListener
                     * @param _updateEndTime 升级结束时间，建议业务低峰期升级LogListener
                     * 
                     */
                    void SetUpdateEndTime(const std::string& _updateEndTime);

                    /**
                     * 判断参数 UpdateEndTime 是否已赋值
                     * @return UpdateEndTime 是否已赋值
                     * 
                     */
                    bool UpdateEndTimeHasBeenSet() const;

                    /**
                     * 获取是否开启服务日志，用于记录因Loglistener 服务自身产生的log，开启后，会创建内部日志集cls_service_logging和日志主题loglistener_status,loglistener_alarm,loglistener_business，不产生计费。默认false
                     * @return ServiceLogging 是否开启服务日志，用于记录因Loglistener 服务自身产生的log，开启后，会创建内部日志集cls_service_logging和日志主题loglistener_status,loglistener_alarm,loglistener_business，不产生计费。默认false
                     * 
                     */
                    bool GetServiceLogging() const;

                    /**
                     * 设置是否开启服务日志，用于记录因Loglistener 服务自身产生的log，开启后，会创建内部日志集cls_service_logging和日志主题loglistener_status,loglistener_alarm,loglistener_business，不产生计费。默认false
                     * @param _serviceLogging 是否开启服务日志，用于记录因Loglistener 服务自身产生的log，开启后，会创建内部日志集cls_service_logging和日志主题loglistener_status,loglistener_alarm,loglistener_business，不产生计费。默认false
                     * 
                     */
                    void SetServiceLogging(const bool& _serviceLogging);

                    /**
                     * 判断参数 ServiceLogging 是否已赋值
                     * @return ServiceLogging 是否已赋值
                     * 
                     */
                    bool ServiceLoggingHasBeenSet() const;

                    /**
                     * 获取机器组中机器离线清理时间。单位：天
                     * @return DelayCleanupTime 机器组中机器离线清理时间。单位：天
                     * 
                     */
                    int64_t GetDelayCleanupTime() const;

                    /**
                     * 设置机器组中机器离线清理时间。单位：天
                     * @param _delayCleanupTime 机器组中机器离线清理时间。单位：天
                     * 
                     */
                    void SetDelayCleanupTime(const int64_t& _delayCleanupTime);

                    /**
                     * 判断参数 DelayCleanupTime 是否已赋值
                     * @return DelayCleanupTime 是否已赋值
                     * 
                     */
                    bool DelayCleanupTimeHasBeenSet() const;

                    /**
                     * 获取机器组元数据信息列表
                     * @return MetaTags 机器组元数据信息列表
                     * 
                     */
                    std::vector<MetaTagInfo> GetMetaTags() const;

                    /**
                     * 设置机器组元数据信息列表
                     * @param _metaTags 机器组元数据信息列表
                     * 
                     */
                    void SetMetaTags(const std::vector<MetaTagInfo>& _metaTags);

                    /**
                     * 判断参数 MetaTags 是否已赋值
                     * @return MetaTags 是否已赋值
                     * 
                     */
                    bool MetaTagsHasBeenSet() const;

                    /**
                     * 获取系统类型，取值如下：
- 0：Linux （默认值）
- 1：Windows
                     * @return OSType 系统类型，取值如下：
- 0：Linux （默认值）
- 1：Windows
                     * 
                     */
                    uint64_t GetOSType() const;

                    /**
                     * 设置系统类型，取值如下：
- 0：Linux （默认值）
- 1：Windows
                     * @param _oSType 系统类型，取值如下：
- 0：Linux （默认值）
- 1：Windows
                     * 
                     */
                    void SetOSType(const uint64_t& _oSType);

                    /**
                     * 判断参数 OSType 是否已赋值
                     * @return OSType 是否已赋值
                     * 
                     */
                    bool OSTypeHasBeenSet() const;

                private:

                    /**
                     * 机器组名字，不能重复
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 创建机器组类型。取值如下：
- Type：ip，Values中为ip字符串列表创建机器组
- Type：label，Values中为标签字符串列表创建机器组
                     */
                    MachineGroupTypeInfo m_machineGroupType;
                    bool m_machineGroupTypeHasBeenSet;

                    /**
                     * 标签描述列表，通过指定该参数可以同时绑定标签到相应的机器组。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 是否开启机器组自动更新。默认false
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
                     * 是否开启服务日志，用于记录因Loglistener 服务自身产生的log，开启后，会创建内部日志集cls_service_logging和日志主题loglistener_status,loglistener_alarm,loglistener_business，不产生计费。默认false
                     */
                    bool m_serviceLogging;
                    bool m_serviceLoggingHasBeenSet;

                    /**
                     * 机器组中机器离线清理时间。单位：天
                     */
                    int64_t m_delayCleanupTime;
                    bool m_delayCleanupTimeHasBeenSet;

                    /**
                     * 机器组元数据信息列表
                     */
                    std::vector<MetaTagInfo> m_metaTags;
                    bool m_metaTagsHasBeenSet;

                    /**
                     * 系统类型，取值如下：
- 0：Linux （默认值）
- 1：Windows
                     */
                    uint64_t m_oSType;
                    bool m_oSTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEMACHINEGROUPREQUEST_H_
