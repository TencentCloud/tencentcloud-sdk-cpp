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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_MODIFYDISKCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_MODIFYDISKCONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/Disk.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * ModifyDiskConfiguration请求参数结构体
                */
                class ModifyDiskConfigurationRequest : public AbstractModel
                {
                public:
                    ModifyDiskConfigurationRequest();
                    ~ModifyDiskConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>新系统盘配置</p>
                     * @return NewSystemDisk <p>新系统盘配置</p>
                     * 
                     */
                    Disk GetNewSystemDisk() const;

                    /**
                     * 设置<p>新系统盘配置</p>
                     * @param _newSystemDisk <p>新系统盘配置</p>
                     * 
                     */
                    void SetNewSystemDisk(const Disk& _newSystemDisk);

                    /**
                     * 判断参数 NewSystemDisk 是否已赋值
                     * @return NewSystemDisk 是否已赋值
                     * 
                     */
                    bool NewSystemDiskHasBeenSet() const;

                    /**
                     * 获取<p>新数据盘配置</p>
                     * @return NewDataDisks <p>新数据盘配置</p>
                     * 
                     */
                    std::vector<Disk> GetNewDataDisks() const;

                    /**
                     * 设置<p>新数据盘配置</p>
                     * @param _newDataDisks <p>新数据盘配置</p>
                     * 
                     */
                    void SetNewDataDisks(const std::vector<Disk>& _newDataDisks);

                    /**
                     * 判断参数 NewDataDisks 是否已赋值
                     * @return NewDataDisks 是否已赋值
                     * 
                     */
                    bool NewDataDisksHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>新系统盘配置</p>
                     */
                    Disk m_newSystemDisk;
                    bool m_newSystemDiskHasBeenSet;

                    /**
                     * <p>新数据盘配置</p>
                     */
                    std::vector<Disk> m_newDataDisks;
                    bool m_newDataDisksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_MODIFYDISKCONFIGURATIONREQUEST_H_
