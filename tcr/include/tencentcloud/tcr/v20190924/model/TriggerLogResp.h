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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_TRIGGERLOGRESP_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_TRIGGERLOGRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/TriggerInvokeCondition.h>
#include <tencentcloud/tcr/v20190924/model/TriggerInvokePara.h>
#include <tencentcloud/tcr/v20190924/model/TriggerInvokeResult.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 触发器日志
                */
                class TriggerLogResp : public AbstractModel
                {
                public:
                    TriggerLogResp();
                    ~TriggerLogResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取仓库名称
                     * @return RepoName 仓库名称
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置仓库名称
                     * @param _repoName 仓库名称
                     * 
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     * 
                     */
                    bool RepoNameHasBeenSet() const;

                    /**
                     * 获取Tag名称
                     * @return TagName Tag名称
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置Tag名称
                     * @param _tagName Tag名称
                     * 
                     */
                    void SetTagName(const std::string& _tagName);

                    /**
                     * 判断参数 TagName 是否已赋值
                     * @return TagName 是否已赋值
                     * 
                     */
                    bool TagNameHasBeenSet() const;

                    /**
                     * 获取触发器名称
                     * @return TriggerName 触发器名称
                     * 
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置触发器名称
                     * @param _triggerName 触发器名称
                     * 
                     */
                    void SetTriggerName(const std::string& _triggerName);

                    /**
                     * 判断参数 TriggerName 是否已赋值
                     * @return TriggerName 是否已赋值
                     * 
                     */
                    bool TriggerNameHasBeenSet() const;

                    /**
                     * 获取触发方式
                     * @return InvokeSource 触发方式
                     * 
                     */
                    std::string GetInvokeSource() const;

                    /**
                     * 设置触发方式
                     * @param _invokeSource 触发方式
                     * 
                     */
                    void SetInvokeSource(const std::string& _invokeSource);

                    /**
                     * 判断参数 InvokeSource 是否已赋值
                     * @return InvokeSource 是否已赋值
                     * 
                     */
                    bool InvokeSourceHasBeenSet() const;

                    /**
                     * 获取触发动作
                     * @return InvokeAction 触发动作
                     * 
                     */
                    std::string GetInvokeAction() const;

                    /**
                     * 设置触发动作
                     * @param _invokeAction 触发动作
                     * 
                     */
                    void SetInvokeAction(const std::string& _invokeAction);

                    /**
                     * 判断参数 InvokeAction 是否已赋值
                     * @return InvokeAction 是否已赋值
                     * 
                     */
                    bool InvokeActionHasBeenSet() const;

                    /**
                     * 获取触发时间
                     * @return InvokeTime 触发时间
                     * 
                     */
                    std::string GetInvokeTime() const;

                    /**
                     * 设置触发时间
                     * @param _invokeTime 触发时间
                     * 
                     */
                    void SetInvokeTime(const std::string& _invokeTime);

                    /**
                     * 判断参数 InvokeTime 是否已赋值
                     * @return InvokeTime 是否已赋值
                     * 
                     */
                    bool InvokeTimeHasBeenSet() const;

                    /**
                     * 获取触发条件
                     * @return InvokeCondition 触发条件
                     * 
                     */
                    TriggerInvokeCondition GetInvokeCondition() const;

                    /**
                     * 设置触发条件
                     * @param _invokeCondition 触发条件
                     * 
                     */
                    void SetInvokeCondition(const TriggerInvokeCondition& _invokeCondition);

                    /**
                     * 判断参数 InvokeCondition 是否已赋值
                     * @return InvokeCondition 是否已赋值
                     * 
                     */
                    bool InvokeConditionHasBeenSet() const;

                    /**
                     * 获取触发参数
                     * @return InvokePara 触发参数
                     * 
                     */
                    TriggerInvokePara GetInvokePara() const;

                    /**
                     * 设置触发参数
                     * @param _invokePara 触发参数
                     * 
                     */
                    void SetInvokePara(const TriggerInvokePara& _invokePara);

                    /**
                     * 判断参数 InvokePara 是否已赋值
                     * @return InvokePara 是否已赋值
                     * 
                     */
                    bool InvokeParaHasBeenSet() const;

                    /**
                     * 获取触发结果
                     * @return InvokeResult 触发结果
                     * 
                     */
                    TriggerInvokeResult GetInvokeResult() const;

                    /**
                     * 设置触发结果
                     * @param _invokeResult 触发结果
                     * 
                     */
                    void SetInvokeResult(const TriggerInvokeResult& _invokeResult);

                    /**
                     * 判断参数 InvokeResult 是否已赋值
                     * @return InvokeResult 是否已赋值
                     * 
                     */
                    bool InvokeResultHasBeenSet() const;

                private:

                    /**
                     * 仓库名称
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * Tag名称
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                    /**
                     * 触发器名称
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * 触发方式
                     */
                    std::string m_invokeSource;
                    bool m_invokeSourceHasBeenSet;

                    /**
                     * 触发动作
                     */
                    std::string m_invokeAction;
                    bool m_invokeActionHasBeenSet;

                    /**
                     * 触发时间
                     */
                    std::string m_invokeTime;
                    bool m_invokeTimeHasBeenSet;

                    /**
                     * 触发条件
                     */
                    TriggerInvokeCondition m_invokeCondition;
                    bool m_invokeConditionHasBeenSet;

                    /**
                     * 触发参数
                     */
                    TriggerInvokePara m_invokePara;
                    bool m_invokeParaHasBeenSet;

                    /**
                     * 触发结果
                     */
                    TriggerInvokeResult m_invokeResult;
                    bool m_invokeResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_TRIGGERLOGRESP_H_
