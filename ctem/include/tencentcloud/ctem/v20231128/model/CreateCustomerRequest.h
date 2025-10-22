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
                     * 获取企业名称
                     * @return Name 企业名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置企业名称
                     * @param _name 企业名称
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
                     * 获取资产收集、漏洞信息、弱口令、目录爆破、暗网泄露、Github泄露、文库网盘泄露、敏感信息泄露，其中资产收集必包含，多个用英文逗号隔离，例如：资产收集,漏洞信息
                     * @return ScanType 资产收集、漏洞信息、弱口令、目录爆破、暗网泄露、Github泄露、文库网盘泄露、敏感信息泄露，其中资产收集必包含，多个用英文逗号隔离，例如：资产收集,漏洞信息
                     * 
                     */
                    std::string GetScanType() const;

                    /**
                     * 设置资产收集、漏洞信息、弱口令、目录爆破、暗网泄露、Github泄露、文库网盘泄露、敏感信息泄露，其中资产收集必包含，多个用英文逗号隔离，例如：资产收集,漏洞信息
                     * @param _scanType 资产收集、漏洞信息、弱口令、目录爆破、暗网泄露、Github泄露、文库网盘泄露、敏感信息泄露，其中资产收集必包含，多个用英文逗号隔离，例如：资产收集,漏洞信息
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
                     * 获取百分比取值范围为30-100
                     * @return Percent 百分比取值范围为30-100
                     * 
                     */
                    int64_t GetPercent() const;

                    /**
                     * 设置百分比取值范围为30-100
                     * @param _percent 百分比取值范围为30-100
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
                     * 获取周期测绘时间
                     * @return ScanCron 周期测绘时间
                     * 
                     */
                    std::string GetScanCron() const;

                    /**
                     * 设置周期测绘时间
                     * @param _scanCron 周期测绘时间
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
                     * 获取是否立即启动
                     * @return IsScanNow 是否立即启动
                     * 
                     */
                    bool GetIsScanNow() const;

                    /**
                     * 设置是否立即启动
                     * @param _isScanNow 是否立即启动
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
                     * 获取是否启用周期测绘
                     * @return EnableCron 是否启用周期测绘
                     * 
                     */
                    bool GetEnableCron() const;

                    /**
                     * 设置是否启用周期测绘
                     * @param _enableCron 是否启用周期测绘
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
                     * 获取是否扫描子公司
                     * @return EnableScanSubEnterprise 是否扫描子公司
                     * 
                     */
                    bool GetEnableScanSubEnterprise() const;

                    /**
                     * 设置是否扫描子公司
                     * @param _enableScanSubEnterprise 是否扫描子公司
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
                     * 获取是否授权
                     * @return EnableAuth 是否授权
                     * 
                     */
                    bool GetEnableAuth() const;

                    /**
                     * 设置是否授权
                     * @param _enableAuth 是否授权
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
                     * 获取授权开始时间
                     * @return AuthStartAt 授权开始时间
                     * 
                     */
                    std::string GetAuthStartAt() const;

                    /**
                     * 设置授权开始时间
                     * @param _authStartAt 授权开始时间
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
                     * 获取授权结束时间
                     * @return AuthEndAt 授权结束时间
                     * 
                     */
                    std::string GetAuthEndAt() const;

                    /**
                     * 设置授权结束时间
                     * @param _authEndAt 授权结束时间
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
                     * 获取授权文件id
                     * @return AuthFile 授权文件id
                     * 
                     */
                    std::string GetAuthFile() const;

                    /**
                     * 设置授权文件id
                     * @param _authFile 授权文件id
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
                     * 获取测绘时间配置项，采用json字符串格式
                     * @return ScanTime 测绘时间配置项，采用json字符串格式
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置测绘时间配置项，采用json字符串格式
                     * @param _scanTime 测绘时间配置项，采用json字符串格式
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
                     * 获取企业相关的关键字
                     * @return Keywords 企业相关的关键字
                     * 
                     */
                    std::string GetKeywords() const;

                    /**
                     * 设置企业相关的关键字
                     * @param _keywords 企业相关的关键字
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
                     * 获取图标
                     * @return Icon 图标
                     * 
                     */
                    std::string GetIcon() const;

                    /**
                     * 设置图标
                     * @param _icon 图标
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
                     * 获取并发设置
                     * @return Qps 并发设置
                     * 
                     */
                    int64_t GetQps() const;

                    /**
                     * 设置并发设置
                     * @param _qps 并发设置
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
                     * 获取限制子公司层级，-1表示不限制
                     * @return SubCompanyLevel 限制子公司层级，-1表示不限制
                     * 
                     */
                    int64_t GetSubCompanyLevel() const;

                    /**
                     * 设置限制子公司层级，-1表示不限制
                     * @param _subCompanyLevel 限制子公司层级，-1表示不限制
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
                     * 获取是否以企业名称为起点做完整扫描(包含手动上传),如只想扫描特定的某几个域名，则传false。
                     * @return IsIncludeFullScan 是否以企业名称为起点做完整扫描(包含手动上传),如只想扫描特定的某几个域名，则传false。
                     * 
                     */
                    bool GetIsIncludeFullScan() const;

                    /**
                     * 设置是否以企业名称为起点做完整扫描(包含手动上传),如只想扫描特定的某几个域名，则传false。
                     * @param _isIncludeFullScan 是否以企业名称为起点做完整扫描(包含手动上传),如只想扫描特定的某几个域名，则传false。
                     * 
                     */
                    void SetIsIncludeFullScan(const bool& _isIncludeFullScan);

                    /**
                     * 判断参数 IsIncludeFullScan 是否已赋值
                     * @return IsIncludeFullScan 是否已赋值
                     * 
                     */
                    bool IsIncludeFullScanHasBeenSet() const;

                private:

                    /**
                     * 企业名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 资产收集、漏洞信息、弱口令、目录爆破、暗网泄露、Github泄露、文库网盘泄露、敏感信息泄露，其中资产收集必包含，多个用英文逗号隔离，例如：资产收集,漏洞信息
                     */
                    std::string m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * 百分比取值范围为30-100
                     */
                    int64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 周期测绘时间
                     */
                    std::string m_scanCron;
                    bool m_scanCronHasBeenSet;

                    /**
                     * 是否立即启动
                     */
                    bool m_isScanNow;
                    bool m_isScanNowHasBeenSet;

                    /**
                     * 是否启用周期测绘
                     */
                    bool m_enableCron;
                    bool m_enableCronHasBeenSet;

                    /**
                     * 是否扫描子公司
                     */
                    bool m_enableScanSubEnterprise;
                    bool m_enableScanSubEnterpriseHasBeenSet;

                    /**
                     * 是否授权
                     */
                    bool m_enableAuth;
                    bool m_enableAuthHasBeenSet;

                    /**
                     * 授权开始时间
                     */
                    std::string m_authStartAt;
                    bool m_authStartAtHasBeenSet;

                    /**
                     * 授权结束时间
                     */
                    std::string m_authEndAt;
                    bool m_authEndAtHasBeenSet;

                    /**
                     * 授权文件id
                     */
                    std::string m_authFile;
                    bool m_authFileHasBeenSet;

                    /**
                     * 测绘时间配置项，采用json字符串格式
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * 企业相关的关键字
                     */
                    std::string m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 图标
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * 并发设置
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * 限制子公司层级，-1表示不限制
                     */
                    int64_t m_subCompanyLevel;
                    bool m_subCompanyLevelHasBeenSet;

                    /**
                     * 是否以企业名称为起点做完整扫描(包含手动上传),如只想扫描特定的某几个域名，则传false。
                     */
                    bool m_isIncludeFullScan;
                    bool m_isIncludeFullScanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_CREATECUSTOMERREQUEST_H_
