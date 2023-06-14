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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYCUSTOMRULESTATUSREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYCUSTOMRULESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * ModifyCustomRuleStatus请求参数结构体
                */
                class ModifyCustomRuleStatusRequest : public AbstractModel
                {
                public:
                    ModifyCustomRuleStatusRequest();
                    ~ModifyCustomRuleStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取码规则ID
                     * @return CustomId 码规则ID
                     * 
                     */
                    std::string GetCustomId() const;

                    /**
                     * 设置码规则ID
                     * @param _customId 码规则ID
                     * 
                     */
                    void SetCustomId(const std::string& _customId);

                    /**
                     * 判断参数 CustomId 是否已赋值
                     * @return CustomId 是否已赋值
                     * 
                     */
                    bool CustomIdHasBeenSet() const;

                    /**
                     * 获取码规则状态 0:未生效 1:已生效 -1:已失效
                     * @return Status 码规则状态 0:未生效 1:已生效 -1:已失效
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置码规则状态 0:未生效 1:已生效 -1:已失效
                     * @param _status 码规则状态 0:未生效 1:已生效 -1:已失效
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取企业ID
                     * @return CorpId 企业ID
                     * 
                     */
                    uint64_t GetCorpId() const;

                    /**
                     * 设置企业ID
                     * @param _corpId 企业ID
                     * 
                     */
                    void SetCorpId(const uint64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                private:

                    /**
                     * 码规则ID
                     */
                    std::string m_customId;
                    bool m_customIdHasBeenSet;

                    /**
                     * 码规则状态 0:未生效 1:已生效 -1:已失效
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYCUSTOMRULESTATUSREQUEST_H_
