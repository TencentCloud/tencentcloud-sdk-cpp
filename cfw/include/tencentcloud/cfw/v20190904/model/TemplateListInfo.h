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
                     * 获取<p>模板ID</p>
                     * @return Uuid <p>模板ID</p>
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>模板ID</p>
                     * @param _uuid <p>模板ID</p>
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
                     * 获取<p>模板名称</p>
                     * @return Name <p>模板名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>模板名称</p>
                     * @param _name <p>模板名称</p>
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
                     * 获取<p>描述</p>
                     * @return Detail <p>描述</p>
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _detail <p>描述</p>
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
                     * 获取<p>IP模板</p>
                     * @return IpString <p>IP模板</p>
                     * 
                     */
                    std::string GetIpString() const;

                    /**
                     * 设置<p>IP模板</p>
                     * @param _ipString <p>IP模板</p>
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
                     * 获取<p>插入时间</p>
                     * @return InsertTime <p>插入时间</p>
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置<p>插入时间</p>
                     * @param _insertTime <p>插入时间</p>
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
                     * 获取<p>修改时间</p>
                     * @return UpdateTime <p>修改时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>修改时间</p>
                     * @param _updateTime <p>修改时间</p>
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
                     * 获取<p>模板类型</p>
                     * @return Type <p>模板类型</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>模板类型</p>
                     * @param _type <p>模板类型</p>
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
                     * 获取<p>关联规则条数</p>
                     * @return RulesNum <p>关联规则条数</p>
                     * 
                     */
                    int64_t GetRulesNum() const;

                    /**
                     * 设置<p>关联规则条数</p>
                     * @param _rulesNum <p>关联规则条数</p>
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
                     * 获取<p>模板Id</p>
                     * @return TemplateId <p>模板Id</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>模板Id</p>
                     * @param _templateId <p>模板Id</p>
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
                     * 获取<p>协议端口模板，协议类型，4:4层协议，7:7层协议</p>
                     * @return ProtocolType <p>协议端口模板，协议类型，4:4层协议，7:7层协议</p>
                     * 
                     */
                    std::string GetProtocolType() const;

                    /**
                     * 设置<p>协议端口模板，协议类型，4:4层协议，7:7层协议</p>
                     * @param _protocolType <p>协议端口模板，协议类型，4:4层协议，7:7层协议</p>
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
                     * 获取<p>模板包含地址数量</p>
                     * @return IPNum <p>模板包含地址数量</p>
                     * 
                     */
                    int64_t GetIPNum() const;

                    /**
                     * 设置<p>模板包含地址数量</p>
                     * @param _iPNum <p>模板包含地址数量</p>
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
                     * 获取<p>IP版本,0,IPv4;1,IPv6</p>
                     * @return IpVersion <p>IP版本,0,IPv4;1,IPv6</p>
                     * 
                     */
                    int64_t GetIpVersion() const;

                    /**
                     * 设置<p>IP版本,0,IPv4;1,IPv6</p>
                     * @param _ipVersion <p>IP版本,0,IPv4;1,IPv6</p>
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
                     * <p>模板ID</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>模板名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * <p>IP模板</p>
                     */
                    std::string m_ipString;
                    bool m_ipStringHasBeenSet;

                    /**
                     * <p>插入时间</p>
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * <p>修改时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>模板类型</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>关联规则条数</p>
                     */
                    int64_t m_rulesNum;
                    bool m_rulesNumHasBeenSet;

                    /**
                     * <p>模板Id</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>协议端口模板，协议类型，4:4层协议，7:7层协议</p>
                     */
                    std::string m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                    /**
                     * <p>模板包含地址数量</p>
                     */
                    int64_t m_iPNum;
                    bool m_iPNumHasBeenSet;

                    /**
                     * <p>IP版本,0,IPv4;1,IPv6</p>
                     */
                    int64_t m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_TEMPLATELISTINFO_H_
