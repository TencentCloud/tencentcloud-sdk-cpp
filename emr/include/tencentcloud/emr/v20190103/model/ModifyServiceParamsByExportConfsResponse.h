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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYSERVICEPARAMSBYEXPORTCONFSRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYSERVICEPARAMSBYEXPORTCONFSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ConfSubContext.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyServiceParamsByExportConfs返回参数结构体
                */
                class ModifyServiceParamsByExportConfsResponse : public AbstractModel
                {
                public:
                    ModifyServiceParamsByExportConfsResponse();
                    ~ModifyServiceParamsByExportConfsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>流程id</p>
                     * @return FlowId <p>流程id</p>
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取<p>变更项</p>
                     * @return WaitModifyConfList <p>变更项</p>
                     * 
                     */
                    std::vector<ConfSubContext> GetWaitModifyConfList() const;

                    /**
                     * 判断参数 WaitModifyConfList 是否已赋值
                     * @return WaitModifyConfList 是否已赋值
                     * 
                     */
                    bool WaitModifyConfListHasBeenSet() const;

                private:

                    /**
                     * <p>流程id</p>
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>变更项</p>
                     */
                    std::vector<ConfSubContext> m_waitModifyConfList;
                    bool m_waitModifyConfListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYSERVICEPARAMSBYEXPORTCONFSRESPONSE_H_
