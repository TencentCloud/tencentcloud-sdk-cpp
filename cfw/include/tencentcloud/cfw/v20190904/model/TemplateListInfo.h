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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_TEMPLATELISTINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_TEMPLATELISTINFO_H_

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
                * 地址模版列表数据
                */
                class TemplateListInfo : public AbstractModel
                {
                public:
                    TemplateListInfo();
                    ~TemplateListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模版ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uuid 模版ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置模版ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Uuid 模版ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取模版名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 模版名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置模版名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 模版名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Detail 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Detail 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取IP模版
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpString IP模版
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIpString() const;

                    /**
                     * 设置IP模版
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IpString IP模版
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIpString(const std::string& _ipString);

                    /**
                     * 判断参数 IpString 是否已赋值
                     * @return IpString 是否已赋值
                     */
                    bool IpStringHasBeenSet() const;

                    /**
                     * 获取插入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InsertTime 插入时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置插入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InsertTime 插入时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取模版类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 模版类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetType() const;

                    /**
                     * 设置模版类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Type 模版类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取关联规则条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RulesNum 关联规则条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRulesNum() const;

                    /**
                     * 设置关联规则条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RulesNum 关联规则条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRulesNum(const int64_t& _rulesNum);

                    /**
                     * 判断参数 RulesNum 是否已赋值
                     * @return RulesNum 是否已赋值
                     */
                    bool RulesNumHasBeenSet() const;

                private:

                    /**
                     * 模版ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 模版名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * IP模版
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ipString;
                    bool m_ipStringHasBeenSet;

                    /**
                     * 插入时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 模版类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 关联规则条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rulesNum;
                    bool m_rulesNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_TEMPLATELISTINFO_H_
