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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_FLOWINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_FLOWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 流程简要信息
                */
                class FlowInfo : public AbstractModel
                {
                public:
                    FlowInfo();
                    ~FlowInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>流程ID</p>
                     * @return FlowId <p>流程ID</p>
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置<p>流程ID</p>
                     * @param _flowId <p>流程ID</p>
                     * 
                     */
                    void SetFlowId(const int64_t& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取<p>流程编码</p>
                     * @return WorkFlowCode <p>流程编码</p>
                     * 
                     */
                    std::string GetWorkFlowCode() const;

                    /**
                     * 设置<p>流程编码</p>
                     * @param _workFlowCode <p>流程编码</p>
                     * 
                     */
                    void SetWorkFlowCode(const std::string& _workFlowCode);

                    /**
                     * 判断参数 WorkFlowCode 是否已赋值
                     * @return WorkFlowCode 是否已赋值
                     * 
                     */
                    bool WorkFlowCodeHasBeenSet() const;

                    /**
                     * 获取<p>流程状态</p>
                     * @return Status <p>流程状态</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>流程状态</p>
                     * @param _status <p>流程状态</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>流程ID</p>
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>流程编码</p>
                     */
                    std::string m_workFlowCode;
                    bool m_workFlowCodeHasBeenSet;

                    /**
                     * <p>流程状态</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_FLOWINFO_H_
