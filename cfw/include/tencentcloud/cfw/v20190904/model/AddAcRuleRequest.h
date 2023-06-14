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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_ADDACRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_ADDACRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * AddAcRule请求参数结构体
                */
                class AddAcRuleRequest : public AbstractModel
                {
                public:
                    AddAcRuleRequest();
                    ~AddAcRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取-1表示优先级最低，1表示优先级最高
                     * @return OrderIndex -1表示优先级最低，1表示优先级最高
                     * 
                     */
                    std::string GetOrderIndex() const;

                    /**
                     * 设置-1表示优先级最低，1表示优先级最高
                     * @param _orderIndex -1表示优先级最低，1表示优先级最高
                     * 
                     */
                    void SetOrderIndex(const std::string& _orderIndex);

                    /**
                     * 判断参数 OrderIndex 是否已赋值
                     * @return OrderIndex 是否已赋值
                     * 
                     */
                    bool OrderIndexHasBeenSet() const;

                    /**
                     * 获取访问控制策略中设置的流量通过云防火墙的方式。取值：
accept：放行
drop：拒绝
log：观察
                     * @return RuleAction 访问控制策略中设置的流量通过云防火墙的方式。取值：
accept：放行
drop：拒绝
log：观察
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置访问控制策略中设置的流量通过云防火墙的方式。取值：
accept：放行
drop：拒绝
log：观察
                     * @param _ruleAction 访问控制策略中设置的流量通过云防火墙的方式。取值：
accept：放行
drop：拒绝
log：观察
                     * 
                     */
                    void SetRuleAction(const std::string& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                    /**
                     * 获取访问控制策略的流量方向。取值：
in：外对内流量访问控制
out：内对外流量访问控制
                     * @return Direction 访问控制策略的流量方向。取值：
in：外对内流量访问控制
out：内对外流量访问控制
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置访问控制策略的流量方向。取值：
in：外对内流量访问控制
out：内对外流量访问控制
                     * @param _direction 访问控制策略的流量方向。取值：
in：外对内流量访问控制
out：内对外流量访问控制
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取访问控制策略的描述信息
                     * @return Description 访问控制策略的描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置访问控制策略的描述信息
                     * @param _description 访问控制策略的描述信息
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取访问控制策略中的源地址类型。取值：
net：源IP或网段（IP或者CIDR）
location：源区域
template：云防火墙地址模板
instance：实例id
vendor：云厂商
                     * @return SourceType 访问控制策略中的源地址类型。取值：
net：源IP或网段（IP或者CIDR）
location：源区域
template：云防火墙地址模板
instance：实例id
vendor：云厂商
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置访问控制策略中的源地址类型。取值：
net：源IP或网段（IP或者CIDR）
location：源区域
template：云防火墙地址模板
instance：实例id
vendor：云厂商
                     * @param _sourceType 访问控制策略中的源地址类型。取值：
net：源IP或网段（IP或者CIDR）
location：源区域
template：云防火墙地址模板
instance：实例id
vendor：云厂商
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取访问控制策略中的源地址。取值：
当SourceType为net时，SourceContent为源IP地址或者CIDR地址。
例如：1.1.1.0/24

当SourceType为template时，SourceContent为源地址模板id。

当SourceType为location时，SourceContent为源区域。
例如["BJ11", "ZB"]

当SourceType为instance时，SourceContent为该实例id对应的公网ip。
例如ins-xxxxx

当SourceType为vendor时，SourceContent为所选择厂商的公网ip列表。
例如：aws,huawei,tencent,aliyun,azure,all代表以上五个
                     * @return SourceContent 访问控制策略中的源地址。取值：
当SourceType为net时，SourceContent为源IP地址或者CIDR地址。
例如：1.1.1.0/24

当SourceType为template时，SourceContent为源地址模板id。

当SourceType为location时，SourceContent为源区域。
例如["BJ11", "ZB"]

当SourceType为instance时，SourceContent为该实例id对应的公网ip。
例如ins-xxxxx

当SourceType为vendor时，SourceContent为所选择厂商的公网ip列表。
例如：aws,huawei,tencent,aliyun,azure,all代表以上五个
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置访问控制策略中的源地址。取值：
当SourceType为net时，SourceContent为源IP地址或者CIDR地址。
例如：1.1.1.0/24

当SourceType为template时，SourceContent为源地址模板id。

当SourceType为location时，SourceContent为源区域。
例如["BJ11", "ZB"]

当SourceType为instance时，SourceContent为该实例id对应的公网ip。
例如ins-xxxxx

当SourceType为vendor时，SourceContent为所选择厂商的公网ip列表。
例如：aws,huawei,tencent,aliyun,azure,all代表以上五个
                     * @param _sourceContent 访问控制策略中的源地址。取值：
当SourceType为net时，SourceContent为源IP地址或者CIDR地址。
例如：1.1.1.0/24

当SourceType为template时，SourceContent为源地址模板id。

当SourceType为location时，SourceContent为源区域。
例如["BJ11", "ZB"]

当SourceType为instance时，SourceContent为该实例id对应的公网ip。
例如ins-xxxxx

当SourceType为vendor时，SourceContent为所选择厂商的公网ip列表。
例如：aws,huawei,tencent,aliyun,azure,all代表以上五个
                     * 
                     */
                    void SetSourceContent(const std::string& _sourceContent);

                    /**
                     * 判断参数 SourceContent 是否已赋值
                     * @return SourceContent 是否已赋值
                     * 
                     */
                    bool SourceContentHasBeenSet() const;

                    /**
                     * 获取访问控制策略中的目的地址类型。取值：
net：目的IP或者网段（IP或者CIDR）
location：源区域
template：云防火墙地址模板
instance：实例id
vendor：云厂商
domain: 域名或者ip
                     * @return DestType 访问控制策略中的目的地址类型。取值：
net：目的IP或者网段（IP或者CIDR）
location：源区域
template：云防火墙地址模板
instance：实例id
vendor：云厂商
domain: 域名或者ip
                     * 
                     */
                    std::string GetDestType() const;

                    /**
                     * 设置访问控制策略中的目的地址类型。取值：
net：目的IP或者网段（IP或者CIDR）
location：源区域
template：云防火墙地址模板
instance：实例id
vendor：云厂商
domain: 域名或者ip
                     * @param _destType 访问控制策略中的目的地址类型。取值：
net：目的IP或者网段（IP或者CIDR）
location：源区域
template：云防火墙地址模板
instance：实例id
vendor：云厂商
domain: 域名或者ip
                     * 
                     */
                    void SetDestType(const std::string& _destType);

                    /**
                     * 判断参数 DestType 是否已赋值
                     * @return DestType 是否已赋值
                     * 
                     */
                    bool DestTypeHasBeenSet() const;

                    /**
                     * 获取访问控制策略中的目的地址。取值：
当DestType为net时，DestContent为源IP地址或者CIDR地址。
例如：1.1.1.0/24

当DestType为template时，DestContent为源地址模板id。

当DestType为location时，DestContent为源区域。
例如["BJ11", "ZB"]

当DestType为instance时，DestContent为该实例id对应的公网ip。
例如ins-xxxxx

当DestType为domain时，DestContent为该实例id对应的域名规则。
例如*.qq.com

当DestType为vendor时，DestContent为所选择厂商的公网ip列表。
例如：aws,huawei,tencent,aliyun,azure,all代表以上五个
                     * @return DestContent 访问控制策略中的目的地址。取值：
当DestType为net时，DestContent为源IP地址或者CIDR地址。
例如：1.1.1.0/24

当DestType为template时，DestContent为源地址模板id。

当DestType为location时，DestContent为源区域。
例如["BJ11", "ZB"]

当DestType为instance时，DestContent为该实例id对应的公网ip。
例如ins-xxxxx

当DestType为domain时，DestContent为该实例id对应的域名规则。
例如*.qq.com

当DestType为vendor时，DestContent为所选择厂商的公网ip列表。
例如：aws,huawei,tencent,aliyun,azure,all代表以上五个
                     * 
                     */
                    std::string GetDestContent() const;

                    /**
                     * 设置访问控制策略中的目的地址。取值：
当DestType为net时，DestContent为源IP地址或者CIDR地址。
例如：1.1.1.0/24

当DestType为template时，DestContent为源地址模板id。

当DestType为location时，DestContent为源区域。
例如["BJ11", "ZB"]

当DestType为instance时，DestContent为该实例id对应的公网ip。
例如ins-xxxxx

当DestType为domain时，DestContent为该实例id对应的域名规则。
例如*.qq.com

当DestType为vendor时，DestContent为所选择厂商的公网ip列表。
例如：aws,huawei,tencent,aliyun,azure,all代表以上五个
                     * @param _destContent 访问控制策略中的目的地址。取值：
当DestType为net时，DestContent为源IP地址或者CIDR地址。
例如：1.1.1.0/24

当DestType为template时，DestContent为源地址模板id。

当DestType为location时，DestContent为源区域。
例如["BJ11", "ZB"]

当DestType为instance时，DestContent为该实例id对应的公网ip。
例如ins-xxxxx

当DestType为domain时，DestContent为该实例id对应的域名规则。
例如*.qq.com

当DestType为vendor时，DestContent为所选择厂商的公网ip列表。
例如：aws,huawei,tencent,aliyun,azure,all代表以上五个
                     * 
                     */
                    void SetDestContent(const std::string& _destContent);

                    /**
                     * 判断参数 DestContent 是否已赋值
                     * @return DestContent 是否已赋值
                     * 
                     */
                    bool DestContentHasBeenSet() const;

                    /**
                     * 获取访问控制策略的端口。取值：
-1/-1：全部端口
80,443：80或者443
                     * @return Port 访问控制策略的端口。取值：
-1/-1：全部端口
80,443：80或者443
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置访问控制策略的端口。取值：
-1/-1：全部端口
80,443：80或者443
                     * @param _port 访问控制策略的端口。取值：
-1/-1：全部端口
80,443：80或者443
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取访问控制策略中流量访问的协议类型。取值：TCP，目前互联网边界规则只能支持TCP，不传参数默认就是TCP
                     * @return Protocol 访问控制策略中流量访问的协议类型。取值：TCP，目前互联网边界规则只能支持TCP，不传参数默认就是TCP
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置访问控制策略中流量访问的协议类型。取值：TCP，目前互联网边界规则只能支持TCP，不传参数默认就是TCP
                     * @param _protocol 访问控制策略中流量访问的协议类型。取值：TCP，目前互联网边界规则只能支持TCP，不传参数默认就是TCP
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取七层协议，取值：
HTTP/HTTPS
TLS/SSL
                     * @return ApplicationName 七层协议，取值：
HTTP/HTTPS
TLS/SSL
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置七层协议，取值：
HTTP/HTTPS
TLS/SSL
                     * @param _applicationName 七层协议，取值：
HTTP/HTTPS
TLS/SSL
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取是否启用规则，默认为启用，取值：
true为启用，false为不启用
                     * @return Enable 是否启用规则，默认为启用，取值：
true为启用，false为不启用
                     * 
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置是否启用规则，默认为启用，取值：
true为启用，false为不启用
                     * @param _enable 是否启用规则，默认为启用，取值：
true为启用，false为不启用
                     * 
                     */
                    void SetEnable(const std::string& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * -1表示优先级最低，1表示优先级最高
                     */
                    std::string m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * 访问控制策略中设置的流量通过云防火墙的方式。取值：
accept：放行
drop：拒绝
log：观察
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * 访问控制策略的流量方向。取值：
in：外对内流量访问控制
out：内对外流量访问控制
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 访问控制策略的描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 访问控制策略中的源地址类型。取值：
net：源IP或网段（IP或者CIDR）
location：源区域
template：云防火墙地址模板
instance：实例id
vendor：云厂商
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 访问控制策略中的源地址。取值：
当SourceType为net时，SourceContent为源IP地址或者CIDR地址。
例如：1.1.1.0/24

当SourceType为template时，SourceContent为源地址模板id。

当SourceType为location时，SourceContent为源区域。
例如["BJ11", "ZB"]

当SourceType为instance时，SourceContent为该实例id对应的公网ip。
例如ins-xxxxx

当SourceType为vendor时，SourceContent为所选择厂商的公网ip列表。
例如：aws,huawei,tencent,aliyun,azure,all代表以上五个
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * 访问控制策略中的目的地址类型。取值：
net：目的IP或者网段（IP或者CIDR）
location：源区域
template：云防火墙地址模板
instance：实例id
vendor：云厂商
domain: 域名或者ip
                     */
                    std::string m_destType;
                    bool m_destTypeHasBeenSet;

                    /**
                     * 访问控制策略中的目的地址。取值：
当DestType为net时，DestContent为源IP地址或者CIDR地址。
例如：1.1.1.0/24

当DestType为template时，DestContent为源地址模板id。

当DestType为location时，DestContent为源区域。
例如["BJ11", "ZB"]

当DestType为instance时，DestContent为该实例id对应的公网ip。
例如ins-xxxxx

当DestType为domain时，DestContent为该实例id对应的域名规则。
例如*.qq.com

当DestType为vendor时，DestContent为所选择厂商的公网ip列表。
例如：aws,huawei,tencent,aliyun,azure,all代表以上五个
                     */
                    std::string m_destContent;
                    bool m_destContentHasBeenSet;

                    /**
                     * 访问控制策略的端口。取值：
-1/-1：全部端口
80,443：80或者443
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 访问控制策略中流量访问的协议类型。取值：TCP，目前互联网边界规则只能支持TCP，不传参数默认就是TCP
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 七层协议，取值：
HTTP/HTTPS
TLS/SSL
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 是否启用规则，默认为启用，取值：
true为启用，false为不启用
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ADDACRULEREQUEST_H_
