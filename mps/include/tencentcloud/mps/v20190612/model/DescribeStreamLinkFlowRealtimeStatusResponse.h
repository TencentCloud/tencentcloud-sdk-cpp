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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMLINKFLOWREALTIMESTATUSRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMLINKFLOWREALTIMESTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/FlowRealtimeStatusItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeStreamLinkFlowRealtimeStatus返回参数结构体
                */
                class DescribeStreamLinkFlowRealtimeStatusResponse : public AbstractModel
                {
                public:
                    DescribeStreamLinkFlowRealtimeStatusResponse();
                    ~DescribeStreamLinkFlowRealtimeStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询时间，单位s。
                     * @return Timestamp 查询时间，单位s。
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取实时数据信息列表。
                     * @return Datas 实时数据信息列表。
                     * 
                     */
                    std::vector<FlowRealtimeStatusItem> GetDatas() const;

                    /**
                     * 判断参数 Datas 是否已赋值
                     * @return Datas 是否已赋值
                     * 
                     */
                    bool DatasHasBeenSet() const;

                private:

                    /**
                     * 查询时间，单位s。
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 实时数据信息列表。
                     */
                    std::vector<FlowRealtimeStatusItem> m_datas;
                    bool m_datasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMLINKFLOWREALTIMESTATUSRESPONSE_H_
