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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_MODIFYWORKERSREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_MODIFYWORKERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * ModifyWorkers请求参数结构体
                */
                class ModifyWorkersRequest : public AbstractModel
                {
                public:
                    ModifyWorkersRequest();
                    ~ModifyWorkersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取批量机器ID，最多不超过100个
                     * @return InstanceIds 批量机器ID，最多不超过100个
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置批量机器ID，最多不超过100个
                     * @param InstanceIds 批量机器ID，最多不超过100个
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取资源池编号，修改有效范围为[1,100]，在idle状态下才能修改成功
                     * @return SetNo 资源池编号，修改有效范围为[1,100]，在idle状态下才能修改成功
                     */
                    uint64_t GetSetNo() const;

                    /**
                     * 设置资源池编号，修改有效范围为[1,100]，在idle状态下才能修改成功
                     * @param SetNo 资源池编号，修改有效范围为[1,100]，在idle状态下才能修改成功
                     */
                    void SetSetNo(const uint64_t& _setNo);

                    /**
                     * 判断参数 SetNo 是否已赋值
                     * @return SetNo 是否已赋值
                     */
                    bool SetNoHasBeenSet() const;

                private:

                    /**
                     * 批量机器ID，最多不超过100个
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 资源池编号，修改有效范围为[1,100]，在idle状态下才能修改成功
                     */
                    uint64_t m_setNo;
                    bool m_setNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_MODIFYWORKERSREQUEST_H_
