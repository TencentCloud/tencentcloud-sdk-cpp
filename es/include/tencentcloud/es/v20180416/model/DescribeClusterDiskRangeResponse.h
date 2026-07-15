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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBECLUSTERDISKRANGERESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBECLUSTERDISKRANGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/NodeTypeDiskSizeRange.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeClusterDiskRange返回参数结构体
                */
                class DescribeClusterDiskRangeResponse : public AbstractModel
                {
                public:
                    DescribeClusterDiskRangeResponse();
                    ~DescribeClusterDiskRangeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取节点磁盘大小上下限
                     * @return NodeTypeDiskSizeRangeList 节点磁盘大小上下限
                     * 
                     */
                    std::vector<NodeTypeDiskSizeRange> GetNodeTypeDiskSizeRangeList() const;

                    /**
                     * 判断参数 NodeTypeDiskSizeRangeList 是否已赋值
                     * @return NodeTypeDiskSizeRangeList 是否已赋值
                     * 
                     */
                    bool NodeTypeDiskSizeRangeListHasBeenSet() const;

                private:

                    /**
                     * 节点磁盘大小上下限
                     */
                    std::vector<NodeTypeDiskSizeRange> m_nodeTypeDiskSizeRangeList;
                    bool m_nodeTypeDiskSizeRangeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBECLUSTERDISKRANGERESPONSE_H_
