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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TRIGGERMANUALTASKSRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TRIGGERMANUALTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ManualTriggerRecordOpsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * TriggerManualTasks返回参数结构体
                */
                class TriggerManualTasksResponse : public AbstractModel
                {
                public:
                    TriggerManualTasksResponse();
                    ~TriggerManualTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取请求来源，WEB 前端；CLIENT 客户端
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestFromSource 请求来源，WEB 前端；CLIENT 客户端
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestFromSource() const;

                    /**
                     * 判断参数 RequestFromSource 是否已赋值
                     * @return RequestFromSource 是否已赋值
                     * 
                     */
                    bool RequestFromSourceHasBeenSet() const;

                    /**
                     * 获取详情结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 详情结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ManualTriggerRecordOpsDto GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 请求来源，WEB 前端；CLIENT 客户端
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestFromSource;
                    bool m_requestFromSourceHasBeenSet;

                    /**
                     * 详情结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ManualTriggerRecordOpsDto m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TRIGGERMANUALTASKSRESPONSE_H_
