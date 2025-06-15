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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWEIPSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWEIPSREQUEST_H_

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
                * DescribeCfwEips请求参数结构体
                */
                class DescribeCfwEipsRequest : public AbstractModel
                {
                public:
                    DescribeCfwEipsRequest();
                    ~DescribeCfwEipsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取1：cfw接入模式，目前仅支持接入模式实例
                     * @return Mode 1：cfw接入模式，目前仅支持接入模式实例
                     * 
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置1：cfw接入模式，目前仅支持接入模式实例
                     * @param _mode 1：cfw接入模式，目前仅支持接入模式实例
                     * 
                     */
                    void SetMode(const uint64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取ALL：查询所有弹性公网ip; nat-xxxxx：接入模式场景指定网关的弹性公网ip
                     * @return NatGatewayId ALL：查询所有弹性公网ip; nat-xxxxx：接入模式场景指定网关的弹性公网ip
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置ALL：查询所有弹性公网ip; nat-xxxxx：接入模式场景指定网关的弹性公网ip
                     * @param _natGatewayId ALL：查询所有弹性公网ip; nat-xxxxx：接入模式场景指定网关的弹性公网ip
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
                     * 获取防火墙实例id，当前仅支持接入模式的实例，该字段必填
                     * @return CfwInstance 防火墙实例id，当前仅支持接入模式的实例，该字段必填
                     * 
                     */
                    std::string GetCfwInstance() const;

                    /**
                     * 设置防火墙实例id，当前仅支持接入模式的实例，该字段必填
                     * @param _cfwInstance 防火墙实例id，当前仅支持接入模式的实例，该字段必填
                     * 
                     */
                    void SetCfwInstance(const std::string& _cfwInstance);

                    /**
                     * 判断参数 CfwInstance 是否已赋值
                     * @return CfwInstance 是否已赋值
                     * 
                     */
                    bool CfwInstanceHasBeenSet() const;

                private:

                    /**
                     * 1：cfw接入模式，目前仅支持接入模式实例
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * ALL：查询所有弹性公网ip; nat-xxxxx：接入模式场景指定网关的弹性公网ip
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * 防火墙实例id，当前仅支持接入模式的实例，该字段必填
                     */
                    std::string m_cfwInstance;
                    bool m_cfwInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWEIPSREQUEST_H_
