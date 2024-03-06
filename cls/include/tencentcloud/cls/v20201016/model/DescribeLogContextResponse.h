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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGCONTEXTRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGCONTEXTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/LogContextInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeLogContext返回参数结构体
                */
                class DescribeLogContextResponse : public AbstractModel
                {
                public:
                    DescribeLogContextResponse();
                    ~DescribeLogContextResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取日志上下文信息集合
                     * @return LogContextInfos 日志上下文信息集合
                     * 
                     */
                    std::vector<LogContextInfo> GetLogContextInfos() const;

                    /**
                     * 判断参数 LogContextInfos 是否已赋值
                     * @return LogContextInfos 是否已赋值
                     * 
                     */
                    bool LogContextInfosHasBeenSet() const;

                    /**
                     * 获取上文日志是否已经返回完成（当PrevOver为false，表示有上文日志还未全部返回）。
                     * @return PrevOver 上文日志是否已经返回完成（当PrevOver为false，表示有上文日志还未全部返回）。
                     * 
                     */
                    bool GetPrevOver() const;

                    /**
                     * 判断参数 PrevOver 是否已赋值
                     * @return PrevOver 是否已赋值
                     * 
                     */
                    bool PrevOverHasBeenSet() const;

                    /**
                     * 获取下文日志是否已经返回完成（当NextOver为false，表示有下文日志还未全部返回）。
                     * @return NextOver 下文日志是否已经返回完成（当NextOver为false，表示有下文日志还未全部返回）。
                     * 
                     */
                    bool GetNextOver() const;

                    /**
                     * 判断参数 NextOver 是否已赋值
                     * @return NextOver 是否已赋值
                     * 
                     */
                    bool NextOverHasBeenSet() const;

                private:

                    /**
                     * 日志上下文信息集合
                     */
                    std::vector<LogContextInfo> m_logContextInfos;
                    bool m_logContextInfosHasBeenSet;

                    /**
                     * 上文日志是否已经返回完成（当PrevOver为false，表示有上文日志还未全部返回）。
                     */
                    bool m_prevOver;
                    bool m_prevOverHasBeenSet;

                    /**
                     * 下文日志是否已经返回完成（当NextOver为false，表示有下文日志还未全部返回）。
                     */
                    bool m_nextOver;
                    bool m_nextOverHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGCONTEXTRESPONSE_H_
