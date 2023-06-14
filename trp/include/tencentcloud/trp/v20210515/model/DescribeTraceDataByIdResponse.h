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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBETRACEDATABYIDRESPONSE_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBETRACEDATABYIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/TraceData.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * DescribeTraceDataById返回参数结构体
                */
                class DescribeTraceDataByIdResponse : public AbstractModel
                {
                public:
                    DescribeTraceDataByIdResponse();
                    ~DescribeTraceDataByIdResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取无
                     * @return TraceData 无
                     * 
                     */
                    TraceData GetTraceData() const;

                    /**
                     * 判断参数 TraceData 是否已赋值
                     * @return TraceData 是否已赋值
                     * 
                     */
                    bool TraceDataHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    TraceData m_traceData;
                    bool m_traceDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBETRACEDATABYIDRESPONSE_H_
