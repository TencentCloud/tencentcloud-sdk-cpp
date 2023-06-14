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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_BASHEVENT_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_BASHEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 高危命令数据
                */
                class BashEvent : public AbstractModel
                {
                public:
                    BashEvent();
                    ~BashEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID
                     * @return Id ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置ID
                     * @param _id ID
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
                     * 获取云镜ID
                     * @return Uuid 云镜ID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置云镜ID
                     * @param _uuid 云镜ID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取主机ID
                     * @return Quuid 主机ID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机ID
                     * @param _quuid 主机ID
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取主机内网IP
                     * @return Hostip 主机内网IP
                     * 
                     */
                    std::string GetHostip() const;

                    /**
                     * 设置主机内网IP
                     * @param _hostip 主机内网IP
                     * 
                     */
                    void SetHostip(const std::string& _hostip);

                    /**
                     * 判断参数 Hostip 是否已赋值
                     * @return Hostip 是否已赋值
                     * 
                     */
                    bool HostipHasBeenSet() const;

                    /**
                     * 获取执行用户名
                     * @return User 执行用户名
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置执行用户名
                     * @param _user 执行用户名
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取平台类型
                     * @return Platform 平台类型
                     * 
                     */
                    uint64_t GetPlatform() const;

                    /**
                     * 设置平台类型
                     * @param _platform 平台类型
                     * 
                     */
                    void SetPlatform(const uint64_t& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取执行命令
                     * @return BashCmd 执行命令
                     * 
                     */
                    std::string GetBashCmd() const;

                    /**
                     * 设置执行命令
                     * @param _bashCmd 执行命令
                     * 
                     */
                    void SetBashCmd(const std::string& _bashCmd);

                    /**
                     * 判断参数 BashCmd 是否已赋值
                     * @return BashCmd 是否已赋值
                     * 
                     */
                    bool BashCmdHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _ruleName 规则名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取规则等级
                     * @return RuleLevel 规则等级
                     * 
                     */
                    uint64_t GetRuleLevel() const;

                    /**
                     * 设置规则等级
                     * @param _ruleLevel 规则等级
                     * 
                     */
                    void SetRuleLevel(const uint64_t& _ruleLevel);

                    /**
                     * 判断参数 RuleLevel 是否已赋值
                     * @return RuleLevel 是否已赋值
                     * 
                     */
                    bool RuleLevelHasBeenSet() const;

                    /**
                     * 获取处理状态
                     * @return Status 处理状态
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置处理状态
                     * @param _status 处理状态
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取发生时间
                     * @return CreateTime 发生时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置发生时间
                     * @param _createTime 发生时间
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
                     * 获取主机名
                     * @return MachineName 主机名
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置主机名
                     * @param _machineName 主机名
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                private:

                    /**
                     * ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 云镜ID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 主机ID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机内网IP
                     */
                    std::string m_hostip;
                    bool m_hostipHasBeenSet;

                    /**
                     * 执行用户名
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 平台类型
                     */
                    uint64_t m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 执行命令
                     */
                    std::string m_bashCmd;
                    bool m_bashCmdHasBeenSet;

                    /**
                     * 规则ID
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则等级
                     */
                    uint64_t m_ruleLevel;
                    bool m_ruleLevelHasBeenSet;

                    /**
                     * 处理状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 发生时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 主机名
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_BASHEVENT_H_
