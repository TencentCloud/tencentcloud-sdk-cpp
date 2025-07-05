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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBETRACESTATUSRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBETRACESTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideo/v20191126/model/TraceStatus.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * DescribeTraceStatus返回参数结构体
                */
                class DescribeTraceStatusResponse : public AbstractModel
                {
                public:
                    DescribeTraceStatusResponse();
                    ~DescribeTraceStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备追踪状态列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 设备追踪状态列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TraceStatus> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 设备追踪状态列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TraceStatus> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBETRACESTATUSRESPONSE_H_
