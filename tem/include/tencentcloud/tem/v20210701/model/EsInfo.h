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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_ESINFO_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_ESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 弹性伸缩配置
                */
                class EsInfo : public AbstractModel
                {
                public:
                    EsInfo();
                    ~EsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最小实例数
                     * @return MinAliveInstances 最小实例数
                     * 
                     */
                    int64_t GetMinAliveInstances() const;

                    /**
                     * 设置最小实例数
                     * @param _minAliveInstances 最小实例数
                     * 
                     */
                    void SetMinAliveInstances(const int64_t& _minAliveInstances);

                    /**
                     * 判断参数 MinAliveInstances 是否已赋值
                     * @return MinAliveInstances 是否已赋值
                     * 
                     */
                    bool MinAliveInstancesHasBeenSet() const;

                    /**
                     * 获取最大实例数
                     * @return MaxAliveInstances 最大实例数
                     * 
                     */
                    int64_t GetMaxAliveInstances() const;

                    /**
                     * 设置最大实例数
                     * @param _maxAliveInstances 最大实例数
                     * 
                     */
                    void SetMaxAliveInstances(const int64_t& _maxAliveInstances);

                    /**
                     * 判断参数 MaxAliveInstances 是否已赋值
                     * @return MaxAliveInstances 是否已赋值
                     * 
                     */
                    bool MaxAliveInstancesHasBeenSet() const;

                    /**
                     * 获取弹性策略,1:cpu，2:内存
                     * @return EsStrategy 弹性策略,1:cpu，2:内存
                     * 
                     */
                    int64_t GetEsStrategy() const;

                    /**
                     * 设置弹性策略,1:cpu，2:内存
                     * @param _esStrategy 弹性策略,1:cpu，2:内存
                     * 
                     */
                    void SetEsStrategy(const int64_t& _esStrategy);

                    /**
                     * 判断参数 EsStrategy 是否已赋值
                     * @return EsStrategy 是否已赋值
                     * 
                     */
                    bool EsStrategyHasBeenSet() const;

                    /**
                     * 获取弹性扩缩容条件值
                     * @return Threshold 弹性扩缩容条件值
                     * 
                     */
                    uint64_t GetThreshold() const;

                    /**
                     * 设置弹性扩缩容条件值
                     * @param _threshold 弹性扩缩容条件值
                     * 
                     */
                    void SetThreshold(const uint64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取版本Id
                     * @return VersionId 版本Id
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置版本Id
                     * @param _versionId 版本Id
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                private:

                    /**
                     * 最小实例数
                     */
                    int64_t m_minAliveInstances;
                    bool m_minAliveInstancesHasBeenSet;

                    /**
                     * 最大实例数
                     */
                    int64_t m_maxAliveInstances;
                    bool m_maxAliveInstancesHasBeenSet;

                    /**
                     * 弹性策略,1:cpu，2:内存
                     */
                    int64_t m_esStrategy;
                    bool m_esStrategyHasBeenSet;

                    /**
                     * 弹性扩缩容条件值
                     */
                    uint64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * 版本Id
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_ESINFO_H_
