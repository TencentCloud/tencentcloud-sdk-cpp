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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MULTICERTINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MULTICERTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/CertInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * CLB监听器或规则绑定的多证书信息
                */
                class MultiCertInfo : public AbstractModel
                {
                public:
                    MultiCertInfo();
                    ~MultiCertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取认证类型，UNIDIRECTIONAL：单向认证，MUTUAL：双向认证
                     * @return SSLMode 认证类型，UNIDIRECTIONAL：单向认证，MUTUAL：双向认证
                     * 
                     */
                    std::string GetSSLMode() const;

                    /**
                     * 设置认证类型，UNIDIRECTIONAL：单向认证，MUTUAL：双向认证
                     * @param _sSLMode 认证类型，UNIDIRECTIONAL：单向认证，MUTUAL：双向认证
                     * 
                     */
                    void SetSSLMode(const std::string& _sSLMode);

                    /**
                     * 判断参数 SSLMode 是否已赋值
                     * @return SSLMode 是否已赋值
                     * 
                     */
                    bool SSLModeHasBeenSet() const;

                    /**
                     * 获取监听器或规则证书列表，单双向认证，多本服务端证书算法类型不能重复;若SSLMode为双向认证，证书列表必须包含一本ca证书。
                     * @return CertList 监听器或规则证书列表，单双向认证，多本服务端证书算法类型不能重复;若SSLMode为双向认证，证书列表必须包含一本ca证书。
                     * 
                     */
                    std::vector<CertInfo> GetCertList() const;

                    /**
                     * 设置监听器或规则证书列表，单双向认证，多本服务端证书算法类型不能重复;若SSLMode为双向认证，证书列表必须包含一本ca证书。
                     * @param _certList 监听器或规则证书列表，单双向认证，多本服务端证书算法类型不能重复;若SSLMode为双向认证，证书列表必须包含一本ca证书。
                     * 
                     */
                    void SetCertList(const std::vector<CertInfo>& _certList);

                    /**
                     * 判断参数 CertList 是否已赋值
                     * @return CertList 是否已赋值
                     * 
                     */
                    bool CertListHasBeenSet() const;

                    /**
                     * 获取双向认证时，是否开启客户端认证，ON:开启，OPTIONAL:自适应，默认ON
                     * @return SSLVerifyClient 双向认证时，是否开启客户端认证，ON:开启，OPTIONAL:自适应，默认ON
                     * 
                     */
                    std::string GetSSLVerifyClient() const;

                    /**
                     * 设置双向认证时，是否开启客户端认证，ON:开启，OPTIONAL:自适应，默认ON
                     * @param _sSLVerifyClient 双向认证时，是否开启客户端认证，ON:开启，OPTIONAL:自适应，默认ON
                     * 
                     */
                    void SetSSLVerifyClient(const std::string& _sSLVerifyClient);

                    /**
                     * 判断参数 SSLVerifyClient 是否已赋值
                     * @return SSLVerifyClient 是否已赋值
                     * 
                     */
                    bool SSLVerifyClientHasBeenSet() const;

                private:

                    /**
                     * 认证类型，UNIDIRECTIONAL：单向认证，MUTUAL：双向认证
                     */
                    std::string m_sSLMode;
                    bool m_sSLModeHasBeenSet;

                    /**
                     * 监听器或规则证书列表，单双向认证，多本服务端证书算法类型不能重复;若SSLMode为双向认证，证书列表必须包含一本ca证书。
                     */
                    std::vector<CertInfo> m_certList;
                    bool m_certListHasBeenSet;

                    /**
                     * 双向认证时，是否开启客户端认证，ON:开启，OPTIONAL:自适应，默认ON
                     */
                    std::string m_sSLVerifyClient;
                    bool m_sSLVerifyClientHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MULTICERTINFO_H_
