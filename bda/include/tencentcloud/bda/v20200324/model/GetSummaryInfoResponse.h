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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_GETSUMMARYINFORESPONSE_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_GETSUMMARYINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * GetSummaryInfo返回参数结构体
                */
                class GetSummaryInfoResponse : public AbstractModel
                {
                public:
                    GetSummaryInfoResponse();
                    ~GetSummaryInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取人体库总数量。
                     * @return GroupCount 人体库总数量。
                     * 
                     */
                    uint64_t GetGroupCount() const;

                    /**
                     * 判断参数 GroupCount 是否已赋值
                     * @return GroupCount 是否已赋值
                     * 
                     */
                    bool GroupCountHasBeenSet() const;

                    /**
                     * 获取人员总数量
                     * @return PersonCount 人员总数量
                     * 
                     */
                    uint64_t GetPersonCount() const;

                    /**
                     * 判断参数 PersonCount 是否已赋值
                     * @return PersonCount 是否已赋值
                     * 
                     */
                    bool PersonCountHasBeenSet() const;

                    /**
                     * 获取人员轨迹总数量
                     * @return TraceCount 人员轨迹总数量
                     * 
                     */
                    uint64_t GetTraceCount() const;

                    /**
                     * 判断参数 TraceCount 是否已赋值
                     * @return TraceCount 是否已赋值
                     * 
                     */
                    bool TraceCountHasBeenSet() const;

                private:

                    /**
                     * 人体库总数量。
                     */
                    uint64_t m_groupCount;
                    bool m_groupCountHasBeenSet;

                    /**
                     * 人员总数量
                     */
                    uint64_t m_personCount;
                    bool m_personCountHasBeenSet;

                    /**
                     * 人员轨迹总数量
                     */
                    uint64_t m_traceCount;
                    bool m_traceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_GETSUMMARYINFORESPONSE_H_
