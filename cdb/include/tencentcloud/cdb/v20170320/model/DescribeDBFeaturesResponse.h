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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBFEATURESRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBFEATURESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeDBFeatures返回参数结构体
                */
                class DescribeDBFeaturesResponse : public AbstractModel
                {
                public:
                    DescribeDBFeaturesResponse();
                    ~DescribeDBFeaturesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>是否支持数据库审计功能。</p>
                     * @return IsSupportAudit <p>是否支持数据库审计功能。</p>
                     * 
                     */
                    bool GetIsSupportAudit() const;

                    /**
                     * 判断参数 IsSupportAudit 是否已赋值
                     * @return IsSupportAudit 是否已赋值
                     * 
                     */
                    bool IsSupportAuditHasBeenSet() const;

                    /**
                     * 获取<p>开启审计是否需要升级内核版本。</p>
                     * @return AuditNeedUpgrade <p>开启审计是否需要升级内核版本。</p>
                     * 
                     */
                    bool GetAuditNeedUpgrade() const;

                    /**
                     * 判断参数 AuditNeedUpgrade 是否已赋值
                     * @return AuditNeedUpgrade 是否已赋值
                     * 
                     */
                    bool AuditNeedUpgradeHasBeenSet() const;

                    /**
                     * 获取<p>是否支持数据库加密功能。</p>
                     * @return IsSupportEncryption <p>是否支持数据库加密功能。</p>
                     * 
                     */
                    bool GetIsSupportEncryption() const;

                    /**
                     * 判断参数 IsSupportEncryption 是否已赋值
                     * @return IsSupportEncryption 是否已赋值
                     * 
                     */
                    bool IsSupportEncryptionHasBeenSet() const;

                    /**
                     * 获取<p>开启加密是否需要升级内核版本。</p>
                     * @return EncryptionNeedUpgrade <p>开启加密是否需要升级内核版本。</p>
                     * 
                     */
                    bool GetEncryptionNeedUpgrade() const;

                    /**
                     * 判断参数 EncryptionNeedUpgrade 是否已赋值
                     * @return EncryptionNeedUpgrade 是否已赋值
                     * 
                     */
                    bool EncryptionNeedUpgradeHasBeenSet() const;

                    /**
                     * 获取<p>是否为异地只读实例。</p>
                     * @return IsRemoteRo <p>是否为异地只读实例。</p>
                     * 
                     */
                    bool GetIsRemoteRo() const;

                    /**
                     * 判断参数 IsRemoteRo 是否已赋值
                     * @return IsRemoteRo 是否已赋值
                     * 
                     */
                    bool IsRemoteRoHasBeenSet() const;

                    /**
                     * 获取<p>主实例所在地域。<br>说明：此参数可能返回空值，您可忽略此出参返回值。如需获取实例所在地域详情，您可调用 <a href="https://cloud.tencent.com/document/product/236/15872">查询实例列表</a> 接口查询。</p>
                     * @return MasterRegion <p>主实例所在地域。<br>说明：此参数可能返回空值，您可忽略此出参返回值。如需获取实例所在地域详情，您可调用 <a href="https://cloud.tencent.com/document/product/236/15872">查询实例列表</a> 接口查询。</p>
                     * 
                     */
                    std::string GetMasterRegion() const;

                    /**
                     * 判断参数 MasterRegion 是否已赋值
                     * @return MasterRegion 是否已赋值
                     * 
                     */
                    bool MasterRegionHasBeenSet() const;

                    /**
                     * 获取<p>是否支持小版本升级。</p>
                     * @return IsSupportUpdateSubVersion <p>是否支持小版本升级。</p>
                     * 
                     */
                    bool GetIsSupportUpdateSubVersion() const;

                    /**
                     * 判断参数 IsSupportUpdateSubVersion 是否已赋值
                     * @return IsSupportUpdateSubVersion 是否已赋值
                     * 
                     */
                    bool IsSupportUpdateSubVersionHasBeenSet() const;

                    /**
                     * 获取<p>当前内核版本。</p>
                     * @return CurrentSubVersion <p>当前内核版本。</p>
                     * 
                     */
                    std::string GetCurrentSubVersion() const;

                    /**
                     * 判断参数 CurrentSubVersion 是否已赋值
                     * @return CurrentSubVersion 是否已赋值
                     * 
                     */
                    bool CurrentSubVersionHasBeenSet() const;

                    /**
                     * 获取<p>可供升级的内核版本。</p>
                     * @return TargetSubVersion <p>可供升级的内核版本。</p>
                     * 
                     */
                    std::string GetTargetSubVersion() const;

                    /**
                     * 判断参数 TargetSubVersion 是否已赋值
                     * @return TargetSubVersion 是否已赋值
                     * 
                     */
                    bool TargetSubVersionHasBeenSet() const;

                private:

                    /**
                     * <p>是否支持数据库审计功能。</p>
                     */
                    bool m_isSupportAudit;
                    bool m_isSupportAuditHasBeenSet;

                    /**
                     * <p>开启审计是否需要升级内核版本。</p>
                     */
                    bool m_auditNeedUpgrade;
                    bool m_auditNeedUpgradeHasBeenSet;

                    /**
                     * <p>是否支持数据库加密功能。</p>
                     */
                    bool m_isSupportEncryption;
                    bool m_isSupportEncryptionHasBeenSet;

                    /**
                     * <p>开启加密是否需要升级内核版本。</p>
                     */
                    bool m_encryptionNeedUpgrade;
                    bool m_encryptionNeedUpgradeHasBeenSet;

                    /**
                     * <p>是否为异地只读实例。</p>
                     */
                    bool m_isRemoteRo;
                    bool m_isRemoteRoHasBeenSet;

                    /**
                     * <p>主实例所在地域。<br>说明：此参数可能返回空值，您可忽略此出参返回值。如需获取实例所在地域详情，您可调用 <a href="https://cloud.tencent.com/document/product/236/15872">查询实例列表</a> 接口查询。</p>
                     */
                    std::string m_masterRegion;
                    bool m_masterRegionHasBeenSet;

                    /**
                     * <p>是否支持小版本升级。</p>
                     */
                    bool m_isSupportUpdateSubVersion;
                    bool m_isSupportUpdateSubVersionHasBeenSet;

                    /**
                     * <p>当前内核版本。</p>
                     */
                    std::string m_currentSubVersion;
                    bool m_currentSubVersionHasBeenSet;

                    /**
                     * <p>可供升级的内核版本。</p>
                     */
                    std::string m_targetSubVersion;
                    bool m_targetSubVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBFEATURESRESPONSE_H_
