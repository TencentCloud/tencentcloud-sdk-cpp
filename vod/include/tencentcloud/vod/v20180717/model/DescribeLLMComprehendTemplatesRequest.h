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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBELLMCOMPREHENDTEMPLATESREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBELLMCOMPREHENDTEMPLATESREQUEST_H_

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
                * DescribeLLMComprehendTemplates请求参数结构体
                */
                class DescribeLLMComprehendTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeLLMComprehendTemplatesRequest();
                    ~DescribeLLMComprehendTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>大模型解析模板唯一标识过滤条件，数组长度最大值：100。</p>
                     * @return Definitions <p>大模型解析模板唯一标识过滤条件，数组长度最大值：100。</p>
                     * 
                     */
                    std::vector<int64_t> GetDefinitions() const;

                    /**
                     * 设置<p>大模型解析模板唯一标识过滤条件，数组长度最大值：100。</p>
                     * @param _definitions <p>大模型解析模板唯一标识过滤条件，数组长度最大值：100。</p>
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

                private:

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>大模型解析模板唯一标识过滤条件，数组长度最大值：100。</p>
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBELLMCOMPREHENDTEMPLATESREQUEST_H_
