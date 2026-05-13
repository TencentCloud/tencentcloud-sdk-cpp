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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYIDITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYIDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmUinUser.h>
#include <tencentcloud/csip/v20221121/model/DspmPersonUser.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dspm身份id信息
                */
                class DspmIdentifyIdItem : public AbstractModel
                {
                public:
                    DspmIdentifyIdItem();
                    ~DspmIdentifyIdItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取身份id。
                     * @return IdentifyId 身份id。
                     * 
                     */
                    std::string GetIdentifyId() const;

                    /**
                     * 设置身份id。
                     * @param _identifyId 身份id。
                     * 
                     */
                    void SetIdentifyId(const std::string& _identifyId);

                    /**
                     * 判断参数 IdentifyId 是否已赋值
                     * @return IdentifyId 是否已赋值
                     * 
                     */
                    bool IdentifyIdHasBeenSet() const;

                    /**
                     * 获取备注。
                     * @return Remark 备注。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注。
                     * @param _remark 备注。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取身份类型。0-未定义 2-长期身份 3-临时身份
                     * @return IdentifyType 身份类型。0-未定义 2-长期身份 3-临时身份
                     * 
                     */
                    int64_t GetIdentifyType() const;

                    /**
                     * 设置身份类型。0-未定义 2-长期身份 3-临时身份
                     * @param _identifyType 身份类型。0-未定义 2-长期身份 3-临时身份
                     * 
                     */
                    void SetIdentifyType(const int64_t& _identifyType);

                    /**
                     * 判断参数 IdentifyType 是否已赋值
                     * @return IdentifyType 是否已赋值
                     * 
                     */
                    bool IdentifyTypeHasBeenSet() const;

                    /**
                     * 获取所属云账号uin用户。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin 所属云账号uin用户。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DspmUinUser GetOwnerUin() const;

                    /**
                     * 设置所属云账号uin用户。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin 所属云账号uin用户。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUin(const DspmUinUser& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取创建者账号uin用户。
                     * @return CreatorUin 创建者账号uin用户。
                     * 
                     */
                    DspmUinUser GetCreatorUin() const;

                    /**
                     * 设置创建者账号uin用户。
                     * @param _creatorUin 创建者账号uin用户。
                     * 
                     */
                    void SetCreatorUin(const DspmUinUser& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取状态。0-不活跃 1-活跃
                     * @return Status 状态。0-不活跃 1-活跃
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态。0-不活跃 1-活跃
                     * @param _status 状态。0-不活跃 1-活跃
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取所属个人用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Person 所属个人用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DspmPersonUser GetPerson() const;

                    /**
                     * 设置所属个人用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _person 所属个人用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPerson(const DspmPersonUser& _person);

                    /**
                     * 判断参数 Person 是否已赋值
                     * @return Person 是否已赋值
                     * 
                     */
                    bool PersonHasBeenSet() const;

                private:

                    /**
                     * 身份id。
                     */
                    std::string m_identifyId;
                    bool m_identifyIdHasBeenSet;

                    /**
                     * 备注。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 身份类型。0-未定义 2-长期身份 3-临时身份
                     */
                    int64_t m_identifyType;
                    bool m_identifyTypeHasBeenSet;

                    /**
                     * 所属云账号uin用户。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DspmUinUser m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 创建者账号uin用户。
                     */
                    DspmUinUser m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 状态。0-不活跃 1-活跃
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 所属个人用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DspmPersonUser m_person;
                    bool m_personHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYIDITEM_H_
