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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBECATALOGAPPROVERSRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBECATALOGAPPROVERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/CatalogApprovers.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * DescribeCatalogApprovers返回参数结构体
                */
                class DescribeCatalogApproversResponse : public AbstractModel
                {
                public:
                    DescribeCatalogApproversResponse();
                    ~DescribeCatalogApproversResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取参与者列表
                     * @return Approvers 参与者列表
                     * 
                     */
                    std::vector<CatalogApprovers> GetApprovers() const;

                    /**
                     * 判断参数 Approvers 是否已赋值
                     * @return Approvers 是否已赋值
                     * 
                     */
                    bool ApproversHasBeenSet() const;

                private:

                    /**
                     * 参与者列表
                     */
                    std::vector<CatalogApprovers> m_approvers;
                    bool m_approversHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBECATALOGAPPROVERSRESPONSE_H_
