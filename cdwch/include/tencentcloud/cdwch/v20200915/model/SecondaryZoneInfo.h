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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_SECONDARYZONEINFO_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_SECONDARYZONEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * 副可用区详情
                */
                class SecondaryZoneInfo : public AbstractModel
                {
                public:
                    SecondaryZoneInfo();
                    ~SecondaryZoneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取副可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecondaryZone 副可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecondaryZone() const;

                    /**
                     * 设置副可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secondaryZone 副可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecondaryZone(const std::string& _secondaryZone);

                    /**
                     * 判断参数 SecondaryZone 是否已赋值
                     * @return SecondaryZone 是否已赋值
                     * 
                     */
                    bool SecondaryZoneHasBeenSet() const;

                    /**
                     * 获取可用区可用的子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecondarySubnet 可用区可用的子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecondarySubnet() const;

                    /**
                     * 设置可用区可用的子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secondarySubnet 可用区可用的子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecondarySubnet(const std::string& _secondarySubnet);

                    /**
                     * 判断参数 SecondarySubnet 是否已赋值
                     * @return SecondarySubnet 是否已赋值
                     * 
                     */
                    bool SecondarySubnetHasBeenSet() const;

                    /**
                     * 获取可用区可用的子网可用ip的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserIpNum 可用区可用的子网可用ip的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserIpNum() const;

                    /**
                     * 设置可用区可用的子网可用ip的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userIpNum 可用区可用的子网可用ip的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserIpNum(const std::string& _userIpNum);

                    /**
                     * 判断参数 UserIpNum 是否已赋值
                     * @return UserIpNum 是否已赋值
                     * 
                     */
                    bool UserIpNumHasBeenSet() const;

                    /**
                     * 获取可用区可用的子网可用ip的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecondaryUserSubnetIPNum 可用区可用的子网可用ip的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSecondaryUserSubnetIPNum() const;

                    /**
                     * 设置可用区可用的子网可用ip的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secondaryUserSubnetIPNum 可用区可用的子网可用ip的数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecondaryUserSubnetIPNum(const int64_t& _secondaryUserSubnetIPNum);

                    /**
                     * 判断参数 SecondaryUserSubnetIPNum 是否已赋值
                     * @return SecondaryUserSubnetIPNum 是否已赋值
                     * 
                     */
                    bool SecondaryUserSubnetIPNumHasBeenSet() const;

                private:

                    /**
                     * 副可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secondaryZone;
                    bool m_secondaryZoneHasBeenSet;

                    /**
                     * 可用区可用的子网id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secondarySubnet;
                    bool m_secondarySubnetHasBeenSet;

                    /**
                     * 可用区可用的子网可用ip的数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userIpNum;
                    bool m_userIpNumHasBeenSet;

                    /**
                     * 可用区可用的子网可用ip的数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_secondaryUserSubnetIPNum;
                    bool m_secondaryUserSubnetIPNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_SECONDARYZONEINFO_H_
