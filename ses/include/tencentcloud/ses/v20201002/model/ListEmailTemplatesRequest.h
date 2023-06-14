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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_LISTEMAILTEMPLATESREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_LISTEMAILTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * ListEmailTemplates请求参数结构体
                */
                class ListEmailTemplatesRequest : public AbstractModel
                {
                public:
                    ListEmailTemplatesRequest();
                    ~ListEmailTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取获取模板数据量，用于分页
                     * @return Limit 获取模板数据量，用于分页
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置获取模板数据量，用于分页
                     * @param _limit 获取模板数据量，用于分页
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
                     * 获取获取模板偏移值，用于分页
                     * @return Offset 获取模板偏移值，用于分页
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置获取模板偏移值，用于分页
                     * @param _offset 获取模板偏移值，用于分页
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
                     * 获取模板数据量，用于分页
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 获取模板偏移值，用于分页
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_LISTEMAILTEMPLATESREQUEST_H_
