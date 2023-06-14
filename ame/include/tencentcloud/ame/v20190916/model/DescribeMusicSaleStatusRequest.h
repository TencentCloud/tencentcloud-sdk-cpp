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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEMUSICSALESTATUSREQUEST_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEMUSICSALESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeMusicSaleStatus请求参数结构体
                */
                class DescribeMusicSaleStatusRequest : public AbstractModel
                {
                public:
                    DescribeMusicSaleStatusRequest();
                    ~DescribeMusicSaleStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取歌曲Id集合，可传单个，也可传多个，上线查询单次50个
                     * @return MusicIds 歌曲Id集合，可传单个，也可传多个，上线查询单次50个
                     * 
                     */
                    std::vector<std::string> GetMusicIds() const;

                    /**
                     * 设置歌曲Id集合，可传单个，也可传多个，上线查询单次50个
                     * @param _musicIds 歌曲Id集合，可传单个，也可传多个，上线查询单次50个
                     * 
                     */
                    void SetMusicIds(const std::vector<std::string>& _musicIds);

                    /**
                     * 判断参数 MusicIds 是否已赋值
                     * @return MusicIds 是否已赋值
                     * 
                     */
                    bool MusicIdsHasBeenSet() const;

                    /**
                     * 获取查询哪个渠道的数据，1为曲库包，2为单曲
                     * @return PurchaseType 查询哪个渠道的数据，1为曲库包，2为单曲
                     * 
                     */
                    int64_t GetPurchaseType() const;

                    /**
                     * 设置查询哪个渠道的数据，1为曲库包，2为单曲
                     * @param _purchaseType 查询哪个渠道的数据，1为曲库包，2为单曲
                     * 
                     */
                    void SetPurchaseType(const int64_t& _purchaseType);

                    /**
                     * 判断参数 PurchaseType 是否已赋值
                     * @return PurchaseType 是否已赋值
                     * 
                     */
                    bool PurchaseTypeHasBeenSet() const;

                private:

                    /**
                     * 歌曲Id集合，可传单个，也可传多个，上线查询单次50个
                     */
                    std::vector<std::string> m_musicIds;
                    bool m_musicIdsHasBeenSet;

                    /**
                     * 查询哪个渠道的数据，1为曲库包，2为单曲
                     */
                    int64_t m_purchaseType;
                    bool m_purchaseTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEMUSICSALESTATUSREQUEST_H_
