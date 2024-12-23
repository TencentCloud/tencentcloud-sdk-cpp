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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DSPAINSTANCE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DSPAINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * Dspa实例信息
                */
                class DspaInstance : public AbstractModel
                {
                public:
                    DspaInstance();
                    ~DspaInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DSPA实例ID。
                     * @return DspaId DSPA实例ID。
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例ID。
                     * @param _dspaId DSPA实例ID。
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取DSPA实例名称。
                     * @return DspaName DSPA实例名称。
                     * 
                     */
                    std::string GetDspaName() const;

                    /**
                     * 设置DSPA实例名称。
                     * @param _dspaName DSPA实例名称。
                     * 
                     */
                    void SetDspaName(const std::string& _dspaName);

                    /**
                     * 判断参数 DspaName 是否已赋值
                     * @return DspaName 是否已赋值
                     * 
                     */
                    bool DspaNameHasBeenSet() const;

                    /**
                     * 获取DSPA实例描述信息。
                     * @return DspaDescription DSPA实例描述信息。
                     * 
                     */
                    std::string GetDspaDescription() const;

                    /**
                     * 设置DSPA实例描述信息。
                     * @param _dspaDescription DSPA实例描述信息。
                     * 
                     */
                    void SetDspaDescription(const std::string& _dspaDescription);

                    /**
                     * 判断参数 DspaDescription 是否已赋值
                     * @return DspaDescription 是否已赋值
                     * 
                     */
                    bool DspaDescriptionHasBeenSet() const;

                    /**
                     * 获取DSPA实例已授权的数据库实例数量。
                     * @return DBAuthCount DSPA实例已授权的数据库实例数量。
                     * 
                     */
                    uint64_t GetDBAuthCount() const;

                    /**
                     * 设置DSPA实例已授权的数据库实例数量。
                     * @param _dBAuthCount DSPA实例已授权的数据库实例数量。
                     * 
                     */
                    void SetDBAuthCount(const uint64_t& _dBAuthCount);

                    /**
                     * 判断参数 DBAuthCount 是否已赋值
                     * @return DBAuthCount 是否已赋值
                     * 
                     */
                    bool DBAuthCountHasBeenSet() const;

                    /**
                     * 获取DSPA实例已绑定的cos桶数量。
                     * @return CosBindCount DSPA实例已绑定的cos桶数量。
                     * 
                     */
                    uint64_t GetCosBindCount() const;

                    /**
                     * 设置DSPA实例已绑定的cos桶数量。
                     * @param _cosBindCount DSPA实例已绑定的cos桶数量。
                     * 
                     */
                    void SetCosBindCount(const uint64_t& _cosBindCount);

                    /**
                     * 判断参数 CosBindCount 是否已赋值
                     * @return CosBindCount 是否已赋值
                     * 
                     */
                    bool CosBindCountHasBeenSet() const;

                    /**
                     * 获取DSPA实例版本。
                     * @return InstanceVersion DSPA实例版本。
                     * 
                     */
                    std::string GetInstanceVersion() const;

                    /**
                     * 设置DSPA实例版本。
                     * @param _instanceVersion DSPA实例版本。
                     * 
                     */
                    void SetInstanceVersion(const std::string& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     * 
                     */
                    bool InstanceVersionHasBeenSet() const;

                    /**
                     * 获取DSPA实例状态。
                     * @return Status DSPA实例状态。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置DSPA实例状态。
                     * @param _status DSPA实例状态。
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
                     * 获取实例过期时间戳。
                     * @return ExpiredAt 实例过期时间戳。
                     * 
                     */
                    uint64_t GetExpiredAt() const;

                    /**
                     * 设置实例过期时间戳。
                     * @param _expiredAt 实例过期时间戳。
                     * 
                     */
                    void SetExpiredAt(const uint64_t& _expiredAt);

                    /**
                     * 判断参数 ExpiredAt 是否已赋值
                     * @return ExpiredAt 是否已赋值
                     * 
                     */
                    bool ExpiredAtHasBeenSet() const;

                    /**
                     * 获取账户APPID。
                     * @return AppId 账户APPID。
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置账户APPID。
                     * @param _appId 账户APPID。
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
                     * 获取体验版本信息。
                     * @return TrialVersion 体验版本信息。
                     * 
                     */
                    std::string GetTrialVersion() const;

                    /**
                     * 设置体验版本信息。
                     * @param _trialVersion 体验版本信息。
                     * 
                     */
                    void SetTrialVersion(const std::string& _trialVersion);

                    /**
                     * 判断参数 TrialVersion 是否已赋值
                     * @return TrialVersion 是否已赋值
                     * 
                     */
                    bool TrialVersionHasBeenSet() const;

                    /**
                     * 获取体验版本过期时间戳。
                     * @return TrialEndAt 体验版本过期时间戳。
                     * 
                     */
                    uint64_t GetTrialEndAt() const;

                    /**
                     * 设置体验版本过期时间戳。
                     * @param _trialEndAt 体验版本过期时间戳。
                     * 
                     */
                    void SetTrialEndAt(const uint64_t& _trialEndAt);

                    /**
                     * 判断参数 TrialEndAt 是否已赋值
                     * @return TrialEndAt 是否已赋值
                     * 
                     */
                    bool TrialEndAtHasBeenSet() const;

                    /**
                     * 获取DB已购配额。
                     * @return DbTotalQuota DB已购配额。
                     * 
                     */
                    int64_t GetDbTotalQuota() const;

                    /**
                     * 设置DB已购配额。
                     * @param _dbTotalQuota DB已购配额。
                     * 
                     */
                    void SetDbTotalQuota(const int64_t& _dbTotalQuota);

                    /**
                     * 判断参数 DbTotalQuota 是否已赋值
                     * @return DbTotalQuota 是否已赋值
                     * 
                     */
                    bool DbTotalQuotaHasBeenSet() const;

                    /**
                     * 获取COS已购配额。
                     * @return CosTotalQuota COS已购配额。
                     * 
                     */
                    int64_t GetCosTotalQuota() const;

                    /**
                     * 设置COS已购配额。
                     * @param _cosTotalQuota COS已购配额。
                     * 
                     */
                    void SetCosTotalQuota(const int64_t& _cosTotalQuota);

                    /**
                     * 判断参数 CosTotalQuota 是否已赋值
                     * @return CosTotalQuota 是否已赋值
                     * 
                     */
                    bool CosTotalQuotaHasBeenSet() const;

                    /**
                     * 获取COS配额单位，例如:TB。
                     * @return CosQuotaUnit COS配额单位，例如:TB。
                     * 
                     */
                    std::string GetCosQuotaUnit() const;

                    /**
                     * 设置COS配额单位，例如:TB。
                     * @param _cosQuotaUnit COS配额单位，例如:TB。
                     * 
                     */
                    void SetCosQuotaUnit(const std::string& _cosQuotaUnit);

                    /**
                     * 判断参数 CosQuotaUnit 是否已赋值
                     * @return CosQuotaUnit 是否已赋值
                     * 
                     */
                    bool CosQuotaUnitHasBeenSet() const;

                    /**
                     * 获取0: 默认状态(用户未设置)
1: 开启自动续费
2: 明确不自动续费
                     * @return RenewFlag 0: 默认状态(用户未设置)
1: 开启自动续费
2: 明确不自动续费
                     * 
                     */
                    uint64_t GetRenewFlag() const;

                    /**
                     * 设置0: 默认状态(用户未设置)
1: 开启自动续费
2: 明确不自动续费
                     * @param _renewFlag 0: 默认状态(用户未设置)
1: 开启自动续费
2: 明确不自动续费
                     * 
                     */
                    void SetRenewFlag(const uint64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取实例渠道
                     * @return Channel 实例渠道
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置实例渠道
                     * @param _channel 实例渠道
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取已授权的实例数量
                     * @return InsAuthCount 已授权的实例数量
                     * 
                     */
                    int64_t GetInsAuthCount() const;

                    /**
                     * 设置已授权的实例数量
                     * @param _insAuthCount 已授权的实例数量
                     * 
                     */
                    void SetInsAuthCount(const int64_t& _insAuthCount);

                    /**
                     * 判断参数 InsAuthCount 是否已赋值
                     * @return InsAuthCount 是否已赋值
                     * 
                     */
                    bool InsAuthCountHasBeenSet() const;

                    /**
                     * 获取已购买的实例数量
                     * @return InsTotalQuota 已购买的实例数量
                     * 
                     */
                    int64_t GetInsTotalQuota() const;

                    /**
                     * 设置已购买的实例数量
                     * @param _insTotalQuota 已购买的实例数量
                     * 
                     */
                    void SetInsTotalQuota(const int64_t& _insTotalQuota);

                    /**
                     * 判断参数 InsTotalQuota 是否已赋值
                     * @return InsTotalQuota 是否已赋值
                     * 
                     */
                    bool InsTotalQuotaHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID。
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * DSPA实例名称。
                     */
                    std::string m_dspaName;
                    bool m_dspaNameHasBeenSet;

                    /**
                     * DSPA实例描述信息。
                     */
                    std::string m_dspaDescription;
                    bool m_dspaDescriptionHasBeenSet;

                    /**
                     * DSPA实例已授权的数据库实例数量。
                     */
                    uint64_t m_dBAuthCount;
                    bool m_dBAuthCountHasBeenSet;

                    /**
                     * DSPA实例已绑定的cos桶数量。
                     */
                    uint64_t m_cosBindCount;
                    bool m_cosBindCountHasBeenSet;

                    /**
                     * DSPA实例版本。
                     */
                    std::string m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * DSPA实例状态。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例过期时间戳。
                     */
                    uint64_t m_expiredAt;
                    bool m_expiredAtHasBeenSet;

                    /**
                     * 账户APPID。
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 体验版本信息。
                     */
                    std::string m_trialVersion;
                    bool m_trialVersionHasBeenSet;

                    /**
                     * 体验版本过期时间戳。
                     */
                    uint64_t m_trialEndAt;
                    bool m_trialEndAtHasBeenSet;

                    /**
                     * DB已购配额。
                     */
                    int64_t m_dbTotalQuota;
                    bool m_dbTotalQuotaHasBeenSet;

                    /**
                     * COS已购配额。
                     */
                    int64_t m_cosTotalQuota;
                    bool m_cosTotalQuotaHasBeenSet;

                    /**
                     * COS配额单位，例如:TB。
                     */
                    std::string m_cosQuotaUnit;
                    bool m_cosQuotaUnitHasBeenSet;

                    /**
                     * 0: 默认状态(用户未设置)
1: 开启自动续费
2: 明确不自动续费
                     */
                    uint64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 实例渠道
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 已授权的实例数量
                     */
                    int64_t m_insAuthCount;
                    bool m_insAuthCountHasBeenSet;

                    /**
                     * 已购买的实例数量
                     */
                    int64_t m_insTotalQuota;
                    bool m_insTotalQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DSPAINSTANCE_H_
