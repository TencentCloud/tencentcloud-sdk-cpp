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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEPOSITIONFENCELISTREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEPOSITIONFENCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DescribePositionFenceList请求参数结构体
                */
                class DescribePositionFenceListRequest : public AbstractModel
                {
                public:
                    DescribePositionFenceListRequest();
                    ~DescribePositionFenceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取位置空间Id
                     * @return SpaceId 位置空间Id
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置位置空间Id
                     * @param _spaceId 位置空间Id
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取翻页偏移量，0起始
                     * @return Offset 翻页偏移量，0起始
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置翻页偏移量，0起始
                     * @param _offset 翻页偏移量，0起始
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取最大返回结果数
                     * @return Limit 最大返回结果数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置最大返回结果数
                     * @param _limit 最大返回结果数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 位置空间Id
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * 翻页偏移量，0起始
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 最大返回结果数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEPOSITIONFENCELISTREQUEST_H_
