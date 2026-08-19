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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAUTHRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAUTHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * DetectAuth返回参数结构体
                */
                class DetectAuthResponse : public AbstractModel
                {
                public:
                    DetectAuthResponse();
                    ~DetectAuthResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>用于发起核身流程的URL，仅微信H5场景使用。</p>
                     * @return Url <p>用于发起核身流程的URL，仅微信H5场景使用。</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>一次核验流程的唯一标识。</p><ul><li>有效时间为7,200秒，超过有效期再进行人脸核验会报错，请在有效期内进行核验。</li><li>完成人脸核验后，需根据此标识调用<a href="https://cloud.tencent.com/document/api/1007/41957">获取实名核身结果信息增强版</a>获取用户最终验证结果信息。</li></ul>
                     * @return BizToken <p>一次核验流程的唯一标识。</p><ul><li>有效时间为7,200秒，超过有效期再进行人脸核验会报错，请在有效期内进行核验。</li><li>完成人脸核验后，需根据此标识调用<a href="https://cloud.tencent.com/document/api/1007/41957">获取实名核身结果信息增强版</a>获取用户最终验证结果信息。</li></ul>
                     * 
                     */
                    std::string GetBizToken() const;

                    /**
                     * 判断参数 BizToken 是否已赋值
                     * @return BizToken 是否已赋值
                     * 
                     */
                    bool BizTokenHasBeenSet() const;

                private:

                    /**
                     * <p>用于发起核身流程的URL，仅微信H5场景使用。</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>一次核验流程的唯一标识。</p><ul><li>有效时间为7,200秒，超过有效期再进行人脸核验会报错，请在有效期内进行核验。</li><li>完成人脸核验后，需根据此标识调用<a href="https://cloud.tencent.com/document/api/1007/41957">获取实名核身结果信息增强版</a>获取用户最终验证结果信息。</li></ul>
                     */
                    std::string m_bizToken;
                    bool m_bizTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAUTHRESPONSE_H_
