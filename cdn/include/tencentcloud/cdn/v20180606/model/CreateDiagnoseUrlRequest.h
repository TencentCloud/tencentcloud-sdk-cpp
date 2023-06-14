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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CREATEDIAGNOSEURLREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CREATEDIAGNOSEURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateDiagnoseUrl请求参数结构体
                */
                class CreateDiagnoseUrlRequest : public AbstractModel
                {
                public:
                    CreateDiagnoseUrlRequest();
                    ~CreateDiagnoseUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需诊断的url，形如：http://www.test.com/test.txt。
                     * @return Url 需诊断的url，形如：http://www.test.com/test.txt。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置需诊断的url，形如：http://www.test.com/test.txt。
                     * @param _url 需诊断的url，形如：http://www.test.com/test.txt。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取请求源带协议头，形如：https://console.cloud.tencent.com
                     * @return Origin 请求源带协议头，形如：https://console.cloud.tencent.com
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置请求源带协议头，形如：https://console.cloud.tencent.com
                     * @param _origin 请求源带协议头，形如：https://console.cloud.tencent.com
                     * 
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                private:

                    /**
                     * 需诊断的url，形如：http://www.test.com/test.txt。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 请求源带协议头，形如：https://console.cloud.tencent.com
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CREATEDIAGNOSEURLREQUEST_H_
