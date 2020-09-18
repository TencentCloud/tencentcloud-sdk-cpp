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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_GETCUSTOMIZATIONLISTREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_GETCUSTOMIZATIONLISTREQUEST_H_

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
                * GetCustomizationList请求参数结构体
                */
                class GetCustomizationListRequest : public AbstractModel
                {
                public:
                    GetCustomizationListRequest();
                    ~GetCustomizationListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取标签信息，格式为“$TagKey : $TagValue ”，中间分隔符为“空格”+“:”+“空格”
                     * @return TagInfos 标签信息，格式为“$TagKey : $TagValue ”，中间分隔符为“空格”+“:”+“空格”
                     */
                    std::vector<std::string> GetTagInfos() const;

                    /**
                     * 设置标签信息，格式为“$TagKey : $TagValue ”，中间分隔符为“空格”+“:”+“空格”
                     * @param TagInfos 标签信息，格式为“$TagKey : $TagValue ”，中间分隔符为“空格”+“:”+“空格”
                     */
                    void SetTagInfos(const std::vector<std::string>& _tagInfos);

                    /**
                     * 判断参数 TagInfos 是否已赋值
                     * @return TagInfos 是否已赋值
                     */
                    bool TagInfosHasBeenSet() const;

                    /**
                     * 获取分页大小
                     * @return Limit 分页大小
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页大小
                     * @param Limit 分页大小
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页offset
                     * @return Offset 分页offset
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页offset
                     * @param Offset 分页offset
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 标签信息，格式为“$TagKey : $TagValue ”，中间分隔符为“空格”+“:”+“空格”
                     */
                    std::vector<std::string> m_tagInfos;
                    bool m_tagInfosHasBeenSet;

                    /**
                     * 分页大小
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_GETCUSTOMIZATIONLISTREQUEST_H_
