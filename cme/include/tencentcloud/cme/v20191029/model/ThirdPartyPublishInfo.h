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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_THIRDPARTYPUBLISHINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_THIRDPARTYPUBLISHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/PenguinMediaPlatformPublishInfo.h>
#include <tencentcloud/cme/v20191029/model/WeiboPublishInfo.h>
#include <tencentcloud/cme/v20191029/model/KuaishouPublishInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 第三方平台视频发布信息。
                */
                class ThirdPartyPublishInfo : public AbstractModel
                {
                public:
                    ThirdPartyPublishInfo();
                    ~ThirdPartyPublishInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发布通道  ID。
                     * @return ChannelMaterialId 发布通道  ID。
                     */
                    std::string GetChannelMaterialId() const;

                    /**
                     * 设置发布通道  ID。
                     * @param ChannelMaterialId 发布通道  ID。
                     */
                    void SetChannelMaterialId(const std::string& _channelMaterialId);

                    /**
                     * 判断参数 ChannelMaterialId 是否已赋值
                     * @return ChannelMaterialId 是否已赋值
                     */
                    bool ChannelMaterialIdHasBeenSet() const;

                    /**
                     * 获取企鹅号发布信息，如果使用的发布通道为企鹅号时必填。
                     * @return PenguinMediaPlatformPublishInfo 企鹅号发布信息，如果使用的发布通道为企鹅号时必填。
                     */
                    PenguinMediaPlatformPublishInfo GetPenguinMediaPlatformPublishInfo() const;

                    /**
                     * 设置企鹅号发布信息，如果使用的发布通道为企鹅号时必填。
                     * @param PenguinMediaPlatformPublishInfo 企鹅号发布信息，如果使用的发布通道为企鹅号时必填。
                     */
                    void SetPenguinMediaPlatformPublishInfo(const PenguinMediaPlatformPublishInfo& _penguinMediaPlatformPublishInfo);

                    /**
                     * 判断参数 PenguinMediaPlatformPublishInfo 是否已赋值
                     * @return PenguinMediaPlatformPublishInfo 是否已赋值
                     */
                    bool PenguinMediaPlatformPublishInfoHasBeenSet() const;

                    /**
                     * 获取新浪微博发布信息，如果使用的发布通道为新浪微博时必填。
                     * @return WeiboPublishInfo 新浪微博发布信息，如果使用的发布通道为新浪微博时必填。
                     */
                    WeiboPublishInfo GetWeiboPublishInfo() const;

                    /**
                     * 设置新浪微博发布信息，如果使用的发布通道为新浪微博时必填。
                     * @param WeiboPublishInfo 新浪微博发布信息，如果使用的发布通道为新浪微博时必填。
                     */
                    void SetWeiboPublishInfo(const WeiboPublishInfo& _weiboPublishInfo);

                    /**
                     * 判断参数 WeiboPublishInfo 是否已赋值
                     * @return WeiboPublishInfo 是否已赋值
                     */
                    bool WeiboPublishInfoHasBeenSet() const;

                    /**
                     * 获取快手发布信息，如果使用的发布通道为快手时必填。
                     * @return KuaishouPublishInfo 快手发布信息，如果使用的发布通道为快手时必填。
                     */
                    KuaishouPublishInfo GetKuaishouPublishInfo() const;

                    /**
                     * 设置快手发布信息，如果使用的发布通道为快手时必填。
                     * @param KuaishouPublishInfo 快手发布信息，如果使用的发布通道为快手时必填。
                     */
                    void SetKuaishouPublishInfo(const KuaishouPublishInfo& _kuaishouPublishInfo);

                    /**
                     * 判断参数 KuaishouPublishInfo 是否已赋值
                     * @return KuaishouPublishInfo 是否已赋值
                     */
                    bool KuaishouPublishInfoHasBeenSet() const;

                private:

                    /**
                     * 发布通道  ID。
                     */
                    std::string m_channelMaterialId;
                    bool m_channelMaterialIdHasBeenSet;

                    /**
                     * 企鹅号发布信息，如果使用的发布通道为企鹅号时必填。
                     */
                    PenguinMediaPlatformPublishInfo m_penguinMediaPlatformPublishInfo;
                    bool m_penguinMediaPlatformPublishInfoHasBeenSet;

                    /**
                     * 新浪微博发布信息，如果使用的发布通道为新浪微博时必填。
                     */
                    WeiboPublishInfo m_weiboPublishInfo;
                    bool m_weiboPublishInfoHasBeenSet;

                    /**
                     * 快手发布信息，如果使用的发布通道为快手时必填。
                     */
                    KuaishouPublishInfo m_kuaishouPublishInfo;
                    bool m_kuaishouPublishInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_THIRDPARTYPUBLISHINFO_H_
