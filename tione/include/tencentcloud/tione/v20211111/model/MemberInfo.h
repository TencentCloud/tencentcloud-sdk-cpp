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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_MEMBERINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_MEMBERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/UserBriefInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 空间成员信息
                */
                class MemberInfo : public AbstractModel
                {
                public:
                    MemberInfo();
                    ~MemberInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>超管成员列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuperAdmins <p>超管成员列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UserBriefInfo> GetSuperAdmins() const;

                    /**
                     * 设置<p>超管成员列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _superAdmins <p>超管成员列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuperAdmins(const std::vector<UserBriefInfo>& _superAdmins);

                    /**
                     * 判断参数 SuperAdmins 是否已赋值
                     * @return SuperAdmins 是否已赋值
                     * 
                     */
                    bool SuperAdminsHasBeenSet() const;

                    /**
                     * 获取<p>空间内管理员列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Admins <p>空间内管理员列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UserBriefInfo> GetAdmins() const;

                    /**
                     * 设置<p>空间内管理员列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _admins <p>空间内管理员列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdmins(const std::vector<UserBriefInfo>& _admins);

                    /**
                     * 判断参数 Admins 是否已赋值
                     * @return Admins 是否已赋值
                     * 
                     */
                    bool AdminsHasBeenSet() const;

                private:

                    /**
                     * <p>超管成员列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UserBriefInfo> m_superAdmins;
                    bool m_superAdminsHasBeenSet;

                    /**
                     * <p>空间内管理员列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UserBriefInfo> m_admins;
                    bool m_adminsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_MEMBERINFO_H_
