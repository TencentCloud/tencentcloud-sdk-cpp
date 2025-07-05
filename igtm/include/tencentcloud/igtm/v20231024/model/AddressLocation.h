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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_ADDRESSLOCATION_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_ADDRESSLOCATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * 地址所属地域
                */
                class AddressLocation : public AbstractModel
                {
                public:
                    AddressLocation();
                    ~AddressLocation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Addr ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAddr() const;

                    /**
                     * 设置ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _addr ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddr(const std::string& _addr);

                    /**
                     * 判断参数 Addr 是否已赋值
                     * @return Addr 是否已赋值
                     * 
                     */
                    bool AddrHasBeenSet() const;

                    /**
                     * 获取所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Location 所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _location 所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                private:

                    /**
                     * ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_addr;
                    bool m_addrHasBeenSet;

                    /**
                     * 所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_ADDRESSLOCATION_H_
