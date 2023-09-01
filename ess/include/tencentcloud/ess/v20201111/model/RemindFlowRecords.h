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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_REMINDFLOWRECORDS_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_REMINDFLOWRECORDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 催办接口返回的详细信息。
                */
                class RemindFlowRecords : public AbstractModel
                {
                public:
                    RemindFlowRecords();
                    ~RemindFlowRecords() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合同流程是否可以催办：
true - 可以，false - 不可以。
若无法催办，将返回RemindMessage以解释原因。
                     * @return CanRemind 合同流程是否可以催办：
true - 可以，false - 不可以。
若无法催办，将返回RemindMessage以解释原因。
                     * 
                     */
                    bool GetCanRemind() const;

                    /**
                     * 设置合同流程是否可以催办：
true - 可以，false - 不可以。
若无法催办，将返回RemindMessage以解释原因。
                     * @param _canRemind 合同流程是否可以催办：
true - 可以，false - 不可以。
若无法催办，将返回RemindMessage以解释原因。
                     * 
                     */
                    void SetCanRemind(const bool& _canRemind);

                    /**
                     * 判断参数 CanRemind 是否已赋值
                     * @return CanRemind 是否已赋值
                     * 
                     */
                    bool CanRemindHasBeenSet() const;

                    /**
                     * 获取合同流程ID，为32位字符串。
                     * @return FlowId 合同流程ID，为32位字符串。
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置合同流程ID，为32位字符串。
                     * @param _flowId 合同流程ID，为32位字符串。
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取在合同流程无法催办的情况下，系统将返回RemindMessage以阐述原因。
                     * @return RemindMessage 在合同流程无法催办的情况下，系统将返回RemindMessage以阐述原因。
                     * 
                     */
                    std::string GetRemindMessage() const;

                    /**
                     * 设置在合同流程无法催办的情况下，系统将返回RemindMessage以阐述原因。
                     * @param _remindMessage 在合同流程无法催办的情况下，系统将返回RemindMessage以阐述原因。
                     * 
                     */
                    void SetRemindMessage(const std::string& _remindMessage);

                    /**
                     * 判断参数 RemindMessage 是否已赋值
                     * @return RemindMessage 是否已赋值
                     * 
                     */
                    bool RemindMessageHasBeenSet() const;

                private:

                    /**
                     * 合同流程是否可以催办：
true - 可以，false - 不可以。
若无法催办，将返回RemindMessage以解释原因。
                     */
                    bool m_canRemind;
                    bool m_canRemindHasBeenSet;

                    /**
                     * 合同流程ID，为32位字符串。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 在合同流程无法催办的情况下，系统将返回RemindMessage以阐述原因。
                     */
                    std::string m_remindMessage;
                    bool m_remindMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_REMINDFLOWRECORDS_H_
