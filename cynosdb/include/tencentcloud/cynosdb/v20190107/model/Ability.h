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
                     * 获取<p>是否支持从可用区</p>
                     * @return IsSupportSlaveZone <p>是否支持从可用区</p>
                     * 
                     */
                    std::string GetIsSupportSlaveZone() const;

                    /**
                     * 设置<p>是否支持从可用区</p>
                     * @param _isSupportSlaveZone <p>是否支持从可用区</p>
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
                     * 获取<p>不支持从可用区的原因</p>
                     * @return NonsupportSlaveZoneReason <p>不支持从可用区的原因</p>
                     * 
                     */
                    std::string GetNonsupportSlaveZoneReason() const;

                    /**
                     * 设置<p>不支持从可用区的原因</p>
                     * @param _nonsupportSlaveZoneReason <p>不支持从可用区的原因</p>
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
                     * 获取<p>是否支持RO实例</p>
                     * @return IsSupportRo <p>是否支持RO实例</p>
                     * 
                     */
                    std::string GetIsSupportRo() const;

                    /**
                     * 设置<p>是否支持RO实例</p>
                     * @param _isSupportRo <p>是否支持RO实例</p>
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
                     * 获取<p>不支持RO实例的原因</p>
                     * @return NonsupportRoReason <p>不支持RO实例的原因</p>
                     * 
                     */
                    std::string GetNonsupportRoReason() const;

                    /**
                     * 设置<p>不支持RO实例的原因</p>
                     * @param _nonsupportRoReason <p>不支持RO实例的原因</p>
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
                     * 获取<p>是否支持手动发起快照备份</p>
                     * @return IsSupportManualSnapshot <p>是否支持手动发起快照备份</p>
                     * 
                     */
                    std::string GetIsSupportManualSnapshot() const;

                    /**
                     * 设置<p>是否支持手动发起快照备份</p>
                     * @param _isSupportManualSnapshot <p>是否支持手动发起快照备份</p>
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
                     * 获取<p>是否支持透明数据加密</p>
                     * @return IsSupportTransparentDataEncryption <p>是否支持透明数据加密</p>
                     * 
                     */
                    std::string GetIsSupportTransparentDataEncryption() const;

                    /**
                     * 设置<p>是否支持透明数据加密</p>
                     * @param _isSupportTransparentDataEncryption <p>是否支持透明数据加密</p>
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
                     * 获取<p>不支持透明数据加密原因</p>
                     * @return NoSupportTransparentDataEncryptionReason <p>不支持透明数据加密原因</p>
                     * 
                     */
                    std::string GetNoSupportTransparentDataEncryptionReason() const;

                    /**
                     * 设置<p>不支持透明数据加密原因</p>
                     * @param _noSupportTransparentDataEncryptionReason <p>不支持透明数据加密原因</p>
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
                     * 获取<p>是否支持手动发起逻辑备份</p>
                     * @return IsSupportManualLogic <p>是否支持手动发起逻辑备份</p>
                     * 
                     */
                    std::string GetIsSupportManualLogic() const;

                    /**
                     * 设置<p>是否支持手动发起逻辑备份</p>
                     * @param _isSupportManualLogic <p>是否支持手动发起逻辑备份</p>
                     * 
                     */
                    void SetIsSupportManualLogic(const std::string& _isSupportManualLogic);

                    /**
                     * 判断参数 IsSupportManualLogic 是否已赋值
                     * @return IsSupportManualLogic 是否已赋值
                     * 
                     */
                    bool IsSupportManualLogicHasBeenSet() const;

                    /**
                     * 获取<p>是否支持开启全局加密</p>
                     * @return IsSupportGlobalEncryption <p>是否支持开启全局加密</p>
                     * 
                     */
                    std::string GetIsSupportGlobalEncryption() const;

                    /**
                     * 设置<p>是否支持开启全局加密</p>
                     * @param _isSupportGlobalEncryption <p>是否支持开启全局加密</p>
                     * 
                     */
                    void SetIsSupportGlobalEncryption(const std::string& _isSupportGlobalEncryption);

                    /**
                     * 判断参数 IsSupportGlobalEncryption 是否已赋值
                     * @return IsSupportGlobalEncryption 是否已赋值
                     * 
                     */
                    bool IsSupportGlobalEncryptionHasBeenSet() const;

                    /**
                     * 获取<p>不支持全局加密的原因</p>
                     * @return NoSupportGlobalEncryptionReason <p>不支持全局加密的原因</p>
                     * 
                     */
                    std::string GetNoSupportGlobalEncryptionReason() const;

                    /**
                     * 设置<p>不支持全局加密的原因</p>
                     * @param _noSupportGlobalEncryptionReason <p>不支持全局加密的原因</p>
                     * 
                     */
                    void SetNoSupportGlobalEncryptionReason(const std::string& _noSupportGlobalEncryptionReason);

                    /**
                     * 判断参数 NoSupportGlobalEncryptionReason 是否已赋值
                     * @return NoSupportGlobalEncryptionReason 是否已赋值
                     * 
                     */
                    bool NoSupportGlobalEncryptionReasonHasBeenSet() const;

                    /**
                     * 获取<p>不支持透明加密原因状态码</p>
                     * @return NoSupportTransparentDataEncryptionReasonCode <p>不支持透明加密原因状态码</p>
                     * 
                     */
                    std::string GetNoSupportTransparentDataEncryptionReasonCode() const;

                    /**
                     * 设置<p>不支持透明加密原因状态码</p>
                     * @param _noSupportTransparentDataEncryptionReasonCode <p>不支持透明加密原因状态码</p>
                     * 
                     */
                    void SetNoSupportTransparentDataEncryptionReasonCode(const std::string& _noSupportTransparentDataEncryptionReasonCode);

                    /**
                     * 判断参数 NoSupportTransparentDataEncryptionReasonCode 是否已赋值
                     * @return NoSupportTransparentDataEncryptionReasonCode 是否已赋值
                     * 
                     */
                    bool NoSupportTransparentDataEncryptionReasonCodeHasBeenSet() const;

                    /**
                     * 获取<p>不支持全局加密原因状态码</p>
                     * @return NoSupportGlobalEncryptionReasonCode <p>不支持全局加密原因状态码</p>
                     * 
                     */
                    std::string GetNoSupportGlobalEncryptionReasonCode() const;

                    /**
                     * 设置<p>不支持全局加密原因状态码</p>
                     * @param _noSupportGlobalEncryptionReasonCode <p>不支持全局加密原因状态码</p>
                     * 
                     */
                    void SetNoSupportGlobalEncryptionReasonCode(const std::string& _noSupportGlobalEncryptionReasonCode);

                    /**
                     * 判断参数 NoSupportGlobalEncryptionReasonCode 是否已赋值
                     * @return NoSupportGlobalEncryptionReasonCode 是否已赋值
                     * 
                     */
                    bool NoSupportGlobalEncryptionReasonCodeHasBeenSet() const;

                private:

                    /**
                     * <p>是否支持从可用区</p>
                     */
                    std::string m_isSupportSlaveZone;
                    bool m_isSupportSlaveZoneHasBeenSet;

                    /**
                     * <p>不支持从可用区的原因</p>
                     */
                    std::string m_nonsupportSlaveZoneReason;
                    bool m_nonsupportSlaveZoneReasonHasBeenSet;

                    /**
                     * <p>是否支持RO实例</p>
                     */
                    std::string m_isSupportRo;
                    bool m_isSupportRoHasBeenSet;

                    /**
                     * <p>不支持RO实例的原因</p>
                     */
                    std::string m_nonsupportRoReason;
                    bool m_nonsupportRoReasonHasBeenSet;

                    /**
                     * <p>是否支持手动发起快照备份</p>
                     */
                    std::string m_isSupportManualSnapshot;
                    bool m_isSupportManualSnapshotHasBeenSet;

                    /**
                     * <p>是否支持透明数据加密</p>
                     */
                    std::string m_isSupportTransparentDataEncryption;
                    bool m_isSupportTransparentDataEncryptionHasBeenSet;

                    /**
                     * <p>不支持透明数据加密原因</p>
                     */
                    std::string m_noSupportTransparentDataEncryptionReason;
                    bool m_noSupportTransparentDataEncryptionReasonHasBeenSet;

                    /**
                     * <p>是否支持手动发起逻辑备份</p>
                     */
                    std::string m_isSupportManualLogic;
                    bool m_isSupportManualLogicHasBeenSet;

                    /**
                     * <p>是否支持开启全局加密</p>
                     */
                    std::string m_isSupportGlobalEncryption;
                    bool m_isSupportGlobalEncryptionHasBeenSet;

                    /**
                     * <p>不支持全局加密的原因</p>
                     */
                    std::string m_noSupportGlobalEncryptionReason;
                    bool m_noSupportGlobalEncryptionReasonHasBeenSet;

                    /**
                     * <p>不支持透明加密原因状态码</p>
                     */
                    std::string m_noSupportTransparentDataEncryptionReasonCode;
                    bool m_noSupportTransparentDataEncryptionReasonCodeHasBeenSet;

                    /**
                     * <p>不支持全局加密原因状态码</p>
                     */
                    std::string m_noSupportGlobalEncryptionReasonCode;
                    bool m_noSupportGlobalEncryptionReasonCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ABILITY_H_
