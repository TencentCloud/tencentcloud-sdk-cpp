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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_NATFWEIPSINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_NATFWEIPSINFO_H_

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
                * Nat防火墙弹性公网ip列表
                */
                class NatFwEipsInfo : public AbstractModel
                {
                public:
                    NatFwEipsInfo();
                    ~NatFwEipsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取弹性公网ip
                     * @return Eip 弹性公网ip
                     * 
                     */
                    std::string GetEip() const;

                    /**
                     * 设置弹性公网ip
                     * @param _eip 弹性公网ip
                     * 
                     */
                    void SetEip(const std::string& _eip);

                    /**
                     * 判断参数 Eip 是否已赋值
                     * @return Eip 是否已赋值
                     * 
                     */
                    bool EipHasBeenSet() const;

                    /**
                     * 获取所属的Nat网关Id
                     * @return NatGatewayId 所属的Nat网关Id
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置所属的Nat网关Id
                     * @param _natGatewayId 所属的Nat网关Id
                     * 
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     * 
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取Nat网关名称
                     * @return NatGatewayName Nat网关名称
                     * 
                     */
                    std::string GetNatGatewayName() const;

                    /**
                     * 设置Nat网关名称
                     * @param _natGatewayName Nat网关名称
                     * 
                     */
                    void SetNatGatewayName(const std::string& _natGatewayName);

                    /**
                     * 判断参数 NatGatewayName 是否已赋值
                     * @return NatGatewayName 是否已赋值
                     * 
                     */
                    bool NatGatewayNameHasBeenSet() const;

                private:

                    /**
                     * 弹性公网ip
                     */
                    std::string m_eip;
                    bool m_eipHasBeenSet;

                    /**
                     * 所属的Nat网关Id
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * Nat网关名称
                     */
                    std::string m_natGatewayName;
                    bool m_natGatewayNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_NATFWEIPSINFO_H_
