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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_BATCHMODIFYTARGETTAGREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_BATCHMODIFYTARGETTAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/RsTagRule.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * BatchModifyTargetTag请求参数结构体
                */
                class BatchModifyTargetTagRequest : public AbstractModel
                {
                public:
                    BatchModifyTargetTagRequest();
                    ~BatchModifyTargetTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例 ID。
                     * @return LoadBalancerId 负载均衡实例 ID。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID。
                     * @param _loadBalancerId 负载均衡实例 ID。
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取要批量修改标签的列表。
                     * @return ModifyList 要批量修改标签的列表。
                     * 
                     */
                    std::vector<RsTagRule> GetModifyList() const;

                    /**
                     * 设置要批量修改标签的列表。
                     * @param _modifyList 要批量修改标签的列表。
                     * 
                     */
                    void SetModifyList(const std::vector<RsTagRule>& _modifyList);

                    /**
                     * 判断参数 ModifyList 是否已赋值
                     * @return ModifyList 是否已赋值
                     * 
                     */
                    bool ModifyListHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例 ID。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 要批量修改标签的列表。
                     */
                    std::vector<RsTagRule> m_modifyList;
                    bool m_modifyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_BATCHMODIFYTARGETTAGREQUEST_H_
