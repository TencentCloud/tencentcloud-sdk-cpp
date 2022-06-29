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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSRULE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/DDoSStatusInfo.h>
#include <tencentcloud/teo/v20220106/model/DDoSGeoIp.h>
#include <tencentcloud/teo/v20220106/model/DdosAllowBlock.h>
#include <tencentcloud/teo/v20220106/model/DDoSAntiPly.h>
#include <tencentcloud/teo/v20220106/model/DdosPacketFilter.h>
#include <tencentcloud/teo/v20220106/model/DdosAcls.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Ddos防护配置
                */
                class DdosRule : public AbstractModel
                {
                public:
                    DdosRule();
                    ~DdosRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DDoS防护等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DdosStatusInfo DDoS防护等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDoSStatusInfo GetDdosStatusInfo() const;

                    /**
                     * 设置DDoS防护等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DdosStatusInfo DDoS防护等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDdosStatusInfo(const DDoSStatusInfo& _ddosStatusInfo);

                    /**
                     * 判断参数 DdosStatusInfo 是否已赋值
                     * @return DdosStatusInfo 是否已赋值
                     */
                    bool DdosStatusInfoHasBeenSet() const;

                    /**
                     * 获取DDoS地域封禁
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DdosGeoIp DDoS地域封禁
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDoSGeoIp GetDdosGeoIp() const;

                    /**
                     * 设置DDoS地域封禁
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DdosGeoIp DDoS地域封禁
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDdosGeoIp(const DDoSGeoIp& _ddosGeoIp);

                    /**
                     * 判断参数 DdosGeoIp 是否已赋值
                     * @return DdosGeoIp 是否已赋值
                     */
                    bool DdosGeoIpHasBeenSet() const;

                    /**
                     * 获取DDoS黑白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DdosAllowBlock DDoS黑白名单
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DdosAllowBlock GetDdosAllowBlock() const;

                    /**
                     * 设置DDoS黑白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DdosAllowBlock DDoS黑白名单
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDdosAllowBlock(const DdosAllowBlock& _ddosAllowBlock);

                    /**
                     * 判断参数 DdosAllowBlock 是否已赋值
                     * @return DdosAllowBlock 是否已赋值
                     */
                    bool DdosAllowBlockHasBeenSet() const;

                    /**
                     * 获取DDoS 协议封禁+连接防护
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DdosAntiPly DDoS 协议封禁+连接防护
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDoSAntiPly GetDdosAntiPly() const;

                    /**
                     * 设置DDoS 协议封禁+连接防护
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DdosAntiPly DDoS 协议封禁+连接防护
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDdosAntiPly(const DDoSAntiPly& _ddosAntiPly);

                    /**
                     * 判断参数 DdosAntiPly 是否已赋值
                     * @return DdosAntiPly 是否已赋值
                     */
                    bool DdosAntiPlyHasBeenSet() const;

                    /**
                     * 获取DDoS特征过滤
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DdosPacketFilter DDoS特征过滤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DdosPacketFilter GetDdosPacketFilter() const;

                    /**
                     * 设置DDoS特征过滤
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DdosPacketFilter DDoS特征过滤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDdosPacketFilter(const DdosPacketFilter& _ddosPacketFilter);

                    /**
                     * 判断参数 DdosPacketFilter 是否已赋值
                     * @return DdosPacketFilter 是否已赋值
                     */
                    bool DdosPacketFilterHasBeenSet() const;

                    /**
                     * 获取DDoS端口过滤
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DdosAcl DDoS端口过滤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DdosAcls GetDdosAcl() const;

                    /**
                     * 设置DDoS端口过滤
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DdosAcl DDoS端口过滤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDdosAcl(const DdosAcls& _ddosAcl);

                    /**
                     * 判断参数 DdosAcl 是否已赋值
                     * @return DdosAcl 是否已赋值
                     */
                    bool DdosAclHasBeenSet() const;

                    /**
                     * 获取DDoS开关 on-开启；off-关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch DDoS开关 on-开启；off-关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置DDoS开关 on-开启；off-关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Switch DDoS开关 on-开启；off-关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                private:

                    /**
                     * DDoS防护等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDoSStatusInfo m_ddosStatusInfo;
                    bool m_ddosStatusInfoHasBeenSet;

                    /**
                     * DDoS地域封禁
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDoSGeoIp m_ddosGeoIp;
                    bool m_ddosGeoIpHasBeenSet;

                    /**
                     * DDoS黑白名单
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DdosAllowBlock m_ddosAllowBlock;
                    bool m_ddosAllowBlockHasBeenSet;

                    /**
                     * DDoS 协议封禁+连接防护
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DDoSAntiPly m_ddosAntiPly;
                    bool m_ddosAntiPlyHasBeenSet;

                    /**
                     * DDoS特征过滤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DdosPacketFilter m_ddosPacketFilter;
                    bool m_ddosPacketFilterHasBeenSet;

                    /**
                     * DDoS端口过滤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DdosAcls m_ddosAcl;
                    bool m_ddosAclHasBeenSet;

                    /**
                     * DDoS开关 on-开启；off-关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSRULE_H_
