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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_EBPFCOLLECTFILTERS_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_EBPFCOLLECTFILTERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/EBPFProcessNameFilter.h>
#include <tencentcloud/cls/v20201016/model/EBPFDestEndpointFilter.h>
#include <tencentcloud/cls/v20201016/model/EBPFDNSFilter.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * eBPF 三维过滤器集合
                */
                class EBPFCollectFilters : public AbstractModel
                {
                public:
                    EBPFCollectFilters();
                    ~EBPFCollectFilters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取进程名过滤
                     * @return ProcessName 进程名过滤
                     * 
                     */
                    EBPFProcessNameFilter GetProcessName() const;

                    /**
                     * 设置进程名过滤
                     * @param _processName 进程名过滤
                     * 
                     */
                    void SetProcessName(const EBPFProcessNameFilter& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取目的端点过滤
                     * @return DestEndpoint 目的端点过滤
                     * 
                     */
                    EBPFDestEndpointFilter GetDestEndpoint() const;

                    /**
                     * 设置目的端点过滤
                     * @param _destEndpoint 目的端点过滤
                     * 
                     */
                    void SetDestEndpoint(const EBPFDestEndpointFilter& _destEndpoint);

                    /**
                     * 判断参数 DestEndpoint 是否已赋值
                     * @return DestEndpoint 是否已赋值
                     * 
                     */
                    bool DestEndpointHasBeenSet() const;

                    /**
                     * 获取DNS 过滤
                     * @return DNS DNS 过滤
                     * 
                     */
                    EBPFDNSFilter GetDNS() const;

                    /**
                     * 设置DNS 过滤
                     * @param _dNS DNS 过滤
                     * 
                     */
                    void SetDNS(const EBPFDNSFilter& _dNS);

                    /**
                     * 判断参数 DNS 是否已赋值
                     * @return DNS 是否已赋值
                     * 
                     */
                    bool DNSHasBeenSet() const;

                private:

                    /**
                     * 进程名过滤
                     */
                    EBPFProcessNameFilter m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 目的端点过滤
                     */
                    EBPFDestEndpointFilter m_destEndpoint;
                    bool m_destEndpointHasBeenSet;

                    /**
                     * DNS 过滤
                     */
                    EBPFDNSFilter m_dNS;
                    bool m_dNSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_EBPFCOLLECTFILTERS_H_
