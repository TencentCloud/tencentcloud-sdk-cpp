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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPACKINGQUOTAGROUPRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPACKINGQUOTAGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/PackingQuotaGroup.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribePackingQuotaGroup返回参数结构体
                */
                class DescribePackingQuotaGroupResponse : public AbstractModel
                {
                public:
                    DescribePackingQuotaGroupResponse();
                    ~DescribePackingQuotaGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取装箱配额组
                     * @return PackingQuotaSet 装箱配额组
                     * 
                     */
                    std::vector<PackingQuotaGroup> GetPackingQuotaSet() const;

                    /**
                     * 判断参数 PackingQuotaSet 是否已赋值
                     * @return PackingQuotaSet 是否已赋值
                     * 
                     */
                    bool PackingQuotaSetHasBeenSet() const;

                private:

                    /**
                     * 装箱配额组
                     */
                    std::vector<PackingQuotaGroup> m_packingQuotaSet;
                    bool m_packingQuotaSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEPACKINGQUOTAGROUPRESPONSE_H_
