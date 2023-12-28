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
                * 地址模板列表数据
                */
                class TemplateListInfo : public AbstractModel
                {
                public:
                    TemplateListInfo();
                    ~TemplateListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uuid 模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uuid 模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Detail 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detail 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取IP模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpString IP模板
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIpString() const;

                    /**
                     * 设置IP模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipString IP模板
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpString(const std::string& _ipString);

                    /**
                     * 判断参数 IpString 是否已赋值
                     * @return IpString 是否已赋值
                     * 
                     */
                    bool IpStringHasBeenSet() const;

                    /**
                     * 获取插入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InsertTime 插入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置插入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _insertTime 插入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取模板类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 模板类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置模板类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 模板类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取关联规则条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RulesNum 关联规则条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRulesNum() const;

                    /**
                     * 设置关联规则条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rulesNum 关联规则条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRulesNum(const int64_t& _rulesNum);

                    /**
                     * 判断参数 RulesNum 是否已赋值
                     * @return RulesNum 是否已赋值
                     * 
                     */
                    bool RulesNumHasBeenSet() const;

                    /**
                     * 获取模板Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateId 模板Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateId 模板Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取协议端口模板，协议类型，4:4层协议，7:7层协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProtocolType 协议端口模板，协议类型，4:4层协议，7:7层协议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtocolType() const;

                    /**
                     * 设置协议端口模板，协议类型，4:4层协议，7:7层协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocolType 协议端口模板，协议类型，4:4层协议，7:7层协议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtocolType(const std::string& _protocolType);

                    /**
                     * 判断参数 ProtocolType 是否已赋值
                     * @return ProtocolType 是否已赋值
                     * 
                     */
                    bool ProtocolTypeHasBeenSet() const;

                private:

                    /**
                     * 模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 模板名称
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
                     * IP模板
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
                     * 模板类型
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

                    /**
                     * 模板Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 协议端口模板，协议类型，4:4层协议，7:7层协议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_TEMPLATELISTINFO_H_
