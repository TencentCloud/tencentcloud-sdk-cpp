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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEGENERALRESOURCEQUOTASREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEGENERALRESOURCEQUOTASREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeGeneralResourceQuotas请求参数结构体
                */
                class DescribeGeneralResourceQuotasRequest : public AbstractModel
                {
                public:
                    DescribeGeneralResourceQuotasRequest();
                    ~DescribeGeneralResourceQuotasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源名列表，可取值:
- GENERAL_BUNDLE_INSTANCE 通用型套餐实例
- STORAGE_BUNDLE_INSTANCE 存储型套餐实例 
- ENTERPRISE_BUNDLE_INSTANCE 企业型套餐实例 
- EXCLUSIVE_BUNDLE_INSTANCE 专属型套餐实例
- BEFAST_BUNDLE_INSTANCE 蜂驰型套餐实例
- STARTER_BUNDLE_INSTANCE 入门型套餐实例
- HK_EXCLUSIVE_BUNDLE_INSTANCE 中国香港专属型套餐实例
- CAREFREE_BUNDLE_INSTANCE 无忧型套餐实例
- USER_KEY_PAIR 密钥对
- SNAPSHOT 快照
- BLUEPRINT 自定义镜像
- FREE_BLUEPRINT 免费自定义镜像
- DATA_DISK 数据盘
                     * @return ResourceNames 资源名列表，可取值:
- GENERAL_BUNDLE_INSTANCE 通用型套餐实例
- STORAGE_BUNDLE_INSTANCE 存储型套餐实例 
- ENTERPRISE_BUNDLE_INSTANCE 企业型套餐实例 
- EXCLUSIVE_BUNDLE_INSTANCE 专属型套餐实例
- BEFAST_BUNDLE_INSTANCE 蜂驰型套餐实例
- STARTER_BUNDLE_INSTANCE 入门型套餐实例
- HK_EXCLUSIVE_BUNDLE_INSTANCE 中国香港专属型套餐实例
- CAREFREE_BUNDLE_INSTANCE 无忧型套餐实例
- USER_KEY_PAIR 密钥对
- SNAPSHOT 快照
- BLUEPRINT 自定义镜像
- FREE_BLUEPRINT 免费自定义镜像
- DATA_DISK 数据盘
                     * 
                     */
                    std::vector<std::string> GetResourceNames() const;

                    /**
                     * 设置资源名列表，可取值:
- GENERAL_BUNDLE_INSTANCE 通用型套餐实例
- STORAGE_BUNDLE_INSTANCE 存储型套餐实例 
- ENTERPRISE_BUNDLE_INSTANCE 企业型套餐实例 
- EXCLUSIVE_BUNDLE_INSTANCE 专属型套餐实例
- BEFAST_BUNDLE_INSTANCE 蜂驰型套餐实例
- STARTER_BUNDLE_INSTANCE 入门型套餐实例
- HK_EXCLUSIVE_BUNDLE_INSTANCE 中国香港专属型套餐实例
- CAREFREE_BUNDLE_INSTANCE 无忧型套餐实例
- USER_KEY_PAIR 密钥对
- SNAPSHOT 快照
- BLUEPRINT 自定义镜像
- FREE_BLUEPRINT 免费自定义镜像
- DATA_DISK 数据盘
                     * @param _resourceNames 资源名列表，可取值:
- GENERAL_BUNDLE_INSTANCE 通用型套餐实例
- STORAGE_BUNDLE_INSTANCE 存储型套餐实例 
- ENTERPRISE_BUNDLE_INSTANCE 企业型套餐实例 
- EXCLUSIVE_BUNDLE_INSTANCE 专属型套餐实例
- BEFAST_BUNDLE_INSTANCE 蜂驰型套餐实例
- STARTER_BUNDLE_INSTANCE 入门型套餐实例
- HK_EXCLUSIVE_BUNDLE_INSTANCE 中国香港专属型套餐实例
- CAREFREE_BUNDLE_INSTANCE 无忧型套餐实例
- USER_KEY_PAIR 密钥对
- SNAPSHOT 快照
- BLUEPRINT 自定义镜像
- FREE_BLUEPRINT 免费自定义镜像
- DATA_DISK 数据盘
                     * 
                     */
                    void SetResourceNames(const std::vector<std::string>& _resourceNames);

                    /**
                     * 判断参数 ResourceNames 是否已赋值
                     * @return ResourceNames 是否已赋值
                     * 
                     */
                    bool ResourceNamesHasBeenSet() const;

                private:

                    /**
                     * 资源名列表，可取值:
- GENERAL_BUNDLE_INSTANCE 通用型套餐实例
- STORAGE_BUNDLE_INSTANCE 存储型套餐实例 
- ENTERPRISE_BUNDLE_INSTANCE 企业型套餐实例 
- EXCLUSIVE_BUNDLE_INSTANCE 专属型套餐实例
- BEFAST_BUNDLE_INSTANCE 蜂驰型套餐实例
- STARTER_BUNDLE_INSTANCE 入门型套餐实例
- HK_EXCLUSIVE_BUNDLE_INSTANCE 中国香港专属型套餐实例
- CAREFREE_BUNDLE_INSTANCE 无忧型套餐实例
- USER_KEY_PAIR 密钥对
- SNAPSHOT 快照
- BLUEPRINT 自定义镜像
- FREE_BLUEPRINT 免费自定义镜像
- DATA_DISK 数据盘
                     */
                    std::vector<std::string> m_resourceNames;
                    bool m_resourceNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEGENERALRESOURCEQUOTASREQUEST_H_
