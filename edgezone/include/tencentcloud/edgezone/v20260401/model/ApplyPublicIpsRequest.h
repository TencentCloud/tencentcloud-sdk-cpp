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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_APPLYPUBLICIPSREQUEST_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_APPLYPUBLICIPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * ApplyPublicIps请求参数结构体
                */
                class ApplyPublicIpsRequest : public AbstractModel
                {
                public:
                    ApplyPublicIpsRequest();
                    ~ApplyPublicIpsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取公网实例 ID（路由发布模式必须为 STATIC ）
                     * @return NetworkInstanceId 公网实例 ID（路由发布模式必须为 STATIC ）
                     * 
                     */
                    std::string GetNetworkInstanceId() const;

                    /**
                     * 设置公网实例 ID（路由发布模式必须为 STATIC ）
                     * @param _networkInstanceId 公网实例 ID（路由发布模式必须为 STATIC ）
                     * 
                     */
                    void SetNetworkInstanceId(const std::string& _networkInstanceId);

                    /**
                     * 判断参数 NetworkInstanceId 是否已赋值
                     * @return NetworkInstanceId 是否已赋值
                     * 
                     */
                    bool NetworkInstanceIdHasBeenSet() const;

                    /**
                     * 获取申请Ip数量，最小为 1
                     * @return Count 申请Ip数量，最小为 1
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置申请Ip数量，最小为 1
                     * @param _count 申请Ip数量，最小为 1
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取申请的Ip类型，枚举值：ipv4、ipv6
                     * @return Type 申请的Ip类型，枚举值：ipv4、ipv6
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置申请的Ip类型，枚举值：ipv4、ipv6
                     * @param _type 申请的Ip类型，枚举值：ipv4、ipv6
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 公网实例 ID（路由发布模式必须为 STATIC ）
                     */
                    std::string m_networkInstanceId;
                    bool m_networkInstanceIdHasBeenSet;

                    /**
                     * 申请Ip数量，最小为 1
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 申请的Ip类型，枚举值：ipv4、ipv6
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_APPLYPUBLICIPSREQUEST_H_
