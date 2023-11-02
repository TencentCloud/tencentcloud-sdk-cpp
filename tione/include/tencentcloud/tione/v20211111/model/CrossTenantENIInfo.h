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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CROSSTENANTENIINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CROSSTENANTENIINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 跨租户弹性网卡下Pod调用信息
                */
                class CrossTenantENIInfo : public AbstractModel
                {
                public:
                    CrossTenantENIInfo();
                    ~CrossTenantENIInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Pod IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrimaryIP Pod IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrimaryIP() const;

                    /**
                     * 设置Pod IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _primaryIP Pod IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrimaryIP(const std::string& _primaryIP);

                    /**
                     * 判断参数 PrimaryIP 是否已赋值
                     * @return PrimaryIP 是否已赋值
                     * 
                     */
                    bool PrimaryIPHasBeenSet() const;

                    /**
                     * 获取Pod Port
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port Pod Port
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Pod Port
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port Pod Port
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * Pod IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_primaryIP;
                    bool m_primaryIPHasBeenSet;

                    /**
                     * Pod Port
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CROSSTENANTENIINFO_H_
