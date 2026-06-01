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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_CREATECUSTOMERREQUEST_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_CREATECUSTOMERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * CreateCustomer请求参数结构体
                */
                class CreateCustomerRequest : public AbstractModel
                {
                public:
                    CreateCustomerRequest();
                    ~CreateCustomerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>企业名称</p>
                     * @return Name <p>企业名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>企业名称</p>
                     * @param _name <p>企业名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

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
                     * 获取<p>百分比取值范围为30-100</p>
                     * @return Percent <p>百分比取值范围为30-100</p>
                     * 
                     */
                    int64_t GetPercent() const;

                    /**
                     * 设置<p>百分比取值范围为30-100</p>
                     * @param _percent <p>百分比取值范围为30-100</p>
                     * 
                     */
                    void SetPercent(const int64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取<p>周期测绘时间</p>
                     * @return ScanCron <p>周期测绘时间</p>
                     * 
                     */
                    std::string GetScanCron() const;

                    /**
                     * 设置<p>周期测绘时间</p>
                     * @param _scanCron <p>周期测绘时间</p>
                     * 
                     */
                    void SetScanCron(const std::string& _scanCron);

                    /**
                     * 判断参数 ScanCron 是否已赋值
                     * @return ScanCron 是否已赋值
                     * 
                     */
                    bool ScanCronHasBeenSet() const;

                    /**
                     * 获取<p>是否立即启动</p>
                     * @return IsScanNow <p>是否立即启动</p>
                     * 
                     */
                    bool GetIsScanNow() const;

                    /**
                     * 设置<p>是否立即启动</p>
                     * @param _isScanNow <p>是否立即启动</p>
                     * 
                     */
                    void SetIsScanNow(const bool& _isScanNow);

                    /**
                     * 判断参数 IsScanNow 是否已赋值
                     * @return IsScanNow 是否已赋值
                     * 
                     */
                    bool IsScanNowHasBeenSet() const;

                    /**
                     * 获取<p>是否启用周期测绘</p>
                     * @return EnableCron <p>是否启用周期测绘</p>
                     * 
                     */
                    bool GetEnableCron() const;

                    /**
                     * 设置<p>是否启用周期测绘</p>
                     * @param _enableCron <p>是否启用周期测绘</p>
                     * 
                     */
                    void SetEnableCron(const bool& _enableCron);

                    /**
                     * 判断参数 EnableCron 是否已赋值
                     * @return EnableCron 是否已赋值
                     * 
                     */
                    bool EnableCronHasBeenSet() const;

                    /**
                     * 获取<p>是否扫描子公司</p>
                     * @return EnableScanSubEnterprise <p>是否扫描子公司</p>
                     * 
                     */
                    bool GetEnableScanSubEnterprise() const;

                    /**
                     * 设置<p>是否扫描子公司</p>
                     * @param _enableScanSubEnterprise <p>是否扫描子公司</p>
                     * 
                     */
                    void SetEnableScanSubEnterprise(const bool& _enableScanSubEnterprise);

                    /**
                     * 判断参数 EnableScanSubEnterprise 是否已赋值
                     * @return EnableScanSubEnterprise 是否已赋值
                     * 
                     */
                    bool EnableScanSubEnterpriseHasBeenSet() const;

                    /**
                     * 获取<p>是否授权</p>
                     * @return EnableAuth <p>是否授权</p>
                     * 
                     */
                    bool GetEnableAuth() const;

                    /**
                     * 设置<p>是否授权</p>
                     * @param _enableAuth <p>是否授权</p>
                     * 
                     */
                    void SetEnableAuth(const bool& _enableAuth);

                    /**
                     * 判断参数 EnableAuth 是否已赋值
                     * @return EnableAuth 是否已赋值
                     * 
                     */
                    bool EnableAuthHasBeenSet() const;

                    /**
                     * 获取<p>授权开始时间</p>
                     * @return AuthStartAt <p>授权开始时间</p>
                     * 
                     */
                    std::string GetAuthStartAt() const;

                    /**
                     * 设置<p>授权开始时间</p>
                     * @param _authStartAt <p>授权开始时间</p>
                     * 
                     */
                    void SetAuthStartAt(const std::string& _authStartAt);

                    /**
                     * 判断参数 AuthStartAt 是否已赋值
                     * @return AuthStartAt 是否已赋值
                     * 
                     */
                    bool AuthStartAtHasBeenSet() const;

                    /**
                     * 获取<p>授权结束时间</p>
                     * @return AuthEndAt <p>授权结束时间</p>
                     * 
                     */
                    std::string GetAuthEndAt() const;

                    /**
                     * 设置<p>授权结束时间</p>
                     * @param _authEndAt <p>授权结束时间</p>
                     * 
                     */
                    void SetAuthEndAt(const std::string& _authEndAt);

                    /**
                     * 判断参数 AuthEndAt 是否已赋值
                     * @return AuthEndAt 是否已赋值
                     * 
                     */
                    bool AuthEndAtHasBeenSet() const;

                    /**
                     * 获取<p>授权文件id</p>
                     * @return AuthFile <p>授权文件id</p>
                     * 
                     */
                    std::string GetAuthFile() const;

                    /**
                     * 设置<p>授权文件id</p>
                     * @param _authFile <p>授权文件id</p>
                     * 
                     */
                    void SetAuthFile(const std::string& _authFile);

                    /**
                     * 判断参数 AuthFile 是否已赋值
                     * @return AuthFile 是否已赋值
                     * 
                     */
                    bool AuthFileHasBeenSet() const;

                    /**
                     * 获取<p>测绘时间配置项，采用json字符串格式</p>
                     * @return ScanTime <p>测绘时间配置项，采用json字符串格式</p>
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置<p>测绘时间配置项，采用json字符串格式</p>
                     * @param _scanTime <p>测绘时间配置项，采用json字符串格式</p>
                     * 
                     */
                    void SetScanTime(const std::string& _scanTime);

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>企业相关的关键字</p>
                     * @return Keywords <p>企业相关的关键字</p>
                     * 
                     */
                    std::string GetKeywords() const;

                    /**
                     * 设置<p>企业相关的关键字</p>
                     * @param _keywords <p>企业相关的关键字</p>
                     * 
                     */
                    void SetKeywords(const std::string& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取<p>图标</p>
                     * @return Icon <p>图标</p>
                     * 
                     */
                    std::string GetIcon() const;

                    /**
                     * 设置<p>图标</p>
                     * @param _icon <p>图标</p>
                     * 
                     */
                    void SetIcon(const std::string& _icon);

                    /**
                     * 判断参数 Icon 是否已赋值
                     * @return Icon 是否已赋值
                     * 
                     */
                    bool IconHasBeenSet() const;

                    /**
                     * 获取<p>并发设置</p>
                     * @return Qps <p>并发设置</p>
                     * 
                     */
                    int64_t GetQps() const;

                    /**
                     * 设置<p>并发设置</p>
                     * @param _qps <p>并发设置</p>
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
                     * 获取<p>限制子公司层级，-1表示不限制</p>
                     * @return SubCompanyLevel <p>限制子公司层级，-1表示不限制</p>
                     * 
                     */
                    int64_t GetSubCompanyLevel() const;

                    /**
                     * 设置<p>限制子公司层级，-1表示不限制</p>
                     * @param _subCompanyLevel <p>限制子公司层级，-1表示不限制</p>
                     * 
                     */
                    void SetSubCompanyLevel(const int64_t& _subCompanyLevel);

                    /**
                     * 判断参数 SubCompanyLevel 是否已赋值
                     * @return SubCompanyLevel 是否已赋值
                     * 
                     */
                    bool SubCompanyLevelHasBeenSet() const;

                    /**
                     * 获取<p>是否以企业名称为起点做完整扫描(包含手动上传),如只想扫描特定的某几个域名，则传false。</p>
                     * @return IsIncludeFullScan <p>是否以企业名称为起点做完整扫描(包含手动上传),如只想扫描特定的某几个域名，则传false。</p>
                     * 
                     */
                    bool GetIsIncludeFullScan() const;

                    /**
                     * 设置<p>是否以企业名称为起点做完整扫描(包含手动上传),如只想扫描特定的某几个域名，则传false。</p>
                     * @param _isIncludeFullScan <p>是否以企业名称为起点做完整扫描(包含手动上传),如只想扫描特定的某几个域名，则传false。</p>
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

                private:

                    /**
                     * <p>企业名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>资产收集、漏洞信息、弱口令、目录爆破、暗网泄露、Github泄露、文库网盘泄露、敏感信息泄露，其中资产收集必包含，多个用英文逗号隔离，例如：资产收集,漏洞信息</p>
                     */
                    std::string m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * <p>百分比取值范围为30-100</p>
                     */
                    int64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * <p>周期测绘时间</p>
                     */
                    std::string m_scanCron;
                    bool m_scanCronHasBeenSet;

                    /**
                     * <p>是否立即启动</p>
                     */
                    bool m_isScanNow;
                    bool m_isScanNowHasBeenSet;

                    /**
                     * <p>是否启用周期测绘</p>
                     */
                    bool m_enableCron;
                    bool m_enableCronHasBeenSet;

                    /**
                     * <p>是否扫描子公司</p>
                     */
                    bool m_enableScanSubEnterprise;
                    bool m_enableScanSubEnterpriseHasBeenSet;

                    /**
                     * <p>是否授权</p>
                     */
                    bool m_enableAuth;
                    bool m_enableAuthHasBeenSet;

                    /**
                     * <p>授权开始时间</p>
                     */
                    std::string m_authStartAt;
                    bool m_authStartAtHasBeenSet;

                    /**
                     * <p>授权结束时间</p>
                     */
                    std::string m_authEndAt;
                    bool m_authEndAtHasBeenSet;

                    /**
                     * <p>授权文件id</p>
                     */
                    std::string m_authFile;
                    bool m_authFileHasBeenSet;

                    /**
                     * <p>测绘时间配置项，采用json字符串格式</p>
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * <p>企业相关的关键字</p>
                     */
                    std::string m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * <p>图标</p>
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * <p>并发设置</p>
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * <p>限制子公司层级，-1表示不限制</p>
                     */
                    int64_t m_subCompanyLevel;
                    bool m_subCompanyLevelHasBeenSet;

                    /**
                     * <p>是否以企业名称为起点做完整扫描(包含手动上传),如只想扫描特定的某几个域名，则传false。</p>
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_CREATECUSTOMERREQUEST_H_
