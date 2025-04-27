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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBESCENESREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBESCENESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/Filter.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeScenes请求参数结构体
                */
                class DescribeScenesRequest : public AbstractModel
                {
                public:
                    DescribeScenesRequest();
                    ~DescribeScenesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取场景 ID 数组。

每次请求的上限为 100。

参数不支持同时指定 `SceneIds ` 和 `Filters ` 。

                     * @return SceneIds 场景 ID 数组。

每次请求的上限为 100。

参数不支持同时指定 `SceneIds ` 和 `Filters ` 。

                     * 
                     */
                    std::vector<std::string> GetSceneIds() const;

                    /**
                     * 设置场景 ID 数组。

每次请求的上限为 100。

参数不支持同时指定 `SceneIds ` 和 `Filters ` 。

                     * @param _sceneIds 场景 ID 数组。

每次请求的上限为 100。

参数不支持同时指定 `SceneIds ` 和 `Filters ` 。

                     * 
                     */
                    void SetSceneIds(const std::vector<std::string>& _sceneIds);

                    /**
                     * 判断参数 SceneIds 是否已赋值
                     * @return SceneIds 是否已赋值
                     * 
                     */
                    bool SceneIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件。

- scene-id - String - 是否必填：否 -（过滤条件）按照场景 ID 过滤。
- scene-name - String - 是否必填：否 -（过滤条件）按照场景名称过滤。
- created-by - String - 是否必填：否 -（过滤条件）按照场景创建者过滤，目前仅支持 TAT，代表公共场景。

每次请求的 `Filters` 的上限为10， `Filter.Values` 的上限为5。参数不支持同时指定 `SceneIds` 和 `Filters` 。
                     * @return Filters 过滤条件。

- scene-id - String - 是否必填：否 -（过滤条件）按照场景 ID 过滤。
- scene-name - String - 是否必填：否 -（过滤条件）按照场景名称过滤。
- created-by - String - 是否必填：否 -（过滤条件）按照场景创建者过滤，目前仅支持 TAT，代表公共场景。

每次请求的 `Filters` 的上限为10， `Filter.Values` 的上限为5。参数不支持同时指定 `SceneIds` 和 `Filters` 。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。

- scene-id - String - 是否必填：否 -（过滤条件）按照场景 ID 过滤。
- scene-name - String - 是否必填：否 -（过滤条件）按照场景名称过滤。
- created-by - String - 是否必填：否 -（过滤条件）按照场景创建者过滤，目前仅支持 TAT，代表公共场景。

每次请求的 `Filters` 的上限为10， `Filter.Values` 的上限为5。参数不支持同时指定 `SceneIds` 和 `Filters` 。
                     * @param _filters 过滤条件。

- scene-id - String - 是否必填：否 -（过滤条件）按照场景 ID 过滤。
- scene-name - String - 是否必填：否 -（过滤条件）按照场景名称过滤。
- created-by - String - 是否必填：否 -（过滤条件）按照场景创建者过滤，目前仅支持 TAT，代表公共场景。

每次请求的 `Filters` 的上限为10， `Filter.Values` 的上限为5。参数不支持同时指定 `SceneIds` 和 `Filters` 。
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
                     * 获取返回数量，默认为20，最大值为100。关于 `Limit` 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @return Limit 返回数量，默认为20，最大值为100。关于 `Limit` 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。关于 `Limit` 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @param _limit 返回数量，默认为20，最大值为100。关于 `Limit` 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
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
                     * 获取偏移量，默认为0。关于 `Offset` 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @return Offset 偏移量，默认为0。关于 `Offset` 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于 `Offset` 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @param _offset 偏移量，默认为0。关于 `Offset` 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 场景 ID 数组。

每次请求的上限为 100。

参数不支持同时指定 `SceneIds ` 和 `Filters ` 。

                     */
                    std::vector<std::string> m_sceneIds;
                    bool m_sceneIdsHasBeenSet;

                    /**
                     * 过滤条件。

- scene-id - String - 是否必填：否 -（过滤条件）按照场景 ID 过滤。
- scene-name - String - 是否必填：否 -（过滤条件）按照场景名称过滤。
- created-by - String - 是否必填：否 -（过滤条件）按照场景创建者过滤，目前仅支持 TAT，代表公共场景。

每次请求的 `Filters` 的上限为10， `Filter.Values` 的上限为5。参数不支持同时指定 `SceneIds` 和 `Filters` 。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。关于 `Limit` 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于 `Offset` 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBESCENESREQUEST_H_
