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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUPUBLISHCDNPARAM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUPUBLISHCDNPARAM_H_

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
                * 转推参数。
                */
                class McuPublishCdnParam : public AbstractModel
                {
                public:
                    McuPublishCdnParam();
                    ~McuPublishCdnParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CDN转推URL，只支持rtmp链接。
注：若更新转推时，URL有任何变化，都会断流重推。
                     * @return PublishCdnUrl CDN转推URL，只支持rtmp链接。
注：若更新转推时，URL有任何变化，都会断流重推。
                     * 
                     */
                    std::string GetPublishCdnUrl() const;

                    /**
                     * 设置CDN转推URL，只支持rtmp链接。
注：若更新转推时，URL有任何变化，都会断流重推。
                     * @param _publishCdnUrl CDN转推URL，只支持rtmp链接。
注：若更新转推时，URL有任何变化，都会断流重推。
                     * 
                     */
                    void SetPublishCdnUrl(const std::string& _publishCdnUrl);

                    /**
                     * 判断参数 PublishCdnUrl 是否已赋值
                     * @return PublishCdnUrl 是否已赋值
                     * 
                     */
                    bool PublishCdnUrlHasBeenSet() const;

                    /**
                     * 获取是否是腾讯云CDN，0为转推非腾讯云CDN，1为转推腾讯CDN，不携带该参数默认为1。注意：1，为避免误产生转推费用，该参数建议明确填写，转推非腾讯云CDN时会产生转推费用，详情参见接口文档说明；2，国内站默认只支持转推腾讯云CDN，如您有转推第三方CDN需求，请联系腾讯云技术支持。
                     * @return IsTencentCdn 是否是腾讯云CDN，0为转推非腾讯云CDN，1为转推腾讯CDN，不携带该参数默认为1。注意：1，为避免误产生转推费用，该参数建议明确填写，转推非腾讯云CDN时会产生转推费用，详情参见接口文档说明；2，国内站默认只支持转推腾讯云CDN，如您有转推第三方CDN需求，请联系腾讯云技术支持。
                     * 
                     */
                    uint64_t GetIsTencentCdn() const;

                    /**
                     * 设置是否是腾讯云CDN，0为转推非腾讯云CDN，1为转推腾讯CDN，不携带该参数默认为1。注意：1，为避免误产生转推费用，该参数建议明确填写，转推非腾讯云CDN时会产生转推费用，详情参见接口文档说明；2，国内站默认只支持转推腾讯云CDN，如您有转推第三方CDN需求，请联系腾讯云技术支持。
                     * @param _isTencentCdn 是否是腾讯云CDN，0为转推非腾讯云CDN，1为转推腾讯CDN，不携带该参数默认为1。注意：1，为避免误产生转推费用，该参数建议明确填写，转推非腾讯云CDN时会产生转推费用，详情参见接口文档说明；2，国内站默认只支持转推腾讯云CDN，如您有转推第三方CDN需求，请联系腾讯云技术支持。
                     * 
                     */
                    void SetIsTencentCdn(const uint64_t& _isTencentCdn);

                    /**
                     * 判断参数 IsTencentCdn 是否已赋值
                     * @return IsTencentCdn 是否已赋值
                     * 
                     */
                    bool IsTencentCdnHasBeenSet() const;

                private:

                    /**
                     * CDN转推URL，只支持rtmp链接。
注：若更新转推时，URL有任何变化，都会断流重推。
                     */
                    std::string m_publishCdnUrl;
                    bool m_publishCdnUrlHasBeenSet;

                    /**
                     * 是否是腾讯云CDN，0为转推非腾讯云CDN，1为转推腾讯CDN，不携带该参数默认为1。注意：1，为避免误产生转推费用，该参数建议明确填写，转推非腾讯云CDN时会产生转推费用，详情参见接口文档说明；2，国内站默认只支持转推腾讯云CDN，如您有转推第三方CDN需求，请联系腾讯云技术支持。
                     */
                    uint64_t m_isTencentCdn;
                    bool m_isTencentCdnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUPUBLISHCDNPARAM_H_
