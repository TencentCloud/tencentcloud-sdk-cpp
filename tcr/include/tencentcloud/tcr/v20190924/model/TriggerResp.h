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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_TRIGGERRESP_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_TRIGGERRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/TriggerInvokeCondition.h>
#include <tencentcloud/tcr/v20190924/model/TriggerInvokePara.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 触发器返回值
                */
                class TriggerResp : public AbstractModel
                {
                public:
                    TriggerResp();
                    ~TriggerResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取触发来源
                     * @return InvokeSource 触发来源
                     * 
                     */
                    std::string GetInvokeSource() const;

                    /**
                     * 设置触发来源
                     * @param _invokeSource 触发来源
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
                     * 获取触发器参数
                     * @return InvokePara 触发器参数
                     * 
                     */
                    TriggerInvokePara GetInvokePara() const;

                    /**
                     * 设置触发器参数
                     * @param _invokePara 触发器参数
                     * 
                     */
                    void SetInvokePara(const TriggerInvokePara& _invokePara);

                    /**
                     * 判断参数 InvokePara 是否已赋值
                     * @return InvokePara 是否已赋值
                     * 
                     */
                    bool InvokeParaHasBeenSet() const;

                private:

                    /**
                     * 触发器名称
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * 触发来源
                     */
                    std::string m_invokeSource;
                    bool m_invokeSourceHasBeenSet;

                    /**
                     * 触发动作
                     */
                    std::string m_invokeAction;
                    bool m_invokeActionHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 触发条件
                     */
                    TriggerInvokeCondition m_invokeCondition;
                    bool m_invokeConditionHasBeenSet;

                    /**
                     * 触发器参数
                     */
                    TriggerInvokePara m_invokePara;
                    bool m_invokeParaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_TRIGGERRESP_H_
