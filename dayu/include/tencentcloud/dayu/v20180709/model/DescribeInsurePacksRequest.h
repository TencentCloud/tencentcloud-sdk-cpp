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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEINSUREPACKSREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEINSUREPACKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeInsurePacks请求参数结构体
                */
                class DescribeInsurePacksRequest : public AbstractModel
                {
                public:
                    DescribeInsurePacksRequest();
                    ~DescribeInsurePacksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可选字段，保险包套餐ID，当要获取指定ID（例如insure-000000xe）的保险包套餐时请填写此字段；
                     * @return IdList 可选字段，保险包套餐ID，当要获取指定ID（例如insure-000000xe）的保险包套餐时请填写此字段；
                     * 
                     */
                    std::vector<std::string> GetIdList() const;

                    /**
                     * 设置可选字段，保险包套餐ID，当要获取指定ID（例如insure-000000xe）的保险包套餐时请填写此字段；
                     * @param _idList 可选字段，保险包套餐ID，当要获取指定ID（例如insure-000000xe）的保险包套餐时请填写此字段；
                     * 
                     */
                    void SetIdList(const std::vector<std::string>& _idList);

                    /**
                     * 判断参数 IdList 是否已赋值
                     * @return IdList 是否已赋值
                     * 
                     */
                    bool IdListHasBeenSet() const;

                private:

                    /**
                     * 可选字段，保险包套餐ID，当要获取指定ID（例如insure-000000xe）的保险包套餐时请填写此字段；
                     */
                    std::vector<std::string> m_idList;
                    bool m_idListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEINSUREPACKSREQUEST_H_
