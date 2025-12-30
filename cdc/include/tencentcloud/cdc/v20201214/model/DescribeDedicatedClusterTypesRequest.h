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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERTYPESREQUEST_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERTYPESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * DescribeDedicatedClusterTypes请求参数结构体
                */
                class DescribeDedicatedClusterTypesRequest : public AbstractModel
                {
                public:
                    DescribeDedicatedClusterTypesRequest();
                    ~DescribeDedicatedClusterTypesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模糊匹配专用集群配置名称</p>
                     * @return Name <p>模糊匹配专用集群配置名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>模糊匹配专用集群配置名称</p>
                     * @param _name <p>模糊匹配专用集群配置名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>待查询的专用集群配置id列表</p>
                     * @return DedicatedClusterTypeIds <p>待查询的专用集群配置id列表</p>
                     * 
                     */
                    std::vector<std::string> GetDedicatedClusterTypeIds() const;

                    /**
                     * 设置<p>待查询的专用集群配置id列表</p>
                     * @param _dedicatedClusterTypeIds <p>待查询的专用集群配置id列表</p>
                     * 
                     */
                    void SetDedicatedClusterTypeIds(const std::vector<std::string>& _dedicatedClusterTypeIds);

                    /**
                     * 判断参数 DedicatedClusterTypeIds 是否已赋值
                     * @return DedicatedClusterTypeIds 是否已赋值
                     * 
                     */
                    bool DedicatedClusterTypeIdsHasBeenSet() const;

                    /**
                     * 获取<p>偏移量，默认为0。关于<code>Offset</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/api/213/15688">简介</a>中的相关小节。</p>
                     * @return Offset <p>偏移量，默认为0。关于<code>Offset</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/api/213/15688">简介</a>中的相关小节。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为0。关于<code>Offset</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/api/213/15688">简介</a>中的相关小节。</p>
                     * @param _offset <p>偏移量，默认为0。关于<code>Offset</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/api/213/15688">简介</a>中的相关小节。</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>返回数量，默认为20，最大值为100。关于<code>Limit</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/api/213/15688">简介</a>中的相关小节。</p>
                     * @return Limit <p>返回数量，默认为20，最大值为100。关于<code>Limit</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/api/213/15688">简介</a>中的相关小节。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为20，最大值为100。关于<code>Limit</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/api/213/15688">简介</a>中的相关小节。</p>
                     * @param _limit <p>返回数量，默认为20，最大值为100。关于<code>Limit</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/api/213/15688">简介</a>中的相关小节。</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>是否只查询计算规格类型</p>
                     * @return IsCompute <p>是否只查询计算规格类型</p>
                     * 
                     */
                    bool GetIsCompute() const;

                    /**
                     * 设置<p>是否只查询计算规格类型</p>
                     * @param _isCompute <p>是否只查询计算规格类型</p>
                     * 
                     */
                    void SetIsCompute(const bool& _isCompute);

                    /**
                     * 判断参数 IsCompute 是否已赋值
                     * @return IsCompute 是否已赋值
                     * 
                     */
                    bool IsComputeHasBeenSet() const;

                private:

                    /**
                     * <p>模糊匹配专用集群配置名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>待查询的专用集群配置id列表</p>
                     */
                    std::vector<std::string> m_dedicatedClusterTypeIds;
                    bool m_dedicatedClusterTypeIdsHasBeenSet;

                    /**
                     * <p>偏移量，默认为0。关于<code>Offset</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/api/213/15688">简介</a>中的相关小节。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，默认为20，最大值为100。关于<code>Limit</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/api/213/15688">简介</a>中的相关小节。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>是否只查询计算规格类型</p>
                     */
                    bool m_isCompute;
                    bool m_isComputeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERTYPESREQUEST_H_
