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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDSEVENTPUBLISHERLISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDSEVENTPUBLISHERLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeDsEventPublisherList请求参数结构体
                */
                class DescribeDsEventPublisherListRequest : public AbstractModel
                {
                public:
                    DescribeDsEventPublisherListRequest();
                    ~DescribeDsEventPublisherListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务列表，不可重复
                     * @return KeySet 任务列表，不可重复
                     * 
                     */
                    std::vector<std::string> GetKeySet() const;

                    /**
                     * 设置任务列表，不可重复
                     * @param _keySet 任务列表，不可重复
                     * 
                     */
                    void SetKeySet(const std::vector<std::string>& _keySet);

                    /**
                     * 判断参数 KeySet 是否已赋值
                     * @return KeySet 是否已赋值
                     * 
                     */
                    bool KeySetHasBeenSet() const;

                private:

                    /**
                     * 任务列表，不可重复
                     */
                    std::vector<std::string> m_keySet;
                    bool m_keySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDSEVENTPUBLISHERLISTREQUEST_H_
