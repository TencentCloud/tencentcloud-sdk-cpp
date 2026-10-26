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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_OUTBOUNDENDPOINT_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_OUTBOUNDENDPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/TagInfo.h>
#include <tencentcloud/privatedns/v20201028/model/EndpointService.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * 出站终端节点
                */
                class OutboundEndpoint : public AbstractModel
                {
                public:
                    OutboundEndpoint();
                    ~OutboundEndpoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取出站终端节点ID
                     * @return EndpointId 出站终端节点ID
                     * 
                     */
                    std::string GetEndpointId() const;

                    /**
                     * 设置出站终端节点ID
                     * @param _endpointId 出站终端节点ID
                     * 
                     */
                    void SetEndpointId(const std::string& _endpointId);

                    /**
                     * 判断参数 EndpointId 是否已赋值
                     * @return EndpointId 是否已赋值
                     * 
                     */
                    bool EndpointIdHasBeenSet() const;

                    /**
                     * 获取出站终端节点名
                     * @return EndpointName 出站终端节点名
                     * 
                     */
                    std::string GetEndpointName() const;

                    /**
                     * 设置出站终端节点名
                     * @param _endpointName 出站终端节点名
                     * 
                     */
                    void SetEndpointName(const std::string& _endpointName);

                    /**
                     * 判断参数 EndpointName 是否已赋值
                     * @return EndpointName 是否已赋值
                     * 
                     */
                    bool EndpointNameHasBeenSet() const;

                    /**
                     * 获取出站终端节点所属地域
                     * @return Region 出站终端节点所属地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置出站终端节点所属地域
                     * @param _region 出站终端节点所属地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取tag标签
                     * @return Tags tag标签
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置tag标签
                     * @param _tags tag标签
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取出站终端节点信息
仅在转发架构为 V2R的情况下返回
                     * @return EndpointServiceSet 出站终端节点信息
仅在转发架构为 V2R的情况下返回
                     * 
                     */
                    std::vector<EndpointService> GetEndpointServiceSet() const;

                    /**
                     * 设置出站终端节点信息
仅在转发架构为 V2R的情况下返回
                     * @param _endpointServiceSet 出站终端节点信息
仅在转发架构为 V2R的情况下返回
                     * 
                     */
                    void SetEndpointServiceSet(const std::vector<EndpointService>& _endpointServiceSet);

                    /**
                     * 判断参数 EndpointServiceSet 是否已赋值
                     * @return EndpointServiceSet 是否已赋值
                     * 
                     */
                    bool EndpointServiceSetHasBeenSet() const;

                    /**
                     * 获取转发链接架构
V2V: privatelink
V2R: jnsgw
                     * @return ForwardLinkArch 转发链接架构
V2V: privatelink
V2R: jnsgw
                     * 
                     */
                    std::string GetForwardLinkArch() const;

                    /**
                     * 设置转发链接架构
V2V: privatelink
V2R: jnsgw
                     * @param _forwardLinkArch 转发链接架构
V2V: privatelink
V2R: jnsgw
                     * 
                     */
                    void SetForwardLinkArch(const std::string& _forwardLinkArch);

                    /**
                     * 判断参数 ForwardLinkArch 是否已赋值
                     * @return ForwardLinkArch 是否已赋值
                     * 
                     */
                    bool ForwardLinkArchHasBeenSet() const;

                    /**
                     * 获取终端节点服务ID
仅在转发架构为 V2V的情况下返回

                     * @return EndPointServiceId 终端节点服务ID
仅在转发架构为 V2V的情况下返回

                     * 
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 设置终端节点服务ID
仅在转发架构为 V2V的情况下返回

                     * @param _endPointServiceId 终端节点服务ID
仅在转发架构为 V2V的情况下返回

                     * 
                     */
                    void SetEndPointServiceId(const std::string& _endPointServiceId);

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     * 
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                    /**
                     * 获取终端节点VIP列表
仅在转发架构为 V2V的情况下返回
                     * @return EndPointVipSet 终端节点VIP列表
仅在转发架构为 V2V的情况下返回
                     * 
                     */
                    std::vector<std::string> GetEndPointVipSet() const;

                    /**
                     * 设置终端节点VIP列表
仅在转发架构为 V2V的情况下返回
                     * @param _endPointVipSet 终端节点VIP列表
仅在转发架构为 V2V的情况下返回
                     * 
                     */
                    void SetEndPointVipSet(const std::vector<std::string>& _endPointVipSet);

                    /**
                     * 判断参数 EndPointVipSet 是否已赋值
                     * @return EndPointVipSet 是否已赋值
                     * 
                     */
                    bool EndPointVipSetHasBeenSet() const;

                private:

                    /**
                     * 出站终端节点ID
                     */
                    std::string m_endpointId;
                    bool m_endpointIdHasBeenSet;

                    /**
                     * 出站终端节点名
                     */
                    std::string m_endpointName;
                    bool m_endpointNameHasBeenSet;

                    /**
                     * 出站终端节点所属地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * tag标签
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 出站终端节点信息
仅在转发架构为 V2R的情况下返回
                     */
                    std::vector<EndpointService> m_endpointServiceSet;
                    bool m_endpointServiceSetHasBeenSet;

                    /**
                     * 转发链接架构
V2V: privatelink
V2R: jnsgw
                     */
                    std::string m_forwardLinkArch;
                    bool m_forwardLinkArchHasBeenSet;

                    /**
                     * 终端节点服务ID
仅在转发架构为 V2V的情况下返回

                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                    /**
                     * 终端节点VIP列表
仅在转发架构为 V2V的情况下返回
                     */
                    std::vector<std::string> m_endPointVipSet;
                    bool m_endPointVipSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_OUTBOUNDENDPOINT_H_
