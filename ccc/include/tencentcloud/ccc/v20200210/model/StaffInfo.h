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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_STAFFINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_STAFFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/SkillGroupItem.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 带有技能组优先级的坐席信息
                */
                class StaffInfo : public AbstractModel
                {
                public:
                    StaffInfo();
                    ~StaffInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取坐席名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 坐席名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置坐席名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 坐席名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取坐席邮箱
                     * @return Mail 坐席邮箱
                     */
                    std::string GetMail() const;

                    /**
                     * 设置坐席邮箱
                     * @param Mail 坐席邮箱
                     */
                    void SetMail(const std::string& _mail);

                    /**
                     * 判断参数 Mail 是否已赋值
                     * @return Mail 是否已赋值
                     */
                    bool MailHasBeenSet() const;

                    /**
                     * 获取坐席电话号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Phone 坐席电话号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置坐席电话号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Phone 坐席电话号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取坐席昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nick 坐席昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNick() const;

                    /**
                     * 设置坐席昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Nick 坐席昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     */
                    bool NickHasBeenSet() const;

                    /**
                     * 获取坐席工号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StaffNumber 坐席工号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStaffNumber() const;

                    /**
                     * 设置坐席工号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StaffNumber 坐席工号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStaffNumber(const std::string& _staffNumber);

                    /**
                     * 判断参数 StaffNumber 是否已赋值
                     * @return StaffNumber 是否已赋值
                     */
                    bool StaffNumberHasBeenSet() const;

                    /**
                     * 获取所属技能组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SkillGroupList 所属技能组列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SkillGroupItem> GetSkillGroupList() const;

                    /**
                     * 设置所属技能组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SkillGroupList 所属技能组列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSkillGroupList(const std::vector<SkillGroupItem>& _skillGroupList);

                    /**
                     * 判断参数 SkillGroupList 是否已赋值
                     * @return SkillGroupList 是否已赋值
                     */
                    bool SkillGroupListHasBeenSet() const;

                    /**
                     * 获取最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifyTimestamp 最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetLastModifyTimestamp() const;

                    /**
                     * 设置最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastModifyTimestamp 最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastModifyTimestamp(const int64_t& _lastModifyTimestamp);

                    /**
                     * 判断参数 LastModifyTimestamp 是否已赋值
                     * @return LastModifyTimestamp 是否已赋值
                     */
                    bool LastModifyTimestampHasBeenSet() const;

                private:

                    /**
                     * 坐席名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 坐席邮箱
                     */
                    std::string m_mail;
                    bool m_mailHasBeenSet;

                    /**
                     * 坐席电话号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 坐席昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * 坐席工号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_staffNumber;
                    bool m_staffNumberHasBeenSet;

                    /**
                     * 所属技能组列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SkillGroupItem> m_skillGroupList;
                    bool m_skillGroupListHasBeenSet;

                    /**
                     * 最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lastModifyTimestamp;
                    bool m_lastModifyTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_STAFFINFO_H_
