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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_QUERYPARSEDOCRESULTRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_QUERYPARSEDOCRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * QueryParseDocResult返回参数结构体
                */
                class QueryParseDocResultResponse : public AbstractModel
                {
                public:
                    QueryParseDocResultResponse();
                    ~QueryParseDocResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取等待 / 执行中 / 成功 / 失败
                     * @return Status 等待 / 执行中 / 成功 / 失败
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取解析后的文件内容
                     * @return Name 解析后的文件内容
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取文件下载地址
                     * @return Url 文件下载地址
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取解析失败原因
                     * @return Reason 解析失败原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * 等待 / 执行中 / 成功 / 失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 解析后的文件内容
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 文件下载地址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 解析失败原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_QUERYPARSEDOCRESULTRESPONSE_H_
