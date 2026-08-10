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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYINSTANCEDESTROYPROTECTREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYINSTANCEDESTROYPROTECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyInstanceDestroyProtect请求参数结构体
                */
                class ModifyInstanceDestroyProtectRequest : public AbstractModel
                {
                public:
                    ModifyInstanceDestroyProtectRequest();
                    ~ModifyInstanceDestroyProtectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID 列表
                     * @return InstanceIds 实例 ID 列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例 ID 列表
                     * @param _instanceIds 实例 ID 列表
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取开启或关闭实例销毁保护
                     * @return DestroyProtect 开启或关闭实例销毁保护
                     * 
                     */
                    std::string GetDestroyProtect() const;

                    /**
                     * 设置开启或关闭实例销毁保护
                     * @param _destroyProtect 开启或关闭实例销毁保护
                     * 
                     */
                    void SetDestroyProtect(const std::string& _destroyProtect);

                    /**
                     * 判断参数 DestroyProtect 是否已赋值
                     * @return DestroyProtect 是否已赋值
                     * 
                     */
                    bool DestroyProtectHasBeenSet() const;

                private:

                    /**
                     * 实例 ID 列表
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 开启或关闭实例销毁保护
                     */
                    std::string m_destroyProtect;
                    bool m_destroyProtectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYINSTANCEDESTROYPROTECTREQUEST_H_
