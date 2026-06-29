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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CANCELFAILUREFLOW_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CANCELFAILUREFLOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 撤销失败的流程信息
                */
                class CancelFailureFlow : public AbstractModel
                {
                public:
                    CancelFailureFlow();
                    ~CancelFailureFlow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>签署流程编号，为32位字符串</p>
                     * @return FlowId <p>签署流程编号，为32位字符串</p>
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置<p>签署流程编号，为32位字符串</p>
                     * @param _flowId <p>签署流程编号，为32位字符串</p>
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
                     * 获取<p>撤销失败原因</p>
                     * @return Reason <p>撤销失败原因</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>撤销失败原因</p>
                     * @param _reason <p>撤销失败原因</p>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取<p>合同流程名称</p>
                     * @return FlowName <p>合同流程名称</p>
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置<p>合同流程名称</p>
                     * @param _flowName <p>合同流程名称</p>
                     * 
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                private:

                    /**
                     * <p>签署流程编号，为32位字符串</p>
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>撤销失败原因</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * <p>合同流程名称</p>
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CANCELFAILUREFLOW_H_
