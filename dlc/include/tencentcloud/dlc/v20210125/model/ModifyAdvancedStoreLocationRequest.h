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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYADVANCEDSTORELOCATIONREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYADVANCEDSTORELOCATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * ModifyAdvancedStoreLocation请求参数结构体
                */
                class ModifyAdvancedStoreLocationRequest : public AbstractModel
                {
                public:
                    ModifyAdvancedStoreLocationRequest();
                    ~ModifyAdvancedStoreLocationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询结果保存cos路径
                     * @return StoreLocation 查询结果保存cos路径
                     * 
                     */
                    std::string GetStoreLocation() const;

                    /**
                     * 设置查询结果保存cos路径
                     * @param _storeLocation 查询结果保存cos路径
                     * 
                     */
                    void SetStoreLocation(const std::string& _storeLocation);

                    /**
                     * 判断参数 StoreLocation 是否已赋值
                     * @return StoreLocation 是否已赋值
                     * 
                     */
                    bool StoreLocationHasBeenSet() const;

                    /**
                     * 获取是否启用高级设置：0-否，1-是
                     * @return Enable 是否启用高级设置：0-否，1-是
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置是否启用高级设置：0-否，1-是
                     * @param _enable 是否启用高级设置：0-否，1-是
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * 查询结果保存cos路径
                     */
                    std::string m_storeLocation;
                    bool m_storeLocationHasBeenSet;

                    /**
                     * 是否启用高级设置：0-否，1-是
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYADVANCEDSTORELOCATIONREQUEST_H_
