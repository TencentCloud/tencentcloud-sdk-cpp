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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_SQLAGENTPARAMETER_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_SQLAGENTPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdai/v20250717/model/InstanceInfos.h>
#include <tencentcloud/tdai/v20250717/model/CodeRepo.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * 风险SQL智能体参数
                */
                class SqlAgentParameter : public AbstractModel
                {
                public:
                    SqlAgentParameter();
                    ~SqlAgentParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库实例信息列表
                     * @return InstanceInfos 数据库实例信息列表
                     * 
                     */
                    std::vector<InstanceInfos> GetInstanceInfos() const;

                    /**
                     * 设置数据库实例信息列表
                     * @param _instanceInfos 数据库实例信息列表
                     * 
                     */
                    void SetInstanceInfos(const std::vector<InstanceInfos>& _instanceInfos);

                    /**
                     * 判断参数 InstanceInfos 是否已赋值
                     * @return InstanceInfos 是否已赋值
                     * 
                     */
                    bool InstanceInfosHasBeenSet() const;

                    /**
                     * 获取代码仓库信息
                     * @return CodeRepo 代码仓库信息
                     * 
                     */
                    CodeRepo GetCodeRepo() const;

                    /**
                     * 设置代码仓库信息
                     * @param _codeRepo 代码仓库信息
                     * 
                     */
                    void SetCodeRepo(const CodeRepo& _codeRepo);

                    /**
                     * 判断参数 CodeRepo 是否已赋值
                     * @return CodeRepo 是否已赋值
                     * 
                     */
                    bool CodeRepoHasBeenSet() const;

                private:

                    /**
                     * 数据库实例信息列表
                     */
                    std::vector<InstanceInfos> m_instanceInfos;
                    bool m_instanceInfosHasBeenSet;

                    /**
                     * 代码仓库信息
                     */
                    CodeRepo m_codeRepo;
                    bool m_codeRepoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_SQLAGENTPARAMETER_H_
