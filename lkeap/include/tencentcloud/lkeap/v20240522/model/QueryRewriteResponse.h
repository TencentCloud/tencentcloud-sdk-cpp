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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_QUERYREWRITERESPONSE_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_QUERYREWRITERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/Usage.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * QueryRewrite返回参数结构体
                */
                class QueryRewriteResponse : public AbstractModel
                {
                public:
                    QueryRewriteResponse();
                    ~QueryRewriteResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取改写结果
                     * @return Content 改写结果
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取消耗量，返回输入token数，输出token数以及总token数
                     * @return Usage 消耗量，返回输入token数，输出token数以及总token数
                     * 
                     */
                    Usage GetUsage() const;

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                private:

                    /**
                     * 改写结果
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 消耗量，返回输入token数，输出token数以及总token数
                     */
                    Usage m_usage;
                    bool m_usageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_QUERYREWRITERESPONSE_H_
