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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_URLDETECTRESULT_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_URLDETECTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/UrlHitInfo.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 恶意URL检测结果
                */
                class UrlDetectResult : public AbstractModel
                {
                public:
                    UrlDetectResult();
                    ~UrlDetectResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>命中的恶意URL列表</p>
                     * @return HitUrls <p>命中的恶意URL列表</p>
                     * 
                     */
                    std::vector<UrlHitInfo> GetHitUrls() const;

                    /**
                     * 设置<p>命中的恶意URL列表</p>
                     * @param _hitUrls <p>命中的恶意URL列表</p>
                     * 
                     */
                    void SetHitUrls(const std::vector<UrlHitInfo>& _hitUrls);

                    /**
                     * 判断参数 HitUrls 是否已赋值
                     * @return HitUrls 是否已赋值
                     * 
                     */
                    bool HitUrlsHasBeenSet() const;

                private:

                    /**
                     * <p>命中的恶意URL列表</p>
                     */
                    std::vector<UrlHitInfo> m_hitUrls;
                    bool m_hitUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_URLDETECTRESULT_H_
