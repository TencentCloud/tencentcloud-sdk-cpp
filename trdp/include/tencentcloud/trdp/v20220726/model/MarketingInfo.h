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

#ifndef TENCENTCLOUD_TRDP_V20220726_MODEL_MARKETINGINFO_H_
#define TENCENTCLOUD_TRDP_V20220726_MODEL_MARKETINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trdp
    {
        namespace V20220726
        {
            namespace Model
            {
                /**
                * 营销信息
                */
                class MarketingInfo : public AbstractModel
                {
                public:
                    MarketingInfo();
                    ~MarketingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取投放模式（0=PDB，1=PD，2=RTB，10=其他）
                     * @return DeliveryMode 投放模式（0=PDB，1=PD，2=RTB，10=其他）
                     * 
                     */
                    int64_t GetDeliveryMode() const;

                    /**
                     * 设置投放模式（0=PDB，1=PD，2=RTB，10=其他）
                     * @param _deliveryMode 投放模式（0=PDB，1=PD，2=RTB，10=其他）
                     * 
                     */
                    void SetDeliveryMode(const int64_t& _deliveryMode);

                    /**
                     * 判断参数 DeliveryMode 是否已赋值
                     * @return DeliveryMode 是否已赋值
                     * 
                     */
                    bool DeliveryModeHasBeenSet() const;

                    /**
                     * 获取广告位类型 （0=前贴片，1=开屏广告，2=网页头部广告、3=网页中部广告、4=网页底部广告、5=悬浮广告、10=其它）
                     * @return AdvertisingType 广告位类型 （0=前贴片，1=开屏广告，2=网页头部广告、3=网页中部广告、4=网页底部广告、5=悬浮广告、10=其它）
                     * 
                     */
                    int64_t GetAdvertisingType() const;

                    /**
                     * 设置广告位类型 （0=前贴片，1=开屏广告，2=网页头部广告、3=网页中部广告、4=网页底部广告、5=悬浮广告、10=其它）
                     * @param _advertisingType 广告位类型 （0=前贴片，1=开屏广告，2=网页头部广告、3=网页中部广告、4=网页底部广告、5=悬浮广告、10=其它）
                     * 
                     */
                    void SetAdvertisingType(const int64_t& _advertisingType);

                    /**
                     * 判断参数 AdvertisingType 是否已赋值
                     * @return AdvertisingType 是否已赋值
                     * 
                     */
                    bool AdvertisingTypeHasBeenSet() const;

                    /**
                     * 获取是否全屏插广告（0-否，1-是）
                     * @return FullScreen 是否全屏插广告（0-否，1-是）
                     * 
                     */
                    int64_t GetFullScreen() const;

                    /**
                     * 设置是否全屏插广告（0-否，1-是）
                     * @param _fullScreen 是否全屏插广告（0-否，1-是）
                     * 
                     */
                    void SetFullScreen(const int64_t& _fullScreen);

                    /**
                     * 判断参数 FullScreen 是否已赋值
                     * @return FullScreen 是否已赋值
                     * 
                     */
                    bool FullScreenHasBeenSet() const;

                    /**
                     * 获取广告位宽度
                     * @return AdvertisingSpaceWidth 广告位宽度
                     * 
                     */
                    int64_t GetAdvertisingSpaceWidth() const;

                    /**
                     * 设置广告位宽度
                     * @param _advertisingSpaceWidth 广告位宽度
                     * 
                     */
                    void SetAdvertisingSpaceWidth(const int64_t& _advertisingSpaceWidth);

                    /**
                     * 判断参数 AdvertisingSpaceWidth 是否已赋值
                     * @return AdvertisingSpaceWidth 是否已赋值
                     * 
                     */
                    bool AdvertisingSpaceWidthHasBeenSet() const;

                    /**
                     * 获取广告位高度
                     * @return AdvertisingSpaceHeight 广告位高度
                     * 
                     */
                    int64_t GetAdvertisingSpaceHeight() const;

                    /**
                     * 设置广告位高度
                     * @param _advertisingSpaceHeight 广告位高度
                     * 
                     */
                    void SetAdvertisingSpaceHeight(const int64_t& _advertisingSpaceHeight);

                    /**
                     * 判断参数 AdvertisingSpaceHeight 是否已赋值
                     * @return AdvertisingSpaceHeight 是否已赋值
                     * 
                     */
                    bool AdvertisingSpaceHeightHasBeenSet() const;

                    /**
                     * 获取网址
                     * @return Url 网址
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置网址
                     * @param _url 网址
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 投放模式（0=PDB，1=PD，2=RTB，10=其他）
                     */
                    int64_t m_deliveryMode;
                    bool m_deliveryModeHasBeenSet;

                    /**
                     * 广告位类型 （0=前贴片，1=开屏广告，2=网页头部广告、3=网页中部广告、4=网页底部广告、5=悬浮广告、10=其它）
                     */
                    int64_t m_advertisingType;
                    bool m_advertisingTypeHasBeenSet;

                    /**
                     * 是否全屏插广告（0-否，1-是）
                     */
                    int64_t m_fullScreen;
                    bool m_fullScreenHasBeenSet;

                    /**
                     * 广告位宽度
                     */
                    int64_t m_advertisingSpaceWidth;
                    bool m_advertisingSpaceWidthHasBeenSet;

                    /**
                     * 广告位高度
                     */
                    int64_t m_advertisingSpaceHeight;
                    bool m_advertisingSpaceHeightHasBeenSet;

                    /**
                     * 网址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRDP_V20220726_MODEL_MARKETINGINFO_H_
