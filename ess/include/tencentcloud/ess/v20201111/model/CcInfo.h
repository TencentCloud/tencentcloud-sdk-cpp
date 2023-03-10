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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CCINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 抄送信息
                */
                class CcInfo : public AbstractModel
                {
                public:
                    CcInfo();
                    ~CcInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取被抄送人手机号
                     * @return Mobile 被抄送人手机号
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置被抄送人手机号
                     * @param Mobile 被抄送人手机号
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取被抄送人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 被抄送人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置被抄送人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 被抄送人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取被抄送人类型,
0--个人
1--员工
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CcType 被抄送人类型,
0--个人
1--员工
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCcType() const;

                    /**
                     * 设置被抄送人类型,
0--个人
1--员工
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CcType 被抄送人类型,
0--个人
1--员工
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCcType(const int64_t& _ccType);

                    /**
                     * 判断参数 CcType 是否已赋值
                     * @return CcType 是否已赋值
                     */
                    bool CcTypeHasBeenSet() const;

                    /**
                     * 获取被抄送人权限
0--可查看
1--可查看也可下载
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CcPermission 被抄送人权限
0--可查看
1--可查看也可下载
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCcPermission() const;

                    /**
                     * 设置被抄送人权限
0--可查看
1--可查看也可下载
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CcPermission 被抄送人权限
0--可查看
1--可查看也可下载
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCcPermission(const int64_t& _ccPermission);

                    /**
                     * 判断参数 CcPermission 是否已赋值
                     * @return CcPermission 是否已赋值
                     */
                    bool CcPermissionHasBeenSet() const;

                private:

                    /**
                     * 被抄送人手机号
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 被抄送人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 被抄送人类型,
0--个人
1--员工
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ccType;
                    bool m_ccTypeHasBeenSet;

                    /**
                     * 被抄送人权限
0--可查看
1--可查看也可下载
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ccPermission;
                    bool m_ccPermissionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CCINFO_H_
