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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEMUSICREQUEST_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEMUSICREQUEST_H_

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
                * DescribeMusic请求参数结构体
                */
                class DescribeMusicRequest : public AbstractModel
                {
                public:
                    DescribeMusicRequest();
                    ~DescribeMusicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取歌曲ID
                     * @return ItemId 歌曲ID
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置歌曲ID
                     * @param _itemId 歌曲ID
                     * 
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取在应用前端播放音乐C端用户的唯一标识。无需是账户信息，用户唯一标识即可。
                     * @return IdentityId 在应用前端播放音乐C端用户的唯一标识。无需是账户信息，用户唯一标识即可。
                     * 
                     */
                    std::string GetIdentityId() const;

                    /**
                     * 设置在应用前端播放音乐C端用户的唯一标识。无需是账户信息，用户唯一标识即可。
                     * @param _identityId 在应用前端播放音乐C端用户的唯一标识。无需是账户信息，用户唯一标识即可。
                     * 
                     */
                    void SetIdentityId(const std::string& _identityId);

                    /**
                     * 判断参数 IdentityId 是否已赋值
                     * @return IdentityId 是否已赋值
                     * 
                     */
                    bool IdentityIdHasBeenSet() const;

                    /**
                     * 获取MP3-320K-FTD-P  为获取320kbps歌曲热门片段。
MP3-320K-FTD 为获取320kbps已核验歌曲完整资源。
                     * @return SubItemType MP3-320K-FTD-P  为获取320kbps歌曲热门片段。
MP3-320K-FTD 为获取320kbps已核验歌曲完整资源。
                     * 
                     */
                    std::string GetSubItemType() const;

                    /**
                     * 设置MP3-320K-FTD-P  为获取320kbps歌曲热门片段。
MP3-320K-FTD 为获取320kbps已核验歌曲完整资源。
                     * @param _subItemType MP3-320K-FTD-P  为获取320kbps歌曲热门片段。
MP3-320K-FTD 为获取320kbps已核验歌曲完整资源。
                     * 
                     */
                    void SetSubItemType(const std::string& _subItemType);

                    /**
                     * 判断参数 SubItemType 是否已赋值
                     * @return SubItemType 是否已赋值
                     * 
                     */
                    bool SubItemTypeHasBeenSet() const;

                    /**
                     * 获取CDN URL Protocol:HTTP or HTTPS/SSL
Values:Y , N(default)
                     * @return Ssl CDN URL Protocol:HTTP or HTTPS/SSL
Values:Y , N(default)
                     * 
                     */
                    std::string GetSsl() const;

                    /**
                     * 设置CDN URL Protocol:HTTP or HTTPS/SSL
Values:Y , N(default)
                     * @param _ssl CDN URL Protocol:HTTP or HTTPS/SSL
Values:Y , N(default)
                     * 
                     */
                    void SetSsl(const std::string& _ssl);

                    /**
                     * 判断参数 Ssl 是否已赋值
                     * @return Ssl 是否已赋值
                     * 
                     */
                    bool SslHasBeenSet() const;

                private:

                    /**
                     * 歌曲ID
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 在应用前端播放音乐C端用户的唯一标识。无需是账户信息，用户唯一标识即可。
                     */
                    std::string m_identityId;
                    bool m_identityIdHasBeenSet;

                    /**
                     * MP3-320K-FTD-P  为获取320kbps歌曲热门片段。
MP3-320K-FTD 为获取320kbps已核验歌曲完整资源。
                     */
                    std::string m_subItemType;
                    bool m_subItemTypeHasBeenSet;

                    /**
                     * CDN URL Protocol:HTTP or HTTPS/SSL
Values:Y , N(default)
                     */
                    std::string m_ssl;
                    bool m_sslHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEMUSICREQUEST_H_
