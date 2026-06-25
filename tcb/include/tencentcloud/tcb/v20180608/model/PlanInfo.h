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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_PLANINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_PLANINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 套餐信息
                */
                class PlanInfo : public AbstractModel
                {
                public:
                    PlanInfo();
                    ~PlanInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>套餐标识</p>
                     * @return PackageId <p>套餐标识</p>
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置<p>套餐标识</p>
                     * @param _packageId <p>套餐标识</p>
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取<p>套餐中文名称</p>
                     * @return PackageTitle <p>套餐中文名称</p>
                     * 
                     */
                    std::string GetPackageTitle() const;

                    /**
                     * 设置<p>套餐中文名称</p>
                     * @param _packageTitle <p>套餐中文名称</p>
                     * 
                     */
                    void SetPackageTitle(const std::string& _packageTitle);

                    /**
                     * 判断参数 PackageTitle 是否已赋值
                     * @return PackageTitle 是否已赋值
                     * 
                     */
                    bool PackageTitleHasBeenSet() const;

                    /**
                     * 获取<p>套餐描述</p>
                     * @return PackageDescription <p>套餐描述</p>
                     * 
                     */
                    std::string GetPackageDescription() const;

                    /**
                     * 设置<p>套餐描述</p>
                     * @param _packageDescription <p>套餐描述</p>
                     * 
                     */
                    void SetPackageDescription(const std::string& _packageDescription);

                    /**
                     * 判断参数 PackageDescription 是否已赋值
                     * @return PackageDescription 是否已赋值
                     * 
                     */
                    bool PackageDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>单位原价</p>
                     * @return UnitPrice <p>单位原价</p>
                     * 
                     */
                    std::string GetUnitPrice() const;

                    /**
                     * 设置<p>单位原价</p>
                     * @param _unitPrice <p>单位原价</p>
                     * 
                     */
                    void SetUnitPrice(const std::string& _unitPrice);

                    /**
                     * 判断参数 UnitPrice 是否已赋值
                     * @return UnitPrice 是否已赋值
                     * 
                     */
                    bool UnitPriceHasBeenSet() const;

                    /**
                     * 获取<p>套餐类型</p>
                     * @return PackageType <p>套餐类型</p>
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置<p>套餐类型</p>
                     * @param _packageType <p>套餐类型</p>
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取<p>json格式化用户资源限制</p>
                     * @return ResourceLimit <p>json格式化用户资源限制</p>
                     * 
                     */
                    std::string GetResourceLimit() const;

                    /**
                     * 设置<p>json格式化用户资源限制</p>
                     * @param _resourceLimit <p>json格式化用户资源限制</p>
                     * 
                     */
                    void SetResourceLimit(const std::string& _resourceLimit);

                    /**
                     * 判断参数 ResourceLimit 是否已赋值
                     * @return ResourceLimit 是否已赋值
                     * 
                     */
                    bool ResourceLimitHasBeenSet() const;

                private:

                    /**
                     * <p>套餐标识</p>
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * <p>套餐中文名称</p>
                     */
                    std::string m_packageTitle;
                    bool m_packageTitleHasBeenSet;

                    /**
                     * <p>套餐描述</p>
                     */
                    std::string m_packageDescription;
                    bool m_packageDescriptionHasBeenSet;

                    /**
                     * <p>单位原价</p>
                     */
                    std::string m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * <p>套餐类型</p>
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * <p>json格式化用户资源限制</p>
                     */
                    std::string m_resourceLimit;
                    bool m_resourceLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_PLANINFO_H_
