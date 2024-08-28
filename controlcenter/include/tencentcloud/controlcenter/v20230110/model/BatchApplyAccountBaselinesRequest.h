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

#ifndef TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_BATCHAPPLYACCOUNTBASELINESREQUEST_H_
#define TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_BATCHAPPLYACCOUNTBASELINESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/controlcenter/v20230110/model/BaselineConfigItem.h>


namespace TencentCloud
{
    namespace Controlcenter
    {
        namespace V20230110
        {
            namespace Model
            {
                /**
                * BatchApplyAccountBaselines请求参数结构体
                */
                class BatchApplyAccountBaselinesRequest : public AbstractModel
                {
                public:
                    BatchApplyAccountBaselinesRequest();
                    ~BatchApplyAccountBaselinesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取成员账号uin，也是被应用基线的账号uin。
                     * @return MemberUinList 成员账号uin，也是被应用基线的账号uin。
                     * 
                     */
                    std::vector<int64_t> GetMemberUinList() const;

                    /**
                     * 设置成员账号uin，也是被应用基线的账号uin。
                     * @param _memberUinList 成员账号uin，也是被应用基线的账号uin。
                     * 
                     */
                    void SetMemberUinList(const std::vector<int64_t>& _memberUinList);

                    /**
                     * 判断参数 MemberUinList 是否已赋值
                     * @return MemberUinList 是否已赋值
                     * 
                     */
                    bool MemberUinListHasBeenSet() const;

                    /**
                     * 获取基线项配置信息列表。
                     * @return BaselineConfigItems 基线项配置信息列表。
                     * 
                     */
                    std::vector<BaselineConfigItem> GetBaselineConfigItems() const;

                    /**
                     * 设置基线项配置信息列表。
                     * @param _baselineConfigItems 基线项配置信息列表。
                     * 
                     */
                    void SetBaselineConfigItems(const std::vector<BaselineConfigItem>& _baselineConfigItems);

                    /**
                     * 判断参数 BaselineConfigItems 是否已赋值
                     * @return BaselineConfigItems 是否已赋值
                     * 
                     */
                    bool BaselineConfigItemsHasBeenSet() const;

                private:

                    /**
                     * 成员账号uin，也是被应用基线的账号uin。
                     */
                    std::vector<int64_t> m_memberUinList;
                    bool m_memberUinListHasBeenSet;

                    /**
                     * 基线项配置信息列表。
                     */
                    std::vector<BaselineConfigItem> m_baselineConfigItems;
                    bool m_baselineConfigItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_BATCHAPPLYACCOUNTBASELINESREQUEST_H_
