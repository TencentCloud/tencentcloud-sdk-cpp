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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBETRACECODEBYIDRESPONSE_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBETRACECODEBYIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/TraceCode.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * DescribeTraceCodeById返回参数结构体
                */
                class DescribeTraceCodeByIdResponse : public AbstractModel
                {
                public:
                    DescribeTraceCodeByIdResponse();
                    ~DescribeTraceCodeByIdResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取无
                     * @return TraceCode 无
                     * 
                     */
                    TraceCode GetTraceCode() const;

                    /**
                     * 判断参数 TraceCode 是否已赋值
                     * @return TraceCode 是否已赋值
                     * 
                     */
                    bool TraceCodeHasBeenSet() const;

                    /**
                     * 获取码路径，如level是2，则为 [1级, 2级]
                     * @return CodePath 码路径，如level是2，则为 [1级, 2级]
                     * 
                     */
                    std::vector<std::string> GetCodePath() const;

                    /**
                     * 判断参数 CodePath 是否已赋值
                     * @return CodePath 是否已赋值
                     * 
                     */
                    bool CodePathHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    TraceCode m_traceCode;
                    bool m_traceCodeHasBeenSet;

                    /**
                     * 码路径，如level是2，则为 [1级, 2级]
                     */
                    std::vector<std::string> m_codePath;
                    bool m_codePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBETRACECODEBYIDRESPONSE_H_
