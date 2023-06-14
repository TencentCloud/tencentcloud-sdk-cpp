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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEDDOSCONNECTLIMITLISTREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEDDOSCONNECTLIMITLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeDDoSConnectLimitList请求参数结构体
                */
                class DescribeDDoSConnectLimitListRequest : public AbstractModel
                {
                public:
                    DescribeDDoSConnectLimitListRequest();
                    ~DescribeDDoSConnectLimitListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页起始偏移，取值为(页码-1)*一页条数
                     * @return Offset 页起始偏移，取值为(页码-1)*一页条数
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置页起始偏移，取值为(页码-1)*一页条数
                     * @param _offset 页起始偏移，取值为(页码-1)*一页条数
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
                     * 获取一页条数
                     * @return Limit 一页条数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置一页条数
                     * @param _limit 一页条数
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
                     * 获取可选参数，按照IP进行过滤
                     * @return FilterIp 可选参数，按照IP进行过滤
                     * 
                     */
                    std::string GetFilterIp() const;

                    /**
                     * 设置可选参数，按照IP进行过滤
                     * @param _filterIp 可选参数，按照IP进行过滤
                     * 
                     */
                    void SetFilterIp(const std::string& _filterIp);

                    /**
                     * 判断参数 FilterIp 是否已赋值
                     * @return FilterIp 是否已赋值
                     * 
                     */
                    bool FilterIpHasBeenSet() const;

                    /**
                     * 获取可选参数，按照实例id进行过滤
                     * @return FilterInstanceId 可选参数，按照实例id进行过滤
                     * 
                     */
                    std::string GetFilterInstanceId() const;

                    /**
                     * 设置可选参数，按照实例id进行过滤
                     * @param _filterInstanceId 可选参数，按照实例id进行过滤
                     * 
                     */
                    void SetFilterInstanceId(const std::string& _filterInstanceId);

                    /**
                     * 判断参数 FilterInstanceId 是否已赋值
                     * @return FilterInstanceId 是否已赋值
                     * 
                     */
                    bool FilterInstanceIdHasBeenSet() const;

                private:

                    /**
                     * 页起始偏移，取值为(页码-1)*一页条数
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 一页条数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 可选参数，按照IP进行过滤
                     */
                    std::string m_filterIp;
                    bool m_filterIpHasBeenSet;

                    /**
                     * 可选参数，按照实例id进行过滤
                     */
                    std::string m_filterInstanceId;
                    bool m_filterInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEDDOSCONNECTLIMITLISTREQUEST_H_
