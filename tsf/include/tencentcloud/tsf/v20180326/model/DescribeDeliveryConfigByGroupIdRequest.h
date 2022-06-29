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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEDELIVERYCONFIGBYGROUPIDREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEDELIVERYCONFIGBYGROUPIDREQUEST_H_

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
                * DescribeDeliveryConfigByGroupId请求参数结构体
                */
                class DescribeDeliveryConfigByGroupIdRequest : public AbstractModel
                {
                public:
                    DescribeDeliveryConfigByGroupIdRequest();
                    ~DescribeDeliveryConfigByGroupIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取部署组id
                     * @return GroupId 部署组id
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组id
                     * @param GroupId 部署组id
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 部署组id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEDELIVERYCONFIGBYGROUPIDREQUEST_H_
