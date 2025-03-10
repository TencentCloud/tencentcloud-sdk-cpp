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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PODLIMITSBYTYPE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PODLIMITSBYTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 某机型可支持的最大 VPC-CNI 模式的 Pod 数量
                */
                class PodLimitsByType : public AbstractModel
                {
                public:
                    PodLimitsByType();
                    ~PodLimitsByType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TKE共享网卡非固定IP模式可支持的Pod数量
                     * @return TKERouteENINonStaticIP TKE共享网卡非固定IP模式可支持的Pod数量
                     * 
                     */
                    int64_t GetTKERouteENINonStaticIP() const;

                    /**
                     * 设置TKE共享网卡非固定IP模式可支持的Pod数量
                     * @param _tKERouteENINonStaticIP TKE共享网卡非固定IP模式可支持的Pod数量
                     * 
                     */
                    void SetTKERouteENINonStaticIP(const int64_t& _tKERouteENINonStaticIP);

                    /**
                     * 判断参数 TKERouteENINonStaticIP 是否已赋值
                     * @return TKERouteENINonStaticIP 是否已赋值
                     * 
                     */
                    bool TKERouteENINonStaticIPHasBeenSet() const;

                    /**
                     * 获取TKE共享网卡固定IP模式可支持的Pod数量
                     * @return TKERouteENIStaticIP TKE共享网卡固定IP模式可支持的Pod数量
                     * 
                     */
                    int64_t GetTKERouteENIStaticIP() const;

                    /**
                     * 设置TKE共享网卡固定IP模式可支持的Pod数量
                     * @param _tKERouteENIStaticIP TKE共享网卡固定IP模式可支持的Pod数量
                     * 
                     */
                    void SetTKERouteENIStaticIP(const int64_t& _tKERouteENIStaticIP);

                    /**
                     * 判断参数 TKERouteENIStaticIP 是否已赋值
                     * @return TKERouteENIStaticIP 是否已赋值
                     * 
                     */
                    bool TKERouteENIStaticIPHasBeenSet() const;

                    /**
                     * 获取TKE独立网卡模式可支持的Pod数量
                     * @return TKEDirectENI TKE独立网卡模式可支持的Pod数量
                     * 
                     */
                    int64_t GetTKEDirectENI() const;

                    /**
                     * 设置TKE独立网卡模式可支持的Pod数量
                     * @param _tKEDirectENI TKE独立网卡模式可支持的Pod数量
                     * 
                     */
                    void SetTKEDirectENI(const int64_t& _tKEDirectENI);

                    /**
                     * 判断参数 TKEDirectENI 是否已赋值
                     * @return TKEDirectENI 是否已赋值
                     * 
                     */
                    bool TKEDirectENIHasBeenSet() const;

                    /**
                     * 获取TKE中继网卡模式可支持的Pod数量
                     * @return TKESubENI TKE中继网卡模式可支持的Pod数量
                     * 
                     */
                    int64_t GetTKESubENI() const;

                    /**
                     * 设置TKE中继网卡模式可支持的Pod数量
                     * @param _tKESubENI TKE中继网卡模式可支持的Pod数量
                     * 
                     */
                    void SetTKESubENI(const int64_t& _tKESubENI);

                    /**
                     * 判断参数 TKESubENI 是否已赋值
                     * @return TKESubENI 是否已赋值
                     * 
                     */
                    bool TKESubENIHasBeenSet() const;

                private:

                    /**
                     * TKE共享网卡非固定IP模式可支持的Pod数量
                     */
                    int64_t m_tKERouteENINonStaticIP;
                    bool m_tKERouteENINonStaticIPHasBeenSet;

                    /**
                     * TKE共享网卡固定IP模式可支持的Pod数量
                     */
                    int64_t m_tKERouteENIStaticIP;
                    bool m_tKERouteENIStaticIPHasBeenSet;

                    /**
                     * TKE独立网卡模式可支持的Pod数量
                     */
                    int64_t m_tKEDirectENI;
                    bool m_tKEDirectENIHasBeenSet;

                    /**
                     * TKE中继网卡模式可支持的Pod数量
                     */
                    int64_t m_tKESubENI;
                    bool m_tKESubENIHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PODLIMITSBYTYPE_H_
