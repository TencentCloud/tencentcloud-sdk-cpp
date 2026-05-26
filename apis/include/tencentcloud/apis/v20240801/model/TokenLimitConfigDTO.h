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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_TOKENLIMITCONFIGDTO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_TOKENLIMITCONFIGDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/LimitWindowsDTO.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * Token限流配置
                */
                class TokenLimitConfigDTO : public AbstractModel
                {
                public:
                    TokenLimitConfigDTO();
                    ~TokenLimitConfigDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>限流类型</p><p>枚举值：</p><ul><li>minute： 时间窗口</li><li>day： 自然日</li><li>month： 自然月</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>限流类型</p><p>枚举值：</p><ul><li>minute： 时间窗口</li><li>day： 自然日</li><li>month： 自然月</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>限流类型</p><p>枚举值：</p><ul><li>minute： 时间窗口</li><li>day： 自然日</li><li>month： 自然月</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>限流类型</p><p>枚举值：</p><ul><li>minute： 时间窗口</li><li>day： 自然日</li><li>month： 自然月</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>单次请求上限，k</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LimitRequestBody <p>单次请求上限，k</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLimitRequestBody() const;

                    /**
                     * 设置<p>单次请求上限，k</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _limitRequestBody <p>单次请求上限，k</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLimitRequestBody(const uint64_t& _limitRequestBody);

                    /**
                     * 判断参数 LimitRequestBody 是否已赋值
                     * @return LimitRequestBody 是否已赋值
                     * 
                     */
                    bool LimitRequestBodyHasBeenSet() const;

                    /**
                     * 获取<p>累次token总量消耗上限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LimitWindows <p>累次token总量消耗上限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LimitWindowsDTO> GetLimitWindows() const;

                    /**
                     * 设置<p>累次token总量消耗上限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _limitWindows <p>累次token总量消耗上限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLimitWindows(const std::vector<LimitWindowsDTO>& _limitWindows);

                    /**
                     * 判断参数 LimitWindows 是否已赋值
                     * @return LimitWindows 是否已赋值
                     * 
                     */
                    bool LimitWindowsHasBeenSet() const;

                private:

                    /**
                     * <p>限流类型</p><p>枚举值：</p><ul><li>minute： 时间窗口</li><li>day： 自然日</li><li>month： 自然月</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>单次请求上限，k</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_limitRequestBody;
                    bool m_limitRequestBodyHasBeenSet;

                    /**
                     * <p>累次token总量消耗上限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LimitWindowsDTO> m_limitWindows;
                    bool m_limitWindowsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_TOKENLIMITCONFIGDTO_H_
