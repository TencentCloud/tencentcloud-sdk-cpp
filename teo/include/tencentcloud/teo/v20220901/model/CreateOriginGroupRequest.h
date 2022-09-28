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
                     * 获取站点ID。
                     * @return ZoneId 站点ID。
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID。
                     * @param ZoneId 站点ID。
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取源站类型，取值有：
<li>self：自有源站；</li>
<li>third_party：第三方源站；</li>
<li>cos：腾讯云COS源站。</li>
                     * @return OriginType 源站类型，取值有：
<li>self：自有源站；</li>
<li>third_party：第三方源站；</li>
<li>cos：腾讯云COS源站。</li>
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置源站类型，取值有：
<li>self：自有源站；</li>
<li>third_party：第三方源站；</li>
<li>cos：腾讯云COS源站。</li>
                     * @param OriginType 源站类型，取值有：
<li>self：自有源站；</li>
<li>third_party：第三方源站；</li>
<li>cos：腾讯云COS源站。</li>
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取源站组名称。
                     * @return OriginGroupName 源站组名称。
                     */
                    std::string GetOriginGroupName() const;

                    /**
                     * 设置源站组名称。
                     * @param OriginGroupName 源站组名称。
                     */
                    void SetOriginGroupName(const std::string& _originGroupName);

                    /**
                     * 判断参数 OriginGroupName 是否已赋值
                     * @return OriginGroupName 是否已赋值
                     */
                    bool OriginGroupNameHasBeenSet() const;

                    /**
                     * 获取源站配置类型，当OriginType=self时，取值有：
<li>area：按区域配置；</li>
<li>weight： 按权重配置；</li>
<li>proto： 按HTTP协议配置。</li>当OriginType=third_party/cos时放空。
                     * @return ConfigurationType 源站配置类型，当OriginType=self时，取值有：
<li>area：按区域配置；</li>
<li>weight： 按权重配置；</li>
<li>proto： 按HTTP协议配置。</li>当OriginType=third_party/cos时放空。
                     */
                    std::string GetConfigurationType() const;

                    /**
                     * 设置源站配置类型，当OriginType=self时，取值有：
<li>area：按区域配置；</li>
<li>weight： 按权重配置；</li>
<li>proto： 按HTTP协议配置。</li>当OriginType=third_party/cos时放空。
                     * @param ConfigurationType 源站配置类型，当OriginType=self时，取值有：
<li>area：按区域配置；</li>
<li>weight： 按权重配置；</li>
<li>proto： 按HTTP协议配置。</li>当OriginType=third_party/cos时放空。
                     */
                    void SetConfigurationType(const std::string& _configurationType);

                    /**
                     * 判断参数 ConfigurationType 是否已赋值
                     * @return ConfigurationType 是否已赋值
                     */
                    bool ConfigurationTypeHasBeenSet() const;

                    /**
                     * 获取源站记录信息。
                     * @return OriginRecords 源站记录信息。
                     */
                    std::vector<OriginRecord> GetOriginRecords() const;

                    /**
                     * 设置源站记录信息。
                     * @param OriginRecords 源站记录信息。
                     */
                    void SetOriginRecords(const std::vector<OriginRecord>& _originRecords);

                    /**
                     * 判断参数 OriginRecords 是否已赋值
                     * @return OriginRecords 是否已赋值
                     */
                    bool OriginRecordsHasBeenSet() const;

                    /**
                     * 获取回源Host，仅当OriginType=self时可以设置。
                     * @return HostHeader 回源Host，仅当OriginType=self时可以设置。
                     */
                    std::string GetHostHeader() const;

                    /**
                     * 设置回源Host，仅当OriginType=self时可以设置。
                     * @param HostHeader 回源Host，仅当OriginType=self时可以设置。
                     */
                    void SetHostHeader(const std::string& _hostHeader);

                    /**
                     * 判断参数 HostHeader 是否已赋值
                     * @return HostHeader 是否已赋值
                     */
                    bool HostHeaderHasBeenSet() const;

                private:

                    /**
                     * 站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 源站类型，取值有：
<li>self：自有源站；</li>
<li>third_party：第三方源站；</li>
<li>cos：腾讯云COS源站。</li>
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * 源站组名称。
                     */
                    std::string m_originGroupName;
                    bool m_originGroupNameHasBeenSet;

                    /**
                     * 源站配置类型，当OriginType=self时，取值有：
<li>area：按区域配置；</li>
<li>weight： 按权重配置；</li>
<li>proto： 按HTTP协议配置。</li>当OriginType=third_party/cos时放空。
                     */
                    std::string m_configurationType;
                    bool m_configurationTypeHasBeenSet;

                    /**
                     * 源站记录信息。
                     */
                    std::vector<OriginRecord> m_originRecords;
                    bool m_originRecordsHasBeenSet;

                    /**
                     * 回源Host，仅当OriginType=self时可以设置。
                     */
                    std::string m_hostHeader;
                    bool m_hostHeaderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEORIGINGROUPREQUEST_H_
