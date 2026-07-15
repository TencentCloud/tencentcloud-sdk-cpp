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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_CREATEJOBRECORDREQUEST_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_CREATEJOBRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctem/v20231128/model/ScanPriorityReq.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * CreateJobRecord请求参数结构体
                */
                class CreateJobRecordRequest : public AbstractModel
                {
                public:
                    CreateJobRecordRequest();
                    ~CreateJobRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>企业ID</p>
                     * @return CustomerId <p>企业ID</p>
                     * 
                     */
                    int64_t GetCustomerId() const;

                    /**
                     * 设置<p>企业ID</p>
                     * @param _customerId <p>企业ID</p>
                     * 
                     */
                    void SetCustomerId(const int64_t& _customerId);

                    /**
                     * 判断参数 CustomerId 是否已赋值
                     * @return CustomerId 是否已赋值
                     * 
                     */
                    bool CustomerIdHasBeenSet() const;

                    /**
                     * 获取<p>任务类型：即时任务</p>
                     * @return TaskType <p>任务类型：即时任务</p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>任务类型：即时任务</p>
                     * @param _taskType <p>任务类型：即时任务</p>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>资产收集、漏洞信息、弱口令、目录爆破、暗网泄露、Github泄露、文库网盘泄露、敏感信息泄露，其中资产收集必包含，多个用英文逗号隔离，例如：资产收集,漏洞信息</p>
                     * @return ScanType <p>资产收集、漏洞信息、弱口令、目录爆破、暗网泄露、Github泄露、文库网盘泄露、敏感信息泄露，其中资产收集必包含，多个用英文逗号隔离，例如：资产收集,漏洞信息</p>
                     * 
                     */
                    std::string GetScanType() const;

                    /**
                     * 设置<p>资产收集、漏洞信息、弱口令、目录爆破、暗网泄露、Github泄露、文库网盘泄露、敏感信息泄露，其中资产收集必包含，多个用英文逗号隔离，例如：资产收集,漏洞信息</p>
                     * @param _scanType <p>资产收集、漏洞信息、弱口令、目录爆破、暗网泄露、Github泄露、文库网盘泄露、敏感信息泄露，其中资产收集必包含，多个用英文逗号隔离，例如：资产收集,漏洞信息</p>
                     * 
                     */
                    void SetScanType(const std::string& _scanType);

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                    /**
                     * 获取<p>qps设置</p>
                     * @return Qps <p>qps设置</p>
                     * 
                     */
                    int64_t GetQps() const;

                    /**
                     * 设置<p>qps设置</p>
                     * @param _qps <p>qps设置</p>
                     * 
                     */
                    void SetQps(const int64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取<p>是否包含完整扫描</p>
                     * @return IsIncludeFullScan <p>是否包含完整扫描</p>
                     * 
                     */
                    bool GetIsIncludeFullScan() const;

                    /**
                     * 设置<p>是否包含完整扫描</p>
                     * @param _isIncludeFullScan <p>是否包含完整扫描</p>
                     * 
                     */
                    void SetIsIncludeFullScan(const bool& _isIncludeFullScan);

                    /**
                     * 判断参数 IsIncludeFullScan 是否已赋值
                     * @return IsIncludeFullScan 是否已赋值
                     * 
                     */
                    bool IsIncludeFullScanHasBeenSet() const;

                    /**
                     * 获取<p>端口扫描 QPS，默认 100，下限 10，保守值 200，上限 5000</p><p>默认值：100</p>
                     * @return PortScanQps <p>端口扫描 QPS，默认 100，下限 10，保守值 200，上限 5000</p><p>默认值：100</p>
                     * 
                     */
                    int64_t GetPortScanQps() const;

                    /**
                     * 设置<p>端口扫描 QPS，默认 100，下限 10，保守值 200，上限 5000</p><p>默认值：100</p>
                     * @param _portScanQps <p>端口扫描 QPS，默认 100，下限 10，保守值 200，上限 5000</p><p>默认值：100</p>
                     * 
                     */
                    void SetPortScanQps(const int64_t& _portScanQps);

                    /**
                     * 判断参数 PortScanQps 是否已赋值
                     * @return PortScanQps 是否已赋值
                     * 
                     */
                    bool PortScanQpsHasBeenSet() const;

                    /**
                     * 获取<p>单 IP 任务并发数，默认 1，下限 1，保守值 3，上限 10</p><p>默认值：1</p>
                     * @return SingleIPTaskLimit <p>单 IP 任务并发数，默认 1，下限 1，保守值 3，上限 10</p><p>默认值：1</p>
                     * 
                     */
                    int64_t GetSingleIPTaskLimit() const;

                    /**
                     * 设置<p>单 IP 任务并发数，默认 1，下限 1，保守值 3，上限 10</p><p>默认值：1</p>
                     * @param _singleIPTaskLimit <p>单 IP 任务并发数，默认 1，下限 1，保守值 3，上限 10</p><p>默认值：1</p>
                     * 
                     */
                    void SetSingleIPTaskLimit(const int64_t& _singleIPTaskLimit);

                    /**
                     * 判断参数 SingleIPTaskLimit 是否已赋值
                     * @return SingleIPTaskLimit 是否已赋值
                     * 
                     */
                    bool SingleIPTaskLimitHasBeenSet() const;

                    /**
                     * 获取<p>任一速率超过保守值时必须为 true，否则参数错误</p>
                     * @return HighRiskAck <p>任一速率超过保守值时必须为 true，否则参数错误</p>
                     * 
                     */
                    bool GetHighRiskAck() const;

                    /**
                     * 设置<p>任一速率超过保守值时必须为 true，否则参数错误</p>
                     * @param _highRiskAck <p>任一速率超过保守值时必须为 true，否则参数错误</p>
                     * 
                     */
                    void SetHighRiskAck(const bool& _highRiskAck);

                    /**
                     * 判断参数 HighRiskAck 是否已赋值
                     * @return HighRiskAck 是否已赋值
                     * 
                     */
                    bool HighRiskAckHasBeenSet() const;

                    /**
                     * 获取<p>知情同意勾选清单，用于审计回放</p>
                     * @return ScanRateAckChecklist <p>知情同意勾选清单，用于审计回放</p>
                     * 
                     */
                    std::vector<std::string> GetScanRateAckChecklist() const;

                    /**
                     * 设置<p>知情同意勾选清单，用于审计回放</p>
                     * @param _scanRateAckChecklist <p>知情同意勾选清单，用于审计回放</p>
                     * 
                     */
                    void SetScanRateAckChecklist(const std::vector<std::string>& _scanRateAckChecklist);

                    /**
                     * 判断参数 ScanRateAckChecklist 是否已赋值
                     * @return ScanRateAckChecklist 是否已赋值
                     * 
                     */
                    bool ScanRateAckChecklistHasBeenSet() const;

                    /**
                     * 获取<p>扫描优先级配置</p>
                     * @return ScanPriority <p>扫描优先级配置</p>
                     * 
                     */
                    ScanPriorityReq GetScanPriority() const;

                    /**
                     * 设置<p>扫描优先级配置</p>
                     * @param _scanPriority <p>扫描优先级配置</p>
                     * 
                     */
                    void SetScanPriority(const ScanPriorityReq& _scanPriority);

                    /**
                     * 判断参数 ScanPriority 是否已赋值
                     * @return ScanPriority 是否已赋值
                     * 
                     */
                    bool ScanPriorityHasBeenSet() const;

                private:

                    /**
                     * <p>企业ID</p>
                     */
                    int64_t m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * <p>任务类型：即时任务</p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>资产收集、漏洞信息、弱口令、目录爆破、暗网泄露、Github泄露、文库网盘泄露、敏感信息泄露，其中资产收集必包含，多个用英文逗号隔离，例如：资产收集,漏洞信息</p>
                     */
                    std::string m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * <p>qps设置</p>
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * <p>是否包含完整扫描</p>
                     */
                    bool m_isIncludeFullScan;
                    bool m_isIncludeFullScanHasBeenSet;

                    /**
                     * <p>端口扫描 QPS，默认 100，下限 10，保守值 200，上限 5000</p><p>默认值：100</p>
                     */
                    int64_t m_portScanQps;
                    bool m_portScanQpsHasBeenSet;

                    /**
                     * <p>单 IP 任务并发数，默认 1，下限 1，保守值 3，上限 10</p><p>默认值：1</p>
                     */
                    int64_t m_singleIPTaskLimit;
                    bool m_singleIPTaskLimitHasBeenSet;

                    /**
                     * <p>任一速率超过保守值时必须为 true，否则参数错误</p>
                     */
                    bool m_highRiskAck;
                    bool m_highRiskAckHasBeenSet;

                    /**
                     * <p>知情同意勾选清单，用于审计回放</p>
                     */
                    std::vector<std::string> m_scanRateAckChecklist;
                    bool m_scanRateAckChecklistHasBeenSet;

                    /**
                     * <p>扫描优先级配置</p>
                     */
                    ScanPriorityReq m_scanPriority;
                    bool m_scanPriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_CREATEJOBRECORDREQUEST_H_
