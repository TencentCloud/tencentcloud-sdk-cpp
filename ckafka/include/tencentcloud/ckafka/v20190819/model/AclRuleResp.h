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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ACLRULERESP_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ACLRULERESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/AclRule.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * AclRule列表接口返回结果
                */
                class AclRuleResp : public AbstractModel
                {
                public:
                    AclRuleResp();
                    ~AclRuleResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数据条数
                     * @return TotalCount 总数据条数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置总数据条数
                     * @param _totalCount 总数据条数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取AclRule列表
                     * @return AclRuleList AclRule列表
                     * 
                     */
                    std::vector<AclRule> GetAclRuleList() const;

                    /**
                     * 设置AclRule列表
                     * @param _aclRuleList AclRule列表
                     * 
                     */
                    void SetAclRuleList(const std::vector<AclRule>& _aclRuleList);

                    /**
                     * 判断参数 AclRuleList 是否已赋值
                     * @return AclRuleList 是否已赋值
                     * 
                     */
                    bool AclRuleListHasBeenSet() const;

                private:

                    /**
                     * 总数据条数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * AclRule列表
                     */
                    std::vector<AclRule> m_aclRuleList;
                    bool m_aclRuleListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ACLRULERESP_H_
