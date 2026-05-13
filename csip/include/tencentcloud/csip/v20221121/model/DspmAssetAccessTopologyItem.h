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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETACCESSTOPOLOGYITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETACCESSTOPOLOGYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmFrequency.h>
#include <tencentcloud/csip/v20221121/model/DspmUinUser.h>
#include <tencentcloud/csip/v20221121/model/DspmPersonUser.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dspm资产访问拓扑
                */
                class DspmAssetAccessTopologyItem : public AbstractModel
                {
                public:
                    DspmAssetAccessTopologyItem();
                    ~DspmAssetAccessTopologyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产id
                     * @return AssetId 资产id
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置资产id
                     * @param _assetId 资产id
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取资产类型
                     * @return AssetType 资产类型
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型
                     * @param _assetType 资产类型
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取资产名
                     * @return AssetName 资产名
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置资产名
                     * @param _assetName 资产名
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取资产账号
                     * @return AssetAccount 资产账号
                     * 
                     */
                    std::string GetAssetAccount() const;

                    /**
                     * 设置资产账号
                     * @param _assetAccount 资产账号
                     * 
                     */
                    void SetAssetAccount(const std::string& _assetAccount);

                    /**
                     * 判断参数 AssetAccount 是否已赋值
                     * @return AssetAccount 是否已赋值
                     * 
                     */
                    bool AssetAccountHasBeenSet() const;

                    /**
                     * 获取主机地址
                     * @return Host 主机地址
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置主机地址
                     * @param _host 主机地址
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取账号类型
                     * @return AccountType 账号类型
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 设置账号类型
                     * @param _accountType 账号类型
                     * 
                     */
                    void SetAccountType(const int64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取资产地址
                     * @return AssetIp 资产地址
                     * 
                     */
                    std::string GetAssetIp() const;

                    /**
                     * 设置资产地址
                     * @param _assetIp 资产地址
                     * 
                     */
                    void SetAssetIp(const std::string& _assetIp);

                    /**
                     * 判断参数 AssetIp 是否已赋值
                     * @return AssetIp 是否已赋值
                     * 
                     */
                    bool AssetIpHasBeenSet() const;

                    /**
                     * 获取访问来源ip地址
                     * @return SourceIp 访问来源ip地址
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置访问来源ip地址
                     * @param _sourceIp 访问来源ip地址
                     * 
                     */
                    void SetSourceIp(const std::string& _sourceIp);

                    /**
                     * 判断参数 SourceIp 是否已赋值
                     * @return SourceIp 是否已赋值
                     * 
                     */
                    bool SourceIpHasBeenSet() const;

                    /**
                     * 获取访问来源ip类型
                     * @return SourceIpType 访问来源ip类型
                     * 
                     */
                    std::string GetSourceIpType() const;

                    /**
                     * 设置访问来源ip类型
                     * @param _sourceIpType 访问来源ip类型
                     * 
                     */
                    void SetSourceIpType(const std::string& _sourceIpType);

                    /**
                     * 判断参数 SourceIpType 是否已赋值
                     * @return SourceIpType 是否已赋值
                     * 
                     */
                    bool SourceIpTypeHasBeenSet() const;

                    /**
                     * 获取访问频率。次/天
                     * @return AccessFrequency 访问频率。次/天
                     * 
                     */
                    DspmFrequency GetAccessFrequency() const;

                    /**
                     * 设置访问频率。次/天
                     * @param _accessFrequency 访问频率。次/天
                     * 
                     */
                    void SetAccessFrequency(const DspmFrequency& _accessFrequency);

                    /**
                     * 判断参数 AccessFrequency 是否已赋值
                     * @return AccessFrequency 是否已赋值
                     * 
                     */
                    bool AccessFrequencyHasBeenSet() const;

                    /**
                     * 获取执行SQL频率。条/小时。
                     * @return ExecSQLFrequency 执行SQL频率。条/小时。
                     * 
                     */
                    DspmFrequency GetExecSQLFrequency() const;

                    /**
                     * 设置执行SQL频率。条/小时。
                     * @param _execSQLFrequency 执行SQL频率。条/小时。
                     * 
                     */
                    void SetExecSQLFrequency(const DspmFrequency& _execSQLFrequency);

                    /**
                     * 判断参数 ExecSQLFrequency 是否已赋值
                     * @return ExecSQLFrequency 是否已赋值
                     * 
                     */
                    bool ExecSQLFrequencyHasBeenSet() const;

                    /**
                     * 获取访问起始时间
                     * @return AccessBeginTime 访问起始时间
                     * 
                     */
                    std::string GetAccessBeginTime() const;

                    /**
                     * 设置访问起始时间
                     * @param _accessBeginTime 访问起始时间
                     * 
                     */
                    void SetAccessBeginTime(const std::string& _accessBeginTime);

                    /**
                     * 判断参数 AccessBeginTime 是否已赋值
                     * @return AccessBeginTime 是否已赋值
                     * 
                     */
                    bool AccessBeginTimeHasBeenSet() const;

                    /**
                     * 获取访问结束时间
                     * @return AccessEndTime 访问结束时间
                     * 
                     */
                    std::string GetAccessEndTime() const;

                    /**
                     * 设置访问结束时间
                     * @param _accessEndTime 访问结束时间
                     * 
                     */
                    void SetAccessEndTime(const std::string& _accessEndTime);

                    /**
                     * 判断参数 AccessEndTime 是否已赋值
                     * @return AccessEndTime 是否已赋值
                     * 
                     */
                    bool AccessEndTimeHasBeenSet() const;

                    /**
                     * 获取账号风险数
                     * @return AccountRisk 账号风险数
                     * 
                     */
                    int64_t GetAccountRisk() const;

                    /**
                     * 设置账号风险数
                     * @param _accountRisk 账号风险数
                     * 
                     */
                    void SetAccountRisk(const int64_t& _accountRisk);

                    /**
                     * 判断参数 AccountRisk 是否已赋值
                     * @return AccountRisk 是否已赋值
                     * 
                     */
                    bool AccountRiskHasBeenSet() const;

                    /**
                     * 获取资产风险数
                     * @return AssetRisk 资产风险数
                     * 
                     */
                    int64_t GetAssetRisk() const;

                    /**
                     * 设置资产风险数
                     * @param _assetRisk 资产风险数
                     * 
                     */
                    void SetAssetRisk(const int64_t& _assetRisk);

                    /**
                     * 判断参数 AssetRisk 是否已赋值
                     * @return AssetRisk 是否已赋值
                     * 
                     */
                    bool AssetRiskHasBeenSet() const;

                    /**
                     * 获取所属地域
                     * @return Region 所属地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置所属地域
                     * @param _region 所属地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取身份类型。非身份账号为null。0-未定义 2-长期身份 3-临时身份
                     * @return IdentifyType 身份类型。非身份账号为null。0-未定义 2-长期身份 3-临时身份
                     * 
                     */
                    int64_t GetIdentifyType() const;

                    /**
                     * 设置身份类型。非身份账号为null。0-未定义 2-长期身份 3-临时身份
                     * @param _identifyType 身份类型。非身份账号为null。0-未定义 2-长期身份 3-临时身份
                     * 
                     */
                    void SetIdentifyType(const int64_t& _identifyType);

                    /**
                     * 判断参数 IdentifyType 是否已赋值
                     * @return IdentifyType 是否已赋值
                     * 
                     */
                    bool IdentifyTypeHasBeenSet() const;

                    /**
                     * 获取所属云账号uin用户。
                     * @return OwnerUin 所属云账号uin用户。
                     * 
                     */
                    DspmUinUser GetOwnerUin() const;

                    /**
                     * 设置所属云账号uin用户。
                     * @param _ownerUin 所属云账号uin用户。
                     * 
                     */
                    void SetOwnerUin(const DspmUinUser& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取所属个人用户信息。
                     * @return Person 所属个人用户信息。
                     * 
                     */
                    DspmPersonUser GetPerson() const;

                    /**
                     * 设置所属个人用户信息。
                     * @param _person 所属个人用户信息。
                     * 
                     */
                    void SetPerson(const DspmPersonUser& _person);

                    /**
                     * 判断参数 Person 是否已赋值
                     * @return Person 是否已赋值
                     * 
                     */
                    bool PersonHasBeenSet() const;

                    /**
                     * 获取账号告警数
                     * @return AccountAlarm 账号告警数
                     * 
                     */
                    int64_t GetAccountAlarm() const;

                    /**
                     * 设置账号告警数
                     * @param _accountAlarm 账号告警数
                     * 
                     */
                    void SetAccountAlarm(const int64_t& _accountAlarm);

                    /**
                     * 判断参数 AccountAlarm 是否已赋值
                     * @return AccountAlarm 是否已赋值
                     * 
                     */
                    bool AccountAlarmHasBeenSet() const;

                    /**
                     * 获取资产告警数
                     * @return AssetAlarm 资产告警数
                     * 
                     */
                    int64_t GetAssetAlarm() const;

                    /**
                     * 设置资产告警数
                     * @param _assetAlarm 资产告警数
                     * 
                     */
                    void SetAssetAlarm(const int64_t& _assetAlarm);

                    /**
                     * 判断参数 AssetAlarm 是否已赋值
                     * @return AssetAlarm 是否已赋值
                     * 
                     */
                    bool AssetAlarmHasBeenSet() const;

                private:

                    /**
                     * 资产id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 资产类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 资产名
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 资产账号
                     */
                    std::string m_assetAccount;
                    bool m_assetAccountHasBeenSet;

                    /**
                     * 主机地址
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 账号类型
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 资产地址
                     */
                    std::string m_assetIp;
                    bool m_assetIpHasBeenSet;

                    /**
                     * 访问来源ip地址
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * 访问来源ip类型
                     */
                    std::string m_sourceIpType;
                    bool m_sourceIpTypeHasBeenSet;

                    /**
                     * 访问频率。次/天
                     */
                    DspmFrequency m_accessFrequency;
                    bool m_accessFrequencyHasBeenSet;

                    /**
                     * 执行SQL频率。条/小时。
                     */
                    DspmFrequency m_execSQLFrequency;
                    bool m_execSQLFrequencyHasBeenSet;

                    /**
                     * 访问起始时间
                     */
                    std::string m_accessBeginTime;
                    bool m_accessBeginTimeHasBeenSet;

                    /**
                     * 访问结束时间
                     */
                    std::string m_accessEndTime;
                    bool m_accessEndTimeHasBeenSet;

                    /**
                     * 账号风险数
                     */
                    int64_t m_accountRisk;
                    bool m_accountRiskHasBeenSet;

                    /**
                     * 资产风险数
                     */
                    int64_t m_assetRisk;
                    bool m_assetRiskHasBeenSet;

                    /**
                     * 所属地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 身份类型。非身份账号为null。0-未定义 2-长期身份 3-临时身份
                     */
                    int64_t m_identifyType;
                    bool m_identifyTypeHasBeenSet;

                    /**
                     * 所属云账号uin用户。
                     */
                    DspmUinUser m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 所属个人用户信息。
                     */
                    DspmPersonUser m_person;
                    bool m_personHasBeenSet;

                    /**
                     * 账号告警数
                     */
                    int64_t m_accountAlarm;
                    bool m_accountAlarmHasBeenSet;

                    /**
                     * 资产告警数
                     */
                    int64_t m_assetAlarm;
                    bool m_assetAlarmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETACCESSTOPOLOGYITEM_H_
