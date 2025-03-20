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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DELETERASPRULESREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DELETERASPRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DeleteRaspRules请求参数结构体
                */
                class DeleteRaspRulesRequest : public AbstractModel
                {
                public:
                    DeleteRaspRulesRequest();
                    ~DeleteRaspRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待删除的规则ID数组 (最大100条)
                     * @return IDs 待删除的规则ID数组 (最大100条)
                     * 
                     */
                    std::vector<uint64_t> GetIDs() const;

                    /**
                     * 设置待删除的规则ID数组 (最大100条)
                     * @param _iDs 待删除的规则ID数组 (最大100条)
                     * 
                     */
                    void SetIDs(const std::vector<uint64_t>& _iDs);

                    /**
                     * 判断参数 IDs 是否已赋值
                     * @return IDs 是否已赋值
                     * 
                     */
                    bool IDsHasBeenSet() const;

                private:

                    /**
                     * 待删除的规则ID数组 (最大100条)
                     */
                    std::vector<uint64_t> m_iDs;
                    bool m_iDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DELETERASPRULESREQUEST_H_
