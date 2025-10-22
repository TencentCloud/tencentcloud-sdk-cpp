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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_CUSTOMER_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_CUSTOMER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 企业详情
                */
                class Customer : public AbstractModel
                {
                public:
                    Customer();
                    ~Customer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取企业ID
                     * @return Id 企业ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置企业ID
                     * @param _id 企业ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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
                     * 获取股权占比
                     * @return Percent 股权占比
                     * 
                     */
                    int64_t GetPercent() const;

                    /**
                     * 设置股权占比
                     * @param _percent 股权占比
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
                     * 获取创建账号
                     * @return Creator 创建账号
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建账号
                     * @param _creator 创建账号
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取腾讯云客户AppId
                     * @return AppId 腾讯云客户AppId
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置腾讯云客户AppId
                     * @param _appId 腾讯云客户AppId
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取腾讯云客户Uin
                     * @return Uin 腾讯云客户Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置腾讯云客户Uin
                     * @param _uin 腾讯云客户Uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateAt 创建时间
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置创建时间
                     * @param _createAt 创建时间
                     * 
                     */
                    void SetCreateAt(const std::string& _createAt);

                    /**
                     * 判断参数 CreateAt 是否已赋值
                     * @return CreateAt 是否已赋值
                     * 
                     */
                    bool CreateAtHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateAt 更新时间
                     * 
                     */
                    std::string GetUpdateAt() const;

                    /**
                     * 设置更新时间
                     * @param _updateAt 更新时间
                     * 
                     */
                    void SetUpdateAt(const std::string& _updateAt);

                    /**
                     * 判断参数 UpdateAt 是否已赋值
                     * @return UpdateAt 是否已赋值
                     * 
                     */
                    bool UpdateAtHasBeenSet() const;

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
                     * 获取测绘时间配置项
                     * @return ScanTime 测绘时间配置项
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置测绘时间配置项
                     * @param _scanTime 测绘时间配置项
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
                     * 获取关键字
                     * @return Keywords 关键字
                     * 
                     */
                    std::string GetKeywords() const;

                    /**
                     * 设置关键字
                     * @param _keywords 关键字
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
                     * 获取Qps设置，10-500，默认100
                     * @return Qps Qps设置，10-500，默认100
                     * 
                     */
                    int64_t GetQps() const;

                    /**
                     * 设置Qps设置，10-500，默认100
                     * @param _qps Qps设置，10-500，默认100
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
                     * 获取子公司拓展层次
                     * @return SubCompanyLevel 子公司拓展层次
                     * 
                     */
                    int64_t GetSubCompanyLevel() const;

                    /**
                     * 设置子公司拓展层次
                     * @param _subCompanyLevel 子公司拓展层次
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
                     * 获取是否包含完整扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsIncludeFullScan 是否包含完整扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsIncludeFullScan() const;

                    /**
                     * 设置是否包含完整扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isIncludeFullScan 是否包含完整扫描
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否识别集团成员
                     * @return EnableGroupMemberDiscovered 是否识别集团成员
                     * 
                     */
                    bool GetEnableGroupMemberDiscovered() const;

                    /**
                     * 设置是否识别集团成员
                     * @param _enableGroupMemberDiscovered 是否识别集团成员
                     * 
                     */
                    void SetEnableGroupMemberDiscovered(const bool& _enableGroupMemberDiscovered);

                    /**
                     * 判断参数 EnableGroupMemberDiscovered 是否已赋值
                     * @return EnableGroupMemberDiscovered 是否已赋值
                     * 
                     */
                    bool EnableGroupMemberDiscoveredHasBeenSet() const;

                private:

                    /**
                     * 企业ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 企业名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 股权占比
                     */
                    int64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 资产收集、漏洞信息、弱口令、目录爆破、暗网泄露、Github泄露、文库网盘泄露、敏感信息泄露，其中资产收集必包含，多个用英文逗号隔离，例如：资产收集,漏洞信息
                     */
                    std::string m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * 创建账号
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 腾讯云客户AppId
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 腾讯云客户Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateAt;
                    bool m_updateAtHasBeenSet;

                    /**
                     * 周期测绘时间
                     */
                    std::string m_scanCron;
                    bool m_scanCronHasBeenSet;

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
                     * 测绘时间配置项
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * 图标
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * 关键字
                     */
                    std::string m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * Qps设置，10-500，默认100
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * 子公司拓展层次
                     */
                    int64_t m_subCompanyLevel;
                    bool m_subCompanyLevelHasBeenSet;

                    /**
                     * 是否包含完整扫描
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isIncludeFullScan;
                    bool m_isIncludeFullScanHasBeenSet;

                    /**
                     * 是否识别集团成员
                     */
                    bool m_enableGroupMemberDiscovered;
                    bool m_enableGroupMemberDiscoveredHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_CUSTOMER_H_
