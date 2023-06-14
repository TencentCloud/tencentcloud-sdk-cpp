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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBENAMESPACESRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBENAMESPACESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/TcrNamespaceInfo.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeNamespaces返回参数结构体
                */
                class DescribeNamespacesResponse : public AbstractModel
                {
                public:
                    DescribeNamespacesResponse();
                    ~DescribeNamespacesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取命名空间列表信息
                     * @return NamespaceList 命名空间列表信息
                     * 
                     */
                    std::vector<TcrNamespaceInfo> GetNamespaceList() const;

                    /**
                     * 判断参数 NamespaceList 是否已赋值
                     * @return NamespaceList 是否已赋值
                     * 
                     */
                    bool NamespaceListHasBeenSet() const;

                    /**
                     * 获取总个数
                     * @return TotalCount 总个数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 命名空间列表信息
                     */
                    std::vector<TcrNamespaceInfo> m_namespaceList;
                    bool m_namespaceListHasBeenSet;

                    /**
                     * 总个数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBENAMESPACESRESPONSE_H_
