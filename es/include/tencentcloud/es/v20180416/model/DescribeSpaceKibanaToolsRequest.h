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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESPACEKIBANATOOLSREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESPACEKIBANATOOLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeSpaceKibanaTools请求参数结构体
                */
                class DescribeSpaceKibanaToolsRequest : public AbstractModel
                {
                public:
                    DescribeSpaceKibanaToolsRequest();
                    ~DescribeSpaceKibanaToolsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取space的ID
                     * @return SpaceId space的ID
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置space的ID
                     * @param _spaceId space的ID
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                private:

                    /**
                     * space的ID
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESPACEKIBANATOOLSREQUEST_H_
