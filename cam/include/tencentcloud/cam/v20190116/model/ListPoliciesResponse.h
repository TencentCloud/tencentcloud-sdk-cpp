/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTPOLICIESRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTPOLICIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/StrategyInfo.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * ListPolicies返回参数结构体
                */
                class ListPoliciesResponse : public AbstractModel
                {
                public:
                    ListPoliciesResponse();
                    ~ListPoliciesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>策略总数</p>
                     * @return TotalNum <p>策略总数</p>
                     * 
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取<p>策略数组，数组每个成员包括 policyId、policyName、addTime、type、description、 createMode 字段。其中：<br>policyId：策略 id<br>policyName：策略名<br>addTime：策略创建时间<br>type：1 表示自定义策略，2 表示预设策略<br>description：策略描述<br>createMode：1 表示按业务权限创建的策略，其他值表示可以查看策略语法和通过策略语法更新策略<br>Attachments: 关联的用户数<br>ServiceType: 策略关联的产品<br>IsAttached: 当需要查询标记实体是否已经关联策略时不为null。0表示未关联策略，1表示已关联策略</p>
                     * @return List <p>策略数组，数组每个成员包括 policyId、policyName、addTime、type、description、 createMode 字段。其中：<br>policyId：策略 id<br>policyName：策略名<br>addTime：策略创建时间<br>type：1 表示自定义策略，2 表示预设策略<br>description：策略描述<br>createMode：1 表示按业务权限创建的策略，其他值表示可以查看策略语法和通过策略语法更新策略<br>Attachments: 关联的用户数<br>ServiceType: 策略关联的产品<br>IsAttached: 当需要查询标记实体是否已经关联策略时不为null。0表示未关联策略，1表示已关联策略</p>
                     * 
                     */
                    std::vector<StrategyInfo> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取<p>保留字段</p>
                     * @return ServiceTypeList <p>保留字段</p>
                     * 
                     */
                    std::vector<std::string> GetServiceTypeList() const;

                    /**
                     * 判断参数 ServiceTypeList 是否已赋值
                     * @return ServiceTypeList 是否已赋值
                     * 
                     */
                    bool ServiceTypeListHasBeenSet() const;

                private:

                    /**
                     * <p>策略总数</p>
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * <p>策略数组，数组每个成员包括 policyId、policyName、addTime、type、description、 createMode 字段。其中：<br>policyId：策略 id<br>policyName：策略名<br>addTime：策略创建时间<br>type：1 表示自定义策略，2 表示预设策略<br>description：策略描述<br>createMode：1 表示按业务权限创建的策略，其他值表示可以查看策略语法和通过策略语法更新策略<br>Attachments: 关联的用户数<br>ServiceType: 策略关联的产品<br>IsAttached: 当需要查询标记实体是否已经关联策略时不为null。0表示未关联策略，1表示已关联策略</p>
                     */
                    std::vector<StrategyInfo> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * <p>保留字段</p>
                     */
                    std::vector<std::string> m_serviceTypeList;
                    bool m_serviceTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTPOLICIESRESPONSE_H_
