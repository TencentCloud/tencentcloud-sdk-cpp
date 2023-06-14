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

#ifndef TENCENTCLOUD_TSW_V20200924_MODEL_AGENTSHELL_H_
#define TENCENTCLOUD_TSW_V20200924_MODEL_AGENTSHELL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsw
    {
        namespace V20200924
        {
            namespace Model
            {
                /**
                * agent安装脚本串
                */
                class AgentShell : public AbstractModel
                {
                public:
                    AgentShell();
                    ~AgentShell() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取鉴权token
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Token 鉴权token
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置鉴权token
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _token 鉴权token
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取数据接收Ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EtlIp 数据接收Ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEtlIp() const;

                    /**
                     * 设置数据接收Ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _etlIp 数据接收Ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEtlIp(const std::string& _etlIp);

                    /**
                     * 判断参数 EtlIp 是否已赋值
                     * @return EtlIp 是否已赋值
                     * 
                     */
                    bool EtlIpHasBeenSet() const;

                    /**
                     * 获取数据接收port
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EtlPort 数据接收port
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEtlPort() const;

                    /**
                     * 设置数据接收port
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _etlPort 数据接收port
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEtlPort(const std::string& _etlPort);

                    /**
                     * 判断参数 EtlPort 是否已赋值
                     * @return EtlPort 是否已赋值
                     * 
                     */
                    bool EtlPortHasBeenSet() const;

                    /**
                     * 获取手动接入脚本串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ByHandAccess 手动接入脚本串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetByHandAccess() const;

                    /**
                     * 设置手动接入脚本串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _byHandAccess 手动接入脚本串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetByHandAccess(const std::string& _byHandAccess);

                    /**
                     * 判断参数 ByHandAccess 是否已赋值
                     * @return ByHandAccess 是否已赋值
                     * 
                     */
                    bool ByHandAccessHasBeenSet() const;

                    /**
                     * 获取自动接入脚本串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ByShellAccess 自动接入脚本串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetByShellAccess() const;

                    /**
                     * 设置自动接入脚本串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _byShellAccess 自动接入脚本串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetByShellAccess(const std::string& _byShellAccess);

                    /**
                     * 判断参数 ByShellAccess 是否已赋值
                     * @return ByShellAccess 是否已赋值
                     * 
                     */
                    bool ByShellAccessHasBeenSet() const;

                    /**
                     * 获取SkyWalking数据接收port
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SkyWalkingPort SkyWalking数据接收port
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSkyWalkingPort() const;

                    /**
                     * 设置SkyWalking数据接收port
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _skyWalkingPort SkyWalking数据接收port
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSkyWalkingPort(const std::string& _skyWalkingPort);

                    /**
                     * 判断参数 SkyWalkingPort 是否已赋值
                     * @return SkyWalkingPort 是否已赋值
                     * 
                     */
                    bool SkyWalkingPortHasBeenSet() const;

                    /**
                     * 获取Zipkin数据接收port
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZipkinPort Zipkin数据接收port
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZipkinPort() const;

                    /**
                     * 设置Zipkin数据接收port
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zipkinPort Zipkin数据接收port
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZipkinPort(const std::string& _zipkinPort);

                    /**
                     * 判断参数 ZipkinPort 是否已赋值
                     * @return ZipkinPort 是否已赋值
                     * 
                     */
                    bool ZipkinPortHasBeenSet() const;

                    /**
                     * 获取Jaeger数据接收port
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JaegerPort Jaeger数据接收port
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJaegerPort() const;

                    /**
                     * 设置Jaeger数据接收port
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jaegerPort Jaeger数据接收port
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJaegerPort(const std::string& _jaegerPort);

                    /**
                     * 判断参数 JaegerPort 是否已赋值
                     * @return JaegerPort 是否已赋值
                     * 
                     */
                    bool JaegerPortHasBeenSet() const;

                private:

                    /**
                     * 鉴权token
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * 数据接收Ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_etlIp;
                    bool m_etlIpHasBeenSet;

                    /**
                     * 数据接收port
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_etlPort;
                    bool m_etlPortHasBeenSet;

                    /**
                     * 手动接入脚本串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_byHandAccess;
                    bool m_byHandAccessHasBeenSet;

                    /**
                     * 自动接入脚本串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_byShellAccess;
                    bool m_byShellAccessHasBeenSet;

                    /**
                     * SkyWalking数据接收port
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_skyWalkingPort;
                    bool m_skyWalkingPortHasBeenSet;

                    /**
                     * Zipkin数据接收port
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zipkinPort;
                    bool m_zipkinPortHasBeenSet;

                    /**
                     * Jaeger数据接收port
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jaegerPort;
                    bool m_jaegerPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSW_V20200924_MODEL_AGENTSHELL_H_
