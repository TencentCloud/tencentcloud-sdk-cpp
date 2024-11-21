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
                     * 获取是否支持数据库审计功能。
                     * @return IsSupportAudit 是否支持数据库审计功能。
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
                     * 获取开启审计是否需要升级内核版本。
                     * @return AuditNeedUpgrade 开启审计是否需要升级内核版本。
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
                     * 获取是否支持数据库加密功能。
                     * @return IsSupportEncryption 是否支持数据库加密功能。
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
                     * 获取开启加密是否需要升级内核版本。
                     * @return EncryptionNeedUpgrade 开启加密是否需要升级内核版本。
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
                     * 获取是否为异地只读实例。
                     * @return IsRemoteRo 是否为异地只读实例。
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
                     * 获取主实例所在地域。
说明：此参数可能返回空值，您可忽略此出参返回值。如需获取实例所在地域详情，您可调用 [查询实例列表](https://cloud.tencent.com/document/product/236/15872) 接口查询。
                     * @return MasterRegion 主实例所在地域。
说明：此参数可能返回空值，您可忽略此出参返回值。如需获取实例所在地域详情，您可调用 [查询实例列表](https://cloud.tencent.com/document/product/236/15872) 接口查询。
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
                     * 获取是否支持小版本升级。
                     * @return IsSupportUpdateSubVersion 是否支持小版本升级。
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
                     * 获取当前内核版本。
                     * @return CurrentSubVersion 当前内核版本。
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
                     * 获取可供升级的内核版本。
                     * @return TargetSubVersion 可供升级的内核版本。
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
                     * 是否支持数据库审计功能。
                     */
                    bool m_isSupportAudit;
                    bool m_isSupportAuditHasBeenSet;

                    /**
                     * 开启审计是否需要升级内核版本。
                     */
                    bool m_auditNeedUpgrade;
                    bool m_auditNeedUpgradeHasBeenSet;

                    /**
                     * 是否支持数据库加密功能。
                     */
                    bool m_isSupportEncryption;
                    bool m_isSupportEncryptionHasBeenSet;

                    /**
                     * 开启加密是否需要升级内核版本。
                     */
                    bool m_encryptionNeedUpgrade;
                    bool m_encryptionNeedUpgradeHasBeenSet;

                    /**
                     * 是否为异地只读实例。
                     */
                    bool m_isRemoteRo;
                    bool m_isRemoteRoHasBeenSet;

                    /**
                     * 主实例所在地域。
说明：此参数可能返回空值，您可忽略此出参返回值。如需获取实例所在地域详情，您可调用 [查询实例列表](https://cloud.tencent.com/document/product/236/15872) 接口查询。
                     */
                    std::string m_masterRegion;
                    bool m_masterRegionHasBeenSet;

                    /**
                     * 是否支持小版本升级。
                     */
                    bool m_isSupportUpdateSubVersion;
                    bool m_isSupportUpdateSubVersionHasBeenSet;

                    /**
                     * 当前内核版本。
                     */
                    std::string m_currentSubVersion;
                    bool m_currentSubVersionHasBeenSet;

                    /**
                     * 可供升级的内核版本。
                     */
                    std::string m_targetSubVersion;
                    bool m_targetSubVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBFEATURESRESPONSE_H_
