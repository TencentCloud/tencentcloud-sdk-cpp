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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEORIGINGROUPREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEORIGINGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginRecord.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateOriginGroup请求参数结构体
                */
                class CreateOriginGroupRequest : public AbstractModel
                {
                public:
                    CreateOriginGroupRequest();
                    ~CreateOriginGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID
                     * @return ZoneId 站点 ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID
                     * @param _zoneId 站点 ID
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取源站组名称，可输入1 - 200个字符，允许的字符为 a - z, A - Z, 0 - 9, _, - 。
                     * @return Name 源站组名称，可输入1 - 200个字符，允许的字符为 a - z, A - Z, 0 - 9, _, - 。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置源站组名称，可输入1 - 200个字符，允许的字符为 a - z, A - Z, 0 - 9, _, - 。
                     * @param _name 源站组名称，可输入1 - 200个字符，允许的字符为 a - z, A - Z, 0 - 9, _, - 。
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
                     * 获取源站组类型，此参数必填，取值有：
<li>GENERAL：通用型源站组，仅支持添加 IP/域名 源站，可以被域名服务、规则引擎、四层代理、通用型负载均衡、HTTP 专用型负载均衡引用；</li>
<li>HTTP： HTTP 专用型源站组，支持添加 IP/域名、对象存储源站作为源站，无法被四层代理引用，仅支持被添加加速域名、规则引擎-修改源站、HTTP 专用型负载均衡引用。</li>
                     * @return Type 源站组类型，此参数必填，取值有：
<li>GENERAL：通用型源站组，仅支持添加 IP/域名 源站，可以被域名服务、规则引擎、四层代理、通用型负载均衡、HTTP 专用型负载均衡引用；</li>
<li>HTTP： HTTP 专用型源站组，支持添加 IP/域名、对象存储源站作为源站，无法被四层代理引用，仅支持被添加加速域名、规则引擎-修改源站、HTTP 专用型负载均衡引用。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置源站组类型，此参数必填，取值有：
<li>GENERAL：通用型源站组，仅支持添加 IP/域名 源站，可以被域名服务、规则引擎、四层代理、通用型负载均衡、HTTP 专用型负载均衡引用；</li>
<li>HTTP： HTTP 专用型源站组，支持添加 IP/域名、对象存储源站作为源站，无法被四层代理引用，仅支持被添加加速域名、规则引擎-修改源站、HTTP 专用型负载均衡引用。</li>
                     * @param _type 源站组类型，此参数必填，取值有：
<li>GENERAL：通用型源站组，仅支持添加 IP/域名 源站，可以被域名服务、规则引擎、四层代理、通用型负载均衡、HTTP 专用型负载均衡引用；</li>
<li>HTTP： HTTP 专用型源站组，支持添加 IP/域名、对象存储源站作为源站，无法被四层代理引用，仅支持被添加加速域名、规则引擎-修改源站、HTTP 专用型负载均衡引用。</li>
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
                     * 获取源站记录信息，此参数必填。
                     * @return Records 源站记录信息，此参数必填。
                     * 
                     */
                    std::vector<OriginRecord> GetRecords() const;

                    /**
                     * 设置源站记录信息，此参数必填。
                     * @param _records 源站记录信息，此参数必填。
                     * 
                     */
                    void SetRecords(const std::vector<OriginRecord>& _records);

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                    /**
                     * 获取回源 Host Header，仅 Type = HTTP 时传入生效，规则引擎修改 Host Header 配置优先级高于源站组的 Host Header。
                     * @return HostHeader 回源 Host Header，仅 Type = HTTP 时传入生效，规则引擎修改 Host Header 配置优先级高于源站组的 Host Header。
                     * 
                     */
                    std::string GetHostHeader() const;

                    /**
                     * 设置回源 Host Header，仅 Type = HTTP 时传入生效，规则引擎修改 Host Header 配置优先级高于源站组的 Host Header。
                     * @param _hostHeader 回源 Host Header，仅 Type = HTTP 时传入生效，规则引擎修改 Host Header 配置优先级高于源站组的 Host Header。
                     * 
                     */
                    void SetHostHeader(const std::string& _hostHeader);

                    /**
                     * 判断参数 HostHeader 是否已赋值
                     * @return HostHeader 是否已赋值
                     * 
                     */
                    bool HostHeaderHasBeenSet() const;

                private:

                    /**
                     * 站点 ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 源站组名称，可输入1 - 200个字符，允许的字符为 a - z, A - Z, 0 - 9, _, - 。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 源站组类型，此参数必填，取值有：
<li>GENERAL：通用型源站组，仅支持添加 IP/域名 源站，可以被域名服务、规则引擎、四层代理、通用型负载均衡、HTTP 专用型负载均衡引用；</li>
<li>HTTP： HTTP 专用型源站组，支持添加 IP/域名、对象存储源站作为源站，无法被四层代理引用，仅支持被添加加速域名、规则引擎-修改源站、HTTP 专用型负载均衡引用。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 源站记录信息，此参数必填。
                     */
                    std::vector<OriginRecord> m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * 回源 Host Header，仅 Type = HTTP 时传入生效，规则引擎修改 Host Header 配置优先级高于源站组的 Host Header。
                     */
                    std::string m_hostHeader;
                    bool m_hostHeaderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEORIGINGROUPREQUEST_H_
