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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULECONFIGREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/SystemDisk.h>
#include <tencentcloud/ecm/v20190719/model/DataDisk.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ModifyModuleConfig请求参数结构体
                */
                class ModifyModuleConfigRequest : public AbstractModel
                {
                public:
                    ModifyModuleConfigRequest();
                    ~ModifyModuleConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块ID。
                     * @return ModuleId 模块ID。
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置模块ID。
                     * @param _moduleId 模块ID。
                     * 
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

                    /**
                     * 获取机型ID。
                     * @return InstanceType 机型ID。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置机型ID。
                     * @param _instanceType 机型ID。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取默认数据盘大小，单位：G。范围不得超过数据盘范围大小，详看DescribeConfig。
                     * @return DefaultDataDiskSize 默认数据盘大小，单位：G。范围不得超过数据盘范围大小，详看DescribeConfig。
                     * 
                     */
                    int64_t GetDefaultDataDiskSize() const;

                    /**
                     * 设置默认数据盘大小，单位：G。范围不得超过数据盘范围大小，详看DescribeConfig。
                     * @param _defaultDataDiskSize 默认数据盘大小，单位：G。范围不得超过数据盘范围大小，详看DescribeConfig。
                     * 
                     */
                    void SetDefaultDataDiskSize(const int64_t& _defaultDataDiskSize);

                    /**
                     * 判断参数 DefaultDataDiskSize 是否已赋值
                     * @return DefaultDataDiskSize 是否已赋值
                     * 
                     */
                    bool DefaultDataDiskSizeHasBeenSet() const;

                    /**
                     * 获取默认系统盘大小，单位：G。范围不得超过数据盘范围大小，详看DescribeConfig。
                     * @return DefaultSystemDiskSize 默认系统盘大小，单位：G。范围不得超过数据盘范围大小，详看DescribeConfig。
                     * 
                     */
                    int64_t GetDefaultSystemDiskSize() const;

                    /**
                     * 设置默认系统盘大小，单位：G。范围不得超过数据盘范围大小，详看DescribeConfig。
                     * @param _defaultSystemDiskSize 默认系统盘大小，单位：G。范围不得超过数据盘范围大小，详看DescribeConfig。
                     * 
                     */
                    void SetDefaultSystemDiskSize(const int64_t& _defaultSystemDiskSize);

                    /**
                     * 判断参数 DefaultSystemDiskSize 是否已赋值
                     * @return DefaultSystemDiskSize 是否已赋值
                     * 
                     */
                    bool DefaultSystemDiskSizeHasBeenSet() const;

                    /**
                     * 获取系统盘
                     * @return SystemDisk 系统盘
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置系统盘
                     * @param _systemDisk 系统盘
                     * 
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取数据盘
                     * @return DataDisks 数据盘
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置数据盘
                     * @param _dataDisks 数据盘
                     * 
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                private:

                    /**
                     * 模块ID。
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * 机型ID。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 默认数据盘大小，单位：G。范围不得超过数据盘范围大小，详看DescribeConfig。
                     */
                    int64_t m_defaultDataDiskSize;
                    bool m_defaultDataDiskSizeHasBeenSet;

                    /**
                     * 默认系统盘大小，单位：G。范围不得超过数据盘范围大小，详看DescribeConfig。
                     */
                    int64_t m_defaultSystemDiskSize;
                    bool m_defaultSystemDiskSizeHasBeenSet;

                    /**
                     * 系统盘
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * 数据盘
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULECONFIGREQUEST_H_
