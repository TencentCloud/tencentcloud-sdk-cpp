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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATEDATABASEWHITELISTRULESREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATEDATABASEWHITELISTRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/DatabaseWhiteListRuleData.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * CreateDatabaseWhiteListRules请求参数结构体
                */
                class CreateDatabaseWhiteListRulesRequest : public AbstractModel
                {
                public:
                    CreateDatabaseWhiteListRulesRequest();
                    ~CreateDatabaseWhiteListRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取创建白名单数据
                     * @return DatabaseWhiteListRuleData 创建白名单数据
                     * 
                     */
                    std::vector<DatabaseWhiteListRuleData> GetDatabaseWhiteListRuleData() const;

                    /**
                     * 设置创建白名单数据
                     * @param _databaseWhiteListRuleData 创建白名单数据
                     * 
                     */
                    void SetDatabaseWhiteListRuleData(const std::vector<DatabaseWhiteListRuleData>& _databaseWhiteListRuleData);

                    /**
                     * 判断参数 DatabaseWhiteListRuleData 是否已赋值
                     * @return DatabaseWhiteListRuleData 是否已赋值
                     * 
                     */
                    bool DatabaseWhiteListRuleDataHasBeenSet() const;

                private:

                    /**
                     * 创建白名单数据
                     */
                    std::vector<DatabaseWhiteListRuleData> m_databaseWhiteListRuleData;
                    bool m_databaseWhiteListRuleDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATEDATABASEWHITELISTRULESREQUEST_H_
