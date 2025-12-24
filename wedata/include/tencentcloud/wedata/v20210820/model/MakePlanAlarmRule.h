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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEPLANALARMRULE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEPLANALARMRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/AlarmGroup.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 补录计划告警规则
                */
                class MakePlanAlarmRule : public AbstractModel
                {
                public:
                    MakePlanAlarmRule();
                    ~MakePlanAlarmRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警的级别
1 -- 普通
2 -- 重要
3 -- 紧急
                     * @return AlarmLevel 告警的级别
1 -- 普通
2 -- 重要
3 -- 紧急
                     * 
                     */
                    int64_t GetAlarmLevel() const;

                    /**
                     * 设置告警的级别
1 -- 普通
2 -- 重要
3 -- 紧急
                     * @param _alarmLevel 告警的级别
1 -- 普通
2 -- 重要
3 -- 紧急
                     * 
                     */
                    void SetAlarmLevel(const int64_t& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     * 
                     */
                    bool AlarmLevelHasBeenSet() const;

                    /**
                     * 获取告警的类型，补录计划支持：
start：启动告警
failure：失败告警
success：成功告警
overtime：超过配置时间告警

                     * @return AlarmTypes 告警的类型，补录计划支持：
start：启动告警
failure：失败告警
success：成功告警
overtime：超过配置时间告警

                     * 
                     */
                    std::vector<std::string> GetAlarmTypes() const;

                    /**
                     * 设置告警的类型，补录计划支持：
start：启动告警
failure：失败告警
success：成功告警
overtime：超过配置时间告警

                     * @param _alarmTypes 告警的类型，补录计划支持：
start：启动告警
failure：失败告警
success：成功告警
overtime：超过配置时间告警

                     * 
                     */
                    void SetAlarmTypes(const std::vector<std::string>& _alarmTypes);

                    /**
                     * 判断参数 AlarmTypes 是否已赋值
                     * @return AlarmTypes 是否已赋值
                     * 
                     */
                    bool AlarmTypesHasBeenSet() const;

                    /**
                     * 获取告警超时时间
                     * @return ExtInfo 告警超时时间
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置告警超时时间
                     * @param _extInfo 告警超时时间
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                    /**
                     * 获取告警接受人 升级人配置信息
                     * @return AlarmGroup 告警接受人 升级人配置信息
                     * 
                     */
                    std::vector<AlarmGroup> GetAlarmGroup() const;

                    /**
                     * 设置告警接受人 升级人配置信息
                     * @param _alarmGroup 告警接受人 升级人配置信息
                     * 
                     */
                    void SetAlarmGroup(const std::vector<AlarmGroup>& _alarmGroup);

                    /**
                     * 判断参数 AlarmGroup 是否已赋值
                     * @return AlarmGroup 是否已赋值
                     * 
                     */
                    bool AlarmGroupHasBeenSet() const;

                private:

                    /**
                     * 告警的级别
1 -- 普通
2 -- 重要
3 -- 紧急
                     */
                    int64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * 告警的类型，补录计划支持：
start：启动告警
failure：失败告警
success：成功告警
overtime：超过配置时间告警

                     */
                    std::vector<std::string> m_alarmTypes;
                    bool m_alarmTypesHasBeenSet;

                    /**
                     * 告警超时时间
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * 告警接受人 升级人配置信息
                     */
                    std::vector<AlarmGroup> m_alarmGroup;
                    bool m_alarmGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEPLANALARMRULE_H_
