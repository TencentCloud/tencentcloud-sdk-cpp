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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEUPGRADEINSTANCECHECKRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEUPGRADEINSTANCECHECKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/CheckItem.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeUpgradeInstanceCheck返回参数结构体
                */
                class DescribeUpgradeInstanceCheckResponse : public AbstractModel
                {
                public:
                    DescribeUpgradeInstanceCheckResponse();
                    ~DescribeUpgradeInstanceCheckResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取本变配是否对实例有影响，0-没有影响 1-有影响
                     * @return IsAffect 本变配是否对实例有影响，0-没有影响 1-有影响
                     * 
                     */
                    int64_t GetIsAffect() const;

                    /**
                     * 判断参数 IsAffect 是否已赋值
                     * @return IsAffect 是否已赋值
                     * 
                     */
                    bool IsAffectHasBeenSet() const;

                    /**
                     * 获取本变配是否可以执行 0-不通过，不能变配 1-通过，可以变配
                     * @return Passed 本变配是否可以执行 0-不通过，不能变配 1-通过，可以变配
                     * 
                     */
                    int64_t GetPassed() const;

                    /**
                     * 判断参数 Passed 是否已赋值
                     * @return Passed 是否已赋值
                     * 
                     */
                    bool PassedHasBeenSet() const;

                    /**
                     * 获取本变配是升配还是降配，down-降配 up-升配
                     * @return ModifyMode 本变配是升配还是降配，down-降配 up-升配
                     * 
                     */
                    std::string GetModifyMode() const;

                    /**
                     * 判断参数 ModifyMode 是否已赋值
                     * @return ModifyMode 是否已赋值
                     * 
                     */
                    bool ModifyModeHasBeenSet() const;

                    /**
                     * 获取检查项列表
                     * @return CheckItems 检查项列表
                     * 
                     */
                    std::vector<CheckItem> GetCheckItems() const;

                    /**
                     * 判断参数 CheckItems 是否已赋值
                     * @return CheckItems 是否已赋值
                     * 
                     */
                    bool CheckItemsHasBeenSet() const;

                private:

                    /**
                     * 本变配是否对实例有影响，0-没有影响 1-有影响
                     */
                    int64_t m_isAffect;
                    bool m_isAffectHasBeenSet;

                    /**
                     * 本变配是否可以执行 0-不通过，不能变配 1-通过，可以变配
                     */
                    int64_t m_passed;
                    bool m_passedHasBeenSet;

                    /**
                     * 本变配是升配还是降配，down-降配 up-升配
                     */
                    std::string m_modifyMode;
                    bool m_modifyModeHasBeenSet;

                    /**
                     * 检查项列表
                     */
                    std::vector<CheckItem> m_checkItems;
                    bool m_checkItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEUPGRADEINSTANCECHECKRESPONSE_H_
