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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_PUBLISHCDNPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_PUBLISHCDNPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 第三方CDN转推参数
                */
                class PublishCdnParams : public AbstractModel
                {
                public:
                    PublishCdnParams();
                    ~PublishCdnParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取腾讯云直播BizId。
                     * @return BizId 腾讯云直播BizId。
                     * 
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置腾讯云直播BizId。
                     * @param _bizId 腾讯云直播BizId。
                     * 
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取第三方CDN转推的目的地址，同时只支持转推一个第三方CDN地址。
                     * @return PublishCdnUrls 第三方CDN转推的目的地址，同时只支持转推一个第三方CDN地址。
                     * 
                     */
                    std::vector<std::string> GetPublishCdnUrls() const;

                    /**
                     * 设置第三方CDN转推的目的地址，同时只支持转推一个第三方CDN地址。
                     * @param _publishCdnUrls 第三方CDN转推的目的地址，同时只支持转推一个第三方CDN地址。
                     * 
                     */
                    void SetPublishCdnUrls(const std::vector<std::string>& _publishCdnUrls);

                    /**
                     * 判断参数 PublishCdnUrls 是否已赋值
                     * @return PublishCdnUrls 是否已赋值
                     * 
                     */
                    bool PublishCdnUrlsHasBeenSet() const;

                private:

                    /**
                     * 腾讯云直播BizId。
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 第三方CDN转推的目的地址，同时只支持转推一个第三方CDN地址。
                     */
                    std::vector<std::string> m_publishCdnUrls;
                    bool m_publishCdnUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_PUBLISHCDNPARAMS_H_
