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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEATTACKLOGINFORESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEATTACKLOGINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAttackLogInfo返回参数结构体
                */
                class DescribeAttackLogInfoResponse : public AbstractModel
                {
                public:
                    DescribeAttackLogInfoResponse();
                    ~DescribeAttackLogInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取日志ID
                     * @return Id 日志ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取主机ID
                     * @return Quuid 主机ID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取攻击来源端口
                     * @return SrcPort 攻击来源端口
                     * 
                     */
                    uint64_t GetSrcPort() const;

                    /**
                     * 判断参数 SrcPort 是否已赋值
                     * @return SrcPort 是否已赋值
                     * 
                     */
                    bool SrcPortHasBeenSet() const;

                    /**
                     * 获取攻击来源IP
                     * @return SrcIp 攻击来源IP
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取攻击目标端口
                     * @return DstPort 攻击目标端口
                     * 
                     */
                    uint64_t GetDstPort() const;

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     * 
                     */
                    bool DstPortHasBeenSet() const;

                    /**
                     * 获取攻击目标IP
                     * @return DstIp 攻击目标IP
                     * 
                     */
                    std::string GetDstIp() const;

                    /**
                     * 判断参数 DstIp 是否已赋值
                     * @return DstIp 是否已赋值
                     * 
                     */
                    bool DstIpHasBeenSet() const;

                    /**
                     * 获取攻击方法
                     * @return HttpMethod 攻击方法
                     * 
                     */
                    std::string GetHttpMethod() const;

                    /**
                     * 判断参数 HttpMethod 是否已赋值
                     * @return HttpMethod 是否已赋值
                     * 
                     */
                    bool HttpMethodHasBeenSet() const;

                    /**
                     * 获取攻击目标主机
                     * @return HttpHost 攻击目标主机
                     * 
                     */
                    std::string GetHttpHost() const;

                    /**
                     * 判断参数 HttpHost 是否已赋值
                     * @return HttpHost 是否已赋值
                     * 
                     */
                    bool HttpHostHasBeenSet() const;

                    /**
                     * 获取攻击头信息
                     * @return HttpHead 攻击头信息
                     * 
                     */
                    std::string GetHttpHead() const;

                    /**
                     * 判断参数 HttpHead 是否已赋值
                     * @return HttpHead 是否已赋值
                     * 
                     */
                    bool HttpHeadHasBeenSet() const;

                    /**
                     * 获取攻击者浏览器标识
                     * @return HttpUserAgent 攻击者浏览器标识
                     * 
                     */
                    std::string GetHttpUserAgent() const;

                    /**
                     * 判断参数 HttpUserAgent 是否已赋值
                     * @return HttpUserAgent 是否已赋值
                     * 
                     */
                    bool HttpUserAgentHasBeenSet() const;

                    /**
                     * 获取请求源
                     * @return HttpReferer 请求源
                     * 
                     */
                    std::string GetHttpReferer() const;

                    /**
                     * 判断参数 HttpReferer 是否已赋值
                     * @return HttpReferer 是否已赋值
                     * 
                     */
                    bool HttpRefererHasBeenSet() const;

                    /**
                     * 获取威胁类型
                     * @return VulType 威胁类型
                     * 
                     */
                    std::string GetVulType() const;

                    /**
                     * 判断参数 VulType 是否已赋值
                     * @return VulType 是否已赋值
                     * 
                     */
                    bool VulTypeHasBeenSet() const;

                    /**
                     * 获取攻击路径
                     * @return HttpCgi 攻击路径
                     * 
                     */
                    std::string GetHttpCgi() const;

                    /**
                     * 判断参数 HttpCgi 是否已赋值
                     * @return HttpCgi 是否已赋值
                     * 
                     */
                    bool HttpCgiHasBeenSet() const;

                    /**
                     * 获取攻击参数
                     * @return HttpParam 攻击参数
                     * 
                     */
                    std::string GetHttpParam() const;

                    /**
                     * 判断参数 HttpParam 是否已赋值
                     * @return HttpParam 是否已赋值
                     * 
                     */
                    bool HttpParamHasBeenSet() const;

                    /**
                     * 获取攻击时间
                     * @return CreatedAt 攻击时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取攻击内容
                     * @return HttpContent 攻击内容
                     * 
                     */
                    std::string GetHttpContent() const;

                    /**
                     * 判断参数 HttpContent 是否已赋值
                     * @return HttpContent 是否已赋值
                     * 
                     */
                    bool HttpContentHasBeenSet() const;

                private:

                    /**
                     * 日志ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 主机ID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 攻击来源端口
                     */
                    uint64_t m_srcPort;
                    bool m_srcPortHasBeenSet;

                    /**
                     * 攻击来源IP
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * 攻击目标端口
                     */
                    uint64_t m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * 攻击目标IP
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                    /**
                     * 攻击方法
                     */
                    std::string m_httpMethod;
                    bool m_httpMethodHasBeenSet;

                    /**
                     * 攻击目标主机
                     */
                    std::string m_httpHost;
                    bool m_httpHostHasBeenSet;

                    /**
                     * 攻击头信息
                     */
                    std::string m_httpHead;
                    bool m_httpHeadHasBeenSet;

                    /**
                     * 攻击者浏览器标识
                     */
                    std::string m_httpUserAgent;
                    bool m_httpUserAgentHasBeenSet;

                    /**
                     * 请求源
                     */
                    std::string m_httpReferer;
                    bool m_httpRefererHasBeenSet;

                    /**
                     * 威胁类型
                     */
                    std::string m_vulType;
                    bool m_vulTypeHasBeenSet;

                    /**
                     * 攻击路径
                     */
                    std::string m_httpCgi;
                    bool m_httpCgiHasBeenSet;

                    /**
                     * 攻击参数
                     */
                    std::string m_httpParam;
                    bool m_httpParamHasBeenSet;

                    /**
                     * 攻击时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 攻击内容
                     */
                    std::string m_httpContent;
                    bool m_httpContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEATTACKLOGINFORESPONSE_H_
