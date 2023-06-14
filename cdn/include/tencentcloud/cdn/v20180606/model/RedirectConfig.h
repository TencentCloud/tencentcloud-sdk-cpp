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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_REDIRECTCONFIG_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_REDIRECTCONFIG_H_

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
                * 自定义回源302 follow请求host配置
                */
                class RedirectConfig : public AbstractModel
                {
                public:
                    RedirectConfig();
                    ~RedirectConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义回源302 follow请求host配置开关，取值有：
on：开启
off：关闭
                     * @return Switch 自定义回源302 follow请求host配置开关，取值有：
on：开启
off：关闭
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置自定义回源302 follow请求host配置开关，取值有：
on：开启
off：关闭
                     * @param _switch 自定义回源302 follow请求host配置开关，取值有：
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
                     * 获取主源站follow302请求时带的自定义的host头部
                     * @return FollowRedirectHost 主源站follow302请求时带的自定义的host头部
                     * 
                     */
                    std::string GetFollowRedirectHost() const;

                    /**
                     * 设置主源站follow302请求时带的自定义的host头部
                     * @param _followRedirectHost 主源站follow302请求时带的自定义的host头部
                     * 
                     */
                    void SetFollowRedirectHost(const std::string& _followRedirectHost);

                    /**
                     * 判断参数 FollowRedirectHost 是否已赋值
                     * @return FollowRedirectHost 是否已赋值
                     * 
                     */
                    bool FollowRedirectHostHasBeenSet() const;

                    /**
                     * 获取备份源站follow302请求时带的自定义的host头部
                     * @return FollowRedirectBackupHost 备份源站follow302请求时带的自定义的host头部
                     * 
                     */
                    std::string GetFollowRedirectBackupHost() const;

                    /**
                     * 设置备份源站follow302请求时带的自定义的host头部
                     * @param _followRedirectBackupHost 备份源站follow302请求时带的自定义的host头部
                     * 
                     */
                    void SetFollowRedirectBackupHost(const std::string& _followRedirectBackupHost);

                    /**
                     * 判断参数 FollowRedirectBackupHost 是否已赋值
                     * @return FollowRedirectBackupHost 是否已赋值
                     * 
                     */
                    bool FollowRedirectBackupHostHasBeenSet() const;

                private:

                    /**
                     * 自定义回源302 follow请求host配置开关，取值有：
on：开启
off：关闭
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 主源站follow302请求时带的自定义的host头部
                     */
                    std::string m_followRedirectHost;
                    bool m_followRedirectHostHasBeenSet;

                    /**
                     * 备份源站follow302请求时带的自定义的host头部
                     */
                    std::string m_followRedirectBackupHost;
                    bool m_followRedirectBackupHostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_REDIRECTCONFIG_H_
