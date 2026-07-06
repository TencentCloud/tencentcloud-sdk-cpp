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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_STRATEGYRESP_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_STRATEGYRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/ReceiveAccount.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * 查询策略时策略列表参数
                */
                class StrategyResp : public AbstractModel
                {
                public:
                    StrategyResp();
                    ~StrategyResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略Id
                     * @return StrategyId 策略Id
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置策略Id
                     * @param _strategyId 策略Id
                     * 
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取规则组Id
                     * @return GroupId 规则组Id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置规则组Id
                     * @param _groupId 规则组Id
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取规则组名称
                     * @return GroupName 规则组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置规则组名称
                     * @param _groupName 规则组名称
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
                     * 获取规则数
                     * @return RuleCount 规则数
                     * 
                     */
                    int64_t GetRuleCount() const;

                    /**
                     * 设置规则数
                     * @param _ruleCount 规则数
                     * 
                     */
                    void SetRuleCount(const int64_t& _ruleCount);

                    /**
                     * 判断参数 RuleCount 是否已赋值
                     * @return RuleCount 是否已赋值
                     * 
                     */
                    bool RuleCountHasBeenSet() const;

                    /**
                     * 获取策略状态
                     * @return RuleStatus 策略状态
                     * 
                     */
                    int64_t GetRuleStatus() const;

                    /**
                     * 设置策略状态
                     * @param _ruleStatus 策略状态
                     * 
                     */
                    void SetRuleStatus(const int64_t& _ruleStatus);

                    /**
                     * 判断参数 RuleStatus 是否已赋值
                     * @return RuleStatus 是否已赋值
                     * 
                     */
                    bool RuleStatusHasBeenSet() const;

                    /**
                     * 获取下发账号
                     * @return ReceiveAccount 下发账号
                     * 
                     */
                    std::vector<ReceiveAccount> GetReceiveAccount() const;

                    /**
                     * 设置下发账号
                     * @param _receiveAccount 下发账号
                     * 
                     */
                    void SetReceiveAccount(const std::vector<ReceiveAccount>& _receiveAccount);

                    /**
                     * 判断参数 ReceiveAccount 是否已赋值
                     * @return ReceiveAccount 是否已赋值
                     * 
                     */
                    bool ReceiveAccountHasBeenSet() const;

                    /**
                     * 获取优先级
                     * @return Sequence 优先级
                     * 
                     */
                    int64_t GetSequence() const;

                    /**
                     * 设置优先级
                     * @param _sequence 优先级
                     * 
                     */
                    void SetSequence(const int64_t& _sequence);

                    /**
                     * 判断参数 Sequence 是否已赋值
                     * @return Sequence 是否已赋值
                     * 
                     */
                    bool SequenceHasBeenSet() const;

                    /**
                     * 获取下发失败原因
                     * @return ErrMsg 下发失败原因
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置下发失败原因
                     * @param _errMsg 下发失败原因
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取下发失败原因类型
                     * @return ErrorType 下发失败原因类型
                     * 
                     */
                    std::string GetErrorType() const;

                    /**
                     * 设置下发失败原因类型
                     * @param _errorType 下发失败原因类型
                     * 
                     */
                    void SetErrorType(const std::string& _errorType);

                    /**
                     * 判断参数 ErrorType 是否已赋值
                     * @return ErrorType 是否已赋值
                     * 
                     */
                    bool ErrorTypeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取创建人
                     * @return CreateBy 创建人
                     * 
                     */
                    std::string GetCreateBy() const;

                    /**
                     * 设置创建人
                     * @param _createBy 创建人
                     * 
                     */
                    void SetCreateBy(const std::string& _createBy);

                    /**
                     * 判断参数 CreateBy 是否已赋值
                     * @return CreateBy 是否已赋值
                     * 
                     */
                    bool CreateByHasBeenSet() const;

                    /**
                     * 获取更新人
                     * @return UpdateBy 更新人
                     * 
                     */
                    std::string GetUpdateBy() const;

                    /**
                     * 设置更新人
                     * @param _updateBy 更新人
                     * 
                     */
                    void SetUpdateBy(const std::string& _updateBy);

                    /**
                     * 判断参数 UpdateBy 是否已赋值
                     * @return UpdateBy 是否已赋值
                     * 
                     */
                    bool UpdateByHasBeenSet() const;

                    /**
                     * 获取执行区域
                     * @return ExecArea 执行区域
                     * 
                     */
                    std::string GetExecArea() const;

                    /**
                     * 设置执行区域
                     * @param _execArea 执行区域
                     * 
                     */
                    void SetExecArea(const std::string& _execArea);

                    /**
                     * 判断参数 ExecArea 是否已赋值
                     * @return ExecArea 是否已赋值
                     * 
                     */
                    bool ExecAreaHasBeenSet() const;

                    /**
                     * 获取创建人名称
                     * @return CreateName 创建人名称
                     * 
                     */
                    std::string GetCreateName() const;

                    /**
                     * 设置创建人名称
                     * @param _createName 创建人名称
                     * 
                     */
                    void SetCreateName(const std::string& _createName);

                    /**
                     * 判断参数 CreateName 是否已赋值
                     * @return CreateName 是否已赋值
                     * 
                     */
                    bool CreateNameHasBeenSet() const;

                    /**
                     * 获取更新人名称
                     * @return UpdateName 更新人名称
                     * 
                     */
                    std::string GetUpdateName() const;

                    /**
                     * 设置更新人名称
                     * @param _updateName 更新人名称
                     * 
                     */
                    void SetUpdateName(const std::string& _updateName);

                    /**
                     * 判断参数 UpdateName 是否已赋值
                     * @return UpdateName 是否已赋值
                     * 
                     */
                    bool UpdateNameHasBeenSet() const;

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
                     * 策略Id
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 规则组Id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 规则组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 规则数
                     */
                    int64_t m_ruleCount;
                    bool m_ruleCountHasBeenSet;

                    /**
                     * 策略状态
                     */
                    int64_t m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * 下发账号
                     */
                    std::vector<ReceiveAccount> m_receiveAccount;
                    bool m_receiveAccountHasBeenSet;

                    /**
                     * 优先级
                     */
                    int64_t m_sequence;
                    bool m_sequenceHasBeenSet;

                    /**
                     * 下发失败原因
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 下发失败原因类型
                     */
                    std::string m_errorType;
                    bool m_errorTypeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 创建人
                     */
                    std::string m_createBy;
                    bool m_createByHasBeenSet;

                    /**
                     * 更新人
                     */
                    std::string m_updateBy;
                    bool m_updateByHasBeenSet;

                    /**
                     * 执行区域
                     */
                    std::string m_execArea;
                    bool m_execAreaHasBeenSet;

                    /**
                     * 创建人名称
                     */
                    std::string m_createName;
                    bool m_createNameHasBeenSet;

                    /**
                     * 更新人名称
                     */
                    std::string m_updateName;
                    bool m_updateNameHasBeenSet;

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

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_STRATEGYRESP_H_
