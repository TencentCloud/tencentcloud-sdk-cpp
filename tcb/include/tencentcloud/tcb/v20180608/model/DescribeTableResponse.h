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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBETABLERESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBETABLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/IndexInfo.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeTable返回参数结构体
                */
                class DescribeTableResponse : public AbstractModel
                {
                public:
                    DescribeTableResponse();
                    ~DescribeTableResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取索引相关信息
                     * @return Indexes 索引相关信息
                     * 
                     */
                    std::vector<IndexInfo> GetIndexes() const;

                    /**
                     * 判断参数 Indexes 是否已赋值
                     * @return Indexes 是否已赋值
                     * 
                     */
                    bool IndexesHasBeenSet() const;

                    /**
                     * 获取索引个数
                     * @return IndexNum 索引个数
                     * 
                     */
                    int64_t GetIndexNum() const;

                    /**
                     * 判断参数 IndexNum 是否已赋值
                     * @return IndexNum 是否已赋值
                     * 
                     */
                    bool IndexNumHasBeenSet() const;

                private:

                    /**
                     * 索引相关信息
                     */
                    std::vector<IndexInfo> m_indexes;
                    bool m_indexesHasBeenSet;

                    /**
                     * 索引个数
                     */
                    int64_t m_indexNum;
                    bool m_indexNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBETABLERESPONSE_H_
