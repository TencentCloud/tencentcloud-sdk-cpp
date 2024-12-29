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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ABILITY_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ABILITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 集群支持的功能
                */
                class Ability : public AbstractModel
                {
                public:
                    Ability();
                    ~Ability() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否支持从可用区
                     * @return IsSupportSlaveZone 是否支持从可用区
                     * 
                     */
                    std::string GetIsSupportSlaveZone() const;

                    /**
                     * 设置是否支持从可用区
                     * @param _isSupportSlaveZone 是否支持从可用区
                     * 
                     */
                    void SetIsSupportSlaveZone(const std::string& _isSupportSlaveZone);

                    /**
                     * 判断参数 IsSupportSlaveZone 是否已赋值
                     * @return IsSupportSlaveZone 是否已赋值
                     * 
                     */
                    bool IsSupportSlaveZoneHasBeenSet() const;

                    /**
                     * 获取不支持从可用区的原因
                     * @return NonsupportSlaveZoneReason 不支持从可用区的原因
                     * 
                     */
                    std::string GetNonsupportSlaveZoneReason() const;

                    /**
                     * 设置不支持从可用区的原因
                     * @param _nonsupportSlaveZoneReason 不支持从可用区的原因
                     * 
                     */
                    void SetNonsupportSlaveZoneReason(const std::string& _nonsupportSlaveZoneReason);

                    /**
                     * 判断参数 NonsupportSlaveZoneReason 是否已赋值
                     * @return NonsupportSlaveZoneReason 是否已赋值
                     * 
                     */
                    bool NonsupportSlaveZoneReasonHasBeenSet() const;

                    /**
                     * 获取是否支持RO实例
                     * @return IsSupportRo 是否支持RO实例
                     * 
                     */
                    std::string GetIsSupportRo() const;

                    /**
                     * 设置是否支持RO实例
                     * @param _isSupportRo 是否支持RO实例
                     * 
                     */
                    void SetIsSupportRo(const std::string& _isSupportRo);

                    /**
                     * 判断参数 IsSupportRo 是否已赋值
                     * @return IsSupportRo 是否已赋值
                     * 
                     */
                    bool IsSupportRoHasBeenSet() const;

                    /**
                     * 获取不支持RO实例的原因
                     * @return NonsupportRoReason 不支持RO实例的原因
                     * 
                     */
                    std::string GetNonsupportRoReason() const;

                    /**
                     * 设置不支持RO实例的原因
                     * @param _nonsupportRoReason 不支持RO实例的原因
                     * 
                     */
                    void SetNonsupportRoReason(const std::string& _nonsupportRoReason);

                    /**
                     * 判断参数 NonsupportRoReason 是否已赋值
                     * @return NonsupportRoReason 是否已赋值
                     * 
                     */
                    bool NonsupportRoReasonHasBeenSet() const;

                    /**
                     * 获取是否支持手动发起快照备份
                     * @return IsSupportManualSnapshot 是否支持手动发起快照备份
                     * 
                     */
                    std::string GetIsSupportManualSnapshot() const;

                    /**
                     * 设置是否支持手动发起快照备份
                     * @param _isSupportManualSnapshot 是否支持手动发起快照备份
                     * 
                     */
                    void SetIsSupportManualSnapshot(const std::string& _isSupportManualSnapshot);

                    /**
                     * 判断参数 IsSupportManualSnapshot 是否已赋值
                     * @return IsSupportManualSnapshot 是否已赋值
                     * 
                     */
                    bool IsSupportManualSnapshotHasBeenSet() const;

                    /**
                     * 获取是否支持透明数据加密
                     * @return IsSupportTransparentDataEncryption 是否支持透明数据加密
                     * 
                     */
                    std::string GetIsSupportTransparentDataEncryption() const;

                    /**
                     * 设置是否支持透明数据加密
                     * @param _isSupportTransparentDataEncryption 是否支持透明数据加密
                     * 
                     */
                    void SetIsSupportTransparentDataEncryption(const std::string& _isSupportTransparentDataEncryption);

                    /**
                     * 判断参数 IsSupportTransparentDataEncryption 是否已赋值
                     * @return IsSupportTransparentDataEncryption 是否已赋值
                     * 
                     */
                    bool IsSupportTransparentDataEncryptionHasBeenSet() const;

                    /**
                     * 获取不支持透明数据加密原因
                     * @return NoSupportTransparentDataEncryptionReason 不支持透明数据加密原因
                     * 
                     */
                    std::string GetNoSupportTransparentDataEncryptionReason() const;

                    /**
                     * 设置不支持透明数据加密原因
                     * @param _noSupportTransparentDataEncryptionReason 不支持透明数据加密原因
                     * 
                     */
                    void SetNoSupportTransparentDataEncryptionReason(const std::string& _noSupportTransparentDataEncryptionReason);

                    /**
                     * 判断参数 NoSupportTransparentDataEncryptionReason 是否已赋值
                     * @return NoSupportTransparentDataEncryptionReason 是否已赋值
                     * 
                     */
                    bool NoSupportTransparentDataEncryptionReasonHasBeenSet() const;

                    /**
                     * 获取是否支持手动发起逻辑备份
                     * @return IsSupportManualLogic 是否支持手动发起逻辑备份
                     * 
                     */
                    std::string GetIsSupportManualLogic() const;

                    /**
                     * 设置是否支持手动发起逻辑备份
                     * @param _isSupportManualLogic 是否支持手动发起逻辑备份
                     * 
                     */
                    void SetIsSupportManualLogic(const std::string& _isSupportManualLogic);

                    /**
                     * 判断参数 IsSupportManualLogic 是否已赋值
                     * @return IsSupportManualLogic 是否已赋值
                     * 
                     */
                    bool IsSupportManualLogicHasBeenSet() const;

                private:

                    /**
                     * 是否支持从可用区
                     */
                    std::string m_isSupportSlaveZone;
                    bool m_isSupportSlaveZoneHasBeenSet;

                    /**
                     * 不支持从可用区的原因
                     */
                    std::string m_nonsupportSlaveZoneReason;
                    bool m_nonsupportSlaveZoneReasonHasBeenSet;

                    /**
                     * 是否支持RO实例
                     */
                    std::string m_isSupportRo;
                    bool m_isSupportRoHasBeenSet;

                    /**
                     * 不支持RO实例的原因
                     */
                    std::string m_nonsupportRoReason;
                    bool m_nonsupportRoReasonHasBeenSet;

                    /**
                     * 是否支持手动发起快照备份
                     */
                    std::string m_isSupportManualSnapshot;
                    bool m_isSupportManualSnapshotHasBeenSet;

                    /**
                     * 是否支持透明数据加密
                     */
                    std::string m_isSupportTransparentDataEncryption;
                    bool m_isSupportTransparentDataEncryptionHasBeenSet;

                    /**
                     * 不支持透明数据加密原因
                     */
                    std::string m_noSupportTransparentDataEncryptionReason;
                    bool m_noSupportTransparentDataEncryptionReasonHasBeenSet;

                    /**
                     * 是否支持手动发起逻辑备份
                     */
                    std::string m_isSupportManualLogic;
                    bool m_isSupportManualLogicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ABILITY_H_
