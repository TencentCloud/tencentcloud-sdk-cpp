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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_STANDARDENGINERESOURCEGROUPCONFIGINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_STANDARDENGINERESOURCEGROUPCONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/EngineResourceGroupConfigPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 标准引擎资源组，配置相关信息
                */
                class StandardEngineResourceGroupConfigInfo : public AbstractModel
                {
                public:
                    StandardEngineResourceGroupConfigInfo();
                    ~StandardEngineResourceGroupConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取引擎资源组 ID
                     * @return ResourceGroupId 引擎资源组 ID
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置引擎资源组 ID
                     * @param _resourceGroupId 引擎资源组 ID
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取引擎ID
                     * @return DataEngineId 引擎ID
                     * 
                     */
                    std::string GetDataEngineId() const;

                    /**
                     * 设置引擎ID
                     * @param _dataEngineId 引擎ID
                     * 
                     */
                    void SetDataEngineId(const std::string& _dataEngineId);

                    /**
                     * 判断参数 DataEngineId 是否已赋值
                     * @return DataEngineId 是否已赋值
                     * 
                     */
                    bool DataEngineIdHasBeenSet() const;

                    /**
                     * 获取资源组静态参数，需要重启资源组生效
                     * @return StaticConfigPairs 资源组静态参数，需要重启资源组生效
                     * 
                     */
                    std::vector<EngineResourceGroupConfigPair> GetStaticConfigPairs() const;

                    /**
                     * 设置资源组静态参数，需要重启资源组生效
                     * @param _staticConfigPairs 资源组静态参数，需要重启资源组生效
                     * 
                     */
                    void SetStaticConfigPairs(const std::vector<EngineResourceGroupConfigPair>& _staticConfigPairs);

                    /**
                     * 判断参数 StaticConfigPairs 是否已赋值
                     * @return StaticConfigPairs 是否已赋值
                     * 
                     */
                    bool StaticConfigPairsHasBeenSet() const;

                    /**
                     * 获取资源组动态参数，下一个任务生效。
                     * @return DynamicConfigPairs 资源组动态参数，下一个任务生效。
                     * 
                     */
                    std::vector<EngineResourceGroupConfigPair> GetDynamicConfigPairs() const;

                    /**
                     * 设置资源组动态参数，下一个任务生效。
                     * @param _dynamicConfigPairs 资源组动态参数，下一个任务生效。
                     * 
                     */
                    void SetDynamicConfigPairs(const std::vector<EngineResourceGroupConfigPair>& _dynamicConfigPairs);

                    /**
                     * 判断参数 DynamicConfigPairs 是否已赋值
                     * @return DynamicConfigPairs 是否已赋值
                     * 
                     */
                    bool DynamicConfigPairsHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 引擎资源组 ID
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 引擎ID
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * 资源组静态参数，需要重启资源组生效
                     */
                    std::vector<EngineResourceGroupConfigPair> m_staticConfigPairs;
                    bool m_staticConfigPairsHasBeenSet;

                    /**
                     * 资源组动态参数，下一个任务生效。
                     */
                    std::vector<EngineResourceGroupConfigPair> m_dynamicConfigPairs;
                    bool m_dynamicConfigPairsHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_STANDARDENGINERESOURCEGROUPCONFIGINFO_H_
