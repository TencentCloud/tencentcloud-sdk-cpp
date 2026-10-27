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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_RUNCOMMANDRESPONSE_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_RUNCOMMANDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/Invocation.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * RunCommand返回参数结构体
                */
                class RunCommandResponse : public AbstractModel
                {
                public:
                    RunCommandResponse();
                    ~RunCommandResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>本次任务对应的任务ID。方便异步查询执行状态。</p>
                     * @return InvokeId <p>本次任务对应的任务ID。方便异步查询执行状态。</p>
                     * 
                     */
                    std::string GetInvokeId() const;

                    /**
                     * 判断参数 InvokeId 是否已赋值
                     * @return InvokeId 是否已赋值
                     * 
                     */
                    bool InvokeIdHasBeenSet() const;

                    /**
                     * 获取<p>执行详细情况。WaitUntilDone为true，在接口返回时的执行状态。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Detail <p>执行详细情况。WaitUntilDone为true，在接口返回时的执行状态。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Invocation GetDetail() const;

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                private:

                    /**
                     * <p>本次任务对应的任务ID。方便异步查询执行状态。</p>
                     */
                    std::string m_invokeId;
                    bool m_invokeIdHasBeenSet;

                    /**
                     * <p>执行详细情况。WaitUntilDone为true，在接口返回时的执行状态。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Invocation m_detail;
                    bool m_detailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_RUNCOMMANDRESPONSE_H_
