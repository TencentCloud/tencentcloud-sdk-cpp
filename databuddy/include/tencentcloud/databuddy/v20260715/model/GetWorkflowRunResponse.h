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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWRUNRESPONSE_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWRUNRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/GetWorkflowRunRsp.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * GetWorkflowRun返回参数结构体
                */
                class GetWorkflowRunResponse : public AbstractModel
                {
                public:
                    GetWorkflowRunResponse();
                    ~GetWorkflowRunResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>查询工作流运行详情响应内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data <p>查询工作流运行详情响应内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GetWorkflowRunRsp GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * <p>查询工作流运行详情响应内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GetWorkflowRunRsp m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKFLOWRUNRESPONSE_H_
