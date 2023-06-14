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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEUPSTREAMBINDAPIS_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEUPSTREAMBINDAPIS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/BindApiInfo.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 查询后端通道绑定API列表
                */
                class DescribeUpstreamBindApis : public AbstractModel
                {
                public:
                    DescribeUpstreamBindApis();
                    ~DescribeUpstreamBindApis() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数
                     * @return TotalCount 总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置总数
                     * @param _totalCount 总数
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
                     * 获取绑定的API信息
                     * @return BindApiSet 绑定的API信息
                     * 
                     */
                    std::vector<BindApiInfo> GetBindApiSet() const;

                    /**
                     * 设置绑定的API信息
                     * @param _bindApiSet 绑定的API信息
                     * 
                     */
                    void SetBindApiSet(const std::vector<BindApiInfo>& _bindApiSet);

                    /**
                     * 判断参数 BindApiSet 是否已赋值
                     * @return BindApiSet 是否已赋值
                     * 
                     */
                    bool BindApiSetHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 绑定的API信息
                     */
                    std::vector<BindApiInfo> m_bindApiSet;
                    bool m_bindApiSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEUPSTREAMBINDAPIS_H_
