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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_APPLICATIONPROXYRULE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_APPLICATIONPROXYRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 应用代理规则
                */
                class ApplicationProxyRule : public AbstractModel
                {
                public:
                    ApplicationProxyRule();
                    ~ApplicationProxyRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取协议，取值为TCP或者UDP
                     * @return Proto 协议，取值为TCP或者UDP
                     */
                    std::string GetProto() const;

                    /**
                     * 设置协议，取值为TCP或者UDP
                     * @param Proto 协议，取值为TCP或者UDP
                     */
                    void SetProto(const std::string& _proto);

                    /**
                     * 判断参数 Proto 是否已赋值
                     * @return Proto 是否已赋值
                     */
                    bool ProtoHasBeenSet() const;

                    /**
                     * 获取端口，支持格式：
80：80端口
81-90：81至90端口
                     * @return Port 端口，支持格式：
80：80端口
81-90：81至90端口
                     */
                    std::vector<std::string> GetPort() const;

                    /**
                     * 设置端口，支持格式：
80：80端口
81-90：81至90端口
                     * @param Port 端口，支持格式：
80：80端口
81-90：81至90端口
                     */
                    void SetPort(const std::vector<std::string>& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取源站类型，取值：
custom：手动添加
origins：源站组
                     * @return OriginType 源站类型，取值：
custom：手动添加
origins：源站组
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置源站类型，取值：
custom：手动添加
origins：源站组
                     * @param OriginType 源站类型，取值：
custom：手动添加
origins：源站组
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取源站信息：
当OriginType=custom时，表示一个或多个源站，如：
OriginValue=["8.8.8.8:80","9.9.9.9:80"]
OriginValue=["test.com:80"]

当OriginType=origins时，包含一个元素，表示源站组ID，如：
OriginValue=["origin-xxx"]
                     * @return OriginValue 源站信息：
当OriginType=custom时，表示一个或多个源站，如：
OriginValue=["8.8.8.8:80","9.9.9.9:80"]
OriginValue=["test.com:80"]

当OriginType=origins时，包含一个元素，表示源站组ID，如：
OriginValue=["origin-xxx"]
                     */
                    std::vector<std::string> GetOriginValue() const;

                    /**
                     * 设置源站信息：
当OriginType=custom时，表示一个或多个源站，如：
OriginValue=["8.8.8.8:80","9.9.9.9:80"]
OriginValue=["test.com:80"]

当OriginType=origins时，包含一个元素，表示源站组ID，如：
OriginValue=["origin-xxx"]
                     * @param OriginValue 源站信息：
当OriginType=custom时，表示一个或多个源站，如：
OriginValue=["8.8.8.8:80","9.9.9.9:80"]
OriginValue=["test.com:80"]

当OriginType=origins时，包含一个元素，表示源站组ID，如：
OriginValue=["origin-xxx"]
                     */
                    void SetOriginValue(const std::vector<std::string>& _originValue);

                    /**
                     * 判断参数 OriginValue 是否已赋值
                     * @return OriginValue 是否已赋值
                     */
                    bool OriginValueHasBeenSet() const;

                    /**
                     * 获取规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId 规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleId 规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取状态：
online：启用
offline：停用
progress：部署中
stopping：停用中
fail：部署失败/停用失败
                     * @return Status 状态：
online：启用
offline：停用
progress：部署中
stopping：停用中
fail：部署失败/停用失败
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态：
online：启用
offline：停用
progress：部署中
stopping：停用中
fail：部署失败/停用失败
                     * @param Status 状态：
online：启用
offline：停用
progress：部署中
stopping：停用中
fail：部署失败/停用失败
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取传递客户端IP，当Proto=TCP时，取值：
TOA：TOA
PPV1: Proxy Protocol传递，协议版本V1
PPV2: Proxy Protocol传递，协议版本V2
OFF：不传递
当Proto=UDP时，取值：
PPV2: Proxy Protocol传递，协议版本V2
OFF：不传递
                     * @return ForwardClientIp 传递客户端IP，当Proto=TCP时，取值：
TOA：TOA
PPV1: Proxy Protocol传递，协议版本V1
PPV2: Proxy Protocol传递，协议版本V2
OFF：不传递
当Proto=UDP时，取值：
PPV2: Proxy Protocol传递，协议版本V2
OFF：不传递
                     */
                    std::string GetForwardClientIp() const;

                    /**
                     * 设置传递客户端IP，当Proto=TCP时，取值：
TOA：TOA
PPV1: Proxy Protocol传递，协议版本V1
PPV2: Proxy Protocol传递，协议版本V2
OFF：不传递
当Proto=UDP时，取值：
PPV2: Proxy Protocol传递，协议版本V2
OFF：不传递
                     * @param ForwardClientIp 传递客户端IP，当Proto=TCP时，取值：
TOA：TOA
PPV1: Proxy Protocol传递，协议版本V1
PPV2: Proxy Protocol传递，协议版本V2
OFF：不传递
当Proto=UDP时，取值：
PPV2: Proxy Protocol传递，协议版本V2
OFF：不传递
                     */
                    void SetForwardClientIp(const std::string& _forwardClientIp);

                    /**
                     * 判断参数 ForwardClientIp 是否已赋值
                     * @return ForwardClientIp 是否已赋值
                     */
                    bool ForwardClientIpHasBeenSet() const;

                    /**
                     * 获取是否开启会话保持
                     * @return SessionPersist 是否开启会话保持
                     */
                    bool GetSessionPersist() const;

                    /**
                     * 设置是否开启会话保持
                     * @param SessionPersist 是否开启会话保持
                     */
                    void SetSessionPersist(const bool& _sessionPersist);

                    /**
                     * 判断参数 SessionPersist 是否已赋值
                     * @return SessionPersist 是否已赋值
                     */
                    bool SessionPersistHasBeenSet() const;

                private:

                    /**
                     * 协议，取值为TCP或者UDP
                     */
                    std::string m_proto;
                    bool m_protoHasBeenSet;

                    /**
                     * 端口，支持格式：
80：80端口
81-90：81至90端口
                     */
                    std::vector<std::string> m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 源站类型，取值：
custom：手动添加
origins：源站组
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * 源站信息：
当OriginType=custom时，表示一个或多个源站，如：
OriginValue=["8.8.8.8:80","9.9.9.9:80"]
OriginValue=["test.com:80"]

当OriginType=origins时，包含一个元素，表示源站组ID，如：
OriginValue=["origin-xxx"]
                     */
                    std::vector<std::string> m_originValue;
                    bool m_originValueHasBeenSet;

                    /**
                     * 规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 状态：
online：启用
offline：停用
progress：部署中
stopping：停用中
fail：部署失败/停用失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 传递客户端IP，当Proto=TCP时，取值：
TOA：TOA
PPV1: Proxy Protocol传递，协议版本V1
PPV2: Proxy Protocol传递，协议版本V2
OFF：不传递
当Proto=UDP时，取值：
PPV2: Proxy Protocol传递，协议版本V2
OFF：不传递
                     */
                    std::string m_forwardClientIp;
                    bool m_forwardClientIpHasBeenSet;

                    /**
                     * 是否开启会话保持
                     */
                    bool m_sessionPersist;
                    bool m_sessionPersistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_APPLICATIONPROXYRULE_H_
