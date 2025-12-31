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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_REGIONCIDRCONFIG_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_REGIONCIDRCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 引流地域CIDR配置
                */
                class RegionCidrConfig : public AbstractModel
                {
                public:
                    RegionCidrConfig();
                    ~RegionCidrConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取引流地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 引流地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置引流地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 引流地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取CIDR模式：0-跳过，1-自动，2-自定义
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CidrMode CIDR模式：0-跳过，1-自动，2-自定义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCidrMode() const;

                    /**
                     * 设置CIDR模式：0-跳过，1-自动，2-自定义
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cidrMode CIDR模式：0-跳过，1-自动，2-自定义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCidrMode(const int64_t& _cidrMode);

                    /**
                     * 判断参数 CidrMode 是否已赋值
                     * @return CidrMode 是否已赋值
                     * 
                     */
                    bool CidrModeHasBeenSet() const;

                    /**
                     * 获取自定义CIDR（CidrMode=2时必填），其它时候为空字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomCidr 自定义CIDR（CidrMode=2时必填），其它时候为空字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomCidr() const;

                    /**
                     * 设置自定义CIDR（CidrMode=2时必填），其它时候为空字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customCidr 自定义CIDR（CidrMode=2时必填），其它时候为空字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomCidr(const std::string& _customCidr);

                    /**
                     * 判断参数 CustomCidr 是否已赋值
                     * @return CustomCidr 是否已赋值
                     * 
                     */
                    bool CustomCidrHasBeenSet() const;

                private:

                    /**
                     * 引流地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * CIDR模式：0-跳过，1-自动，2-自定义
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cidrMode;
                    bool m_cidrModeHasBeenSet;

                    /**
                     * 自定义CIDR（CidrMode=2时必填），其它时候为空字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customCidr;
                    bool m_customCidrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_REGIONCIDRCONFIG_H_
