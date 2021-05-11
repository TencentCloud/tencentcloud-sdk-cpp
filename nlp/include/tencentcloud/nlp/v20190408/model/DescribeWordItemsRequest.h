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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_DESCRIBEWORDITEMSREQUEST_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_DESCRIBEWORDITEMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * DescribeWordItems请求参数结构体
                */
                class DescribeWordItemsRequest : public AbstractModel
                {
                public:
                    DescribeWordItemsRequest();
                    ~DescribeWordItemsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义词库ID。
                     * @return DictId 自定义词库ID。
                     */
                    std::string GetDictId() const;

                    /**
                     * 设置自定义词库ID。
                     * @param DictId 自定义词库ID。
                     */
                    void SetDictId(const std::string& _dictId);

                    /**
                     * 判断参数 DictId 是否已赋值
                     * @return DictId 是否已赋值
                     */
                    bool DictIdHasBeenSet() const;

                    /**
                     * 获取分页偏移量，从0开始，默认为0。
                     * @return Offset 分页偏移量，从0开始，默认为0。
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，从0开始，默认为0。
                     * @param Offset 分页偏移量，从0开始，默认为0。
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页数据量，范围为1~100，默认为10。
                     * @return Limit 每页数据量，范围为1~100，默认为10。
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页数据量，范围为1~100，默认为10。
                     * @param Limit 每页数据量，范围为1~100，默认为10。
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取待检索的词条文本，支持模糊匹配。
                     * @return Text 待检索的词条文本，支持模糊匹配。
                     */
                    std::string GetText() const;

                    /**
                     * 设置待检索的词条文本，支持模糊匹配。
                     * @param Text 待检索的词条文本，支持模糊匹配。
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                private:

                    /**
                     * 自定义词库ID。
                     */
                    std::string m_dictId;
                    bool m_dictIdHasBeenSet;

                    /**
                     * 分页偏移量，从0开始，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页数据量，范围为1~100，默认为10。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 待检索的词条文本，支持模糊匹配。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_DESCRIBEWORDITEMSREQUEST_H_
