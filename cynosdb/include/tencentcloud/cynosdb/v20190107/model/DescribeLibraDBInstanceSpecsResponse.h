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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBINSTANCESPECSRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBINSTANCESPECSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/RegionInstanceSpecInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeLibraDBInstanceSpecs返回参数结构体
                */
                class DescribeLibraDBInstanceSpecsResponse : public AbstractModel
                {
                public:
                    DescribeLibraDBInstanceSpecsResponse();
                    ~DescribeLibraDBInstanceSpecsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取该地域实例规格信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceSpecSet 该地域实例规格信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RegionInstanceSpecInfo> GetInstanceSpecSet() const;

                    /**
                     * 判断参数 InstanceSpecSet 是否已赋值
                     * @return InstanceSpecSet 是否已赋值
                     * 
                     */
                    bool InstanceSpecSetHasBeenSet() const;

                private:

                    /**
                     * 该地域实例规格信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RegionInstanceSpecInfo> m_instanceSpecSet;
                    bool m_instanceSpecSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBINSTANCESPECSRESPONSE_H_
