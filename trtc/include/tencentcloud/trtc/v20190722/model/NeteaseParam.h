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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_NETEASEPARAM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_NETEASEPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 网易云信(NERTC)频道拉流参数。传入后表示从网易云信频道内拉流审核，此时可不填 Url。
                */
                class NeteaseParam : public AbstractModel
                {
                public:
                    NeteaseParam();
                    ~NeteaseParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>网易云信应用 AppKey</p><p>登陆云信侧控制台或联系云信获取</p>
                     * @return AppKey <p>网易云信应用 AppKey</p><p>登陆云信侧控制台或联系云信获取</p>
                     * 
                     */
                    std::string GetAppKey() const;

                    /**
                     * 设置<p>网易云信应用 AppKey</p><p>登陆云信侧控制台或联系云信获取</p>
                     * @param _appKey <p>网易云信应用 AppKey</p><p>登陆云信侧控制台或联系云信获取</p>
                     * 
                     */
                    void SetAppKey(const std::string& _appKey);

                    /**
                     * 判断参数 AppKey 是否已赋值
                     * @return AppKey 是否已赋值
                     * 
                     */
                    bool AppKeyHasBeenSet() const;

                    /**
                     * 获取<p>频道名。</p><p>非空字符串,需要和生成token使用的Channel完全一致。</p>
                     * @return Channel <p>频道名。</p><p>非空字符串,需要和生成token使用的Channel完全一致。</p>
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置<p>频道名。</p><p>非空字符串,需要和生成token使用的Channel完全一致。</p>
                     * @param _channel <p>频道名。</p><p>非空字符串,需要和生成token使用的Channel完全一致。</p>
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取<p>用于拉流端进房安全签名</p><p>生成方式详见文档：https://doc.yunxin.163.com/nertc/server-apis/TcxNDAxMTI?platform=server#%E8%8E%B7%E5%8F%96-token，每次请求审核需要重新生成新的token。</p>
                     * @return Token <p>用于拉流端进房安全签名</p><p>生成方式详见文档：https://doc.yunxin.163.com/nertc/server-apis/TcxNDAxMTI?platform=server#%E8%8E%B7%E5%8F%96-token，每次请求审核需要重新生成新的token。</p>
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置<p>用于拉流端进房安全签名</p><p>生成方式详见文档：https://doc.yunxin.163.com/nertc/server-apis/TcxNDAxMTI?platform=server#%E8%8E%B7%E5%8F%96-token，每次请求审核需要重新生成新的token。</p>
                     * @param _token <p>用于拉流端进房安全签名</p><p>生成方式详见文档：https://doc.yunxin.163.com/nertc/server-apis/TcxNDAxMTI?platform=server#%E8%8E%B7%E5%8F%96-token，每次请求审核需要重新生成新的token。</p>
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取<p>分配进房拉流的用户ID。</p><p>和生成Token时所用 Uid 完全一致。</p>
                     * @return Uid <p>分配进房拉流的用户ID。</p><p>和生成Token时所用 Uid 完全一致。</p>
                     * 
                     */
                    uint64_t GetUid() const;

                    /**
                     * 设置<p>分配进房拉流的用户ID。</p><p>和生成Token时所用 Uid 完全一致。</p>
                     * @param _uid <p>分配进房拉流的用户ID。</p><p>和生成Token时所用 Uid 完全一致。</p>
                     * 
                     */
                    void SetUid(const uint64_t& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                private:

                    /**
                     * <p>网易云信应用 AppKey</p><p>登陆云信侧控制台或联系云信获取</p>
                     */
                    std::string m_appKey;
                    bool m_appKeyHasBeenSet;

                    /**
                     * <p>频道名。</p><p>非空字符串,需要和生成token使用的Channel完全一致。</p>
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * <p>用于拉流端进房安全签名</p><p>生成方式详见文档：https://doc.yunxin.163.com/nertc/server-apis/TcxNDAxMTI?platform=server#%E8%8E%B7%E5%8F%96-token，每次请求审核需要重新生成新的token。</p>
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * <p>分配进房拉流的用户ID。</p><p>和生成Token时所用 Uid 完全一致。</p>
                     */
                    uint64_t m_uid;
                    bool m_uidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_NETEASEPARAM_H_
