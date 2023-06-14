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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_MODIFYINGRESSREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_MODIFYINGRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/IngressInfo.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * ModifyIngress请求参数结构体
                */
                class ModifyIngressRequest : public AbstractModel
                {
                public:
                    ModifyIngressRequest();
                    ~ModifyIngressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Ingress 规则配置
                     * @return Ingress Ingress 规则配置
                     * 
                     */
                    IngressInfo GetIngress() const;

                    /**
                     * 设置Ingress 规则配置
                     * @param _ingress Ingress 规则配置
                     * 
                     */
                    void SetIngress(const IngressInfo& _ingress);

                    /**
                     * 判断参数 Ingress 是否已赋值
                     * @return Ingress 是否已赋值
                     * 
                     */
                    bool IngressHasBeenSet() const;

                    /**
                     * 获取来源渠道
                     * @return SourceChannel 来源渠道
                     * 
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置来源渠道
                     * @param _sourceChannel 来源渠道
                     * 
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     * 
                     */
                    bool SourceChannelHasBeenSet() const;

                private:

                    /**
                     * Ingress 规则配置
                     */
                    IngressInfo m_ingress;
                    bool m_ingressHasBeenSet;

                    /**
                     * 来源渠道
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_MODIFYINGRESSREQUEST_H_
