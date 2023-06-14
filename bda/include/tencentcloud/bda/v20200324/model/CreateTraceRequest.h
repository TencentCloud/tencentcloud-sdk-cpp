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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_CREATETRACEREQUEST_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_CREATETRACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bda/v20200324/model/Trace.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * CreateTrace请求参数结构体
                */
                class CreateTraceRequest : public AbstractModel
                {
                public:
                    CreateTraceRequest();
                    ~CreateTraceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取人员ID。
                     * @return PersonId 人员ID。
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置人员ID。
                     * @param _personId 人员ID。
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取人体动作轨迹信息。
                     * @return Trace 人体动作轨迹信息。
                     * 
                     */
                    Trace GetTrace() const;

                    /**
                     * 设置人体动作轨迹信息。
                     * @param _trace 人体动作轨迹信息。
                     * 
                     */
                    void SetTrace(const Trace& _trace);

                    /**
                     * 判断参数 Trace 是否已赋值
                     * @return Trace 是否已赋值
                     * 
                     */
                    bool TraceHasBeenSet() const;

                private:

                    /**
                     * 人员ID。
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 人体动作轨迹信息。
                     */
                    Trace m_trace;
                    bool m_traceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_CREATETRACEREQUEST_H_
