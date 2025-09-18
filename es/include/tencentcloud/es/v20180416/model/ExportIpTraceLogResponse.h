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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_EXPORTIPTRACELOGRESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_EXPORTIPTRACELOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/IpTimePair.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ExportIpTraceLog返回参数结构体
                */
                class ExportIpTraceLogResponse : public AbstractModel
                {
                public:
                    ExportIpTraceLogResponse();
                    ~ExportIpTraceLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取IP时间列表
                     * @return IpTraceList IP时间列表
                     * 
                     */
                    std::vector<IpTimePair> GetIpTraceList() const;

                    /**
                     * 判断参数 IpTraceList 是否已赋值
                     * @return IpTraceList 是否已赋值
                     * 
                     */
                    bool IpTraceListHasBeenSet() const;

                private:

                    /**
                     * IP时间列表
                     */
                    std::vector<IpTimePair> m_ipTraceList;
                    bool m_ipTraceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_EXPORTIPTRACELOGRESPONSE_H_
