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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCIPALLOWDENYREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCIPALLOWDENYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeCCIpAllowDeny请求参数结构体
                */
                class DescribeCCIpAllowDenyRequest : public AbstractModel
                {
                public:
                    DescribeCCIpAllowDenyRequest();
                    ~DescribeCCIpAllowDenyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * @return Business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * @param _business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return Id 资源ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源ID
                     * @param _id 资源ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取黑或白名单，取值[white(白名单)，black(黑名单)]
注意：此数组只能有一个值，不能同时获取黑名单和白名单
                     * @return Type 黑或白名单，取值[white(白名单)，black(黑名单)]
注意：此数组只能有一个值，不能同时获取黑名单和白名单
                     * 
                     */
                    std::vector<std::string> GetType() const;

                    /**
                     * 设置黑或白名单，取值[white(白名单)，black(黑名单)]
注意：此数组只能有一个值，不能同时获取黑名单和白名单
                     * @param _type 黑或白名单，取值[white(白名单)，black(黑名单)]
注意：此数组只能有一个值，不能同时获取黑名单和白名单
                     * 
                     */
                    void SetType(const std::vector<std::string>& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取分页参数
                     * @return Limit 分页参数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页参数
                     * @param _limit 分页参数
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页参数
                     * @return Offset 分页参数
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页参数
                     * @param _offset 分页参数
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取可选，代表HTTP协议或HTTPS协议的CC防护，取值[http（HTTP协议的CC防护），https（HTTPS协议的CC防护）]；
                     * @return Protocol 可选，代表HTTP协议或HTTPS协议的CC防护，取值[http（HTTP协议的CC防护），https（HTTPS协议的CC防护）]；
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置可选，代表HTTP协议或HTTPS协议的CC防护，取值[http（HTTP协议的CC防护），https（HTTPS协议的CC防护）]；
                     * @param _protocol 可选，代表HTTP协议或HTTPS协议的CC防护，取值[http（HTTP协议的CC防护），https（HTTPS协议的CC防护）]；
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 黑或白名单，取值[white(白名单)，black(黑名单)]
注意：此数组只能有一个值，不能同时获取黑名单和白名单
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 分页参数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页参数
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 可选，代表HTTP协议或HTTPS协议的CC防护，取值[http（HTTP协议的CC防护），https（HTTPS协议的CC防护）]；
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCIPALLOWDENYREQUEST_H_
