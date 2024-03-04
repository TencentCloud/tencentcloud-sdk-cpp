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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYAPPREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * ModifyApp请求参数结构体
                */
                class ModifyAppRequest : public AbstractModel
                {
                public:
                    ModifyAppRequest();
                    ~ModifyAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取低代码互动课堂的SdkAppId。
                     * @return SdkAppId 低代码互动课堂的SdkAppId。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置低代码互动课堂的SdkAppId。
                     * @param _sdkAppId 低代码互动课堂的SdkAppId。
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取回调地址。
                     * @return Callback 回调地址。
                     * 
                     */
                    std::string GetCallback() const;

                    /**
                     * 设置回调地址。
                     * @param _callback 回调地址。
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
                     * 获取回调key。
                     * @return CallbackKey 回调key。
                     * 
                     */
                    std::string GetCallbackKey() const;

                    /**
                     * 设置回调key。
                     * @param _callbackKey 回调key。
                     * 
                     */
                    void SetCallbackKey(const std::string& _callbackKey);

                    /**
                     * 判断参数 CallbackKey 是否已赋值
                     * @return CallbackKey 是否已赋值
                     * 
                     */
                    bool CallbackKeyHasBeenSet() const;

                    /**
                     * 获取转存id
                     * @return TransferId 转存id
                     * 
                     */
                    std::string GetTransferId() const;

                    /**
                     * 设置转存id
                     * @param _transferId 转存id
                     * 
                     */
                    void SetTransferId(const std::string& _transferId);

                    /**
                     * 判断参数 TransferId 是否已赋值
                     * @return TransferId 是否已赋值
                     * 
                     */
                    bool TransferIdHasBeenSet() const;

                    /**
                     * 获取转存地址
                     * @return TransferUrl 转存地址
                     * 
                     */
                    std::string GetTransferUrl() const;

                    /**
                     * 设置转存地址
                     * @param _transferUrl 转存地址
                     * 
                     */
                    void SetTransferUrl(const std::string& _transferUrl);

                    /**
                     * 判断参数 TransferUrl 是否已赋值
                     * @return TransferUrl 是否已赋值
                     * 
                     */
                    bool TransferUrlHasBeenSet() const;

                private:

                    /**
                     * 低代码互动课堂的SdkAppId。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 回调地址。
                     */
                    std::string m_callback;
                    bool m_callbackHasBeenSet;

                    /**
                     * 回调key。
                     */
                    std::string m_callbackKey;
                    bool m_callbackKeyHasBeenSet;

                    /**
                     * 转存id
                     */
                    std::string m_transferId;
                    bool m_transferIdHasBeenSet;

                    /**
                     * 转存地址
                     */
                    std::string m_transferUrl;
                    bool m_transferUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYAPPREQUEST_H_
