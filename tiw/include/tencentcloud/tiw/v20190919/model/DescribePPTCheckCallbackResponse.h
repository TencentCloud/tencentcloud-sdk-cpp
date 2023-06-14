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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEPPTCHECKCALLBACKRESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEPPTCHECKCALLBACKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribePPTCheckCallback返回参数结构体
                */
                class DescribePPTCheckCallbackResponse : public AbstractModel
                {
                public:
                    DescribePPTCheckCallbackResponse();
                    ~DescribePPTCheckCallbackResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取回调地址
                     * @return Callback 回调地址
                     * 
                     */
                    std::string GetCallback() const;

                    /**
                     * 判断参数 Callback 是否已赋值
                     * @return Callback 是否已赋值
                     * 
                     */
                    bool CallbackHasBeenSet() const;

                    /**
                     * 获取回调鉴权密钥
                     * @return CallbackKey 回调鉴权密钥
                     * 
                     */
                    std::string GetCallbackKey() const;

                    /**
                     * 判断参数 CallbackKey 是否已赋值
                     * @return CallbackKey 是否已赋值
                     * 
                     */
                    bool CallbackKeyHasBeenSet() const;

                private:

                    /**
                     * 回调地址
                     */
                    std::string m_callback;
                    bool m_callbackHasBeenSet;

                    /**
                     * 回调鉴权密钥
                     */
                    std::string m_callbackKey;
                    bool m_callbackKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEPPTCHECKCALLBACKRESPONSE_H_
