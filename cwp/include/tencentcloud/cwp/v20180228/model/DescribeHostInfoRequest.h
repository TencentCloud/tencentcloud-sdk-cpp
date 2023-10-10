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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEHOSTINFOREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEHOSTINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeHostInfo请求参数结构体
                */
                class DescribeHostInfoRequest : public AbstractModel
                {
                public:
                    DescribeHostInfoRequest();
                    ~DescribeHostInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主机Quuid数组
                     * @return QuuidList 主机Quuid数组
                     * 
                     */
                    std::vector<std::string> GetQuuidList() const;

                    /**
                     * 设置主机Quuid数组
                     * @param _quuidList 主机Quuid数组
                     * 
                     */
                    void SetQuuidList(const std::vector<std::string>& _quuidList);

                    /**
                     * 判断参数 QuuidList 是否已赋值
                     * @return QuuidList 是否已赋值
                     * 
                     */
                    bool QuuidListHasBeenSet() const;

                    /**
                     * 获取Uuids 查询，Quuid查询时填空
                     * @return Uuids Uuids 查询，Quuid查询时填空
                     * 
                     */
                    std::vector<std::string> GetUuids() const;

                    /**
                     * 设置Uuids 查询，Quuid查询时填空
                     * @param _uuids Uuids 查询，Quuid查询时填空
                     * 
                     */
                    void SetUuids(const std::vector<std::string>& _uuids);

                    /**
                     * 判断参数 Uuids 是否已赋值
                     * @return Uuids 是否已赋值
                     * 
                     */
                    bool UuidsHasBeenSet() const;

                private:

                    /**
                     * 主机Quuid数组
                     */
                    std::vector<std::string> m_quuidList;
                    bool m_quuidListHasBeenSet;

                    /**
                     * Uuids 查询，Quuid查询时填空
                     */
                    std::vector<std::string> m_uuids;
                    bool m_uuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEHOSTINFOREQUEST_H_
