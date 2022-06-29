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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSGEOIP_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSGEOIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DDoS地域封禁
                */
                class DDoSGeoIp : public AbstractModel
                {
                public:
                    DDoSGeoIp();
                    ~DDoSGeoIp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionId 地域信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetRegionId() const;

                    /**
                     * 设置地域信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RegionId 地域信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegionId(const std::vector<int64_t>& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取区域封禁清空标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch 区域封禁清空标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置区域封禁清空标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Switch 区域封禁清空标识
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
                     * 地域信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 区域封禁清空标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSGEOIP_H_
