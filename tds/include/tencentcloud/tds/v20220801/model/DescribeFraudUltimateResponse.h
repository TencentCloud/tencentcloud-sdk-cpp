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

#ifndef TENCENTCLOUD_TDS_V20220801_MODEL_DESCRIBEFRAUDULTIMATERESPONSE_H_
#define TENCENTCLOUD_TDS_V20220801_MODEL_DESCRIBEFRAUDULTIMATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tds/v20220801/model/RiskInfo.h>
#include <tencentcloud/tds/v20220801/model/ExtraInfo.h>


namespace TencentCloud
{
    namespace Tds
    {
        namespace V20220801
        {
            namespace Model
            {
                /**
                * DescribeFraudUltimate返回参数结构体
                */
                class DescribeFraudUltimateResponse : public AbstractModel
                {
                public:
                    DescribeFraudUltimateResponse();
                    ~DescribeFraudUltimateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>App版本信息</p>
                     * @return AppVersion <p>App版本信息</p>
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
                     * 获取<p>品牌</p>
                     * @return Brand <p>品牌</p>
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
                     * 获取<p>客户端IP</p>
                     * @return ClientIp <p>客户端IP</p>
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
                     * 获取<p>机型</p>
                     * @return Model <p>机型</p>
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
                     * 获取<p>网络类型</p>
                     * @return NetworkType <p>网络类型</p>
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
                     * 获取<p>应用包名</p>
                     * @return PackageName <p>应用包名</p>
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
                     * 获取<p>平台（2-Android，3-iOS，4-H5，5-微信小程序）</p>
                     * @return Platform <p>平台（2-Android，3-iOS，4-H5，5-微信小程序）</p>
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
                     * 获取<p>系统版本</p>
                     * @return SystemVersion <p>系统版本</p>
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
                     * 获取<p>SDK版本号</p>
                     * @return SdkBuildNo <p>SDK版本号</p>
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
                     * 获取<p>实时风险信息</p>
                     * @return RiskInfos <p>实时风险信息</p>
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
                     * 获取<p>离线风险信息</p>
                     * @return HistRiskInfos <p>离线风险信息</p>
                     * 
                     */
                    std::vector<RiskInfo> GetHistRiskInfos() const;

                    /**
                     * 判断参数 HistRiskInfos 是否已赋值
                     * @return HistRiskInfos 是否已赋值
                     * 
                     */
                    bool HistRiskInfosHasBeenSet() const;

                    /**
                     * 获取<p>设备匿名标识</p>
                     * @return Openid <p>设备匿名标识</p>
                     * 
                     */
                    std::string GetOpenid() const;

                    /**
                     * 判断参数 Openid 是否已赋值
                     * @return Openid 是否已赋值
                     * 
                     */
                    bool OpenidHasBeenSet() const;

                    /**
                     * 获取<p>场景风险信息</p>
                     * @return SceneRiskInfos <p>场景风险信息</p>
                     * 
                     */
                    std::vector<RiskInfo> GetSceneRiskInfos() const;

                    /**
                     * 判断参数 SceneRiskInfos 是否已赋值
                     * @return SceneRiskInfos 是否已赋值
                     * 
                     */
                    bool SceneRiskInfosHasBeenSet() const;

                    /**
                     * 获取<p>建议等级。1-极差，2-较差，3-中等，4-良好，5-优秀</p>
                     * @return SuggestionLevel <p>建议等级。1-极差，2-较差，3-中等，4-良好，5-优秀</p>
                     * 
                     */
                    uint64_t GetSuggestionLevel() const;

                    /**
                     * 判断参数 SuggestionLevel 是否已赋值
                     * @return SuggestionLevel 是否已赋值
                     * 
                     */
                    bool SuggestionLevelHasBeenSet() const;

                    /**
                     * 获取<p>图灵盾统一ID</p>
                     * @return Unionid <p>图灵盾统一ID</p>
                     * 
                     */
                    std::string GetUnionid() const;

                    /**
                     * 判断参数 Unionid 是否已赋值
                     * @return Unionid 是否已赋值
                     * 
                     */
                    bool UnionidHasBeenSet() const;

                    /**
                     * 获取<p>检测时间戳（毫秒）</p>
                     * @return RiskCheckTimestamp <p>检测时间戳（毫秒）</p>
                     * 
                     */
                    std::string GetRiskCheckTimestamp() const;

                    /**
                     * 判断参数 RiskCheckTimestamp 是否已赋值
                     * @return RiskCheckTimestamp 是否已赋值
                     * 
                     */
                    bool RiskCheckTimestampHasBeenSet() const;

                    /**
                     * 获取<p>额外信息</p>
                     * @return ExtraInfos <p>额外信息</p>
                     * 
                     */
                    std::vector<ExtraInfo> GetExtraInfos() const;

                    /**
                     * 判断参数 ExtraInfos 是否已赋值
                     * @return ExtraInfos 是否已赋值
                     * 
                     */
                    bool ExtraInfosHasBeenSet() const;

                private:

                    /**
                     * <p>App版本信息</p>
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * <p>品牌</p>
                     */
                    std::string m_brand;
                    bool m_brandHasBeenSet;

                    /**
                     * <p>客户端IP</p>
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * <p>机型</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>网络类型</p>
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * <p>应用包名</p>
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * <p>平台（2-Android，3-iOS，4-H5，5-微信小程序）</p>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>系统版本</p>
                     */
                    std::string m_systemVersion;
                    bool m_systemVersionHasBeenSet;

                    /**
                     * <p>SDK版本号</p>
                     */
                    std::string m_sdkBuildNo;
                    bool m_sdkBuildNoHasBeenSet;

                    /**
                     * <p>实时风险信息</p>
                     */
                    std::vector<RiskInfo> m_riskInfos;
                    bool m_riskInfosHasBeenSet;

                    /**
                     * <p>离线风险信息</p>
                     */
                    std::vector<RiskInfo> m_histRiskInfos;
                    bool m_histRiskInfosHasBeenSet;

                    /**
                     * <p>设备匿名标识</p>
                     */
                    std::string m_openid;
                    bool m_openidHasBeenSet;

                    /**
                     * <p>场景风险信息</p>
                     */
                    std::vector<RiskInfo> m_sceneRiskInfos;
                    bool m_sceneRiskInfosHasBeenSet;

                    /**
                     * <p>建议等级。1-极差，2-较差，3-中等，4-良好，5-优秀</p>
                     */
                    uint64_t m_suggestionLevel;
                    bool m_suggestionLevelHasBeenSet;

                    /**
                     * <p>图灵盾统一ID</p>
                     */
                    std::string m_unionid;
                    bool m_unionidHasBeenSet;

                    /**
                     * <p>检测时间戳（毫秒）</p>
                     */
                    std::string m_riskCheckTimestamp;
                    bool m_riskCheckTimestampHasBeenSet;

                    /**
                     * <p>额外信息</p>
                     */
                    std::vector<ExtraInfo> m_extraInfos;
                    bool m_extraInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDS_V20220801_MODEL_DESCRIBEFRAUDULTIMATERESPONSE_H_
