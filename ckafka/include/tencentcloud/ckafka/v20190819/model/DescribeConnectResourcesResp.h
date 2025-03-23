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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONNECTRESOURCESRESP_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONNECTRESOURCESRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeConnectResource.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 查询连接源列表的返参
                */
                class DescribeConnectResourcesResp : public AbstractModel
                {
                public:
                    DescribeConnectResourcesResp();
                    ~DescribeConnectResourcesResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取连接源个数
                     * @return TotalCount 连接源个数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置连接源个数
                     * @param _totalCount 连接源个数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取连接源数据
                     * @return ConnectResourceList 连接源数据
                     * 
                     */
                    std::vector<DescribeConnectResource> GetConnectResourceList() const;

                    /**
                     * 设置连接源数据
                     * @param _connectResourceList 连接源数据
                     * 
                     */
                    void SetConnectResourceList(const std::vector<DescribeConnectResource>& _connectResourceList);

                    /**
                     * 判断参数 ConnectResourceList 是否已赋值
                     * @return ConnectResourceList 是否已赋值
                     * 
                     */
                    bool ConnectResourceListHasBeenSet() const;

                private:

                    /**
                     * 连接源个数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 连接源数据
                     */
                    std::vector<DescribeConnectResource> m_connectResourceList;
                    bool m_connectResourceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONNECTRESOURCESRESP_H_
