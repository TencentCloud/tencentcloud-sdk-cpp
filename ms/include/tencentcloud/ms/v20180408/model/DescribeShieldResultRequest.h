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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBESHIELDRESULTREQUEST_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBESHIELDRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * DescribeShieldResult请求参数结构体
                */
                class DescribeShieldResultRequest : public AbstractModel
                {
                public:
                    DescribeShieldResultRequest();
                    ~DescribeShieldResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务唯一标识
                     * @return ItemId 任务唯一标识
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置任务唯一标识
                     * @param _itemId 任务唯一标识
                     * 
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                private:

                    /**
                     * 任务唯一标识
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBESHIELDRESULTREQUEST_H_
