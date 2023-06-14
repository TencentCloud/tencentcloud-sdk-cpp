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

#ifndef TENCENTCLOUD_AMS_V20200608_MODEL_DESCRIBEBIZCONFIGREQUEST_H_
#define TENCENTCLOUD_AMS_V20200608_MODEL_DESCRIBEBIZCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20200608
        {
            namespace Model
            {
                /**
                * DescribeBizConfig请求参数结构体
                */
                class DescribeBizConfigRequest : public AbstractModel
                {
                public:
                    DescribeBizConfigRequest();
                    ~DescribeBizConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取审核业务类类型
                     * @return BizType 审核业务类类型
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置审核业务类类型
                     * @param _bizType 审核业务类类型
                     * 
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                private:

                    /**
                     * 审核业务类类型
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20200608_MODEL_DESCRIBEBIZCONFIGREQUEST_H_
