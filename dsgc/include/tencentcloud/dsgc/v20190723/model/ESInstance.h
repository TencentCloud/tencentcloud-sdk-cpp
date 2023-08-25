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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_ESINSTANCE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_ESINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 创建评估任务的ES详情
                */
                class ESInstance : public AbstractModel
                {
                public:
                    ESInstance();
                    ~ESInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据源id
                     * @return DataSourceId 数据源id
                     * 
                     */
                    std::string GetDataSourceId() const;

                    /**
                     * 设置数据源id
                     * @param _dataSourceId 数据源id
                     * 
                     */
                    void SetDataSourceId(const std::string& _dataSourceId);

                    /**
                     * 判断参数 DataSourceId 是否已赋值
                     * @return DataSourceId 是否已赋值
                     * 
                     */
                    bool DataSourceIdHasBeenSet() const;

                    /**
                     * 获取数据源类型
                     * @return DataSourceType 数据源类型
                     * 
                     */
                    std::string GetDataSourceType() const;

                    /**
                     * 设置数据源类型
                     * @param _dataSourceType 数据源类型
                     * 
                     */
                    void SetDataSourceType(const std::string& _dataSourceType);

                    /**
                     * 判断参数 DataSourceType 是否已赋值
                     * @return DataSourceType 是否已赋值
                     * 
                     */
                    bool DataSourceTypeHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return ResourceRegion 地域
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置地域
                     * @param _resourceRegion 地域
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取扫描任务ID
                     * @return DiscoveryTaskId 扫描任务ID
                     * 
                     */
                    int64_t GetDiscoveryTaskId() const;

                    /**
                     * 设置扫描任务ID
                     * @param _discoveryTaskId 扫描任务ID
                     * 
                     */
                    void SetDiscoveryTaskId(const int64_t& _discoveryTaskId);

                    /**
                     * 判断参数 DiscoveryTaskId 是否已赋值
                     * @return DiscoveryTaskId 是否已赋值
                     * 
                     */
                    bool DiscoveryTaskIdHasBeenSet() const;

                    /**
                     * 获取扫描任务实例ID
                     * @return DiscoveryTaskInstanceID 扫描任务实例ID
                     * 
                     */
                    int64_t GetDiscoveryTaskInstanceID() const;

                    /**
                     * 设置扫描任务实例ID
                     * @param _discoveryTaskInstanceID 扫描任务实例ID
                     * 
                     */
                    void SetDiscoveryTaskInstanceID(const int64_t& _discoveryTaskInstanceID);

                    /**
                     * 判断参数 DiscoveryTaskInstanceID 是否已赋值
                     * @return DiscoveryTaskInstanceID 是否已赋值
                     * 
                     */
                    bool DiscoveryTaskInstanceIDHasBeenSet() const;

                private:

                    /**
                     * 数据源id
                     */
                    std::string m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                    /**
                     * 数据源类型
                     */
                    std::string m_dataSourceType;
                    bool m_dataSourceTypeHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 扫描任务ID
                     */
                    int64_t m_discoveryTaskId;
                    bool m_discoveryTaskIdHasBeenSet;

                    /**
                     * 扫描任务实例ID
                     */
                    int64_t m_discoveryTaskInstanceID;
                    bool m_discoveryTaskInstanceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_ESINSTANCE_H_
