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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_SERVICEGOVERNANCEINFO_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_SERVICEGOVERNANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/BoundK8SInfo.h>
#include <tencentcloud/tse/v20201207/model/VpcInfo.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 服务治理相关的信息
                */
                class ServiceGovernanceInfo : public AbstractModel
                {
                public:
                    ServiceGovernanceInfo();
                    ~ServiceGovernanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取引擎所在的地域
                     * @return EngineRegion 引擎所在的地域
                     */
                    std::string GetEngineRegion() const;

                    /**
                     * 设置引擎所在的地域
                     * @param EngineRegion 引擎所在的地域
                     */
                    void SetEngineRegion(const std::string& _engineRegion);

                    /**
                     * 判断参数 EngineRegion 是否已赋值
                     * @return EngineRegion 是否已赋值
                     */
                    bool EngineRegionHasBeenSet() const;

                    /**
                     * 获取服务治理引擎绑定的kubernetes集群信息
                     * @return BoundK8SInfos 服务治理引擎绑定的kubernetes集群信息
                     */
                    std::vector<BoundK8SInfo> GetBoundK8SInfos() const;

                    /**
                     * 设置服务治理引擎绑定的kubernetes集群信息
                     * @param BoundK8SInfos 服务治理引擎绑定的kubernetes集群信息
                     */
                    void SetBoundK8SInfos(const std::vector<BoundK8SInfo>& _boundK8SInfos);

                    /**
                     * 判断参数 BoundK8SInfos 是否已赋值
                     * @return BoundK8SInfos 是否已赋值
                     */
                    bool BoundK8SInfosHasBeenSet() const;

                    /**
                     * 获取服务治理引擎绑定的网络信息
                     * @return VpcInfos 服务治理引擎绑定的网络信息
                     */
                    std::vector<VpcInfo> GetVpcInfos() const;

                    /**
                     * 设置服务治理引擎绑定的网络信息
                     * @param VpcInfos 服务治理引擎绑定的网络信息
                     */
                    void SetVpcInfos(const std::vector<VpcInfo>& _vpcInfos);

                    /**
                     * 判断参数 VpcInfos 是否已赋值
                     * @return VpcInfos 是否已赋值
                     */
                    bool VpcInfosHasBeenSet() const;

                    /**
                     * 获取当前实例鉴权是否开启
                     * @return AuthOpen 当前实例鉴权是否开启
                     */
                    bool GetAuthOpen() const;

                    /**
                     * 设置当前实例鉴权是否开启
                     * @param AuthOpen 当前实例鉴权是否开启
                     */
                    void SetAuthOpen(const bool& _authOpen);

                    /**
                     * 判断参数 AuthOpen 是否已赋值
                     * @return AuthOpen 是否已赋值
                     */
                    bool AuthOpenHasBeenSet() const;

                    /**
                     * 获取该实例支持的功能，鉴权就是 Auth
                     * @return Features 该实例支持的功能，鉴权就是 Auth
                     */
                    std::vector<std::string> GetFeatures() const;

                    /**
                     * 设置该实例支持的功能，鉴权就是 Auth
                     * @param Features 该实例支持的功能，鉴权就是 Auth
                     */
                    void SetFeatures(const std::vector<std::string>& _features);

                    /**
                     * 判断参数 Features 是否已赋值
                     * @return Features 是否已赋值
                     */
                    bool FeaturesHasBeenSet() const;

                    /**
                     * 获取主账户名默认为 polaris，该值为主账户的默认密码
                     * @return MainPassword 主账户名默认为 polaris，该值为主账户的默认密码
                     */
                    std::string GetMainPassword() const;

                    /**
                     * 设置主账户名默认为 polaris，该值为主账户的默认密码
                     * @param MainPassword 主账户名默认为 polaris，该值为主账户的默认密码
                     */
                    void SetMainPassword(const std::string& _mainPassword);

                    /**
                     * 判断参数 MainPassword 是否已赋值
                     * @return MainPassword 是否已赋值
                     */
                    bool MainPasswordHasBeenSet() const;

                private:

                    /**
                     * 引擎所在的地域
                     */
                    std::string m_engineRegion;
                    bool m_engineRegionHasBeenSet;

                    /**
                     * 服务治理引擎绑定的kubernetes集群信息
                     */
                    std::vector<BoundK8SInfo> m_boundK8SInfos;
                    bool m_boundK8SInfosHasBeenSet;

                    /**
                     * 服务治理引擎绑定的网络信息
                     */
                    std::vector<VpcInfo> m_vpcInfos;
                    bool m_vpcInfosHasBeenSet;

                    /**
                     * 当前实例鉴权是否开启
                     */
                    bool m_authOpen;
                    bool m_authOpenHasBeenSet;

                    /**
                     * 该实例支持的功能，鉴权就是 Auth
                     */
                    std::vector<std::string> m_features;
                    bool m_featuresHasBeenSet;

                    /**
                     * 主账户名默认为 polaris，该值为主账户的默认密码
                     */
                    std::string m_mainPassword;
                    bool m_mainPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_SERVICEGOVERNANCEINFO_H_
