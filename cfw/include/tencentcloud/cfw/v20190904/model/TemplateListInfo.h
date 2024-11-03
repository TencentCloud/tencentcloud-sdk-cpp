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
                     * @return Uuid 模板ID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置模板ID
                     * @param _uuid 模板ID
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
                     * @return Name 模板名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模板名称
                     * @param _name 模板名称
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
                     * @return Detail 描述
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置描述
                     * @param _detail 描述
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
                     * @return IpString IP模板
                     * 
                     */
                    std::string GetIpString() const;

                    /**
                     * 设置IP模板
                     * @param _ipString IP模板
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
                     * @return InsertTime 插入时间
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置插入时间
                     * @param _insertTime 插入时间
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
                     * @return UpdateTime 修改时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置修改时间
                     * @param _updateTime 修改时间
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
                     * @return Type 模板类型
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置模板类型
                     * @param _type 模板类型
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
                     * @return RulesNum 关联规则条数
                     * 
                     */
                    int64_t GetRulesNum() const;

                    /**
                     * 设置关联规则条数
                     * @param _rulesNum 关联规则条数
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
                     * @return TemplateId 模板Id
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板Id
                     * @param _templateId 模板Id
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
                     * @return ProtocolType 协议端口模板，协议类型，4:4层协议，7:7层协议
                     * 
                     */
                    std::string GetProtocolType() const;

                    /**
                     * 设置协议端口模板，协议类型，4:4层协议，7:7层协议
                     * @param _protocolType 协议端口模板，协议类型，4:4层协议，7:7层协议
                     * 
                     */
                    void SetProtocolType(const std::string& _protocolType);

                    /**
                     * 判断参数 ProtocolType 是否已赋值
                     * @return ProtocolType 是否已赋值
                     * 
                     */
                    bool ProtocolTypeHasBeenSet() const;

                    /**
                     * 获取模板包含地址数量
                     * @return IPNum 模板包含地址数量
                     * 
                     */
                    int64_t GetIPNum() const;

                    /**
                     * 设置模板包含地址数量
                     * @param _iPNum 模板包含地址数量
                     * 
                     */
                    void SetIPNum(const int64_t& _iPNum);

                    /**
                     * 判断参数 IPNum 是否已赋值
                     * @return IPNum 是否已赋值
                     * 
                     */
                    bool IPNumHasBeenSet() const;

                    /**
                     * 获取IP版本,0,IPv4;1,IPv6
                     * @return IpVersion IP版本,0,IPv4;1,IPv6
                     * 
                     */
                    int64_t GetIpVersion() const;

                    /**
                     * 设置IP版本,0,IPv4;1,IPv6
                     * @param _ipVersion IP版本,0,IPv4;1,IPv6
                     * 
                     */
                    void SetIpVersion(const int64_t& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                private:

                    /**
                     * 模板ID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 模板名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * IP模板
                     */
                    std::string m_ipString;
                    bool m_ipStringHasBeenSet;

                    /**
                     * 插入时间
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 模板类型
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 关联规则条数
                     */
                    int64_t m_rulesNum;
                    bool m_rulesNumHasBeenSet;

                    /**
                     * 模板Id
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 协议端口模板，协议类型，4:4层协议，7:7层协议
                     */
                    std::string m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                    /**
                     * 模板包含地址数量
                     */
                    int64_t m_iPNum;
                    bool m_iPNumHasBeenSet;

                    /**
                     * IP版本,0,IPv4;1,IPv6
                     */
                    int64_t m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_TEMPLATELISTINFO_H_
