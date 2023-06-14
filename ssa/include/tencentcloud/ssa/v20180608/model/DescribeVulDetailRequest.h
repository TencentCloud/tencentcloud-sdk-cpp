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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEVULDETAILREQUEST_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEVULDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeVulDetail请求参数结构体
                */
                class DescribeVulDetailRequest : public AbstractModel
                {
                public:
                    DescribeVulDetailRequest();
                    ~DescribeVulDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞唯一标识符
                     * @return UniqId 漏洞唯一标识符
                     * 
                     */
                    std::string GetUniqId() const;

                    /**
                     * 设置漏洞唯一标识符
                     * @param _uniqId 漏洞唯一标识符
                     * 
                     */
                    void SetUniqId(const std::string& _uniqId);

                    /**
                     * 判断参数 UniqId 是否已赋值
                     * @return UniqId 是否已赋值
                     * 
                     */
                    bool UniqIdHasBeenSet() const;

                    /**
                     * 获取查看详情来源
                     * @return Source 查看详情来源
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置查看详情来源
                     * @param _source 查看详情来源
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                private:

                    /**
                     * 漏洞唯一标识符
                     */
                    std::string m_uniqId;
                    bool m_uniqIdHasBeenSet;

                    /**
                     * 查看详情来源
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEVULDETAILREQUEST_H_
