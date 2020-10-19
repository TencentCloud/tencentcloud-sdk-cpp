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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_LISTFLEETSREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_LISTFLEETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * ListFleets请求参数结构体
                */
                class ListFleetsRequest : public AbstractModel
                {
                public:
                    ListFleetsRequest();
                    ~ListFleetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取生成包 Id
                     * @return AssetId 生成包 Id
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置生成包 Id
                     * @param AssetId 生成包 Id
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取结果返回最大值，暂未使用
                     * @return Limit 结果返回最大值，暂未使用
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置结果返回最大值，暂未使用
                     * @param Limit 结果返回最大值，暂未使用
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取结果返回偏移，暂未使用
                     * @return Offset 结果返回偏移，暂未使用
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置结果返回偏移，暂未使用
                     * @param Offset 结果返回偏移，暂未使用
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 生成包 Id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 结果返回最大值，暂未使用
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 结果返回偏移，暂未使用
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_LISTFLEETSREQUEST_H_
