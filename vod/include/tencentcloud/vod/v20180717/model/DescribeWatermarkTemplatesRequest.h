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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEWATERMARKTEMPLATESREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEWATERMARKTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeWatermarkTemplates请求参数结构体
                */
                class DescribeWatermarkTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeWatermarkTemplatesRequest();
                    ~DescribeWatermarkTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     * @return SubAppId <b>点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     * @param SubAppId <b>点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取水印类型过滤条件，可选值：
<li>image：图片水印；</li>
<li>text：文字水印；</li>
<li>svg：SVG 水印。</li>
                     * @return Type 水印类型过滤条件，可选值：
<li>image：图片水印；</li>
<li>text：文字水印；</li>
<li>svg：SVG 水印。</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置水印类型过滤条件，可选值：
<li>image：图片水印；</li>
<li>text：文字水印；</li>
<li>svg：SVG 水印。</li>
                     * @param Type 水印类型过滤条件，可选值：
<li>image：图片水印；</li>
<li>text：文字水印；</li>
<li>svg：SVG 水印。</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取分页偏移量，默认值：0。
                     * @return Offset 分页偏移量，默认值：0。
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认值：0。
                     * @param Offset 分页偏移量，默认值：0。
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取水印模板唯一标识过滤条件，数组长度限制：100。
                     * @return Definitions 水印模板唯一标识过滤条件，数组长度限制：100。
                     */
                    std::vector<int64_t> GetDefinitions() const;

                    /**
                     * 设置水印模板唯一标识过滤条件，数组长度限制：100。
                     * @param Definitions 水印模板唯一标识过滤条件，数组长度限制：100。
                     */
                    void SetDefinitions(const std::vector<int64_t>& _definitions);

                    /**
                     * 判断参数 Definitions 是否已赋值
                     * @return Definitions 是否已赋值
                     */
                    bool DefinitionsHasBeenSet() const;

                    /**
                     * 获取返回记录条数
<li>默认值：10；</li>
<li>最大值：100。</li>
                     * @return Limit 返回记录条数
<li>默认值：10；</li>
<li>最大值：100。</li>
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回记录条数
<li>默认值：10；</li>
<li>最大值：100。</li>
                     * @param Limit 返回记录条数
<li>默认值：10；</li>
<li>最大值：100。</li>
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <b>点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 水印类型过滤条件，可选值：
<li>image：图片水印；</li>
<li>text：文字水印；</li>
<li>svg：SVG 水印。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 分页偏移量，默认值：0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 水印模板唯一标识过滤条件，数组长度限制：100。
                     */
                    std::vector<int64_t> m_definitions;
                    bool m_definitionsHasBeenSet;

                    /**
                     * 返回记录条数
<li>默认值：10；</li>
<li>最大值：100。</li>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEWATERMARKTEMPLATESREQUEST_H_
