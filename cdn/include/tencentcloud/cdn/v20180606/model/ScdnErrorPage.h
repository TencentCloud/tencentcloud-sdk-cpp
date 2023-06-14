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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SCDNERRORPAGE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SCDNERRORPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * acl的错误页面
                */
                class ScdnErrorPage : public AbstractModel
                {
                public:
                    ScdnErrorPage();
                    ~ScdnErrorPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取状态码
执行动作为：intercept 默认传值 403
执行动作为：redirect 默认传值 301
                     * @return RedirectCode 状态码
执行动作为：intercept 默认传值 403
执行动作为：redirect 默认传值 301
                     * 
                     */
                    int64_t GetRedirectCode() const;

                    /**
                     * 设置状态码
执行动作为：intercept 默认传值 403
执行动作为：redirect 默认传值 301
                     * @param _redirectCode 状态码
执行动作为：intercept 默认传值 403
执行动作为：redirect 默认传值 301
                     * 
                     */
                    void SetRedirectCode(const int64_t& _redirectCode);

                    /**
                     * 判断参数 RedirectCode 是否已赋值
                     * @return RedirectCode 是否已赋值
                     * 
                     */
                    bool RedirectCodeHasBeenSet() const;

                    /**
                     * 获取重定向url
                     * @return RedirectUrl 重定向url
                     * 
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置重定向url
                     * @param _redirectUrl 重定向url
                     * 
                     */
                    void SetRedirectUrl(const std::string& _redirectUrl);

                    /**
                     * 判断参数 RedirectUrl 是否已赋值
                     * @return RedirectUrl 是否已赋值
                     * 
                     */
                    bool RedirectUrlHasBeenSet() const;

                private:

                    /**
                     * 状态码
执行动作为：intercept 默认传值 403
执行动作为：redirect 默认传值 301
                     */
                    int64_t m_redirectCode;
                    bool m_redirectCodeHasBeenSet;

                    /**
                     * 重定向url
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SCDNERRORPAGE_H_
