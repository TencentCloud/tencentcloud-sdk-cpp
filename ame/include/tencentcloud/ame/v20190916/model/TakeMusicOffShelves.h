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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_TAKEMUSICOFFSHELVES_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_TAKEMUSICOFFSHELVES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * 下架歌曲复合结构
                */
                class TakeMusicOffShelves : public AbstractModel
                {
                public:
                    TakeMusicOffShelves();
                    ~TakeMusicOffShelves() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源方对应音乐Id
                     * @return MusicIds 资源方对应音乐Id
                     * 
                     */
                    std::string GetMusicIds() const;

                    /**
                     * 设置资源方对应音乐Id
                     * @param _musicIds 资源方对应音乐Id
                     * 
                     */
                    void SetMusicIds(const std::string& _musicIds);

                    /**
                     * 判断参数 MusicIds 是否已赋值
                     * @return MusicIds 是否已赋值
                     * 
                     */
                    bool MusicIdsHasBeenSet() const;

                    /**
                     * 获取当曲目临时下架时：已订购客户无影响，无需消息通知。当曲目封杀下架后，推送消息至已订购老客户，枚举值，判断是否上/下架
在售状态，0在售，1临时下架，2永久下架
                     * @return SaleStatus 当曲目临时下架时：已订购客户无影响，无需消息通知。当曲目封杀下架后，推送消息至已订购老客户，枚举值，判断是否上/下架
在售状态，0在售，1临时下架，2永久下架
                     * 
                     */
                    std::string GetSaleStatus() const;

                    /**
                     * 设置当曲目临时下架时：已订购客户无影响，无需消息通知。当曲目封杀下架后，推送消息至已订购老客户，枚举值，判断是否上/下架
在售状态，0在售，1临时下架，2永久下架
                     * @param _saleStatus 当曲目临时下架时：已订购客户无影响，无需消息通知。当曲目封杀下架后，推送消息至已订购老客户，枚举值，判断是否上/下架
在售状态，0在售，1临时下架，2永久下架
                     * 
                     */
                    void SetSaleStatus(const std::string& _saleStatus);

                    /**
                     * 判断参数 SaleStatus 是否已赋值
                     * @return SaleStatus 是否已赋值
                     * 
                     */
                    bool SaleStatusHasBeenSet() const;

                private:

                    /**
                     * 资源方对应音乐Id
                     */
                    std::string m_musicIds;
                    bool m_musicIdsHasBeenSet;

                    /**
                     * 当曲目临时下架时：已订购客户无影响，无需消息通知。当曲目封杀下架后，推送消息至已订购老客户，枚举值，判断是否上/下架
在售状态，0在售，1临时下架，2永久下架
                     */
                    std::string m_saleStatus;
                    bool m_saleStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_TAKEMUSICOFFSHELVES_H_
