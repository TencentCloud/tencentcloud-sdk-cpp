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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_DESCRIBERUNTIMESRESPONSE_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_DESCRIBERUNTIMESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiems/v20190416/model/Runtime.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * DescribeRuntimes返回参数结构体
                */
                class DescribeRuntimesResponse : public AbstractModel
                {
                public:
                    DescribeRuntimesResponse();
                    ~DescribeRuntimesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取TIEMS支持的运行环境列表
                     * @return Runtimes TIEMS支持的运行环境列表
                     * 
                     */
                    std::vector<Runtime> GetRuntimes() const;

                    /**
                     * 判断参数 Runtimes 是否已赋值
                     * @return Runtimes 是否已赋值
                     * 
                     */
                    bool RuntimesHasBeenSet() const;

                    /**
                     * 获取用户对runtime对权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserAccess 用户对runtime对权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUserAccess() const;

                    /**
                     * 判断参数 UserAccess 是否已赋值
                     * @return UserAccess 是否已赋值
                     * 
                     */
                    bool UserAccessHasBeenSet() const;

                private:

                    /**
                     * TIEMS支持的运行环境列表
                     */
                    std::vector<Runtime> m_runtimes;
                    bool m_runtimesHasBeenSet;

                    /**
                     * 用户对runtime对权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_userAccess;
                    bool m_userAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_DESCRIBERUNTIMESRESPONSE_H_
