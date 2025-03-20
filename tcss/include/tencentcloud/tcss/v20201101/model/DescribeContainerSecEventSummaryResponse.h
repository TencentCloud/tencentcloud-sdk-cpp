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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECONTAINERSECEVENTSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECONTAINERSECEVENTSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeContainerSecEventSummary返回参数结构体
                */
                class DescribeContainerSecEventSummaryResponse : public AbstractModel
                {
                public:
                    DescribeContainerSecEventSummaryResponse();
                    ~DescribeContainerSecEventSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取未处理逃逸事件
                     * @return UnhandledEscapeCnt 未处理逃逸事件
                     * 
                     */
                    uint64_t GetUnhandledEscapeCnt() const;

                    /**
                     * 判断参数 UnhandledEscapeCnt 是否已赋值
                     * @return UnhandledEscapeCnt 是否已赋值
                     * 
                     */
                    bool UnhandledEscapeCntHasBeenSet() const;

                    /**
                     * 获取未处理反弹shell事件
                     * @return UnhandledReverseShellCnt 未处理反弹shell事件
                     * 
                     */
                    uint64_t GetUnhandledReverseShellCnt() const;

                    /**
                     * 判断参数 UnhandledReverseShellCnt 是否已赋值
                     * @return UnhandledReverseShellCnt 是否已赋值
                     * 
                     */
                    bool UnhandledReverseShellCntHasBeenSet() const;

                    /**
                     * 获取未处理高危系统调用
                     * @return UnhandledRiskSyscallCnt 未处理高危系统调用
                     * 
                     */
                    uint64_t GetUnhandledRiskSyscallCnt() const;

                    /**
                     * 判断参数 UnhandledRiskSyscallCnt 是否已赋值
                     * @return UnhandledRiskSyscallCnt 是否已赋值
                     * 
                     */
                    bool UnhandledRiskSyscallCntHasBeenSet() const;

                    /**
                     * 获取未处理异常进程
                     * @return UnhandledAbnormalProcessCnt 未处理异常进程
                     * 
                     */
                    uint64_t GetUnhandledAbnormalProcessCnt() const;

                    /**
                     * 判断参数 UnhandledAbnormalProcessCnt 是否已赋值
                     * @return UnhandledAbnormalProcessCnt 是否已赋值
                     * 
                     */
                    bool UnhandledAbnormalProcessCntHasBeenSet() const;

                    /**
                     * 获取未处理文件篡改
                     * @return UnhandledFileCnt 未处理文件篡改
                     * 
                     */
                    uint64_t GetUnhandledFileCnt() const;

                    /**
                     * 判断参数 UnhandledFileCnt 是否已赋值
                     * @return UnhandledFileCnt 是否已赋值
                     * 
                     */
                    bool UnhandledFileCntHasBeenSet() const;

                    /**
                     * 获取未处理木马事件
                     * @return UnhandledVirusEventCnt 未处理木马事件
                     * 
                     */
                    uint64_t GetUnhandledVirusEventCnt() const;

                    /**
                     * 判断参数 UnhandledVirusEventCnt 是否已赋值
                     * @return UnhandledVirusEventCnt 是否已赋值
                     * 
                     */
                    bool UnhandledVirusEventCntHasBeenSet() const;

                    /**
                     * 获取未处理恶意外连事件
                     * @return UnhandledMaliciousConnectionEventCnt 未处理恶意外连事件
                     * 
                     */
                    uint64_t GetUnhandledMaliciousConnectionEventCnt() const;

                    /**
                     * 判断参数 UnhandledMaliciousConnectionEventCnt 是否已赋值
                     * @return UnhandledMaliciousConnectionEventCnt 是否已赋值
                     * 
                     */
                    bool UnhandledMaliciousConnectionEventCntHasBeenSet() const;

                    /**
                     * 获取未处理k8sApi事件
                     * @return UnhandledK8sApiEventCnt 未处理k8sApi事件
                     * 
                     */
                    uint64_t GetUnhandledK8sApiEventCnt() const;

                    /**
                     * 判断参数 UnhandledK8sApiEventCnt 是否已赋值
                     * @return UnhandledK8sApiEventCnt 是否已赋值
                     * 
                     */
                    bool UnhandledK8sApiEventCntHasBeenSet() const;

                private:

                    /**
                     * 未处理逃逸事件
                     */
                    uint64_t m_unhandledEscapeCnt;
                    bool m_unhandledEscapeCntHasBeenSet;

                    /**
                     * 未处理反弹shell事件
                     */
                    uint64_t m_unhandledReverseShellCnt;
                    bool m_unhandledReverseShellCntHasBeenSet;

                    /**
                     * 未处理高危系统调用
                     */
                    uint64_t m_unhandledRiskSyscallCnt;
                    bool m_unhandledRiskSyscallCntHasBeenSet;

                    /**
                     * 未处理异常进程
                     */
                    uint64_t m_unhandledAbnormalProcessCnt;
                    bool m_unhandledAbnormalProcessCntHasBeenSet;

                    /**
                     * 未处理文件篡改
                     */
                    uint64_t m_unhandledFileCnt;
                    bool m_unhandledFileCntHasBeenSet;

                    /**
                     * 未处理木马事件
                     */
                    uint64_t m_unhandledVirusEventCnt;
                    bool m_unhandledVirusEventCntHasBeenSet;

                    /**
                     * 未处理恶意外连事件
                     */
                    uint64_t m_unhandledMaliciousConnectionEventCnt;
                    bool m_unhandledMaliciousConnectionEventCntHasBeenSet;

                    /**
                     * 未处理k8sApi事件
                     */
                    uint64_t m_unhandledK8sApiEventCnt;
                    bool m_unhandledK8sApiEventCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECONTAINERSECEVENTSUMMARYRESPONSE_H_
