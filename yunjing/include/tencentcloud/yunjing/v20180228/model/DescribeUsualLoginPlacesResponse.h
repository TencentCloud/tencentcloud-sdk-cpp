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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEUSUALLOGINPLACESRESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEUSUALLOGINPLACESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yunjing/v20180228/model/UsualPlace.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeUsualLoginPlaces返回参数结构体
                */
                class DescribeUsualLoginPlacesResponse : public AbstractModel
                {
                public:
                    DescribeUsualLoginPlacesResponse();
                    ~DescribeUsualLoginPlacesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取常用登录地数组
                     * @return UsualLoginPlaces 常用登录地数组
                     * 
                     */
                    std::vector<UsualPlace> GetUsualLoginPlaces() const;

                    /**
                     * 判断参数 UsualLoginPlaces 是否已赋值
                     * @return UsualLoginPlaces 是否已赋值
                     * 
                     */
                    bool UsualLoginPlacesHasBeenSet() const;

                private:

                    /**
                     * 常用登录地数组
                     */
                    std::vector<UsualPlace> m_usualLoginPlaces;
                    bool m_usualLoginPlacesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEUSUALLOGINPLACESRESPONSE_H_
