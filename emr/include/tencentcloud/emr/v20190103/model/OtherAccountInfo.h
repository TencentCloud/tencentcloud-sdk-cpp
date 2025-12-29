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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_OTHERACCOUNTINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_OTHERACCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 其他账号信息
                */
                class OtherAccountInfo : public AbstractModel
                {
                public:
                    OtherAccountInfo();
                    ~OtherAccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取其他账号UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OtherUin 其他账号UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOtherUin() const;

                    /**
                     * 设置其他账号UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _otherUin 其他账号UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOtherUin(const std::string& _otherUin);

                    /**
                     * 判断参数 OtherUin 是否已赋值
                     * @return OtherUin 是否已赋值
                     * 
                     */
                    bool OtherUinHasBeenSet() const;

                    /**
                     * 获取其他账号授权角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleName 其他账号授权角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置其他账号授权角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roleName 其他账号授权角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                private:

                    /**
                     * 其他账号UIN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_otherUin;
                    bool m_otherUinHasBeenSet;

                    /**
                     * 其他账号授权角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_OTHERACCOUNTINFO_H_
