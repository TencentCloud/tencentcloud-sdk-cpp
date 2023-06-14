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
                     * 获取模糊匹配专用集群配置名称
                     * @return Name 模糊匹配专用集群配置名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模糊匹配专用集群配置名称
                     * @param _name 模糊匹配专用集群配置名称
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
                     * 获取待查询的专用集群配置id列表
                     * @return DedicatedClusterTypeIds 待查询的专用集群配置id列表
                     * 
                     */
                    std::vector<std::string> GetDedicatedClusterTypeIds() const;

                    /**
                     * 设置待查询的专用集群配置id列表
                     * @param _dedicatedClusterTypeIds 待查询的专用集群配置id列表
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
                     * 获取偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @return Offset 偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @param _offset 偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
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
                     * 获取返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @return Limit 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @param _limit 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
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
                     * 获取是否只查询计算规格类型
                     * @return IsCompute 是否只查询计算规格类型
                     * 
                     */
                    bool GetIsCompute() const;

                    /**
                     * 设置是否只查询计算规格类型
                     * @param _isCompute 是否只查询计算规格类型
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
                     * 模糊匹配专用集群配置名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 待查询的专用集群配置id列表
                     */
                    std::vector<std::string> m_dedicatedClusterTypeIds;
                    bool m_dedicatedClusterTypeIdsHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 是否只查询计算规格类型
                     */
                    bool m_isCompute;
                    bool m_isComputeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERTYPESREQUEST_H_
