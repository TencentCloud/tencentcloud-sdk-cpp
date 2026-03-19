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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESUBTITLEEMBEDTEMPLATESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESUBTITLEEMBEDTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeSubtitleEmbedTemplates请求参数结构体
                */
                class DescribeSubtitleEmbedTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeSubtitleEmbedTemplatesRequest();
                    ~DescribeSubtitleEmbedTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>智能字幕模板唯一标识过滤条件，数组长度限制：100。</p>
                     * @return Definitions <p>智能字幕模板唯一标识过滤条件，数组长度限制：100。</p>
                     * 
                     */
                    std::vector<int64_t> GetDefinitions() const;

                    /**
                     * 设置<p>智能字幕模板唯一标识过滤条件，数组长度限制：100。</p>
                     * @param _definitions <p>智能字幕模板唯一标识过滤条件，数组长度限制：100。</p>
                     * 
                     */
                    void SetDefinitions(const std::vector<int64_t>& _definitions);

                    /**
                     * 判断参数 Definitions 是否已赋值
                     * @return Definitions 是否已赋值
                     * 
                     */
                    bool DefinitionsHasBeenSet() const;

                    /**
                     * 获取<p>分页偏移量，默认值：0。</p>
                     * @return Offset <p>分页偏移量，默认值：0。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，默认值：0。</p>
                     * @param _offset <p>分页偏移量，默认值：0。</p>
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
                     * 获取<p>返回记录条数，默认值：10，最大值：100。</p>
                     * @return Limit <p>返回记录条数，默认值：10，最大值：100。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回记录条数，默认值：10，最大值：100。</p>
                     * @param _limit <p>返回记录条数，默认值：10，最大值：100。</p>
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
                     * 获取<p>模板类型过滤条件，不填则返回所有，可选值：</p><ul><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li></ul>
                     * @return Type <p>模板类型过滤条件，不填则返回所有，可选值：</p><ul><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>模板类型过滤条件，不填则返回所有，可选值：</p><ul><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li></ul>
                     * @param _type <p>模板类型过滤条件，不填则返回所有，可选值：</p><ul><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>字幕压制模板标识过滤条件，长度限制：64 个字符。</p>
                     * @return Name <p>字幕压制模板标识过滤条件，长度限制：64 个字符。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>字幕压制模板标识过滤条件，长度限制：64 个字符。</p>
                     * @param _name <p>字幕压制模板标识过滤条件，长度限制：64 个字符。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * <p>智能字幕模板唯一标识过滤条件，数组长度限制：100。</p>
                     */
                    std::vector<int64_t> m_definitions;
                    bool m_definitionsHasBeenSet;

                    /**
                     * <p>分页偏移量，默认值：0。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回记录条数，默认值：10，最大值：100。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>模板类型过滤条件，不填则返回所有，可选值：</p><ul><li>Preset：系统预置模板；</li><li>Custom：用户自定义模板。</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>字幕压制模板标识过滤条件，长度限制：64 个字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESUBTITLEEMBEDTEMPLATESREQUEST_H_
