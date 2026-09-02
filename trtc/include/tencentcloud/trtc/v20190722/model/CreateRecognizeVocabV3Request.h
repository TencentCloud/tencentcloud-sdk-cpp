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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CREATERECOGNIZEVOCABV3REQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CREATERECOGNIZEVOCABV3REQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateRecognizeVocabV3请求参数结构体
                */
                class CreateRecognizeVocabV3Request : public AbstractModel
                {
                public:
                    CreateRecognizeVocabV3Request();
                    ~CreateRecognizeVocabV3Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>客户维度唯一标识</p>
                     * @return SdkAppId <p>客户维度唯一标识</p>
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置<p>客户维度唯一标识</p>
                     * @param _sdkAppId <p>客户维度唯一标识</p>
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                private:

                    /**
                     * <p>客户维度唯一标识</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CREATERECOGNIZEVOCABV3REQUEST_H_
