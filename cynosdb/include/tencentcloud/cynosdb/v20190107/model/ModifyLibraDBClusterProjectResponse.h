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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERPROJECTRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERPROJECTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyLibraDBClusterProject返回参数结构体
                */
                class ModifyLibraDBClusterProjectResponse : public AbstractModel
                {
                public:
                    ModifyLibraDBClusterProjectResponse();
                    ~ModifyLibraDBClusterProjectResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群列表
                     * @return AffectedClusterIdSet 集群列表
                     * 
                     */
                    std::vector<std::string> GetAffectedClusterIdSet() const;

                    /**
                     * 判断参数 AffectedClusterIdSet 是否已赋值
                     * @return AffectedClusterIdSet 是否已赋值
                     * 
                     */
                    bool AffectedClusterIdSetHasBeenSet() const;

                private:

                    /**
                     * 集群列表
                     */
                    std::vector<std::string> m_affectedClusterIdSet;
                    bool m_affectedClusterIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERPROJECTRESPONSE_H_
