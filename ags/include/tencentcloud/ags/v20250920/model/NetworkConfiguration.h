/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_NETWORKCONFIGURATION_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_NETWORKCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/VPCConfig.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 沙箱网络配置
                */
                class NetworkConfiguration : public AbstractModel
                {
                public:
                    NetworkConfiguration();
                    ~NetworkConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网络模式（当前支持 PUBLIC, VPC, SANDBOX）
                     * @return NetworkMode 网络模式（当前支持 PUBLIC, VPC, SANDBOX）
                     * 
                     */
                    std::string GetNetworkMode() const;

                    /**
                     * 设置网络模式（当前支持 PUBLIC, VPC, SANDBOX）
                     * @param _networkMode 网络模式（当前支持 PUBLIC, VPC, SANDBOX）
                     * 
                     */
                    void SetNetworkMode(const std::string& _networkMode);

                    /**
                     * 判断参数 NetworkMode 是否已赋值
                     * @return NetworkMode 是否已赋值
                     * 
                     */
                    bool NetworkModeHasBeenSet() const;

                    /**
                     * 获取VPC网络相关配置
                     * @return VpcConfig VPC网络相关配置
                     * 
                     */
                    VPCConfig GetVpcConfig() const;

                    /**
                     * 设置VPC网络相关配置
                     * @param _vpcConfig VPC网络相关配置
                     * 
                     */
                    void SetVpcConfig(const VPCConfig& _vpcConfig);

                    /**
                     * 判断参数 VpcConfig 是否已赋值
                     * @return VpcConfig 是否已赋值
                     * 
                     */
                    bool VpcConfigHasBeenSet() const;

                private:

                    /**
                     * 网络模式（当前支持 PUBLIC, VPC, SANDBOX）
                     */
                    std::string m_networkMode;
                    bool m_networkModeHasBeenSet;

                    /**
                     * VPC网络相关配置
                     */
                    VPCConfig m_vpcConfig;
                    bool m_vpcConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_NETWORKCONFIGURATION_H_
