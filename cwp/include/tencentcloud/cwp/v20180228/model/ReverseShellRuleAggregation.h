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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_REVERSESHELLRULEAGGREGATION_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_REVERSESHELLRULEAGGREGATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/UuidHostip.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 反弹Shell规则-聚合版本
                */
                class ReverseShellRuleAggregation : public AbstractModel
                {
                public:
                    ReverseShellRuleAggregation();
                    ~ReverseShellRuleAggregation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID
                     * @return Id 规则ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置规则ID
                     * @param _id 规则ID
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
                     * 获取客户端ID
                     * @return UuidHostips 客户端ID
                     * 
                     */
                    std::vector<UuidHostip> GetUuidHostips() const;

                    /**
                     * 设置客户端ID
                     * @param _uuidHostips 客户端ID
                     * 
                     */
                    void SetUuidHostips(const std::vector<UuidHostip>& _uuidHostips);

                    /**
                     * 判断参数 UuidHostips 是否已赋值
                     * @return UuidHostips 是否已赋值
                     * 
                     */
                    bool UuidHostipsHasBeenSet() const;

                    /**
                     * 获取进程名称
                     * @return ProcessName 进程名称
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置进程名称
                     * @param _processName 进程名称
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取目标IP
                     * @return DestIp 目标IP
                     * 
                     */
                    std::string GetDestIp() const;

                    /**
                     * 设置目标IP
                     * @param _destIp 目标IP
                     * 
                     */
                    void SetDestIp(const std::string& _destIp);

                    /**
                     * 判断参数 DestIp 是否已赋值
                     * @return DestIp 是否已赋值
                     * 
                     */
                    bool DestIpHasBeenSet() const;

                    /**
                     * 获取目标端口
                     * @return DestPort 目标端口
                     * 
                     */
                    std::string GetDestPort() const;

                    /**
                     * 设置目标端口
                     * @param _destPort 目标端口
                     * 
                     */
                    void SetDestPort(const std::string& _destPort);

                    /**
                     * 判断参数 DestPort 是否已赋值
                     * @return DestPort 是否已赋值
                     * 
                     */
                    bool DestPortHasBeenSet() const;

                    /**
                     * 获取操作人
                     * @return Operator 操作人
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作人
                     * @param _operator 操作人
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取是否全局规则
                     * @return IsGlobal 是否全局规则
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置是否全局规则
                     * @param _isGlobal 是否全局规则
                     * 
                     */
                    void SetIsGlobal(const uint64_t& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取状态 (0: 有效 1: 无效)
                     * @return Status 状态 (0: 有效 1: 无效)
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态 (0: 有效 1: 无效)
                     * @param _status 状态 (0: 有效 1: 无效)
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

                    /**
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取加白方式， 0:常规加白 1:正则加白
                     * @return WhiteType 加白方式， 0:常规加白 1:正则加白
                     * 
                     */
                    uint64_t GetWhiteType() const;

                    /**
                     * 设置加白方式， 0:常规加白 1:正则加白
                     * @param _whiteType 加白方式， 0:常规加白 1:正则加白
                     * 
                     */
                    void SetWhiteType(const uint64_t& _whiteType);

                    /**
                     * 判断参数 WhiteType 是否已赋值
                     * @return WhiteType 是否已赋值
                     * 
                     */
                    bool WhiteTypeHasBeenSet() const;

                    /**
                     * 获取正则表达式
                     * @return RuleRegexp 正则表达式
                     * 
                     */
                    std::string GetRuleRegexp() const;

                    /**
                     * 设置正则表达式
                     * @param _ruleRegexp 正则表达式
                     * 
                     */
                    void SetRuleRegexp(const std::string& _ruleRegexp);

                    /**
                     * 判断参数 RuleRegexp 是否已赋值
                     * @return RuleRegexp 是否已赋值
                     * 
                     */
                    bool RuleRegexpHasBeenSet() const;

                    /**
                     * 获取处理历史事件， 0:不处理 1:处理
                     * @return HandleHistory 处理历史事件， 0:不处理 1:处理
                     * 
                     */
                    uint64_t GetHandleHistory() const;

                    /**
                     * 设置处理历史事件， 0:不处理 1:处理
                     * @param _handleHistory 处理历史事件， 0:不处理 1:处理
                     * 
                     */
                    void SetHandleHistory(const uint64_t& _handleHistory);

                    /**
                     * 判断参数 HandleHistory 是否已赋值
                     * @return HandleHistory 是否已赋值
                     * 
                     */
                    bool HandleHistoryHasBeenSet() const;

                    /**
                     * 获取批次id
                     * @return GroupID 批次id
                     * 
                     */
                    std::string GetGroupID() const;

                    /**
                     * 设置批次id
                     * @param _groupID 批次id
                     * 
                     */
                    void SetGroupID(const std::string& _groupID);

                    /**
                     * 判断参数 GroupID 是否已赋值
                     * @return GroupID 是否已赋值
                     * 
                     */
                    bool GroupIDHasBeenSet() const;

                    /**
                     * 获取应用资产，描述服务器数量，全局时候为：全部服务器
                     * @return MachinesNums 应用资产，描述服务器数量，全局时候为：全部服务器
                     * 
                     */
                    std::string GetMachinesNums() const;

                    /**
                     * 设置应用资产，描述服务器数量，全局时候为：全部服务器
                     * @param _machinesNums 应用资产，描述服务器数量，全局时候为：全部服务器
                     * 
                     */
                    void SetMachinesNums(const std::string& _machinesNums);

                    /**
                     * 判断参数 MachinesNums 是否已赋值
                     * @return MachinesNums 是否已赋值
                     * 
                     */
                    bool MachinesNumsHasBeenSet() const;

                private:

                    /**
                     * 规则ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 客户端ID
                     */
                    std::vector<UuidHostip> m_uuidHostips;
                    bool m_uuidHostipsHasBeenSet;

                    /**
                     * 进程名称
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 目标IP
                     */
                    std::string m_destIp;
                    bool m_destIpHasBeenSet;

                    /**
                     * 目标端口
                     */
                    std::string m_destPort;
                    bool m_destPortHasBeenSet;

                    /**
                     * 操作人
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 是否全局规则
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * 状态 (0: 有效 1: 无效)
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 加白方式， 0:常规加白 1:正则加白
                     */
                    uint64_t m_whiteType;
                    bool m_whiteTypeHasBeenSet;

                    /**
                     * 正则表达式
                     */
                    std::string m_ruleRegexp;
                    bool m_ruleRegexpHasBeenSet;

                    /**
                     * 处理历史事件， 0:不处理 1:处理
                     */
                    uint64_t m_handleHistory;
                    bool m_handleHistoryHasBeenSet;

                    /**
                     * 批次id
                     */
                    std::string m_groupID;
                    bool m_groupIDHasBeenSet;

                    /**
                     * 应用资产，描述服务器数量，全局时候为：全部服务器
                     */
                    std::string m_machinesNums;
                    bool m_machinesNumsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_REVERSESHELLRULEAGGREGATION_H_
