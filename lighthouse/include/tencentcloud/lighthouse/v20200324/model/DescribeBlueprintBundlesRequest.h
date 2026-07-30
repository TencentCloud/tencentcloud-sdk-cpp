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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBLUEPRINTBUNDLESREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBLUEPRINTBUNDLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeBlueprintBundles请求参数结构体
                */
                class DescribeBlueprintBundlesRequest : public AbstractModel
                {
                public:
                    DescribeBlueprintBundlesRequest();
                    ~DescribeBlueprintBundlesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像ID。可以通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回的BlueprintId获取。当前仅支持传入镜像类型为游戏专区(“GAME_PORTAL”)的镜像Id。
                     * @return BlueprintId 镜像ID。可以通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回的BlueprintId获取。当前仅支持传入镜像类型为游戏专区(“GAME_PORTAL”)的镜像Id。
                     * 
                     */
                    std::string GetBlueprintId() const;

                    /**
                     * 设置镜像ID。可以通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回的BlueprintId获取。当前仅支持传入镜像类型为游戏专区(“GAME_PORTAL”)的镜像Id。
                     * @param _blueprintId 镜像ID。可以通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回的BlueprintId获取。当前仅支持传入镜像类型为游戏专区(“GAME_PORTAL”)的镜像Id。
                     * 
                     */
                    void SetBlueprintId(const std::string& _blueprintId);

                    /**
                     * 判断参数 BlueprintId 是否已赋值
                     * @return BlueprintId 是否已赋值
                     * 
                     */
                    bool BlueprintIdHasBeenSet() const;

                    /**
                     * 获取套餐ID列表。可以通过DescribeBlueprintBundles接口返回的BundleId获取。
                     * @return BundleIds 套餐ID列表。可以通过DescribeBlueprintBundles接口返回的BundleId获取。
                     * 
                     */
                    std::vector<std::string> GetBundleIds() const;

                    /**
                     * 设置套餐ID列表。可以通过DescribeBlueprintBundles接口返回的BundleId获取。
                     * @param _bundleIds 套餐ID列表。可以通过DescribeBlueprintBundles接口返回的BundleId获取。
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
                     * 获取返回数量，默认为 20，最大值为 100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
                     * @return Limit 返回数量，默认为 20，最大值为 100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为 20，最大值为 100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
                     * @param _limit 返回数量，默认为 20，最大值为 100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
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
                     * 获取偏移量，默认为 0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     * @return Offset 偏移量，默认为 0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为 0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     * @param _offset 偏移量，默认为 0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 镜像ID。可以通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回的BlueprintId获取。当前仅支持传入镜像类型为游戏专区(“GAME_PORTAL”)的镜像Id。
                     */
                    std::string m_blueprintId;
                    bool m_blueprintIdHasBeenSet;

                    /**
                     * 套餐ID列表。可以通过DescribeBlueprintBundles接口返回的BundleId获取。
                     */
                    std::vector<std::string> m_bundleIds;
                    bool m_bundleIdsHasBeenSet;

                    /**
                     * 返回数量，默认为 20，最大值为 100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为 0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBLUEPRINTBUNDLESREQUEST_H_
