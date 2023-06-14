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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEORGNODEREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEORGNODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * DescribeOrgNode请求参数结构体
                */
                class DescribeOrgNodeRequest : public AbstractModel
                {
                public:
                    DescribeOrgNodeRequest();
                    ~DescribeOrgNodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取机构节点ID，是机构节点全局唯一标识，长度限制：64个字符。如果为空默认读取机构根节点信息。
                     * @return OrgNodeId 机构节点ID，是机构节点全局唯一标识，长度限制：64个字符。如果为空默认读取机构根节点信息。
                     * 
                     */
                    std::string GetOrgNodeId() const;

                    /**
                     * 设置机构节点ID，是机构节点全局唯一标识，长度限制：64个字符。如果为空默认读取机构根节点信息。
                     * @param _orgNodeId 机构节点ID，是机构节点全局唯一标识，长度限制：64个字符。如果为空默认读取机构根节点信息。
                     * 
                     */
                    void SetOrgNodeId(const std::string& _orgNodeId);

                    /**
                     * 判断参数 OrgNodeId 是否已赋值
                     * @return OrgNodeId 是否已赋值
                     * 
                     */
                    bool OrgNodeIdHasBeenSet() const;

                    /**
                     * 获取是否读取其子节点信息。当其为空或false时，默认仅读取当前机构节点信息。当其为true时，读取本机构节点以及其第一层子节点信息。
                     * @return IncludeOrgNodeChildInfo 是否读取其子节点信息。当其为空或false时，默认仅读取当前机构节点信息。当其为true时，读取本机构节点以及其第一层子节点信息。
                     * 
                     */
                    bool GetIncludeOrgNodeChildInfo() const;

                    /**
                     * 设置是否读取其子节点信息。当其为空或false时，默认仅读取当前机构节点信息。当其为true时，读取本机构节点以及其第一层子节点信息。
                     * @param _includeOrgNodeChildInfo 是否读取其子节点信息。当其为空或false时，默认仅读取当前机构节点信息。当其为true时，读取本机构节点以及其第一层子节点信息。
                     * 
                     */
                    void SetIncludeOrgNodeChildInfo(const bool& _includeOrgNodeChildInfo);

                    /**
                     * 判断参数 IncludeOrgNodeChildInfo 是否已赋值
                     * @return IncludeOrgNodeChildInfo 是否已赋值
                     * 
                     */
                    bool IncludeOrgNodeChildInfoHasBeenSet() const;

                private:

                    /**
                     * 机构节点ID，是机构节点全局唯一标识，长度限制：64个字符。如果为空默认读取机构根节点信息。
                     */
                    std::string m_orgNodeId;
                    bool m_orgNodeIdHasBeenSet;

                    /**
                     * 是否读取其子节点信息。当其为空或false时，默认仅读取当前机构节点信息。当其为true时，读取本机构节点以及其第一层子节点信息。
                     */
                    bool m_includeOrgNodeChildInfo;
                    bool m_includeOrgNodeChildInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEORGNODEREQUEST_H_
