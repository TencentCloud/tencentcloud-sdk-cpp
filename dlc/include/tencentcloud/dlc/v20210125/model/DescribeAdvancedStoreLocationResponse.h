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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEADVANCEDSTORELOCATIONRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEADVANCEDSTORELOCATIONRESPONSE_H_

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
                * DescribeAdvancedStoreLocation返回参数结构体
                */
                class DescribeAdvancedStoreLocationResponse : public AbstractModel
                {
                public:
                    DescribeAdvancedStoreLocationResponse();
                    ~DescribeAdvancedStoreLocationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否启用高级设置：0-否，1-是
                     * @return Enable 是否启用高级设置：0-否，1-是
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取查询结果保存cos路径
                     * @return StoreLocation 查询结果保存cos路径
                     * 
                     */
                    std::string GetStoreLocation() const;

                    /**
                     * 判断参数 StoreLocation 是否已赋值
                     * @return StoreLocation 是否已赋值
                     * 
                     */
                    bool StoreLocationHasBeenSet() const;

                    /**
                     * 获取是否有托管存储权限
                     * @return HasLakeFs 是否有托管存储权限
                     * 
                     */
                    bool GetHasLakeFs() const;

                    /**
                     * 判断参数 HasLakeFs 是否已赋值
                     * @return HasLakeFs 是否已赋值
                     * 
                     */
                    bool HasLakeFsHasBeenSet() const;

                    /**
                     * 获取托管存储状态，HasLakeFs等于true时，该值才有意义
                     * @return LakeFsStatus 托管存储状态，HasLakeFs等于true时，该值才有意义
                     * 
                     */
                    std::string GetLakeFsStatus() const;

                    /**
                     * 判断参数 LakeFsStatus 是否已赋值
                     * @return LakeFsStatus 是否已赋值
                     * 
                     */
                    bool LakeFsStatusHasBeenSet() const;

                    /**
                     * 获取托管存储桶类型
                     * @return BucketType 托管存储桶类型
                     * 
                     */
                    std::string GetBucketType() const;

                    /**
                     * 判断参数 BucketType 是否已赋值
                     * @return BucketType 是否已赋值
                     * 
                     */
                    bool BucketTypeHasBeenSet() const;

                private:

                    /**
                     * 是否启用高级设置：0-否，1-是
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 查询结果保存cos路径
                     */
                    std::string m_storeLocation;
                    bool m_storeLocationHasBeenSet;

                    /**
                     * 是否有托管存储权限
                     */
                    bool m_hasLakeFs;
                    bool m_hasLakeFsHasBeenSet;

                    /**
                     * 托管存储状态，HasLakeFs等于true时，该值才有意义
                     */
                    std::string m_lakeFsStatus;
                    bool m_lakeFsStatusHasBeenSet;

                    /**
                     * 托管存储桶类型
                     */
                    std::string m_bucketType;
                    bool m_bucketTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEADVANCEDSTORELOCATIONRESPONSE_H_
