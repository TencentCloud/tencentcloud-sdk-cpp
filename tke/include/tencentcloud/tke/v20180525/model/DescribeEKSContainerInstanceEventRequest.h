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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEKSCONTAINERINSTANCEEVENTREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEKSCONTAINERINSTANCEEVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeEKSContainerInstanceEvent请求参数结构体
                */
                class DescribeEKSContainerInstanceEventRequest : public AbstractModel
                {
                public:
                    DescribeEKSContainerInstanceEventRequest();
                    ~DescribeEKSContainerInstanceEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取容器实例id
                     * @return EksCiId 容器实例id
                     * 
                     */
                    std::string GetEksCiId() const;

                    /**
                     * 设置容器实例id
                     * @param _eksCiId 容器实例id
                     * 
                     */
                    void SetEksCiId(const std::string& _eksCiId);

                    /**
                     * 判断参数 EksCiId 是否已赋值
                     * @return EksCiId 是否已赋值
                     * 
                     */
                    bool EksCiIdHasBeenSet() const;

                    /**
                     * 获取最大事件数量。默认为50，最大取值100。
                     * @return Limit 最大事件数量。默认为50，最大取值100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置最大事件数量。默认为50，最大取值100。
                     * @param _limit 最大事件数量。默认为50，最大取值100。
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
                     * 容器实例id
                     */
                    std::string m_eksCiId;
                    bool m_eksCiIdHasBeenSet;

                    /**
                     * 最大事件数量。默认为50，最大取值100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEKSCONTAINERINSTANCEEVENTREQUEST_H_
