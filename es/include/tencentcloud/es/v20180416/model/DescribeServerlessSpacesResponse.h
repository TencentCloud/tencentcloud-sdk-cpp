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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESERVERLESSSPACESRESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESERVERLESSSPACESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/ServerlessSpace.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeServerlessSpaces返回参数结构体
                */
                class DescribeServerlessSpacesResponse : public AbstractModel
                {
                public:
                    DescribeServerlessSpacesResponse();
                    ~DescribeServerlessSpacesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 查询总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Serverless空间信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerlessSpaces Serverless空间信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ServerlessSpace> GetServerlessSpaces() const;

                    /**
                     * 判断参数 ServerlessSpaces 是否已赋值
                     * @return ServerlessSpaces 是否已赋值
                     * 
                     */
                    bool ServerlessSpacesHasBeenSet() const;

                private:

                    /**
                     * 查询总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Serverless空间信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServerlessSpace> m_serverlessSpaces;
                    bool m_serverlessSpacesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESERVERLESSSPACESRESPONSE_H_
