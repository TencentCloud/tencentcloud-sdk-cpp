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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_PUTWXAPPIDTOWEAPPREQUEST_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_PUTWXAPPIDTOWEAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * PutWxAppIdToWeApp请求参数结构体
                */
                class PutWxAppIdToWeAppRequest : public AbstractModel
                {
                public:
                    PutWxAppIdToWeAppRequest();
                    ~PutWxAppIdToWeAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return WeAppId 应用ID
                     * 
                     */
                    std::string GetWeAppId() const;

                    /**
                     * 设置应用ID
                     * @param _weAppId 应用ID
                     * 
                     */
                    void SetWeAppId(const std::string& _weAppId);

                    /**
                     * 判断参数 WeAppId 是否已赋值
                     * @return WeAppId 是否已赋值
                     * 
                     */
                    bool WeAppIdHasBeenSet() const;

                    /**
                     * 获取微信AppId
                     * @return WxAppId 微信AppId
                     * 
                     */
                    std::string GetWxAppId() const;

                    /**
                     * 设置微信AppId
                     * @param _wxAppId 微信AppId
                     * 
                     */
                    void SetWxAppId(const std::string& _wxAppId);

                    /**
                     * 判断参数 WxAppId 是否已赋值
                     * @return WxAppId 是否已赋值
                     * 
                     */
                    bool WxAppIdHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_weAppId;
                    bool m_weAppIdHasBeenSet;

                    /**
                     * 微信AppId
                     */
                    std::string m_wxAppId;
                    bool m_wxAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_PUTWXAPPIDTOWEAPPREQUEST_H_
