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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEFILESYSTEMSRESPONSE_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEFILESYSTEMSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/goosefs/v20220519/model/FSAttribute.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * DescribeFileSystems返回参数结构体
                */
                class DescribeFileSystemsResponse : public AbstractModel
                {
                public:
                    DescribeFileSystemsResponse();
                    ~DescribeFileSystemsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统列表
                     * @return FSAttributeList 文件系统列表
                     * 
                     */
                    std::vector<FSAttribute> GetFSAttributeList() const;

                    /**
                     * 判断参数 FSAttributeList 是否已赋值
                     * @return FSAttributeList 是否已赋值
                     * 
                     */
                    bool FSAttributeListHasBeenSet() const;

                    /**
                     * 获取总共的文件系统数量
                     * @return TotalCount 总共的文件系统数量
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 文件系统列表
                     */
                    std::vector<FSAttribute> m_fSAttributeList;
                    bool m_fSAttributeListHasBeenSet;

                    /**
                     * 总共的文件系统数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEFILESYSTEMSRESPONSE_H_
