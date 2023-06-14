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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_IPDETAIL_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_IPDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * ip信息详情
                */
                class IPDetail : public AbstractModel
                {
                public:
                    IPDetail();
                    ~IPDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP字符串
                     * @return IP IP字符串
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置IP字符串
                     * @param _iP IP字符串
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取供应商，BGP表示默认，CMCC表示中国移动，CUCC表示中国联通，CTCC表示中国电信
                     * @return Provider 供应商，BGP表示默认，CMCC表示中国移动，CUCC表示中国联通，CTCC表示中国电信
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置供应商，BGP表示默认，CMCC表示中国移动，CUCC表示中国联通，CTCC表示中国电信
                     * @param _provider 供应商，BGP表示默认，CMCC表示中国移动，CUCC表示中国联通，CTCC表示中国电信
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取带宽
                     * @return Bandwidth 带宽
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置带宽
                     * @param _bandwidth 带宽
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                private:

                    /**
                     * IP字符串
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 供应商，BGP表示默认，CMCC表示中国移动，CUCC表示中国联通，CTCC表示中国电信
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * 带宽
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_IPDETAIL_H_
