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
                     * 获取<p>策略Id</p>
                     * @return StrategyId <p>策略Id</p>
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置<p>策略Id</p>
                     * @param _strategyId <p>策略Id</p>
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
                     * 获取<p>规则组Id</p>
                     * @return GroupId <p>规则组Id</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>规则组Id</p>
                     * @param _groupId <p>规则组Id</p>
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
                     * 获取<p>产品类型</p>
                     * @return Product <p>产品类型</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>产品类型</p>
                     * @param _product <p>产品类型</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取<p>规则组名称</p>
                     * @return GroupName <p>规则组名称</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>规则组名称</p>
                     * @param _groupName <p>规则组名称</p>
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
                     * 获取<p>规则数</p>
                     * @return RuleCount <p>规则数</p>
                     * 
                     */
                    int64_t GetRuleCount() const;

                    /**
                     * 设置<p>规则数</p>
                     * @param _ruleCount <p>规则数</p>
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
                     * 获取<p>策略状态</p>
                     * @return RuleStatus <p>策略状态</p>
                     * 
                     */
                    int64_t GetRuleStatus() const;

                    /**
                     * 设置<p>策略状态</p>
                     * @param _ruleStatus <p>策略状态</p>
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
                     * 获取<p>下发账号</p>
                     * @return ReceiveAccount <p>下发账号</p>
                     * 
                     */
                    std::vector<ReceiveAccount> GetReceiveAccount() const;

                    /**
                     * 设置<p>下发账号</p>
                     * @param _receiveAccount <p>下发账号</p>
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
                     * 获取<p>优先级</p>
                     * @return Sequence <p>优先级</p>
                     * 
                     */
                    int64_t GetSequence() const;

                    /**
                     * 设置<p>优先级</p>
                     * @param _sequence <p>优先级</p>
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
                     * 获取<p>下发失败原因</p>
                     * @return ErrMsg <p>下发失败原因</p>
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置<p>下发失败原因</p>
                     * @param _errMsg <p>下发失败原因</p>
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
                     * 获取<p>下发失败原因类型</p>
                     * @return ErrorType <p>下发失败原因类型</p>
                     * 
                     */
                    std::string GetErrorType() const;

                    /**
                     * 设置<p>下发失败原因类型</p>
                     * @param _errorType <p>下发失败原因类型</p>
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
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
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
                     * 获取<p>创建人</p>
                     * @return CreateBy <p>创建人</p>
                     * 
                     */
                    std::string GetCreateBy() const;

                    /**
                     * 设置<p>创建人</p>
                     * @param _createBy <p>创建人</p>
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
                     * 获取<p>更新人</p>
                     * @return UpdateBy <p>更新人</p>
                     * 
                     */
                    std::string GetUpdateBy() const;

                    /**
                     * 设置<p>更新人</p>
                     * @param _updateBy <p>更新人</p>
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
                     * 获取<p>执行区域</p>
                     * @return ExecArea <p>执行区域</p>
                     * 
                     */
                    std::string GetExecArea() const;

                    /**
                     * 设置<p>执行区域</p>
                     * @param _execArea <p>执行区域</p>
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
                     * 获取<p>创建人名称</p>
                     * @return CreateName <p>创建人名称</p>
                     * 
                     */
                    std::string GetCreateName() const;

                    /**
                     * 设置<p>创建人名称</p>
                     * @param _createName <p>创建人名称</p>
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
                     * 获取<p>更新人名称</p>
                     * @return UpdateName <p>更新人名称</p>
                     * 
                     */
                    std::string GetUpdateName() const;

                    /**
                     * 设置<p>更新人名称</p>
                     * @param _updateName <p>更新人名称</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * <p>策略Id</p>
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * <p>规则组Id</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>产品类型</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>规则组名称</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>规则数</p>
                     */
                    int64_t m_ruleCount;
                    bool m_ruleCountHasBeenSet;

                    /**
                     * <p>策略状态</p>
                     */
                    int64_t m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * <p>下发账号</p>
                     */
                    std::vector<ReceiveAccount> m_receiveAccount;
                    bool m_receiveAccountHasBeenSet;

                    /**
                     * <p>优先级</p>
                     */
                    int64_t m_sequence;
                    bool m_sequenceHasBeenSet;

                    /**
                     * <p>下发失败原因</p>
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * <p>下发失败原因类型</p>
                     */
                    std::string m_errorType;
                    bool m_errorTypeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>创建人</p>
                     */
                    std::string m_createBy;
                    bool m_createByHasBeenSet;

                    /**
                     * <p>更新人</p>
                     */
                    std::string m_updateBy;
                    bool m_updateByHasBeenSet;

                    /**
                     * <p>执行区域</p>
                     */
                    std::string m_execArea;
                    bool m_execAreaHasBeenSet;

                    /**
                     * <p>创建人名称</p>
                     */
                    std::string m_createName;
                    bool m_createNameHasBeenSet;

                    /**
                     * <p>更新人名称</p>
                     */
                    std::string m_updateName;
                    bool m_updateNameHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_STRATEGYRESP_H_
