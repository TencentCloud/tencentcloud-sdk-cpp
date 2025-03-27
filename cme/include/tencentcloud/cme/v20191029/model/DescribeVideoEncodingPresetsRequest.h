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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBEVIDEOENCODINGPRESETSREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBEVIDEOENCODINGPRESETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * DescribeVideoEncodingPresets请求参数结构体
                */
                class DescribeVideoEncodingPresetsRequest : public AbstractModel
                {
                public:
                    DescribeVideoEncodingPresetsRequest();
                    ~DescribeVideoEncodingPresetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台名称，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @return Platform 平台名称，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台名称，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @param _platform 平台名称，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取要查询的配置 ID 列表。填写该参数则按照配置 ID 进行查询。
                     * @return Ids 要查询的配置 ID 列表。填写该参数则按照配置 ID 进行查询。
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置要查询的配置 ID 列表。填写该参数则按照配置 ID 进行查询。
                     * @param _ids 要查询的配置 ID 列表。填写该参数则按照配置 ID 进行查询。
                     * 
                     */
                    void SetIds(const std::vector<uint64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取分页大小，默认20。最大值50。
                     * @return Limit 分页大小，默认20。最大值50。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页大小，默认20。最大值50。
                     * @param _limit 分页大小，默认20。最大值50。
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
                     * 获取分页起始，默认0。
                     * @return Offset 分页起始，默认0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页起始，默认0。
                     * @param _offset 分页起始，默认0。
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
                     * 平台名称，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 要查询的配置 ID 列表。填写该参数则按照配置 ID 进行查询。
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * 分页大小，默认20。最大值50。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页起始，默认0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBEVIDEOENCODINGPRESETSREQUEST_H_
