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
                     * 获取<p>企业ID</p>
                     * @return Id <p>企业ID</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>企业ID</p>
                     * @param _id <p>企业ID</p>
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
                     * 获取<p>股权占比</p>
                     * @return Percent <p>股权占比</p>
                     * 
                     */
                    int64_t GetPercent() const;

                    /**
                     * 设置<p>股权占比</p>
                     * @param _percent <p>股权占比</p>
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
                     * 获取<p>创建账号</p>
                     * @return Creator <p>创建账号</p>
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>创建账号</p>
                     * @param _creator <p>创建账号</p>
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
                     * 获取<p>腾讯云客户AppId</p>
                     * @return AppId <p>腾讯云客户AppId</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>腾讯云客户AppId</p>
                     * @param _appId <p>腾讯云客户AppId</p>
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
                     * 获取<p>腾讯云客户Uin</p>
                     * @return Uin <p>腾讯云客户Uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>腾讯云客户Uin</p>
                     * @param _uin <p>腾讯云客户Uin</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateAt <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createAt <p>创建时间</p>
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
                     * 获取<p>更新时间</p>
                     * @return UpdateAt <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateAt() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateAt <p>更新时间</p>
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
                     * 获取<p>测绘时间配置项</p>
                     * @return ScanTime <p>测绘时间配置项</p>
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置<p>测绘时间配置项</p>
                     * @param _scanTime <p>测绘时间配置项</p>
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
                     * 获取<p>关键字</p>
                     * @return Keywords <p>关键字</p>
                     * 
                     */
                    std::string GetKeywords() const;

                    /**
                     * 设置<p>关键字</p>
                     * @param _keywords <p>关键字</p>
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
                     * 获取<p>Qps设置，10-500，默认100</p>
                     * @return Qps <p>Qps设置，10-500，默认100</p>
                     * 
                     */
                    int64_t GetQps() const;

                    /**
                     * 设置<p>Qps设置，10-500，默认100</p>
                     * @param _qps <p>Qps设置，10-500，默认100</p>
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
                     * 获取<p>子公司拓展层次</p>
                     * @return SubCompanyLevel <p>子公司拓展层次</p>
                     * 
                     */
                    int64_t GetSubCompanyLevel() const;

                    /**
                     * 设置<p>子公司拓展层次</p>
                     * @param _subCompanyLevel <p>子公司拓展层次</p>
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
                     * 获取<p>是否包含完整扫描</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsIncludeFullScan <p>是否包含完整扫描</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsIncludeFullScan() const;

                    /**
                     * 设置<p>是否包含完整扫描</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isIncludeFullScan <p>是否包含完整扫描</p>
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
                     * 获取<p>是否识别集团成员</p>
                     * @return EnableGroupMemberDiscovered <p>是否识别集团成员</p>
                     * 
                     */
                    bool GetEnableGroupMemberDiscovered() const;

                    /**
                     * 设置<p>是否识别集团成员</p>
                     * @param _enableGroupMemberDiscovered <p>是否识别集团成员</p>
                     * 
                     */
                    void SetEnableGroupMemberDiscovered(const bool& _enableGroupMemberDiscovered);

                    /**
                     * 判断参数 EnableGroupMemberDiscovered 是否已赋值
                     * @return EnableGroupMemberDiscovered 是否已赋值
                     * 
                     */
                    bool EnableGroupMemberDiscoveredHasBeenSet() const;

                    /**
                     * 获取<p>单 IP 任务并发数，默认 1，下限 1，保守值 3，上限 10</p>
                     * @return SingleIPTaskLimit <p>单 IP 任务并发数，默认 1，下限 1，保守值 3，上限 10</p>
                     * 
                     */
                    int64_t GetSingleIPTaskLimit() const;

                    /**
                     * 设置<p>单 IP 任务并发数，默认 1，下限 1，保守值 3，上限 10</p>
                     * @param _singleIPTaskLimit <p>单 IP 任务并发数，默认 1，下限 1，保守值 3，上限 10</p>
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
                     * 获取<p>端口扫描 QPS，默认 100，下限 10，保守值 200，上限 5000</p>
                     * @return PortScanQps <p>端口扫描 QPS，默认 100，下限 10，保守值 200，上限 5000</p>
                     * 
                     */
                    int64_t GetPortScanQps() const;

                    /**
                     * 设置<p>端口扫描 QPS，默认 100，下限 10，保守值 200，上限 5000</p>
                     * @param _portScanQps <p>端口扫描 QPS，默认 100，下限 10，保守值 200，上限 5000</p>
                     * 
                     */
                    void SetPortScanQps(const int64_t& _portScanQps);

                    /**
                     * 判断参数 PortScanQps 是否已赋值
                     * @return PortScanQps 是否已赋值
                     * 
                     */
                    bool PortScanQpsHasBeenSet() const;

                private:

                    /**
                     * <p>企业ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>企业名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>股权占比</p>
                     */
                    int64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * <p>资产收集、漏洞信息、弱口令、目录爆破、暗网泄露、Github泄露、文库网盘泄露、敏感信息泄露，其中资产收集必包含，多个用英文逗号隔离，例如：资产收集,漏洞信息</p>
                     */
                    std::string m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * <p>创建账号</p>
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>腾讯云客户AppId</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>腾讯云客户Uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateAt;
                    bool m_updateAtHasBeenSet;

                    /**
                     * <p>周期测绘时间</p>
                     */
                    std::string m_scanCron;
                    bool m_scanCronHasBeenSet;

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
                     * <p>测绘时间配置项</p>
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * <p>图标</p>
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * <p>关键字</p>
                     */
                    std::string m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * <p>Qps设置，10-500，默认100</p>
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * <p>子公司拓展层次</p>
                     */
                    int64_t m_subCompanyLevel;
                    bool m_subCompanyLevelHasBeenSet;

                    /**
                     * <p>是否包含完整扫描</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isIncludeFullScan;
                    bool m_isIncludeFullScanHasBeenSet;

                    /**
                     * <p>是否识别集团成员</p>
                     */
                    bool m_enableGroupMemberDiscovered;
                    bool m_enableGroupMemberDiscoveredHasBeenSet;

                    /**
                     * <p>单 IP 任务并发数，默认 1，下限 1，保守值 3，上限 10</p>
                     */
                    int64_t m_singleIPTaskLimit;
                    bool m_singleIPTaskLimitHasBeenSet;

                    /**
                     * <p>端口扫描 QPS，默认 100，下限 10，保守值 200，上限 5000</p>
                     */
                    int64_t m_portScanQps;
                    bool m_portScanQpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_CUSTOMER_H_
