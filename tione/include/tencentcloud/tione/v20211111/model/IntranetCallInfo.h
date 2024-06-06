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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_INTRANETCALLINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_INTRANETCALLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/IngressPrivateLinkInfo.h>
#include <tencentcloud/tione/v20211111/model/ServiceEIPInfo.h>
#include <tencentcloud/tione/v20211111/model/DefaultInnerCallInfo.h>
#include <tencentcloud/tione/v20211111/model/PrivateLinkInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 内网调用信息
                */
                class IntranetCallInfo : public AbstractModel
                {
                public:
                    IntranetCallInfo();
                    ~IntranetCallInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取私有连接通道信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IngressPrivateLinkInfo 私有连接通道信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IngressPrivateLinkInfo GetIngressPrivateLinkInfo() const;

                    /**
                     * 设置私有连接通道信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ingressPrivateLinkInfo 私有连接通道信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIngressPrivateLinkInfo(const IngressPrivateLinkInfo& _ingressPrivateLinkInfo);

                    /**
                     * 判断参数 IngressPrivateLinkInfo 是否已赋值
                     * @return IngressPrivateLinkInfo 是否已赋值
                     * 
                     */
                    bool IngressPrivateLinkInfoHasBeenSet() const;

                    /**
                     * 获取共享弹性网卡信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceEIPInfo 共享弹性网卡信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ServiceEIPInfo> GetServiceEIPInfo() const;

                    /**
                     * 设置共享弹性网卡信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceEIPInfo 共享弹性网卡信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceEIPInfo(const std::vector<ServiceEIPInfo>& _serviceEIPInfo);

                    /**
                     * 判断参数 ServiceEIPInfo 是否已赋值
                     * @return ServiceEIPInfo 是否已赋值
                     * 
                     */
                    bool ServiceEIPInfoHasBeenSet() const;

                    /**
                     * 获取默认内网调用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultInnerCallInfos 默认内网调用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DefaultInnerCallInfo> GetDefaultInnerCallInfos() const;

                    /**
                     * 设置默认内网调用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultInnerCallInfos 默认内网调用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefaultInnerCallInfos(const std::vector<DefaultInnerCallInfo>& _defaultInnerCallInfos);

                    /**
                     * 判断参数 DefaultInnerCallInfos 是否已赋值
                     * @return DefaultInnerCallInfos 是否已赋值
                     * 
                     */
                    bool DefaultInnerCallInfosHasBeenSet() const;

                    /**
                     * 获取私有连接信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateLinkInfos 私有连接信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrivateLinkInfo> GetPrivateLinkInfos() const;

                    /**
                     * 设置私有连接信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateLinkInfos 私有连接信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivateLinkInfos(const std::vector<PrivateLinkInfo>& _privateLinkInfos);

                    /**
                     * 判断参数 PrivateLinkInfos 是否已赋值
                     * @return PrivateLinkInfos 是否已赋值
                     * 
                     */
                    bool PrivateLinkInfosHasBeenSet() const;

                    /**
                     * 获取基于新网关的私有连接信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateLinkInfosV2 基于新网关的私有连接信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrivateLinkInfo> GetPrivateLinkInfosV2() const;

                    /**
                     * 设置基于新网关的私有连接信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateLinkInfosV2 基于新网关的私有连接信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivateLinkInfosV2(const std::vector<PrivateLinkInfo>& _privateLinkInfosV2);

                    /**
                     * 判断参数 PrivateLinkInfosV2 是否已赋值
                     * @return PrivateLinkInfosV2 是否已赋值
                     * 
                     */
                    bool PrivateLinkInfosV2HasBeenSet() const;

                private:

                    /**
                     * 私有连接通道信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IngressPrivateLinkInfo m_ingressPrivateLinkInfo;
                    bool m_ingressPrivateLinkInfoHasBeenSet;

                    /**
                     * 共享弹性网卡信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServiceEIPInfo> m_serviceEIPInfo;
                    bool m_serviceEIPInfoHasBeenSet;

                    /**
                     * 默认内网调用信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DefaultInnerCallInfo> m_defaultInnerCallInfos;
                    bool m_defaultInnerCallInfosHasBeenSet;

                    /**
                     * 私有连接信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrivateLinkInfo> m_privateLinkInfos;
                    bool m_privateLinkInfosHasBeenSet;

                    /**
                     * 基于新网关的私有连接信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrivateLinkInfo> m_privateLinkInfosV2;
                    bool m_privateLinkInfosV2HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_INTRANETCALLINFO_H_
