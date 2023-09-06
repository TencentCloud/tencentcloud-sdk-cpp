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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_SIGNURL_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_SIGNURL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 流程签署二维码的签署信息，适用于客户系统整合二维码功能。
通过链接，用户可直接访问电子签名小程序并签署合同。
                */
                class SignUrl : public AbstractModel
                {
                public:
                    SignUrl();
                    ~SignUrl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取跳转至电子签名小程序签署的链接地址。
适用于客户端APP及小程序直接唤起电子签名小程序。
                     * @return AppSignUrl 跳转至电子签名小程序签署的链接地址。
适用于客户端APP及小程序直接唤起电子签名小程序。
                     * 
                     */
                    std::string GetAppSignUrl() const;

                    /**
                     * 设置跳转至电子签名小程序签署的链接地址。
适用于客户端APP及小程序直接唤起电子签名小程序。
                     * @param _appSignUrl 跳转至电子签名小程序签署的链接地址。
适用于客户端APP及小程序直接唤起电子签名小程序。
                     * 
                     */
                    void SetAppSignUrl(const std::string& _appSignUrl);

                    /**
                     * 判断参数 AppSignUrl 是否已赋值
                     * @return AppSignUrl 是否已赋值
                     * 
                     */
                    bool AppSignUrlHasBeenSet() const;

                    /**
                     * 获取签署链接有效时间，格式类似"2022-08-05 15:55:01"
                     * @return EffectiveTime 签署链接有效时间，格式类似"2022-08-05 15:55:01"
                     * 
                     */
                    std::string GetEffectiveTime() const;

                    /**
                     * 设置签署链接有效时间，格式类似"2022-08-05 15:55:01"
                     * @param _effectiveTime 签署链接有效时间，格式类似"2022-08-05 15:55:01"
                     * 
                     */
                    void SetEffectiveTime(const std::string& _effectiveTime);

                    /**
                     * 判断参数 EffectiveTime 是否已赋值
                     * @return EffectiveTime 是否已赋值
                     * 
                     */
                    bool EffectiveTimeHasBeenSet() const;

                    /**
                     * 获取跳转至电子签名小程序签署的链接地址，格式类似于https://essurl.cn/xxx。
打开此链接将会展示H5中间页面，随后唤起电子签名小程序以进行合同签署。
                     * @return HttpSignUrl 跳转至电子签名小程序签署的链接地址，格式类似于https://essurl.cn/xxx。
打开此链接将会展示H5中间页面，随后唤起电子签名小程序以进行合同签署。
                     * 
                     */
                    std::string GetHttpSignUrl() const;

                    /**
                     * 设置跳转至电子签名小程序签署的链接地址，格式类似于https://essurl.cn/xxx。
打开此链接将会展示H5中间页面，随后唤起电子签名小程序以进行合同签署。
                     * @param _httpSignUrl 跳转至电子签名小程序签署的链接地址，格式类似于https://essurl.cn/xxx。
打开此链接将会展示H5中间页面，随后唤起电子签名小程序以进行合同签署。
                     * 
                     */
                    void SetHttpSignUrl(const std::string& _httpSignUrl);

                    /**
                     * 判断参数 HttpSignUrl 是否已赋值
                     * @return HttpSignUrl 是否已赋值
                     * 
                     */
                    bool HttpSignUrlHasBeenSet() const;

                private:

                    /**
                     * 跳转至电子签名小程序签署的链接地址。
适用于客户端APP及小程序直接唤起电子签名小程序。
                     */
                    std::string m_appSignUrl;
                    bool m_appSignUrlHasBeenSet;

                    /**
                     * 签署链接有效时间，格式类似"2022-08-05 15:55:01"
                     */
                    std::string m_effectiveTime;
                    bool m_effectiveTimeHasBeenSet;

                    /**
                     * 跳转至电子签名小程序签署的链接地址，格式类似于https://essurl.cn/xxx。
打开此链接将会展示H5中间页面，随后唤起电子签名小程序以进行合同签署。
                     */
                    std::string m_httpSignUrl;
                    bool m_httpSignUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_SIGNURL_H_
