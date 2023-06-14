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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_SETWARNINGCALLBACKREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_SETWARNINGCALLBACKREQUEST_H_

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
                * SetWarningCallback请求参数结构体
                */
                class SetWarningCallbackRequest : public AbstractModel
                {
                public:
                    SetWarningCallbackRequest();
                    ~SetWarningCallbackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户的SdkAppId
                     * @return SdkAppId 客户的SdkAppId
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置客户的SdkAppId
                     * @param _sdkAppId 客户的SdkAppId
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取告警回调地址，如果传空字符串会删除原来的回调地址配置，回调地址仅支持http或https协议，即回调地址以http://或https://开头。
回调数据格式请参考文档：https://cloud.tencent.com/document/product/1137/90112
                     * @return Callback 告警回调地址，如果传空字符串会删除原来的回调地址配置，回调地址仅支持http或https协议，即回调地址以http://或https://开头。
回调数据格式请参考文档：https://cloud.tencent.com/document/product/1137/90112
                     * 
                     */
                    std::string GetCallback() const;

                    /**
                     * 设置告警回调地址，如果传空字符串会删除原来的回调地址配置，回调地址仅支持http或https协议，即回调地址以http://或https://开头。
回调数据格式请参考文档：https://cloud.tencent.com/document/product/1137/90112
                     * @param _callback 告警回调地址，如果传空字符串会删除原来的回调地址配置，回调地址仅支持http或https协议，即回调地址以http://或https://开头。
回调数据格式请参考文档：https://cloud.tencent.com/document/product/1137/90112
                     * 
                     */
                    void SetCallback(const std::string& _callback);

                    /**
                     * 判断参数 Callback 是否已赋值
                     * @return Callback 是否已赋值
                     * 
                     */
                    bool CallbackHasBeenSet() const;

                    /**
                     * 获取设置告警回调鉴权密钥，最长64字符，如果传入空字符串，那么删除现有的鉴权回调密钥，回调鉴权方式请参考文档：https://cloud.tencent.com/document/product/1137/40257
                     * @return CallbackKey 设置告警回调鉴权密钥，最长64字符，如果传入空字符串，那么删除现有的鉴权回调密钥，回调鉴权方式请参考文档：https://cloud.tencent.com/document/product/1137/40257
                     * 
                     */
                    std::string GetCallbackKey() const;

                    /**
                     * 设置设置告警回调鉴权密钥，最长64字符，如果传入空字符串，那么删除现有的鉴权回调密钥，回调鉴权方式请参考文档：https://cloud.tencent.com/document/product/1137/40257
                     * @param _callbackKey 设置告警回调鉴权密钥，最长64字符，如果传入空字符串，那么删除现有的鉴权回调密钥，回调鉴权方式请参考文档：https://cloud.tencent.com/document/product/1137/40257
                     * 
                     */
                    void SetCallbackKey(const std::string& _callbackKey);

                    /**
                     * 判断参数 CallbackKey 是否已赋值
                     * @return CallbackKey 是否已赋值
                     * 
                     */
                    bool CallbackKeyHasBeenSet() const;

                private:

                    /**
                     * 客户的SdkAppId
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 告警回调地址，如果传空字符串会删除原来的回调地址配置，回调地址仅支持http或https协议，即回调地址以http://或https://开头。
回调数据格式请参考文档：https://cloud.tencent.com/document/product/1137/90112
                     */
                    std::string m_callback;
                    bool m_callbackHasBeenSet;

                    /**
                     * 设置告警回调鉴权密钥，最长64字符，如果传入空字符串，那么删除现有的鉴权回调密钥，回调鉴权方式请参考文档：https://cloud.tencent.com/document/product/1137/40257
                     */
                    std::string m_callbackKey;
                    bool m_callbackKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_SETWARNINGCALLBACKREQUEST_H_
