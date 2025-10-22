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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEIMAGESTOSHAREREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEIMAGESTOSHAREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Filter.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeImagesToShare请求参数结构体
                */
                class DescribeImagesToShareRequest : public AbstractModel
                {
                public:
                    DescribeImagesToShareRequest();
                    ~DescribeImagesToShareRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CVM镜像 ID 列表。可通过[DescribeImages](https://cloud.tencent.com/document/api/213/15715)接口返回值中的ImageId获取。
                     * @return ImageIds CVM镜像 ID 列表。可通过[DescribeImages](https://cloud.tencent.com/document/api/213/15715)接口返回值中的ImageId获取。
                     * 
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置CVM镜像 ID 列表。可通过[DescribeImages](https://cloud.tencent.com/document/api/213/15715)接口返回值中的ImageId获取。
                     * @param _imageIds CVM镜像 ID 列表。可通过[DescribeImages](https://cloud.tencent.com/document/api/213/15715)接口返回值中的ImageId获取。
                     * 
                     */
                    void SetImageIds(const std::vector<std::string>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     * 
                     */
                    bool ImageIdsHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为 0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * @return Offset 偏移量，默认为 0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为 0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * @param _offset 偏移量，默认为 0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
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
                     * 获取返回数量，默认为 20，最大值为 100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * @return Limit 返回数量，默认为 20，最大值为 100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为 20，最大值为 100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * @param _limit 返回数量，默认为 20，最大值为 100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
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
                     * 获取过滤器列表。
<li>image-id</li>按照【CVM镜像ID】进行过滤。
类型：String
必选：否

<li>image-name</li>按照【CVM镜像名称】进行过滤。
类型：String
必选：否

<li>image-type</li>按照【CVM镜像类型】进行过滤。
类型：String
必选：否
取值范围：
PRIVATE_IMAGE: 私有镜像 (本账户创建的镜像)
PUBLIC_IMAGE: 公共镜像 (腾讯云官方镜像)
SHARED_IMAGE: 共享镜像(其他账户共享给本账户的镜像) 。

每次请求的 Filters 的上限为 10，Filter.Values 的上限为 5。
参数不可以同时指定ImageIds和Filters。
                     * @return Filters 过滤器列表。
<li>image-id</li>按照【CVM镜像ID】进行过滤。
类型：String
必选：否

<li>image-name</li>按照【CVM镜像名称】进行过滤。
类型：String
必选：否

<li>image-type</li>按照【CVM镜像类型】进行过滤。
类型：String
必选：否
取值范围：
PRIVATE_IMAGE: 私有镜像 (本账户创建的镜像)
PUBLIC_IMAGE: 公共镜像 (腾讯云官方镜像)
SHARED_IMAGE: 共享镜像(其他账户共享给本账户的镜像) 。

每次请求的 Filters 的上限为 10，Filter.Values 的上限为 5。
参数不可以同时指定ImageIds和Filters。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤器列表。
<li>image-id</li>按照【CVM镜像ID】进行过滤。
类型：String
必选：否

<li>image-name</li>按照【CVM镜像名称】进行过滤。
类型：String
必选：否

<li>image-type</li>按照【CVM镜像类型】进行过滤。
类型：String
必选：否
取值范围：
PRIVATE_IMAGE: 私有镜像 (本账户创建的镜像)
PUBLIC_IMAGE: 公共镜像 (腾讯云官方镜像)
SHARED_IMAGE: 共享镜像(其他账户共享给本账户的镜像) 。

每次请求的 Filters 的上限为 10，Filter.Values 的上限为 5。
参数不可以同时指定ImageIds和Filters。
                     * @param _filters 过滤器列表。
<li>image-id</li>按照【CVM镜像ID】进行过滤。
类型：String
必选：否

<li>image-name</li>按照【CVM镜像名称】进行过滤。
类型：String
必选：否

<li>image-type</li>按照【CVM镜像类型】进行过滤。
类型：String
必选：否
取值范围：
PRIVATE_IMAGE: 私有镜像 (本账户创建的镜像)
PUBLIC_IMAGE: 公共镜像 (腾讯云官方镜像)
SHARED_IMAGE: 共享镜像(其他账户共享给本账户的镜像) 。

每次请求的 Filters 的上限为 10，Filter.Values 的上限为 5。
参数不可以同时指定ImageIds和Filters。
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * CVM镜像 ID 列表。可通过[DescribeImages](https://cloud.tencent.com/document/api/213/15715)接口返回值中的ImageId获取。
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * 偏移量，默认为 0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为 20，最大值为 100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤器列表。
<li>image-id</li>按照【CVM镜像ID】进行过滤。
类型：String
必选：否

<li>image-name</li>按照【CVM镜像名称】进行过滤。
类型：String
必选：否

<li>image-type</li>按照【CVM镜像类型】进行过滤。
类型：String
必选：否
取值范围：
PRIVATE_IMAGE: 私有镜像 (本账户创建的镜像)
PUBLIC_IMAGE: 公共镜像 (腾讯云官方镜像)
SHARED_IMAGE: 共享镜像(其他账户共享给本账户的镜像) 。

每次请求的 Filters 的上限为 10，Filter.Values 的上限为 5。
参数不可以同时指定ImageIds和Filters。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEIMAGESTOSHAREREQUEST_H_
