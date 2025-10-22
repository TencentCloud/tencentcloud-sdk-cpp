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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_RELEASEISOLATEDDBINSTANCESRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_RELEASEISOLATEDDBINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/ReleaseResult.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ReleaseIsolatedDBInstances返回参数结构体
                */
                class ReleaseIsolatedDBInstancesResponse : public AbstractModel
                {
                public:
                    ReleaseIsolatedDBInstancesResponse();
                    ~ReleaseIsolatedDBInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取解隔离操作的结果集。
                     * @return Items 解隔离操作的结果集。
                     * 
                     */
                    std::vector<ReleaseResult> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 解隔离操作的结果集。
                     */
                    std::vector<ReleaseResult> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_RELEASEISOLATEDDBINSTANCESRESPONSE_H_
