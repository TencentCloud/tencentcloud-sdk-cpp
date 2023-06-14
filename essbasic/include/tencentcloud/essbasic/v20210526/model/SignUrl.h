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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SIGNURL_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SIGNURL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 一码多扫签署二维码签署信息
                */
                class SignUrl : public AbstractModel
                {
                public:
                    SignUrl();
                    ~SignUrl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取小程序签署链接
                     * @return AppSignUrl 小程序签署链接
                     * 
                     */
                    std::string GetAppSignUrl() const;

                    /**
                     * 设置小程序签署链接
                     * @param _appSignUrl 小程序签署链接
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
                     * 获取签署链接有效时间
                     * @return EffectiveTime 签署链接有效时间
                     * 
                     */
                    std::string GetEffectiveTime() const;

                    /**
                     * 设置签署链接有效时间
                     * @param _effectiveTime 签署链接有效时间
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
                     * 获取移动端签署链接
                     * @return HttpSignUrl 移动端签署链接
                     * 
                     */
                    std::string GetHttpSignUrl() const;

                    /**
                     * 设置移动端签署链接
                     * @param _httpSignUrl 移动端签署链接
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
                     * 小程序签署链接
                     */
                    std::string m_appSignUrl;
                    bool m_appSignUrlHasBeenSet;

                    /**
                     * 签署链接有效时间
                     */
                    std::string m_effectiveTime;
                    bool m_effectiveTimeHasBeenSet;

                    /**
                     * 移动端签署链接
                     */
                    std::string m_httpSignUrl;
                    bool m_httpSignUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SIGNURL_H_
