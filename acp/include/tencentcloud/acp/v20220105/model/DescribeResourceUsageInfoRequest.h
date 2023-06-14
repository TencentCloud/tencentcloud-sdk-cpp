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

#ifndef TENCENTCLOUD_ACP_V20220105_MODEL_DESCRIBERESOURCEUSAGEINFOREQUEST_H_
#define TENCENTCLOUD_ACP_V20220105_MODEL_DESCRIBERESOURCEUSAGEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Acp
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * DescribeResourceUsageInfo请求参数结构体
                */
                class DescribeResourceUsageInfoRequest : public AbstractModel
                {
                public:
                    DescribeResourceUsageInfoRequest();
                    ~DescribeResourceUsageInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源计费项名称(为空时，则根据Source，TaskType和Platform进行查询)
                     * @return PriceName 资源计费项名称(为空时，则根据Source，TaskType和Platform进行查询)
                     * 
                     */
                    std::string GetPriceName() const;

                    /**
                     * 设置资源计费项名称(为空时，则根据Source，TaskType和Platform进行查询)
                     * @param _priceName 资源计费项名称(为空时，则根据Source，TaskType和Platform进行查询)
                     * 
                     */
                    void SetPriceName(const std::string& _priceName);

                    /**
                     * 判断参数 PriceName 是否已赋值
                     * @return PriceName 是否已赋值
                     * 
                     */
                    bool PriceNameHasBeenSet() const;

                    /**
                     * 获取任务类型, 0:基础版, 1:专家版
                     * @return TaskType 任务类型, 0:基础版, 1:专家版
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置任务类型, 0:基础版, 1:专家版
                     * @param _taskType 任务类型, 0:基础版, 1:专家版
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取应用平台, 0:android
                     * @return Platform 应用平台, 0:android
                     * 
                     */
                    int64_t GetPlatform() const;

                    /**
                     * 设置应用平台, 0:android
                     * @param _platform 应用平台, 0:android
                     * 
                     */
                    void SetPlatform(const int64_t& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取任务来源, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android), 3:app漏洞扫描;
                     * @return Source 任务来源, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android), 3:app漏洞扫描;
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置任务来源, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android), 3:app漏洞扫描;
                     * @param _source 任务来源, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android), 3:app漏洞扫描;
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                private:

                    /**
                     * 资源计费项名称(为空时，则根据Source，TaskType和Platform进行查询)
                     */
                    std::string m_priceName;
                    bool m_priceNameHasBeenSet;

                    /**
                     * 任务类型, 0:基础版, 1:专家版
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 应用平台, 0:android
                     */
                    int64_t m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 任务来源, 0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android), 3:app漏洞扫描;
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACP_V20220105_MODEL_DESCRIBERESOURCEUSAGEINFOREQUEST_H_
