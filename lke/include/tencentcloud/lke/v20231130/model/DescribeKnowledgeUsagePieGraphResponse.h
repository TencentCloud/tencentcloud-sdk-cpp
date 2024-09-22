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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEKNOWLEDGEUSAGEPIEGRAPHRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEKNOWLEDGEUSAGEPIEGRAPHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/KnowledgeCapacityPieGraphDetail.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeKnowledgeUsagePieGraph返回参数结构体
                */
                class DescribeKnowledgeUsagePieGraphResponse : public AbstractModel
                {
                public:
                    DescribeKnowledgeUsagePieGraphResponse();
                    ~DescribeKnowledgeUsagePieGraphResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取所有应用已用的字符总数
                     * @return AvailableCharSize 所有应用已用的字符总数
                     * 
                     */
                    std::string GetAvailableCharSize() const;

                    /**
                     * 判断参数 AvailableCharSize 是否已赋值
                     * @return AvailableCharSize 是否已赋值
                     * 
                     */
                    bool AvailableCharSizeHasBeenSet() const;

                    /**
                     * 获取应用饼图详情列表
                     * @return List 应用饼图详情列表
                     * 
                     */
                    std::vector<KnowledgeCapacityPieGraphDetail> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 所有应用已用的字符总数
                     */
                    std::string m_availableCharSize;
                    bool m_availableCharSizeHasBeenSet;

                    /**
                     * 应用饼图详情列表
                     */
                    std::vector<KnowledgeCapacityPieGraphDetail> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEKNOWLEDGEUSAGEPIEGRAPHRESPONSE_H_
