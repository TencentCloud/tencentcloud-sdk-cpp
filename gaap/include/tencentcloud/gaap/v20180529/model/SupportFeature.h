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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_SUPPORTFEATURE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_SUPPORTFEATURE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 加速区域支持的能力，包括支持的网络类型等等。
                */
                class SupportFeature : public AbstractModel
                {
                public:
                    SupportFeature();
                    ~SupportFeature() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取接入区域支持的网络类型列表，normal表示支持常规BGP，cn2表示精品BGP，triple表示三网，secure_eip表示定制安全eip。
                     * @return NetworkType 接入区域支持的网络类型列表，normal表示支持常规BGP，cn2表示精品BGP，triple表示三网，secure_eip表示定制安全eip。
                     * 
                     */
                    std::vector<std::string> GetNetworkType() const;

                    /**
                     * 设置接入区域支持的网络类型列表，normal表示支持常规BGP，cn2表示精品BGP，triple表示三网，secure_eip表示定制安全eip。
                     * @param _networkType 接入区域支持的网络类型列表，normal表示支持常规BGP，cn2表示精品BGP，triple表示三网，secure_eip表示定制安全eip。
                     * 
                     */
                    void SetNetworkType(const std::vector<std::string>& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                private:

                    /**
                     * 接入区域支持的网络类型列表，normal表示支持常规BGP，cn2表示精品BGP，triple表示三网，secure_eip表示定制安全eip。
                     */
                    std::vector<std::string> m_networkType;
                    bool m_networkTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_SUPPORTFEATURE_H_
