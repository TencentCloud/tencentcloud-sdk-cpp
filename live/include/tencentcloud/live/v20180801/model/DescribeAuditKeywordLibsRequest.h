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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAUDITKEYWORDLIBSREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAUDITKEYWORDLIBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeAuditKeywordLibs请求参数结构体
                */
                class DescribeAuditKeywordLibsRequest : public AbstractModel
                {
                public:
                    DescribeAuditKeywordLibsRequest();
                    ~DescribeAuditKeywordLibsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>获取偏移量。</p>
                     * @return Offset <p>获取偏移量。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>获取偏移量。</p>
                     * @param _offset <p>获取偏移量。</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>获取条数。</p>
                     * @return Limit <p>获取条数。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>获取条数。</p>
                     * @param _limit <p>获取条数。</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>根据关键词库名进行模糊查询。<br>传递空字符串时，忽略。</p>
                     * @return Name <p>根据关键词库名进行模糊查询。<br>传递空字符串时，忽略。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>根据关键词库名进行模糊查询。<br>传递空字符串时，忽略。</p>
                     * @param _name <p>根据关键词库名进行模糊查询。<br>传递空字符串时，忽略。</p>
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
                     * <p>获取偏移量。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>获取条数。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>根据关键词库名进行模糊查询。<br>传递空字符串时，忽略。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAUDITKEYWORDLIBSREQUEST_H_
