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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_OVERVIEWBASICRESOURCEUSAGE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_OVERVIEWBASICRESOURCEUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * TSF基本资源信息概览
                */
                class OverviewBasicResourceUsage : public AbstractModel
                {
                public:
                    OverviewBasicResourceUsage();
                    ~OverviewBasicResourceUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用总数
                     * @return ApplicationCount 应用总数
                     * 
                     */
                    int64_t GetApplicationCount() const;

                    /**
                     * 设置应用总数
                     * @param _applicationCount 应用总数
                     * 
                     */
                    void SetApplicationCount(const int64_t& _applicationCount);

                    /**
                     * 判断参数 ApplicationCount 是否已赋值
                     * @return ApplicationCount 是否已赋值
                     * 
                     */
                    bool ApplicationCountHasBeenSet() const;

                    /**
                     * 获取命名空间总数
                     * @return NamespaceCount 命名空间总数
                     * 
                     */
                    int64_t GetNamespaceCount() const;

                    /**
                     * 设置命名空间总数
                     * @param _namespaceCount 命名空间总数
                     * 
                     */
                    void SetNamespaceCount(const int64_t& _namespaceCount);

                    /**
                     * 判断参数 NamespaceCount 是否已赋值
                     * @return NamespaceCount 是否已赋值
                     * 
                     */
                    bool NamespaceCountHasBeenSet() const;

                    /**
                     * 获取部署组个数
                     * @return GroupCount 部署组个数
                     * 
                     */
                    int64_t GetGroupCount() const;

                    /**
                     * 设置部署组个数
                     * @param _groupCount 部署组个数
                     * 
                     */
                    void SetGroupCount(const int64_t& _groupCount);

                    /**
                     * 判断参数 GroupCount 是否已赋值
                     * @return GroupCount 是否已赋值
                     * 
                     */
                    bool GroupCountHasBeenSet() const;

                    /**
                     * 获取程序包存储空间用量，单位字节
                     * @return PackageSpaceUsed 程序包存储空间用量，单位字节
                     * 
                     */
                    int64_t GetPackageSpaceUsed() const;

                    /**
                     * 设置程序包存储空间用量，单位字节
                     * @param _packageSpaceUsed 程序包存储空间用量，单位字节
                     * 
                     */
                    void SetPackageSpaceUsed(const int64_t& _packageSpaceUsed);

                    /**
                     * 判断参数 PackageSpaceUsed 是否已赋值
                     * @return PackageSpaceUsed 是否已赋值
                     * 
                     */
                    bool PackageSpaceUsedHasBeenSet() const;

                    /**
                     * 获取已注册实例数
                     * @return ConsulInstanceCount 已注册实例数
                     * 
                     */
                    int64_t GetConsulInstanceCount() const;

                    /**
                     * 设置已注册实例数
                     * @param _consulInstanceCount 已注册实例数
                     * 
                     */
                    void SetConsulInstanceCount(const int64_t& _consulInstanceCount);

                    /**
                     * 判断参数 ConsulInstanceCount 是否已赋值
                     * @return ConsulInstanceCount 是否已赋值
                     * 
                     */
                    bool ConsulInstanceCountHasBeenSet() const;

                private:

                    /**
                     * 应用总数
                     */
                    int64_t m_applicationCount;
                    bool m_applicationCountHasBeenSet;

                    /**
                     * 命名空间总数
                     */
                    int64_t m_namespaceCount;
                    bool m_namespaceCountHasBeenSet;

                    /**
                     * 部署组个数
                     */
                    int64_t m_groupCount;
                    bool m_groupCountHasBeenSet;

                    /**
                     * 程序包存储空间用量，单位字节
                     */
                    int64_t m_packageSpaceUsed;
                    bool m_packageSpaceUsedHasBeenSet;

                    /**
                     * 已注册实例数
                     */
                    int64_t m_consulInstanceCount;
                    bool m_consulInstanceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_OVERVIEWBASICRESOURCEUSAGE_H_
