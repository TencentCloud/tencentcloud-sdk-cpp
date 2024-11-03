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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_VPCRULEITEM_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_VPCRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/BetaInfoByACL.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * VPC内网间规则
                */
                class VpcRuleItem : public AbstractModel
                {
                public:
                    VpcRuleItem();
                    ~VpcRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问源示例：
net：IP/CIDR(192.168.0.2)
                     * @return SourceContent 访问源示例：
net：IP/CIDR(192.168.0.2)
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置访问源示例：
net：IP/CIDR(192.168.0.2)
                     * @param _sourceContent 访问源示例：
net：IP/CIDR(192.168.0.2)
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
                     * 获取访问源类型，类型可以为：net
                     * @return SourceType 访问源类型，类型可以为：net
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置访问源类型，类型可以为：net
                     * @param _sourceType 访问源类型，类型可以为：net
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
                     * 获取访问目的示例：
net：IP/CIDR(192.168.0.2)
domain：域名规则，例如*.qq.com
                     * @return DestContent 访问目的示例：
net：IP/CIDR(192.168.0.2)
domain：域名规则，例如*.qq.com
                     * 
                     */
                    std::string GetDestContent() const;

                    /**
                     * 设置访问目的示例：
net：IP/CIDR(192.168.0.2)
domain：域名规则，例如*.qq.com
                     * @param _destContent 访问目的示例：
net：IP/CIDR(192.168.0.2)
domain：域名规则，例如*.qq.com
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
                     * 获取访问目的类型，类型可以为：net，domain，dnsparse
                     * @return DestType 访问目的类型，类型可以为：net，domain，dnsparse
                     * 
                     */
                    std::string GetDestType() const;

                    /**
                     * 设置访问目的类型，类型可以为：net，domain，dnsparse
                     * @param _destType 访问目的类型，类型可以为：net，domain，dnsparse
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
                     * 获取协议，可选的值：
TCP
UDP
ICMP
ANY
HTTP
HTTPS
HTTP/HTTPS
SMTP
SMTPS
SMTP/SMTPS
FTP
DNS
TLS/SSL
                     * @return Protocol 协议，可选的值：
TCP
UDP
ICMP
ANY
HTTP
HTTPS
HTTP/HTTPS
SMTP
SMTPS
SMTP/SMTPS
FTP
DNS
TLS/SSL
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议，可选的值：
TCP
UDP
ICMP
ANY
HTTP
HTTPS
HTTP/HTTPS
SMTP
SMTPS
SMTP/SMTPS
FTP
DNS
TLS/SSL
                     * @param _protocol 协议，可选的值：
TCP
UDP
ICMP
ANY
HTTP
HTTPS
HTTP/HTTPS
SMTP
SMTPS
SMTP/SMTPS
FTP
DNS
TLS/SSL
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
                     * 获取访问控制策略的端口。取值：
-1/-1：全部端口
80：80端口
                     * @return Port 访问控制策略的端口。取值：
-1/-1：全部端口
80：80端口
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置访问控制策略的端口。取值：
-1/-1：全部端口
80：80端口
                     * @param _port 访问控制策略的端口。取值：
-1/-1：全部端口
80：80端口
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
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取规则顺序，-1表示最低，1表示最高
                     * @return OrderIndex 规则顺序，-1表示最低，1表示最高
                     * 
                     */
                    int64_t GetOrderIndex() const;

                    /**
                     * 设置规则顺序，-1表示最低，1表示最高
                     * @param _orderIndex 规则顺序，-1表示最低，1表示最高
                     * 
                     */
                    void SetOrderIndex(const int64_t& _orderIndex);

                    /**
                     * 判断参数 OrderIndex 是否已赋值
                     * @return OrderIndex 是否已赋值
                     * 
                     */
                    bool OrderIndexHasBeenSet() const;

                    /**
                     * 获取规则状态，true表示启用，false表示禁用
                     * @return Enable 规则状态，true表示启用，false表示禁用
                     * 
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置规则状态，true表示启用，false表示禁用
                     * @param _enable 规则状态，true表示启用，false表示禁用
                     * 
                     */
                    void SetEnable(const std::string& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取规则生效的范围，是在哪对vpc之间还是针对所有vpc间生效
                     * @return EdgeId 规则生效的范围，是在哪对vpc之间还是针对所有vpc间生效
                     * 
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置规则生效的范围，是在哪对vpc之间还是针对所有vpc间生效
                     * @param _edgeId 规则生效的范围，是在哪对vpc之间还是针对所有vpc间生效
                     * 
                     */
                    void SetEdgeId(const std::string& _edgeId);

                    /**
                     * 判断参数 EdgeId 是否已赋值
                     * @return EdgeId 是否已赋值
                     * 
                     */
                    bool EdgeIdHasBeenSet() const;

                    /**
                     * 获取规则对应的唯一id，添加规则时忽略该字段，修改该规则时需要填写Uuid;查询返回时会返回该参数
                     * @return Uuid 规则对应的唯一id，添加规则时忽略该字段，修改该规则时需要填写Uuid;查询返回时会返回该参数
                     * 
                     */
                    int64_t GetUuid() const;

                    /**
                     * 设置规则对应的唯一id，添加规则时忽略该字段，修改该规则时需要填写Uuid;查询返回时会返回该参数
                     * @param _uuid 规则对应的唯一id，添加规则时忽略该字段，修改该规则时需要填写Uuid;查询返回时会返回该参数
                     * 
                     */
                    void SetUuid(const int64_t& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取规则的命中次数，增删改查规则时无需传入此参数，主要用于返回查询结果数据
                     * @return DetectedTimes 规则的命中次数，增删改查规则时无需传入此参数，主要用于返回查询结果数据
                     * 
                     */
                    int64_t GetDetectedTimes() const;

                    /**
                     * 设置规则的命中次数，增删改查规则时无需传入此参数，主要用于返回查询结果数据
                     * @param _detectedTimes 规则的命中次数，增删改查规则时无需传入此参数，主要用于返回查询结果数据
                     * 
                     */
                    void SetDetectedTimes(const int64_t& _detectedTimes);

                    /**
                     * 判断参数 DetectedTimes 是否已赋值
                     * @return DetectedTimes 是否已赋值
                     * 
                     */
                    bool DetectedTimesHasBeenSet() const;

                    /**
                     * 获取EdgeId对应的这对VPC间防火墙的描述
                     * @return EdgeName EdgeId对应的这对VPC间防火墙的描述
                     * 
                     */
                    std::string GetEdgeName() const;

                    /**
                     * 设置EdgeId对应的这对VPC间防火墙的描述
                     * @param _edgeName EdgeId对应的这对VPC间防火墙的描述
                     * 
                     */
                    void SetEdgeName(const std::string& _edgeName);

                    /**
                     * 判断参数 EdgeName 是否已赋值
                     * @return EdgeName 是否已赋值
                     * 
                     */
                    bool EdgeNameHasBeenSet() const;

                    /**
                     * 获取内部使用的uuid，一般情况下不会使用到该字段
                     * @return InternalUuid 内部使用的uuid，一般情况下不会使用到该字段
                     * 
                     */
                    int64_t GetInternalUuid() const;

                    /**
                     * 设置内部使用的uuid，一般情况下不会使用到该字段
                     * @param _internalUuid 内部使用的uuid，一般情况下不会使用到该字段
                     * 
                     */
                    void SetInternalUuid(const int64_t& _internalUuid);

                    /**
                     * 判断参数 InternalUuid 是否已赋值
                     * @return InternalUuid 是否已赋值
                     * 
                     */
                    bool InternalUuidHasBeenSet() const;

                    /**
                     * 获取规则被删除：1，已删除；0，未删除
                     * @return Deleted 规则被删除：1，已删除；0，未删除
                     * 
                     */
                    int64_t GetDeleted() const;

                    /**
                     * 设置规则被删除：1，已删除；0，未删除
                     * @param _deleted 规则被删除：1，已删除；0，未删除
                     * 
                     */
                    void SetDeleted(const int64_t& _deleted);

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     * 
                     */
                    bool DeletedHasBeenSet() const;

                    /**
                     * 获取规则生效的防火墙实例ID
                     * @return FwGroupId 规则生效的防火墙实例ID
                     * 
                     */
                    std::string GetFwGroupId() const;

                    /**
                     * 设置规则生效的防火墙实例ID
                     * @param _fwGroupId 规则生效的防火墙实例ID
                     * 
                     */
                    void SetFwGroupId(const std::string& _fwGroupId);

                    /**
                     * 判断参数 FwGroupId 是否已赋值
                     * @return FwGroupId 是否已赋值
                     * 
                     */
                    bool FwGroupIdHasBeenSet() const;

                    /**
                     * 获取防火墙名称
                     * @return FwGroupName 防火墙名称
                     * 
                     */
                    std::string GetFwGroupName() const;

                    /**
                     * 设置防火墙名称
                     * @param _fwGroupName 防火墙名称
                     * 
                     */
                    void SetFwGroupName(const std::string& _fwGroupName);

                    /**
                     * 判断参数 FwGroupName 是否已赋值
                     * @return FwGroupName 是否已赋值
                     * 
                     */
                    bool FwGroupNameHasBeenSet() const;

                    /**
                     * 获取beta任务详情
                     * @return BetaList beta任务详情
                     * 
                     */
                    std::vector<BetaInfoByACL> GetBetaList() const;

                    /**
                     * 设置beta任务详情
                     * @param _betaList beta任务详情
                     * 
                     */
                    void SetBetaList(const std::vector<BetaInfoByACL>& _betaList);

                    /**
                     * 判断参数 BetaList 是否已赋值
                     * @return BetaList 是否已赋值
                     * 
                     */
                    bool BetaListHasBeenSet() const;

                    /**
                     * 获取端口协议组ID
                     * @return ParamTemplateId 端口协议组ID
                     * 
                     */
                    std::string GetParamTemplateId() const;

                    /**
                     * 设置端口协议组ID
                     * @param _paramTemplateId 端口协议组ID
                     * 
                     */
                    void SetParamTemplateId(const std::string& _paramTemplateId);

                    /**
                     * 判断参数 ParamTemplateId 是否已赋值
                     * @return ParamTemplateId 是否已赋值
                     * 
                     */
                    bool ParamTemplateIdHasBeenSet() const;

                    /**
                     * 获取端口协议组名称
                     * @return ParamTemplateName 端口协议组名称
                     * 
                     */
                    std::string GetParamTemplateName() const;

                    /**
                     * 设置端口协议组名称
                     * @param _paramTemplateName 端口协议组名称
                     * 
                     */
                    void SetParamTemplateName(const std::string& _paramTemplateName);

                    /**
                     * 判断参数 ParamTemplateName 是否已赋值
                     * @return ParamTemplateName 是否已赋值
                     * 
                     */
                    bool ParamTemplateNameHasBeenSet() const;

                    /**
                     * 获取访问目的名称
                     * @return TargetName 访问目的名称
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置访问目的名称
                     * @param _targetName 访问目的名称
                     * 
                     */
                    void SetTargetName(const std::string& _targetName);

                    /**
                     * 判断参数 TargetName 是否已赋值
                     * @return TargetName 是否已赋值
                     * 
                     */
                    bool TargetNameHasBeenSet() const;

                    /**
                     * 获取访问源名称
                     * @return SourceName 访问源名称
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置访问源名称
                     * @param _sourceName 访问源名称
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取Ip版本，0：IPv4，1：IPv6，默认为IPv4
                     * @return IpVersion Ip版本，0：IPv4，1：IPv6，默认为IPv4
                     * 
                     */
                    int64_t GetIpVersion() const;

                    /**
                     * 设置Ip版本，0：IPv4，1：IPv6，默认为IPv4
                     * @param _ipVersion Ip版本，0：IPv4，1：IPv6，默认为IPv4
                     * 
                     */
                    void SetIpVersion(const int64_t& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                    /**
                     * 获取是否是无效规则，0 表示有效规则，1 表示无效规则，出参场景返回使用
                     * @return Invalid 是否是无效规则，0 表示有效规则，1 表示无效规则，出参场景返回使用
                     * 
                     */
                    int64_t GetInvalid() const;

                    /**
                     * 设置是否是无效规则，0 表示有效规则，1 表示无效规则，出参场景返回使用
                     * @param _invalid 是否是无效规则，0 表示有效规则，1 表示无效规则，出参场景返回使用
                     * 
                     */
                    void SetInvalid(const int64_t& _invalid);

                    /**
                     * 判断参数 Invalid 是否已赋值
                     * @return Invalid 是否已赋值
                     * 
                     */
                    bool InvalidHasBeenSet() const;

                private:

                    /**
                     * 访问源示例：
net：IP/CIDR(192.168.0.2)
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * 访问源类型，类型可以为：net
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 访问目的示例：
net：IP/CIDR(192.168.0.2)
domain：域名规则，例如*.qq.com
                     */
                    std::string m_destContent;
                    bool m_destContentHasBeenSet;

                    /**
                     * 访问目的类型，类型可以为：net，domain，dnsparse
                     */
                    std::string m_destType;
                    bool m_destTypeHasBeenSet;

                    /**
                     * 协议，可选的值：
TCP
UDP
ICMP
ANY
HTTP
HTTPS
HTTP/HTTPS
SMTP
SMTPS
SMTP/SMTPS
FTP
DNS
TLS/SSL
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 访问控制策略中设置的流量通过云防火墙的方式。取值：
accept：放行
drop：拒绝
log：观察
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * 访问控制策略的端口。取值：
-1/-1：全部端口
80：80端口
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 规则顺序，-1表示最低，1表示最高
                     */
                    int64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * 规则状态，true表示启用，false表示禁用
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 规则生效的范围，是在哪对vpc之间还是针对所有vpc间生效
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * 规则对应的唯一id，添加规则时忽略该字段，修改该规则时需要填写Uuid;查询返回时会返回该参数
                     */
                    int64_t m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 规则的命中次数，增删改查规则时无需传入此参数，主要用于返回查询结果数据
                     */
                    int64_t m_detectedTimes;
                    bool m_detectedTimesHasBeenSet;

                    /**
                     * EdgeId对应的这对VPC间防火墙的描述
                     */
                    std::string m_edgeName;
                    bool m_edgeNameHasBeenSet;

                    /**
                     * 内部使用的uuid，一般情况下不会使用到该字段
                     */
                    int64_t m_internalUuid;
                    bool m_internalUuidHasBeenSet;

                    /**
                     * 规则被删除：1，已删除；0，未删除
                     */
                    int64_t m_deleted;
                    bool m_deletedHasBeenSet;

                    /**
                     * 规则生效的防火墙实例ID
                     */
                    std::string m_fwGroupId;
                    bool m_fwGroupIdHasBeenSet;

                    /**
                     * 防火墙名称
                     */
                    std::string m_fwGroupName;
                    bool m_fwGroupNameHasBeenSet;

                    /**
                     * beta任务详情
                     */
                    std::vector<BetaInfoByACL> m_betaList;
                    bool m_betaListHasBeenSet;

                    /**
                     * 端口协议组ID
                     */
                    std::string m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * 端口协议组名称
                     */
                    std::string m_paramTemplateName;
                    bool m_paramTemplateNameHasBeenSet;

                    /**
                     * 访问目的名称
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * 访问源名称
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * Ip版本，0：IPv4，1：IPv6，默认为IPv4
                     */
                    int64_t m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * 是否是无效规则，0 表示有效规则，1 表示无效规则，出参场景返回使用
                     */
                    int64_t m_invalid;
                    bool m_invalidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_VPCRULEITEM_H_
