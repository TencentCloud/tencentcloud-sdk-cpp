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

#ifndef TENCENTCLOUD_TDS_V20220801_MODEL_DESCRIBEFRAUDBASERESPONSE_H_
#define TENCENTCLOUD_TDS_V20220801_MODEL_DESCRIBEFRAUDBASERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tds/v20220801/model/RiskInfo.h>


namespace TencentCloud
{
    namespace Tds
    {
        namespace V20220801
        {
            namespace Model
            {
                /**
                * DescribeFraudBase返回参数结构体
                */
                class DescribeFraudBaseResponse : public AbstractModel
                {
                public:
                    DescribeFraudBaseResponse();
                    ~DescribeFraudBaseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取App版本信息
                     * @return AppVersion App版本信息
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 判断参数 AppVersion 是否已赋值
                     * @return AppVersion 是否已赋值
                     * 
                     */
                    bool AppVersionHasBeenSet() const;

                    /**
                     * 获取品牌
                     * @return Brand 品牌
                     * 
                     */
                    std::string GetBrand() const;

                    /**
                     * 判断参数 Brand 是否已赋值
                     * @return Brand 是否已赋值
                     * 
                     */
                    bool BrandHasBeenSet() const;

                    /**
                     * 获取客户端IP
                     * @return ClientIp 客户端IP
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取机型
                     * @return Model 机型
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取网络类型
                     * @return NetworkType 网络类型
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取应用包名
                     * @return PackageName 应用包名
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取平台（2-Android，3-iOS，4-H5，5-微信小程序）
                     * @return Platform 平台（2-Android，3-iOS，4-H5，5-微信小程序）
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取系统版本
                     * @return SystemVersion 系统版本
                     * 
                     */
                    std::string GetSystemVersion() const;

                    /**
                     * 判断参数 SystemVersion 是否已赋值
                     * @return SystemVersion 是否已赋值
                     * 
                     */
                    bool SystemVersionHasBeenSet() const;

                    /**
                     * 获取SDK版本号
                     * @return SdkBuildNo SDK版本号
                     * 
                     */
                    std::string GetSdkBuildNo() const;

                    /**
                     * 判断参数 SdkBuildNo 是否已赋值
                     * @return SdkBuildNo 是否已赋值
                     * 
                     */
                    bool SdkBuildNoHasBeenSet() const;

                    /**
                     * 获取实时风险信息
                     * @return RiskInfos 实时风险信息
                     * 
                     */
                    std::vector<RiskInfo> GetRiskInfos() const;

                    /**
                     * 判断参数 RiskInfos 是否已赋值
                     * @return RiskInfos 是否已赋值
                     * 
                     */
                    bool RiskInfosHasBeenSet() const;

                    /**
                     * 获取离线风险信息
                     * @return HistRiskInfos 离线风险信息
                     * 
                     */
                    std::vector<RiskInfo> GetHistRiskInfos() const;

                    /**
                     * 判断参数 HistRiskInfos 是否已赋值
                     * @return HistRiskInfos 是否已赋值
                     * 
                     */
                    bool HistRiskInfosHasBeenSet() const;

                private:

                    /**
                     * App版本信息
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * 品牌
                     */
                    std::string m_brand;
                    bool m_brandHasBeenSet;

                    /**
                     * 客户端IP
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * 机型
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 网络类型
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * 应用包名
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 平台（2-Android，3-iOS，4-H5，5-微信小程序）
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 系统版本
                     */
                    std::string m_systemVersion;
                    bool m_systemVersionHasBeenSet;

                    /**
                     * SDK版本号
                     */
                    std::string m_sdkBuildNo;
                    bool m_sdkBuildNoHasBeenSet;

                    /**
                     * 实时风险信息
                     */
                    std::vector<RiskInfo> m_riskInfos;
                    bool m_riskInfosHasBeenSet;

                    /**
                     * 离线风险信息
                     */
                    std::vector<RiskInfo> m_histRiskInfos;
                    bool m_histRiskInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDS_V20220801_MODEL_DESCRIBEFRAUDBASERESPONSE_H_
