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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_FILESLISTREQUEST_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_FILESLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * FilesList请求参数结构体
                */
                class FilesListRequest : public AbstractModel
                {
                public:
                    FilesListRequest();
                    ~FilesListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页偏移量。
                     * @return Offset 分页偏移量。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量。
                     * @param _offset 分页偏移量。
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
                     * 获取每页数量，最大 100。
                     * @return Limit 每页数量，最大 100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页数量，最大 100。
                     * @param _limit 每页数量，最大 100。
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
                     * 分页偏移量。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页数量，最大 100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_FILESLISTREQUEST_H_
