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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_GETASRVOCABLISTREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_GETASRVOCABLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * GetAsrVocabList请求参数结构体
                */
                class GetAsrVocabListRequest : public AbstractModel
                {
                public:
                    GetAsrVocabListRequest();
                    ~GetAsrVocabListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取标签信息，格式为“$TagKey : $TagValue ”，中间分隔符为“空格”+“:”+“空格”
                     * @return TagInfos 标签信息，格式为“$TagKey : $TagValue ”，中间分隔符为“空格”+“:”+“空格”
                     * @deprecated
                     */
                    std::vector<std::string> GetTagInfos() const;

                    /**
                     * 设置标签信息，格式为“$TagKey : $TagValue ”，中间分隔符为“空格”+“:”+“空格”
                     * @param _tagInfos 标签信息，格式为“$TagKey : $TagValue ”，中间分隔符为“空格”+“:”+“空格”
                     * @deprecated
                     */
                    void SetTagInfos(const std::vector<std::string>& _tagInfos);

                    /**
                     * 判断参数 TagInfos 是否已赋值
                     * @return TagInfos 是否已赋值
                     * @deprecated
                     */
                    bool TagInfosHasBeenSet() const;

                    /**
                     * 获取分页Offset
                     * @return Offset 分页Offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页Offset
                     * @param _offset 分页Offset
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
                     * 获取分页Limit
                     * @return Limit 分页Limit
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页Limit
                     * @param _limit 分页Limit
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
                     * 标签信息，格式为“$TagKey : $TagValue ”，中间分隔符为“空格”+“:”+“空格”
                     */
                    std::vector<std::string> m_tagInfos;
                    bool m_tagInfosHasBeenSet;

                    /**
                     * 分页Offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页Limit
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_GETASRVOCABLISTREQUEST_H_
