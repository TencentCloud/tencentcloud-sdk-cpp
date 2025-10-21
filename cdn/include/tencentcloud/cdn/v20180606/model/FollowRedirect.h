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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_FOLLOWREDIRECT_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_FOLLOWREDIRECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/RedirectConfig.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 回源 301/302 状态码自动跟随配置，默认为关闭状态
                */
                class FollowRedirect : public AbstractModel
                {
                public:
                    FollowRedirect();
                    ~FollowRedirect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取回源跟随配置开关，取值有：
on：开启
off：关闭
                     * @return Switch 回源跟随配置开关，取值有：
on：开启
off：关闭
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置回源跟随配置开关，取值有：
on：开启
off：关闭
                     * @param _switch 回源跟随配置开关，取值有：
on：开启
off：关闭
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取自定义回源302 follow请求host配置，该功能为白名单功能，需要开启请联系腾讯云工程师。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedirectConfig 自定义回源302 follow请求host配置，该功能为白名单功能，需要开启请联系腾讯云工程师。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RedirectConfig GetRedirectConfig() const;

                    /**
                     * 设置自定义回源302 follow请求host配置，该功能为白名单功能，需要开启请联系腾讯云工程师。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _redirectConfig 自定义回源302 follow请求host配置，该功能为白名单功能，需要开启请联系腾讯云工程师。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRedirectConfig(const RedirectConfig& _redirectConfig);

                    /**
                     * 判断参数 RedirectConfig 是否已赋值
                     * @return RedirectConfig 是否已赋值
                     * 
                     */
                    bool RedirectConfigHasBeenSet() const;

                private:

                    /**
                     * 回源跟随配置开关，取值有：
on：开启
off：关闭
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 自定义回源302 follow请求host配置，该功能为白名单功能，需要开启请联系腾讯云工程师。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RedirectConfig m_redirectConfig;
                    bool m_redirectConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_FOLLOWREDIRECT_H_
