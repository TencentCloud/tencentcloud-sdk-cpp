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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBUNDLESREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBUNDLESREQUEST_H_

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
                * DescribeBundles请求参数结构体
                */
                class DescribeBundlesRequest : public AbstractModel
                {
                public:
                    DescribeBundlesRequest();
                    ~DescribeBundlesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>套餐 ID 列表。每次请求批量套餐的上限为 100。可通过<a href="https://cloud.tencent.com/document/product/1207/47575">DescribeBundles</a>接口返回值中的BundleId获取。</p>
                     * @return BundleIds <p>套餐 ID 列表。每次请求批量套餐的上限为 100。可通过<a href="https://cloud.tencent.com/document/product/1207/47575">DescribeBundles</a>接口返回值中的BundleId获取。</p>
                     * 
                     */
                    std::vector<std::string> GetBundleIds() const;

                    /**
                     * 设置<p>套餐 ID 列表。每次请求批量套餐的上限为 100。可通过<a href="https://cloud.tencent.com/document/product/1207/47575">DescribeBundles</a>接口返回值中的BundleId获取。</p>
                     * @param _bundleIds <p>套餐 ID 列表。每次请求批量套餐的上限为 100。可通过<a href="https://cloud.tencent.com/document/product/1207/47575">DescribeBundles</a>接口返回值中的BundleId获取。</p>
                     * 
                     */
                    void SetBundleIds(const std::vector<std::string>& _bundleIds);

                    /**
                     * 判断参数 BundleIds 是否已赋值
                     * @return BundleIds 是否已赋值
                     * 
                     */
                    bool BundleIdsHasBeenSet() const;

                    /**
                     * 获取<p>偏移量，默认为 0。关于<code>Offset</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/product/1207/47578">简介</a>中的相关小节。</p>
                     * @return Offset <p>偏移量，默认为 0。关于<code>Offset</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/product/1207/47578">简介</a>中的相关小节。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为 0。关于<code>Offset</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/product/1207/47578">简介</a>中的相关小节。</p>
                     * @param _offset <p>偏移量，默认为 0。关于<code>Offset</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/product/1207/47578">简介</a>中的相关小节。</p>
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
                     * 获取<p>返回数量，默认为 20，最大值为 100。关于<code>Limit</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/product/1207/47578">简介</a>中的相关小节。</p>
                     * @return Limit <p>返回数量，默认为 20，最大值为 100。关于<code>Limit</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/product/1207/47578">简介</a>中的相关小节。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为 20，最大值为 100。关于<code>Limit</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/product/1207/47578">简介</a>中的相关小节。</p>
                     * @param _limit <p>返回数量，默认为 20，最大值为 100。关于<code>Limit</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/product/1207/47578">简介</a>中的相关小节。</p>
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
                     * 获取<p>过滤器列表。</p><li>bundle-id</li>按照【套餐 ID】进行过滤。类型：String必选：否<li>support-platform-type</li>按照【系统类型】进行过滤。取值： LINUX_UNIX(Linux/Unix系统) ;WINDOWS(Windows 系统)类型：String必选：否<li>bundle-type</li>按照 【套餐类型进行过滤】。取值：GENERAL_BUNDLE (通用型套餐); STORAGE_BUNDLE(存储型套餐);ENTERPRISE_BUNDLE( 企业型套餐);EXCLUSIVE_BUNDLE(专属型套餐);BEFAST_BUNDLE(蜂驰型套餐);STARTER_BUNDLE(入门型套餐);CAREFREE_BUNDLE(无忧型套餐);RAZOR_SPEED_BUNDLE(锐驰型套餐)类型：String必选：否<li>bundle-state</li>按照【套餐状态】进行过滤。取值: ONLINE(在线); OFFLINE(下线);类型：String必选：否每次请求的 Filters 的上限为 10，Filter.Values 的上限为 5。参数不支持同时指定 BundleIds 和 Filters。
                     * @return Filters <p>过滤器列表。</p><li>bundle-id</li>按照【套餐 ID】进行过滤。类型：String必选：否<li>support-platform-type</li>按照【系统类型】进行过滤。取值： LINUX_UNIX(Linux/Unix系统) ;WINDOWS(Windows 系统)类型：String必选：否<li>bundle-type</li>按照 【套餐类型进行过滤】。取值：GENERAL_BUNDLE (通用型套餐); STORAGE_BUNDLE(存储型套餐);ENTERPRISE_BUNDLE( 企业型套餐);EXCLUSIVE_BUNDLE(专属型套餐);BEFAST_BUNDLE(蜂驰型套餐);STARTER_BUNDLE(入门型套餐);CAREFREE_BUNDLE(无忧型套餐);RAZOR_SPEED_BUNDLE(锐驰型套餐)类型：String必选：否<li>bundle-state</li>按照【套餐状态】进行过滤。取值: ONLINE(在线); OFFLINE(下线);类型：String必选：否每次请求的 Filters 的上限为 10，Filter.Values 的上限为 5。参数不支持同时指定 BundleIds 和 Filters。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤器列表。</p><li>bundle-id</li>按照【套餐 ID】进行过滤。类型：String必选：否<li>support-platform-type</li>按照【系统类型】进行过滤。取值： LINUX_UNIX(Linux/Unix系统) ;WINDOWS(Windows 系统)类型：String必选：否<li>bundle-type</li>按照 【套餐类型进行过滤】。取值：GENERAL_BUNDLE (通用型套餐); STORAGE_BUNDLE(存储型套餐);ENTERPRISE_BUNDLE( 企业型套餐);EXCLUSIVE_BUNDLE(专属型套餐);BEFAST_BUNDLE(蜂驰型套餐);STARTER_BUNDLE(入门型套餐);CAREFREE_BUNDLE(无忧型套餐);RAZOR_SPEED_BUNDLE(锐驰型套餐)类型：String必选：否<li>bundle-state</li>按照【套餐状态】进行过滤。取值: ONLINE(在线); OFFLINE(下线);类型：String必选：否每次请求的 Filters 的上限为 10，Filter.Values 的上限为 5。参数不支持同时指定 BundleIds 和 Filters。
                     * @param _filters <p>过滤器列表。</p><li>bundle-id</li>按照【套餐 ID】进行过滤。类型：String必选：否<li>support-platform-type</li>按照【系统类型】进行过滤。取值： LINUX_UNIX(Linux/Unix系统) ;WINDOWS(Windows 系统)类型：String必选：否<li>bundle-type</li>按照 【套餐类型进行过滤】。取值：GENERAL_BUNDLE (通用型套餐); STORAGE_BUNDLE(存储型套餐);ENTERPRISE_BUNDLE( 企业型套餐);EXCLUSIVE_BUNDLE(专属型套餐);BEFAST_BUNDLE(蜂驰型套餐);STARTER_BUNDLE(入门型套餐);CAREFREE_BUNDLE(无忧型套餐);RAZOR_SPEED_BUNDLE(锐驰型套餐)类型：String必选：否<li>bundle-state</li>按照【套餐状态】进行过滤。取值: ONLINE(在线); OFFLINE(下线);类型：String必选：否每次请求的 Filters 的上限为 10，Filter.Values 的上限为 5。参数不支持同时指定 BundleIds 和 Filters。
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>可用区列表。默认为全部可用区。</p><li>可用区可通过接口 [DescribeZones](https://cloud.tencent.com/document/product/1207/57513) 查询</li>
                     * @return Zones <p>可用区列表。默认为全部可用区。</p><li>可用区可通过接口 [DescribeZones](https://cloud.tencent.com/document/product/1207/57513) 查询</li>
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置<p>可用区列表。默认为全部可用区。</p><li>可用区可通过接口 [DescribeZones](https://cloud.tencent.com/document/product/1207/57513) 查询</li>
                     * @param _zones <p>可用区列表。默认为全部可用区。</p><li>可用区可通过接口 [DescribeZones](https://cloud.tencent.com/document/product/1207/57513) 查询</li>
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取<p>镜像ID。可以通过<a href="https://cloud.tencent.com/document/product/1207/47689">DescribeBlueprints</a>接口返回的BlueprintId获取。</p>
                     * @return BlueprintId <p>镜像ID。可以通过<a href="https://cloud.tencent.com/document/product/1207/47689">DescribeBlueprints</a>接口返回的BlueprintId获取。</p>
                     * 
                     */
                    std::string GetBlueprintId() const;

                    /**
                     * 设置<p>镜像ID。可以通过<a href="https://cloud.tencent.com/document/product/1207/47689">DescribeBlueprints</a>接口返回的BlueprintId获取。</p>
                     * @param _blueprintId <p>镜像ID。可以通过<a href="https://cloud.tencent.com/document/product/1207/47689">DescribeBlueprints</a>接口返回的BlueprintId获取。</p>
                     * 
                     */
                    void SetBlueprintId(const std::string& _blueprintId);

                    /**
                     * 判断参数 BlueprintId 是否已赋值
                     * @return BlueprintId 是否已赋值
                     * 
                     */
                    bool BlueprintIdHasBeenSet() const;

                private:

                    /**
                     * <p>套餐 ID 列表。每次请求批量套餐的上限为 100。可通过<a href="https://cloud.tencent.com/document/product/1207/47575">DescribeBundles</a>接口返回值中的BundleId获取。</p>
                     */
                    std::vector<std::string> m_bundleIds;
                    bool m_bundleIdsHasBeenSet;

                    /**
                     * <p>偏移量，默认为 0。关于<code>Offset</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/product/1207/47578">简介</a>中的相关小节。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，默认为 20，最大值为 100。关于<code>Limit</code>的更进一步介绍请参考 API <a href="https://cloud.tencent.com/document/product/1207/47578">简介</a>中的相关小节。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>过滤器列表。</p><li>bundle-id</li>按照【套餐 ID】进行过滤。类型：String必选：否<li>support-platform-type</li>按照【系统类型】进行过滤。取值： LINUX_UNIX(Linux/Unix系统) ;WINDOWS(Windows 系统)类型：String必选：否<li>bundle-type</li>按照 【套餐类型进行过滤】。取值：GENERAL_BUNDLE (通用型套餐); STORAGE_BUNDLE(存储型套餐);ENTERPRISE_BUNDLE( 企业型套餐);EXCLUSIVE_BUNDLE(专属型套餐);BEFAST_BUNDLE(蜂驰型套餐);STARTER_BUNDLE(入门型套餐);CAREFREE_BUNDLE(无忧型套餐);RAZOR_SPEED_BUNDLE(锐驰型套餐)类型：String必选：否<li>bundle-state</li>按照【套餐状态】进行过滤。取值: ONLINE(在线); OFFLINE(下线);类型：String必选：否每次请求的 Filters 的上限为 10，Filter.Values 的上限为 5。参数不支持同时指定 BundleIds 和 Filters。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>可用区列表。默认为全部可用区。</p><li>可用区可通过接口 [DescribeZones](https://cloud.tencent.com/document/product/1207/57513) 查询</li>
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * <p>镜像ID。可以通过<a href="https://cloud.tencent.com/document/product/1207/47689">DescribeBlueprints</a>接口返回的BlueprintId获取。</p>
                     */
                    std::string m_blueprintId;
                    bool m_blueprintIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBUNDLESREQUEST_H_
