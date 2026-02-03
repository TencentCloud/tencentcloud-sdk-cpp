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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASEGWAPIRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASEGWAPIRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseGWAPI.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCloudBaseGWAPI返回参数结构体
                */
                class DescribeCloudBaseGWAPIResponse : public AbstractModel
                {
                public:
                    DescribeCloudBaseGWAPIResponse();
                    ~DescribeCloudBaseGWAPIResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取API列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return APISet API列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CloudBaseGWAPI> GetAPISet() const;

                    /**
                     * 判断参数 APISet 是否已赋值
                     * @return APISet 是否已赋值
                     * 
                     */
                    bool APISetHasBeenSet() const;

                    /**
                     * 获取是否开启http调用
                     * @return EnableService 是否开启http调用
                     * 
                     */
                    bool GetEnableService() const;

                    /**
                     * 判断参数 EnableService 是否已赋值
                     * @return EnableService 是否已赋值
                     * 
                     */
                    bool EnableServiceHasBeenSet() const;

                    /**
                     * 获取查询结果的数据总量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 查询结果的数据总量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取查询的分页参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Offset 查询的分页参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询的分页参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Limit 查询的分页参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * API列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CloudBaseGWAPI> m_aPISet;
                    bool m_aPISetHasBeenSet;

                    /**
                     * 是否开启http调用
                     */
                    bool m_enableService;
                    bool m_enableServiceHasBeenSet;

                    /**
                     * 查询结果的数据总量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 查询的分页参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询的分页参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASEGWAPIRESPONSE_H_
