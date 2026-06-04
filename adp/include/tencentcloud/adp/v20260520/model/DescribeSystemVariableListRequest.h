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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESYSTEMVARIABLELISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESYSTEMVARIABLELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeSystemVariableList请求参数结构体
                */
                class DescribeSystemVariableListRequest : public AbstractModel
                {
                public:
                    DescribeSystemVariableListRequest();
                    ~DescribeSystemVariableListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return AppId 应用ID
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置应用ID
                     * @param _appId 应用ID
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESYSTEMVARIABLELISTREQUEST_H_
