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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROTOCOLBLOCKRELATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROTOCOLBLOCKRELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/ProtocolBlockConfig.h>
#include <tencentcloud/antiddos/v20200309/model/InstanceRelation.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 协议封禁相关信息
                */
                class ProtocolBlockRelation : public AbstractModel
                {
                public:
                    ProtocolBlockRelation();
                    ~ProtocolBlockRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取协议封禁配置
                     * @return ProtocolBlockConfig 协议封禁配置
                     * 
                     */
                    ProtocolBlockConfig GetProtocolBlockConfig() const;

                    /**
                     * 设置协议封禁配置
                     * @param _protocolBlockConfig 协议封禁配置
                     * 
                     */
                    void SetProtocolBlockConfig(const ProtocolBlockConfig& _protocolBlockConfig);

                    /**
                     * 判断参数 ProtocolBlockConfig 是否已赋值
                     * @return ProtocolBlockConfig 是否已赋值
                     * 
                     */
                    bool ProtocolBlockConfigHasBeenSet() const;

                    /**
                     * 获取协议封禁配置所属的实例
                     * @return InstanceDetailList 协议封禁配置所属的实例
                     * 
                     */
                    std::vector<InstanceRelation> GetInstanceDetailList() const;

                    /**
                     * 设置协议封禁配置所属的实例
                     * @param _instanceDetailList 协议封禁配置所属的实例
                     * 
                     */
                    void SetInstanceDetailList(const std::vector<InstanceRelation>& _instanceDetailList);

                    /**
                     * 判断参数 InstanceDetailList 是否已赋值
                     * @return InstanceDetailList 是否已赋值
                     * 
                     */
                    bool InstanceDetailListHasBeenSet() const;

                private:

                    /**
                     * 协议封禁配置
                     */
                    ProtocolBlockConfig m_protocolBlockConfig;
                    bool m_protocolBlockConfigHasBeenSet;

                    /**
                     * 协议封禁配置所属的实例
                     */
                    std::vector<InstanceRelation> m_instanceDetailList;
                    bool m_instanceDetailListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROTOCOLBLOCKRELATION_H_
