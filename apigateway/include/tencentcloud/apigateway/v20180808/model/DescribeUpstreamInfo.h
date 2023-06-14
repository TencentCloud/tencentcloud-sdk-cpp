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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEUPSTREAMINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEUPSTREAMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/UpstreamInfo.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 查询后端通道返回信息
                */
                class DescribeUpstreamInfo : public AbstractModel
                {
                public:
                    DescribeUpstreamInfo();
                    ~DescribeUpstreamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取查询总数
                     * @return TotalCount 查询总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置查询总数
                     * @param _totalCount 查询总数
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取查询列表
                     * @return UpstreamSet 查询列表
                     * 
                     */
                    std::vector<UpstreamInfo> GetUpstreamSet() const;

                    /**
                     * 设置查询列表
                     * @param _upstreamSet 查询列表
                     * 
                     */
                    void SetUpstreamSet(const std::vector<UpstreamInfo>& _upstreamSet);

                    /**
                     * 判断参数 UpstreamSet 是否已赋值
                     * @return UpstreamSet 是否已赋值
                     * 
                     */
                    bool UpstreamSetHasBeenSet() const;

                private:

                    /**
                     * 查询总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 查询列表
                     */
                    std::vector<UpstreamInfo> m_upstreamSet;
                    bool m_upstreamSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEUPSTREAMINFO_H_
