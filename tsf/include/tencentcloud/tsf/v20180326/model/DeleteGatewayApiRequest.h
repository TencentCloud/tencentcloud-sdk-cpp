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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DELETEGATEWAYAPIREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DELETEGATEWAYAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DeleteGatewayApi请求参数结构体
                */
                class DeleteGatewayApiRequest : public AbstractModel
                {
                public:
                    DeleteGatewayApiRequest();
                    ~DeleteGatewayApiRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分组ID
                     * @return GroupId 分组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组ID
                     * @param _groupId 分组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Api ID 数组
                     * @return ApiList Api ID 数组
                     * 
                     */
                    std::vector<std::string> GetApiList() const;

                    /**
                     * 设置Api ID 数组
                     * @param _apiList Api ID 数组
                     * 
                     */
                    void SetApiList(const std::vector<std::string>& _apiList);

                    /**
                     * 判断参数 ApiList 是否已赋值
                     * @return ApiList 是否已赋值
                     * 
                     */
                    bool ApiListHasBeenSet() const;

                private:

                    /**
                     * 分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Api ID 数组
                     */
                    std::vector<std::string> m_apiList;
                    bool m_apiListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DELETEGATEWAYAPIREQUEST_H_
