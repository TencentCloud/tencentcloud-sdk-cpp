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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_MODIFYCOMPUTEENVREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_MODIFYCOMPUTEENVREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/ComputeEnvData.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyComputeEnv请求参数结构体
                */
                class ModifyComputeEnvRequest : public AbstractModel
                {
                public:
                    ModifyComputeEnvRequest();
                    ~ModifyComputeEnvRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取计算环境ID，环境ID通过调用接口 [DescribeComputeEnvs](https://cloud.tencent.com/document/api/599/15893)获取。
                     * @return EnvId 计算环境ID，环境ID通过调用接口 [DescribeComputeEnvs](https://cloud.tencent.com/document/api/599/15893)获取。
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置计算环境ID，环境ID通过调用接口 [DescribeComputeEnvs](https://cloud.tencent.com/document/api/599/15893)获取。
                     * @param _envId 计算环境ID，环境ID通过调用接口 [DescribeComputeEnvs](https://cloud.tencent.com/document/api/599/15893)获取。
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取计算节点期望个数，最大上限2000。
                     * @return DesiredComputeNodeCount 计算节点期望个数，最大上限2000。
                     * 
                     */
                    int64_t GetDesiredComputeNodeCount() const;

                    /**
                     * 设置计算节点期望个数，最大上限2000。
                     * @param _desiredComputeNodeCount 计算节点期望个数，最大上限2000。
                     * 
                     */
                    void SetDesiredComputeNodeCount(const int64_t& _desiredComputeNodeCount);

                    /**
                     * 判断参数 DesiredComputeNodeCount 是否已赋值
                     * @return DesiredComputeNodeCount 是否已赋值
                     * 
                     */
                    bool DesiredComputeNodeCountHasBeenSet() const;

                    /**
                     * 获取计算环境名称
                     * @return EnvName 计算环境名称
                     * 
                     */
                    std::string GetEnvName() const;

                    /**
                     * 设置计算环境名称
                     * @param _envName 计算环境名称
                     * 
                     */
                    void SetEnvName(const std::string& _envName);

                    /**
                     * 判断参数 EnvName 是否已赋值
                     * @return EnvName 是否已赋值
                     * 
                     */
                    bool EnvNameHasBeenSet() const;

                    /**
                     * 获取计算环境描述
                     * @return EnvDescription 计算环境描述
                     * 
                     */
                    std::string GetEnvDescription() const;

                    /**
                     * 设置计算环境描述
                     * @param _envDescription 计算环境描述
                     * 
                     */
                    void SetEnvDescription(const std::string& _envDescription);

                    /**
                     * 判断参数 EnvDescription 是否已赋值
                     * @return EnvDescription 是否已赋值
                     * 
                     */
                    bool EnvDescriptionHasBeenSet() const;

                    /**
                     * 获取计算环境属性数据
                     * @return EnvData 计算环境属性数据
                     * 
                     */
                    ComputeEnvData GetEnvData() const;

                    /**
                     * 设置计算环境属性数据
                     * @param _envData 计算环境属性数据
                     * 
                     */
                    void SetEnvData(const ComputeEnvData& _envData);

                    /**
                     * 判断参数 EnvData 是否已赋值
                     * @return EnvData 是否已赋值
                     * 
                     */
                    bool EnvDataHasBeenSet() const;

                private:

                    /**
                     * 计算环境ID，环境ID通过调用接口 [DescribeComputeEnvs](https://cloud.tencent.com/document/api/599/15893)获取。
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 计算节点期望个数，最大上限2000。
                     */
                    int64_t m_desiredComputeNodeCount;
                    bool m_desiredComputeNodeCountHasBeenSet;

                    /**
                     * 计算环境名称
                     */
                    std::string m_envName;
                    bool m_envNameHasBeenSet;

                    /**
                     * 计算环境描述
                     */
                    std::string m_envDescription;
                    bool m_envDescriptionHasBeenSet;

                    /**
                     * 计算环境属性数据
                     */
                    ComputeEnvData m_envData;
                    bool m_envDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_MODIFYCOMPUTEENVREQUEST_H_
