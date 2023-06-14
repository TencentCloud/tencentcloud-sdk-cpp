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

#ifndef TENCENTCLOUD_MMPS_V20200710_MODEL_RESOURCEUSAGEINFODATA_H_
#define TENCENTCLOUD_MMPS_V20200710_MODEL_RESOURCEUSAGEINFODATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mmps
    {
        namespace V20200710
        {
            namespace Model
            {
                /**
                * 翼扬安全资源使用情况
                */
                class ResourceUsageInfoData : public AbstractModel
                {
                public:
                    ResourceUsageInfoData();
                    ~ResourceUsageInfoData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源名称, 具体名称请查看产品配置
                     * @return ResourceName 资源名称, 具体名称请查看产品配置
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称, 具体名称请查看产品配置
                     * @param _resourceName 资源名称, 具体名称请查看产品配置
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取资源总数
                     * @return Total 资源总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置资源总数
                     * @param _total 资源总数
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取资源未使用次数
                     * @return UnusedCount 资源未使用次数
                     * 
                     */
                    int64_t GetUnusedCount() const;

                    /**
                     * 设置资源未使用次数
                     * @param _unusedCount 资源未使用次数
                     * 
                     */
                    void SetUnusedCount(const int64_t& _unusedCount);

                    /**
                     * 判断参数 UnusedCount 是否已赋值
                     * @return UnusedCount 是否已赋值
                     * 
                     */
                    bool UnusedCountHasBeenSet() const;

                private:

                    /**
                     * 资源名称, 具体名称请查看产品配置
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 资源总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 资源未使用次数
                     */
                    int64_t m_unusedCount;
                    bool m_unusedCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MMPS_V20200710_MODEL_RESOURCEUSAGEINFODATA_H_
