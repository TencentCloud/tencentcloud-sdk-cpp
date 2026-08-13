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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDRSCANTASKHOSTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDRSCANTASKHOSTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 主机资产扫描详情项
                */
                class EDRScanTaskHostItem : public AbstractModel
                {
                public:
                    EDRScanTaskHostItem();
                    ~EDRScanTaskHostItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主机唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Quuid <p>主机唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置<p>主机唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quuid <p>主机唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取<p>主机名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostName <p>主机名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置<p>主机名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostName <p>主机名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取<p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId <p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId <p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>公网IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicIp <p>公网IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>公网IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicIp <p>公网IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取<p>内网IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateIp <p>内网IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置<p>内网IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateIp <p>内网IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取<p>操作系统</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OsType <p>操作系统</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOsType() const;

                    /**
                     * 设置<p>操作系统</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _osType <p>操作系统</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOsType(const std::string& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取<p>资产所属账号名称（后端富化）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountName <p>资产所属账号名称（后端富化）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>资产所属账号名称（后端富化）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountName <p>资产所属账号名称（后端富化）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取<p>资产所属账号AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId <p>资产所属账号AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>资产所属账号AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId <p>资产所属账号AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>云类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CloudType <p>云类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置<p>云类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cloudType <p>云类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCloudType(const int64_t& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取<p>扫描状态：WAIT/SCANNING/FINISHED/FAILED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>扫描状态：WAIT/SCANNING/FINISHED/FAILED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>扫描状态：WAIT/SCANNING/FINISHED/FAILED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>扫描状态：WAIT/SCANNING/FINISHED/FAILED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>风险数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskCount <p>风险数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 设置<p>风险数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskCount <p>风险数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskCount(const int64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取<p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailReason <p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置<p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failReason <p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取<p>解决方案</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FixSuggestion <p>解决方案</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFixSuggestion() const;

                    /**
                     * 设置<p>解决方案</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fixSuggestion <p>解决方案</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFixSuggestion(const std::string& _fixSuggestion);

                    /**
                     * 判断参数 FixSuggestion 是否已赋值
                     * @return FixSuggestion 是否已赋值
                     * 
                     */
                    bool FixSuggestionHasBeenSet() const;

                private:

                    /**
                     * <p>主机唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * <p>主机名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * <p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>公网IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>内网IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * <p>操作系统</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * <p>资产所属账号名称（后端富化）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>资产所属账号AppId</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>云类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * <p>扫描状态：WAIT/SCANNING/FINISHED/FAILED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>风险数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * <p>失败原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * <p>解决方案</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fixSuggestion;
                    bool m_fixSuggestionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDRSCANTASKHOSTITEM_H_
