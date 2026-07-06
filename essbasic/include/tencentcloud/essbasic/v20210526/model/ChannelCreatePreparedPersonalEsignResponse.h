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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEPREPAREDPERSONALESIGNRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEPREPAREDPERSONALESIGNRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelCreatePreparedPersonalEsign返回参数结构体
                */
                class ChannelCreatePreparedPersonalEsignResponse : public AbstractModel
                {
                public:
                    ChannelCreatePreparedPersonalEsignResponse();
                    ~ChannelCreatePreparedPersonalEsignResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>电子印章ID，为32位字符串。<br>建议开发者保留此印章ID，后续指定签署区印章或者操作印章需此印章ID。<br>可登录腾讯电子签控制台，在 &quot;印章&quot;-&gt;&quot;印章中心&quot;选择查看的印章，在&quot;印章详情&quot; 中查看某个印章的SealId(在页面中展示为印章ID)。</p>
                     * @return SealId <p>电子印章ID，为32位字符串。<br>建议开发者保留此印章ID，后续指定签署区印章或者操作印章需此印章ID。<br>可登录腾讯电子签控制台，在 &quot;印章&quot;-&gt;&quot;印章中心&quot;选择查看的印章，在&quot;印章详情&quot; 中查看某个印章的SealId(在页面中展示为印章ID)。</p>
                     * 
                     */
                    std::string GetSealId() const;

                    /**
                     * 判断参数 SealId 是否已赋值
                     * @return SealId 是否已赋值
                     * 
                     */
                    bool SealIdHasBeenSet() const;

                private:

                    /**
                     * <p>电子印章ID，为32位字符串。<br>建议开发者保留此印章ID，后续指定签署区印章或者操作印章需此印章ID。<br>可登录腾讯电子签控制台，在 &quot;印章&quot;-&gt;&quot;印章中心&quot;选择查看的印章，在&quot;印章详情&quot; 中查看某个印章的SealId(在页面中展示为印章ID)。</p>
                     */
                    std::string m_sealId;
                    bool m_sealIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEPREPAREDPERSONALESIGNRESPONSE_H_
