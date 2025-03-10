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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DISABLEREGISTERCODESREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DISABLEREGISTERCODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DisableRegisterCodes请求参数结构体
                */
                class DisableRegisterCodesRequest : public AbstractModel
                {
                public:
                    DisableRegisterCodesRequest();
                    ~DisableRegisterCodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取注册码ID。

可通过 [DescribeRegisterCodes(查询注册码)](https://cloud.tencent.com/document/api/1340/96925) 接口获取。
                     * @return RegisterCodeIds 注册码ID。

可通过 [DescribeRegisterCodes(查询注册码)](https://cloud.tencent.com/document/api/1340/96925) 接口获取。
                     * 
                     */
                    std::vector<std::string> GetRegisterCodeIds() const;

                    /**
                     * 设置注册码ID。

可通过 [DescribeRegisterCodes(查询注册码)](https://cloud.tencent.com/document/api/1340/96925) 接口获取。
                     * @param _registerCodeIds 注册码ID。

可通过 [DescribeRegisterCodes(查询注册码)](https://cloud.tencent.com/document/api/1340/96925) 接口获取。
                     * 
                     */
                    void SetRegisterCodeIds(const std::vector<std::string>& _registerCodeIds);

                    /**
                     * 判断参数 RegisterCodeIds 是否已赋值
                     * @return RegisterCodeIds 是否已赋值
                     * 
                     */
                    bool RegisterCodeIdsHasBeenSet() const;

                private:

                    /**
                     * 注册码ID。

可通过 [DescribeRegisterCodes(查询注册码)](https://cloud.tencent.com/document/api/1340/96925) 接口获取。
                     */
                    std::vector<std::string> m_registerCodeIds;
                    bool m_registerCodeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DISABLEREGISTERCODESREQUEST_H_
