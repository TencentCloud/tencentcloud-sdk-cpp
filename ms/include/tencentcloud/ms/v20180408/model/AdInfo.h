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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_ADINFO_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_ADINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ms/v20180408/model/PluginInfo.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 广告信息
                */
                class AdInfo : public AbstractModel
                {
                public:
                    AdInfo();
                    ~AdInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取插播广告列表
                     * @return Spots 插播广告列表
                     */
                    std::vector<PluginInfo> GetSpots() const;

                    /**
                     * 设置插播广告列表
                     * @param Spots 插播广告列表
                     */
                    void SetSpots(const std::vector<PluginInfo>& _spots);

                    /**
                     * 判断参数 Spots 是否已赋值
                     * @return Spots 是否已赋值
                     */
                    bool SpotsHasBeenSet() const;

                    /**
                     * 获取精品推荐广告列表
                     * @return BoutiqueRecommands 精品推荐广告列表
                     */
                    std::vector<PluginInfo> GetBoutiqueRecommands() const;

                    /**
                     * 设置精品推荐广告列表
                     * @param BoutiqueRecommands 精品推荐广告列表
                     */
                    void SetBoutiqueRecommands(const std::vector<PluginInfo>& _boutiqueRecommands);

                    /**
                     * 判断参数 BoutiqueRecommands 是否已赋值
                     * @return BoutiqueRecommands 是否已赋值
                     */
                    bool BoutiqueRecommandsHasBeenSet() const;

                    /**
                     * 获取悬浮窗广告列表
                     * @return FloatWindowses 悬浮窗广告列表
                     */
                    std::vector<PluginInfo> GetFloatWindowses() const;

                    /**
                     * 设置悬浮窗广告列表
                     * @param FloatWindowses 悬浮窗广告列表
                     */
                    void SetFloatWindowses(const std::vector<PluginInfo>& _floatWindowses);

                    /**
                     * 判断参数 FloatWindowses 是否已赋值
                     * @return FloatWindowses 是否已赋值
                     */
                    bool FloatWindowsesHasBeenSet() const;

                    /**
                     * 获取banner广告列表
                     * @return Banners banner广告列表
                     */
                    std::vector<PluginInfo> GetBanners() const;

                    /**
                     * 设置banner广告列表
                     * @param Banners banner广告列表
                     */
                    void SetBanners(const std::vector<PluginInfo>& _banners);

                    /**
                     * 判断参数 Banners 是否已赋值
                     * @return Banners 是否已赋值
                     */
                    bool BannersHasBeenSet() const;

                    /**
                     * 获取积分墙广告列表
                     * @return IntegralWalls 积分墙广告列表
                     */
                    std::vector<PluginInfo> GetIntegralWalls() const;

                    /**
                     * 设置积分墙广告列表
                     * @param IntegralWalls 积分墙广告列表
                     */
                    void SetIntegralWalls(const std::vector<PluginInfo>& _integralWalls);

                    /**
                     * 判断参数 IntegralWalls 是否已赋值
                     * @return IntegralWalls 是否已赋值
                     */
                    bool IntegralWallsHasBeenSet() const;

                    /**
                     * 获取通知栏广告列表
                     * @return NotifyBars 通知栏广告列表
                     */
                    std::vector<PluginInfo> GetNotifyBars() const;

                    /**
                     * 设置通知栏广告列表
                     * @param NotifyBars 通知栏广告列表
                     */
                    void SetNotifyBars(const std::vector<PluginInfo>& _notifyBars);

                    /**
                     * 判断参数 NotifyBars 是否已赋值
                     * @return NotifyBars 是否已赋值
                     */
                    bool NotifyBarsHasBeenSet() const;

                private:

                    /**
                     * 插播广告列表
                     */
                    std::vector<PluginInfo> m_spots;
                    bool m_spotsHasBeenSet;

                    /**
                     * 精品推荐广告列表
                     */
                    std::vector<PluginInfo> m_boutiqueRecommands;
                    bool m_boutiqueRecommandsHasBeenSet;

                    /**
                     * 悬浮窗广告列表
                     */
                    std::vector<PluginInfo> m_floatWindowses;
                    bool m_floatWindowsesHasBeenSet;

                    /**
                     * banner广告列表
                     */
                    std::vector<PluginInfo> m_banners;
                    bool m_bannersHasBeenSet;

                    /**
                     * 积分墙广告列表
                     */
                    std::vector<PluginInfo> m_integralWalls;
                    bool m_integralWallsHasBeenSet;

                    /**
                     * 通知栏广告列表
                     */
                    std::vector<PluginInfo> m_notifyBars;
                    bool m_notifyBarsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_ADINFO_H_
